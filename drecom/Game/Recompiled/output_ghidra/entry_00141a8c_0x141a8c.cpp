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

// Function: entry_00141a8c
// Address: 0x141a8c - 0x141ac8
void entry_00141a8c_0x141a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141a8c_0x141a8c");
#endif

    switch (ctx->pc) {
        case 0x141a94u: goto label_141a94;
        case 0x141ab8u: goto label_141ab8;
        default: break;
    }

    ctx->pc = 0x141a8cu;

    // 0x141a8c: 0xc062e8c  jal         func_18BA30
    ctx->pc = 0x141A8Cu;
    SET_GPR_U32(ctx, 31, 0x141A94u);
    ctx->pc = 0x18BA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BA30u, 0x141A8Cu, 0x141A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A94u;
label_141a94:
    // 0x141a94: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x141a94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141a98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x141a98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141a9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x141a9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141aa0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x141aa0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141aa4: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x141aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x141aa8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x141aa8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141aac: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x141aacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x141ab0: 0xc059190  jal         func_164640
    ctx->pc = 0x141AB0u;
    SET_GPR_U32(ctx, 31, 0x141AB8u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x141AB0u, 0x141AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141AB8u;
label_141ab8:
    // 0x141ab8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x141ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141abc: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x141abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x141ac0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x141ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x141ac4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x141ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x141ac8u;
}
