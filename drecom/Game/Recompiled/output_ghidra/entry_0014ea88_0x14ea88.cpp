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

// Function: entry_0014ea88
// Address: 0x14ea88 - 0x14eae0
void entry_0014ea88_0x14ea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ea88_0x14ea88");
#endif

    switch (ctx->pc) {
        case 0x14eac8u: goto label_14eac8;
        default: break;
    }

    ctx->pc = 0x14ea88u;

    // 0x14ea88: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14ea8c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14ea8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14ea90: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x14EA90u;
    {
        const bool branch_taken_0x14ea90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea90) {
            ctx->pc = 0x14EAE0u;
            return;
        }
    }
    ctx->pc = 0x14EA98u;
    // 0x14ea98: 0x920313f8  lbu         $v1, 0x13F8($s0)
    ctx->pc = 0x14ea98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5112)));
    // 0x14ea9c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14ea9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14eaa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14eaa4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14EAA4u;
    {
        const bool branch_taken_0x14eaa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14eaa4) {
            ctx->pc = 0x14EAE0u;
            return;
        }
    }
    ctx->pc = 0x14EAACu;
    // 0x14eaac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14eab0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14eab4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14eab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14eab8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14eab8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14eabc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14eabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14eac0: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EAC0u;
    SET_GPR_U32(ctx, 31, 0x14EAC8u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EAC0u, 0x14EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAC8u;
label_14eac8:
    // 0x14eac8: 0x860213c0  lh          $v0, 0x13C0($s0)
    ctx->pc = 0x14eac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x14eacc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14eaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ead0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14ead0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ead4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14ead4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14ead8: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EAD8u;
    SET_GPR_U32(ctx, 31, 0x14EAE0u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EAD8u, 0x14EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAE0u;
}
