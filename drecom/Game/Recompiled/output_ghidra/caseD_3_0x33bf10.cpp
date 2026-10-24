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

// Function: caseD_3
// Address: 0x33bf10 - 0x33bfac
void caseD_3_0x33bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x33bf10");
#endif

    switch (ctx->pc) {
        case 0x33bf18u: goto label_33bf18;
        case 0x33bf4cu: goto label_33bf4c;
        default: break;
    }

    ctx->pc = 0x33bf10u;

    // 0x33bf10: 0xc0cf63c  jal         func_33D8F0
    ctx->pc = 0x33BF10u;
    SET_GPR_U32(ctx, 31, 0x33BF18u);
    ctx->pc = 0x33D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D8F0u, 0x33BF10u, 0x33BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF18u;
label_33bf18:
    // 0x33bf18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33bf18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33bf1c: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x33bf1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x33bf20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33bf24: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x33bf24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x33bf28: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33bf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x33bf2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33bf2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33bf30: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33bf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x33bf34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33bf34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33bf38: 0x1c6000cc  bgtz        $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x33BF38u;
    {
        const bool branch_taken_0x33bf38 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x33bf38) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BF40u;
    // 0x33bf40: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x33bf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x33bf44: 0xc0cf6fc  jal         func_33DBF0
    ctx->pc = 0x33BF44u;
    SET_GPR_U32(ctx, 31, 0x33BF4Cu);
    ctx->pc = 0x33DBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DBF0u, 0x33BF44u, 0x33BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF4Cu;
label_33bf4c:
    // 0x33bf4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33bf4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33bf50: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x33bf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x33bf54: 0x590c0  sll         $s2, $a1, 3
    ctx->pc = 0x33bf54u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x33bf58: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x33bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x33bf5c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x33bf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33bf60: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x33bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x33bf64: 0x24839a40  addiu       $v1, $a0, -0x65C0
    ctx->pc = 0x33bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941248));
    // 0x33bf68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33bf6c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33bf6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33bf70: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x33bf70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x33bf74: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x33bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33bf78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33bf7c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x33bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x33bf80: 0x8e05013c  lw          $a1, 0x13C($s0)
    ctx->pc = 0x33bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33bf84: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x33bf84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33bf88: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x33bf88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x33bf8c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x33bf8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x33bf90: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x33bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x33bf94: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33BF94u;
    {
        const bool branch_taken_0x33bf94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33bf94) {
            ctx->pc = 0x33BFACu;
            return;
        }
    }
    ctx->pc = 0x33BF9Cu;
    // 0x33bf9c: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x33bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33bfa0: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x33bfa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33bfa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33bfa8: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x33bfa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x33bfacu;
}
