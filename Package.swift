// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterBatch",
    products: [
        .library(name: "TreeSitterBatch", targets: ["TreeSitterBatch"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterBatch",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterBatchTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterBatch",
            ],
            path: "bindings/swift/TreeSitterBatchTests"
        )
    ],
    cLanguageStandard: .c11
)
