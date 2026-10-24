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

// Function: entry_0020e3b0
// Address: 0x20e3b0 - 0x20e3e8
void entry_0020e3b0_0x20e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e3b0_0x20e3b0");
#endif

    switch (ctx->pc) {
        case 0x20e3d8u: goto label_20e3d8;
        default: break;
    }

    ctx->pc = 0x20e3b0u;

    // 0x20e3b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20e3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20e3b4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x20e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20e3b8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x20e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x20e3bc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20e3c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20e3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20e3c4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x20e3c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x20e3c8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20e3cc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20e3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20e3d0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20E3D0u;
    SET_GPR_U32(ctx, 31, 0x20E3D8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20E3D0u, 0x20E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3D8u;
label_20e3d8:
    // 0x20e3d8: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x20e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x20e3dc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20e3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20e3e0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20E3E0u;
    SET_GPR_U32(ctx, 31, 0x20E3E8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20E3E0u, 0x20E3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3E8u;
}
