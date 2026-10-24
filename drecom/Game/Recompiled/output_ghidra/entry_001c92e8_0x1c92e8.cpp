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

// Function: entry_001c92e8
// Address: 0x1c92e8 - 0x1c930c
void entry_001c92e8_0x1c92e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c92e8_0x1c92e8");
#endif

    switch (ctx->pc) {
        case 0x1c92f8u: goto label_1c92f8;
        default: break;
    }

    ctx->pc = 0x1c92e8u;

    // 0x1c92e8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1c92e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1c92ec: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1c92ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x1c92f0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1C92F0u;
    SET_GPR_U32(ctx, 31, 0x1C92F8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1C92F0u, 0x1C92F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92F8u;
label_1c92f8:
    // 0x1c92f8: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1c92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x1c92fc: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x1c92fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x1c9300: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1c9300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1c9304: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1C9304u;
    SET_GPR_U32(ctx, 31, 0x1C930Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1C9304u, 0x1C930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C930Cu;
}
