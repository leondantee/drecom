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

// Function: entry_002e4698
// Address: 0x2e4698 - 0x2e4704
void entry_002e4698_0x2e4698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4698_0x2e4698");
#endif

    ctx->pc = 0x2e4698u;

    // 0x2e4698: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2e4698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e469c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e469cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e46a0: 0x24428d20  addiu       $v0, $v0, -0x72E0
    ctx->pc = 0x2e46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937888));
    // 0x2e46a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e46a8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e46a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e46ac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e46acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e46b0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e46b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e46b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e46b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e46b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e46b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e46bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e46bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e46c0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2e46c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2e46c4: 0x3444000b  ori         $a0, $v0, 0xB
    ctx->pc = 0x2e46c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11);
    // 0x2e46c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e46cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e46ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e46d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e46d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e46d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e46d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e46d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e46d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e46dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e46dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e46e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e46e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e46e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e46e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e46e8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2e46e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2e46ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e46ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e46f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2e46f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e46f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2e46f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e46f8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2e46f8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e46fc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2E46FCu;
    SET_GPR_U32(ctx, 31, 0x2E4704u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2E46FCu, 0x2E4704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4704u;
}
