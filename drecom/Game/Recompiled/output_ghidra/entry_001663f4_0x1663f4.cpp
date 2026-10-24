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

// Function: entry_001663f4
// Address: 0x1663f4 - 0x166444
void entry_001663f4_0x1663f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001663f4_0x1663f4");
#endif

    switch (ctx->pc) {
        case 0x16641cu: goto label_16641c;
        default: break;
    }

    ctx->pc = 0x1663f4u;

    // 0x1663f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1663f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1663f8: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x1663f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x1663fc: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x1663fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x166400: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x166400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x166404: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x166404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x166408: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x166408u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x16640c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x16640cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x166410: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x166410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x166414: 0xc040616  jal         func_101858
    ctx->pc = 0x166414u;
    SET_GPR_U32(ctx, 31, 0x16641Cu);
    ctx->pc = 0x101858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101858u, 0x166414u, 0x16641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16641Cu;
label_16641c:
    // 0x16641c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166420: 0x244203e0  addiu       $v0, $v0, 0x3E0
    ctx->pc = 0x166420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
    // 0x166424: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x166424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x166428: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x166428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x16642c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x16642cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x166430: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x166430u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x166434: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x166434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x166438: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x166438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x16643c: 0xc0406b0  jal         func_101AC0
    ctx->pc = 0x16643Cu;
    SET_GPR_U32(ctx, 31, 0x166444u);
    ctx->pc = 0x101AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101AC0u, 0x16643Cu, 0x166444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166444u;
}
