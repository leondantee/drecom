#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0029b3d8
// Address: 0x29b3d8 - 0x29b3e0
void entry_0029b3d8_0x29b3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b3d8_0x29b3d8");
#endif

    ctx->pc = 0x29b3d8u;

    // 0x29b3d8: 0x36220080  ori         $v0, $s1, 0x80
    ctx->pc = 0x29b3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)128);
    // 0x29b3dc: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x29b3dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x29b3e0u;
}
