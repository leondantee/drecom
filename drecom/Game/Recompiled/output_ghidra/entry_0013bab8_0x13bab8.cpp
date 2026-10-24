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

// Function: entry_0013bab8
// Address: 0x13bab8 - 0x13bb68
void entry_0013bab8_0x13bab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bab8_0x13bab8");
#endif

    switch (ctx->pc) {
        case 0x13bad8u: goto label_13bad8;
        case 0x13baf0u: goto label_13baf0;
        default: break;
    }

    ctx->pc = 0x13bab8u;

    // 0x13bab8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x13bab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13babc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13babcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13bac0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x13bac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13bac4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13bac4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13bac8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x13bac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13bacc: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x13baccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13bad0: 0xc04f560  jal         func_13D580
    ctx->pc = 0x13BAD0u;
    SET_GPR_U32(ctx, 31, 0x13BAD8u);
    ctx->pc = 0x13D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D580u, 0x13BAD0u, 0x13BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAD8u;
label_13bad8:
    // 0x13bad8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x13bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13badc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x13badcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13bae0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13bae0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13bae4: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x13bae4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13bae8: 0xc04f588  jal         func_13D620
    ctx->pc = 0x13BAE8u;
    SET_GPR_U32(ctx, 31, 0x13BAF0u);
    ctx->pc = 0x13D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D620u, 0x13BAE8u, 0x13BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAF0u;
label_13baf0:
    // 0x13baf0: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x13baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x13baf4: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x13baf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x13baf8: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x13BAF8u;
    {
        const bool branch_taken_0x13baf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13baf8) {
            ctx->pc = 0x13BC18u;
            return;
        }
    }
    ctx->pc = 0x13BB00u;
    // 0x13bb00: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x13bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13bb04: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x13bb04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13bb08: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x13bb08u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x13bb0c: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x13bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13bb10: 0x28610031  slti        $at, $v1, 0x31
    ctx->pc = 0x13bb10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x13bb14: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x13BB14u;
    {
        const bool branch_taken_0x13bb14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb14) {
            ctx->pc = 0x13BB68u;
            return;
        }
    }
    ctx->pc = 0x13BB1Cu;
    // 0x13bb1c: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x13bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13bb20: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x13bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13bb24: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bb28: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x13bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13bb2c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x13bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13bb30: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13bb34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13bb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13bb38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bb38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bb3c: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x13bb3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13bb40: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x13bb40u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x13bb44: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x13bb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13bb48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bb48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bb4c: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x13bb4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x13bb50: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BB50u;
    {
        const bool branch_taken_0x13bb50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb50) {
            ctx->pc = 0x13BB68u;
            return;
        }
    }
    ctx->pc = 0x13BB58u;
    // 0x13bb58: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13bb5c: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x13bb5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13bb60: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x13bb60u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x13bb64: 0x0  nop
    ctx->pc = 0x13bb64u;
    // NOP
    ctx->pc = 0x13bb68u;
}
