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

// Function: entry_001d1414
// Address: 0x1d1414 - 0x1d1458
void entry_001d1414_0x1d1414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1414_0x1d1414");
#endif

    switch (ctx->pc) {
        case 0x1d1434u: goto label_1d1434;
        default: break;
    }

    ctx->pc = 0x1d1414u;

    // 0x1d1414: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1d1414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1d1418: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x1d1418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d141c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1420: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d1420u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d1424: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d1424u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d1428: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1d1428u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d142c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1D142Cu;
    SET_GPR_U32(ctx, 31, 0x1D1434u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1D142Cu, 0x1D1434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1434u;
label_1d1434:
    // 0x1d1434: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1438: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x1d1438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x1d143c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1440: 0x8c530064  lw          $s3, 0x64($v0)
    ctx->pc = 0x1d1440u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d1444: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1448: 0x266400b0  addiu       $a0, $s3, 0xB0
    ctx->pc = 0x1d1448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x1d144c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1d144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1d1450: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D1450u;
    SET_GPR_U32(ctx, 31, 0x1D1458u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D1458u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D1458u) { return; }
    ctx->pc = 0x1D1458u;
}
