target_sources(Bolt PRIVATE
    "ClientInstance.cpp"
        "Actor.cpp"
            "Player.cpp"
                "MinecraftGame.cpp"
                    "BlockSource.cpp"
                        "Packet.cpp"
                            "MinecraftUIRenderContext.cpp"
                                "LoopbackPacketSender.cpp"
)