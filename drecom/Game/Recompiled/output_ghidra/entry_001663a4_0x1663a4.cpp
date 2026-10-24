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

// Function: entry_001663a4
// Address: 0x1663a4 - 0x1663f4
void entry_001663a4_0x1663a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001663a4_0x1663a4");
#endif

    switch (ctx->pc) {
        case 0x1663ccu: goto label_1663cc;
        default: break;
    }

    ctx->pc = 0x1663a4u;

    // 0x1663a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1663a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1663a8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1663a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1663ac: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x1663acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1663b0: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1663b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1663b4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x1663b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1663b8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1663b8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1663bc: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1663bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1663c0: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x1663c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1663c4: 0xc040616  jal         func_101858
    ctx->pc = 0x1663C4u;
    SET_GPR_U32(ctx, 31, 0x1663CCu);
    ctx->pc = 0x101858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101858u, 0x1663C4u, 0x1663CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663CCu;
label_1663cc:
    // 0x1663cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1663ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1663d0: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1663d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1663d4: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x1663d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1663d8: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1663d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1663dc: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x1663dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1663e0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1663e0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1663e4: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1663e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1663e8: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x1663e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1663ec: 0xc0406b0  jal         func_101AC0
    ctx->pc = 0x1663ECu;
    SET_GPR_U32(ctx, 31, 0x1663F4u);
    ctx->pc = 0x101AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101AC0u, 0x1663ECu, 0x1663F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663F4u;
}
