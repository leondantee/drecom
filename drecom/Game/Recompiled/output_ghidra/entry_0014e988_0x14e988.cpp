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

// Function: entry_0014e988
// Address: 0x14e988 - 0x14ea00
void entry_0014e988_0x14e988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e988_0x14e988");
#endif

    switch (ctx->pc) {
        case 0x14e9b4u: goto label_14e9b4;
        case 0x14e9ccu: goto label_14e9cc;
        case 0x14e9e8u: goto label_14e9e8;
        default: break;
    }

    ctx->pc = 0x14e988u;

    // 0x14e988: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14e988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e98c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14e98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14e990: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x14E990u;
    {
        const bool branch_taken_0x14e990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e990) {
            ctx->pc = 0x14EA00u;
            return;
        }
    }
    ctx->pc = 0x14E998u;
    // 0x14e998: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e99c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e9a0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14e9a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14e9a4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14e9a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14e9a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14e9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e9ac: 0xc096304  jal         func_258C10
    ctx->pc = 0x14E9ACu;
    SET_GPR_U32(ctx, 31, 0x14E9B4u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14E9ACu, 0x14E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9B4u;
label_14e9b4:
    // 0x14e9b4: 0x860213c0  lh          $v0, 0x13C0($s0)
    ctx->pc = 0x14e9b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14e9b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14e9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14e9bc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14e9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14e9c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14e9c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14e9c4: 0xc096348  jal         func_258D20
    ctx->pc = 0x14E9C4u;
    SET_GPR_U32(ctx, 31, 0x14E9CCu);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14E9C4u, 0x14E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9CCu;
label_14e9cc:
    // 0x14e9cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e9d0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e9d4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14e9d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14e9d8: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x14e9d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x14e9dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e9e0: 0xc096304  jal         func_258C10
    ctx->pc = 0x14E9E0u;
    SET_GPR_U32(ctx, 31, 0x14E9E8u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14E9E0u, 0x14E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9E8u;
label_14e9e8:
    // 0x14e9e8: 0x860213c0  lh          $v0, 0x13C0($s0)
    ctx->pc = 0x14e9e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14e9ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14e9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14e9f0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14e9f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14e9f4: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x14e9f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x14e9f8: 0xc096348  jal         func_258D20
    ctx->pc = 0x14E9F8u;
    SET_GPR_U32(ctx, 31, 0x14EA00u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14E9F8u, 0x14EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA00u;
}
