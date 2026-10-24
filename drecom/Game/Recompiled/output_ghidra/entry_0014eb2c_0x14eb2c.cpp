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

// Function: entry_0014eb2c
// Address: 0x14eb2c - 0x14eb94
void entry_0014eb2c_0x14eb2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eb2c_0x14eb2c");
#endif

    switch (ctx->pc) {
        case 0x14eb58u: goto label_14eb58;
        case 0x14eb68u: goto label_14eb68;
        case 0x14eb84u: goto label_14eb84;
        default: break;
    }

    ctx->pc = 0x14eb2cu;

    // 0x14eb2c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14eb30: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14eb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14eb34: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14EB34u;
    {
        const bool branch_taken_0x14eb34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb34) {
            ctx->pc = 0x14EB94u;
            return;
        }
    }
    ctx->pc = 0x14EB3Cu;
    // 0x14eb3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14eb40: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14eb44: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14eb44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14eb48: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14eb48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14eb4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14eb4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14eb50: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EB50u;
    SET_GPR_U32(ctx, 31, 0x14EB58u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EB50u, 0x14EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB58u;
label_14eb58:
    // 0x14eb58: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14eb58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14eb5c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14eb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14eb60: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EB60u;
    SET_GPR_U32(ctx, 31, 0x14EB68u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EB60u, 0x14EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB68u;
label_14eb68:
    // 0x14eb68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14eb6c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14eb70: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14eb70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14eb74: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x14eb74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x14eb78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14eb78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14eb7c: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EB7Cu;
    SET_GPR_U32(ctx, 31, 0x14EB84u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EB7Cu, 0x14EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB84u;
label_14eb84:
    // 0x14eb84: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x14eb84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x14eb88: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14eb8c: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EB8Cu;
    SET_GPR_U32(ctx, 31, 0x14EB94u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EB8Cu, 0x14EB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB94u;
}
