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

// Function: entry_0014ea44
// Address: 0x14ea44 - 0x14ea88
void entry_0014ea44_0x14ea44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ea44_0x14ea44");
#endif

    switch (ctx->pc) {
        case 0x14ea70u: goto label_14ea70;
        default: break;
    }

    ctx->pc = 0x14ea44u;

    // 0x14ea44: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14ea48: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14ea48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14ea4c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14EA4Cu;
    {
        const bool branch_taken_0x14ea4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea4c) {
            ctx->pc = 0x14EA88u;
            return;
        }
    }
    ctx->pc = 0x14EA54u;
    // 0x14ea54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14ea54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14ea58: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14ea5c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14ea5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ea60: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x14ea60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14ea64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14ea64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ea68: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EA68u;
    SET_GPR_U32(ctx, 31, 0x14EA70u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EA68u, 0x14EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA70u;
label_14ea70:
    // 0x14ea70: 0x860213c0  lh          $v0, 0x13C0($s0)
    ctx->pc = 0x14ea70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14ea74: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14ea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ea78: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14ea78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ea7c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x14ea7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14ea80: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EA80u;
    SET_GPR_U32(ctx, 31, 0x14EA88u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EA80u, 0x14EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA88u;
}
