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

// Function: Mem_alloc_R
// Address: 0x165020 - 0x165140
void Mem_alloc_R_0x165020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mem_alloc_R_0x165020");
#endif

    switch (ctx->pc) {
        case 0x16506cu: goto label_16506c;
        case 0x1650d4u: goto label_1650d4;
        case 0x165114u: goto label_165114;
        default: break;
    }

    ctx->pc = 0x165020u;

    // 0x165020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x165020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x165024: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x165024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x165028: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x165028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16502c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16502cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x165030: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165038: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x165038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x16503c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x16503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x165040: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x165040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x165044: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x165044u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x165048: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x165048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x16504c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x16504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x165050: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x165050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165054: 0x3c0201ef  lui         $v0, 0x1EF
    ctx->pc = 0x165054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)495 << 16));
    // 0x165058: 0x3451fff0  ori         $s1, $v0, 0xFFF0
    ctx->pc = 0x165058u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x16505c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x16505cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x165060: 0x24505470  addiu       $s0, $v0, 0x5470
    ctx->pc = 0x165060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21616));
    // 0x165064: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x165064u;
    {
        const bool branch_taken_0x165064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165064) {
            ctx->pc = 0x165098u;
            goto label_165098;
        }
    }
    ctx->pc = 0x16506Cu;
label_16506c:
    // 0x16506c: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x16506cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x165070: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x165070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x165074: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x165074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x165078: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x165078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16507c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16507cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165080: 0x52082b  sltu        $at, $v0, $s2
    ctx->pc = 0x165080u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x165084: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x165084u;
    {
        const bool branch_taken_0x165084 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x165084) {
            ctx->pc = 0x1650F0u;
            goto label_1650f0;
        }
    }
    ctx->pc = 0x16508Cu;
    // 0x16508c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x165090: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x165094: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x165094u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_165098:
    // 0x165098: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x165098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16509c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x16509Cu;
    {
        const bool branch_taken_0x16509c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16509c) {
            ctx->pc = 0x16506Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16506c;
        }
    }
    ctx->pc = 0x1650A4u;
    // 0x1650a4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1650a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1650a8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1650a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1650ac: 0x3c01014e  lui         $at, 0x14E
    ctx->pc = 0x1650acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)334 << 16));
    // 0x1650b0: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x1650b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x1650b4: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1650b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1650b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1650B8u;
    {
        const bool branch_taken_0x1650b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650b8) {
            ctx->pc = 0x1650E0u;
            goto label_1650e0;
        }
    }
    ctx->pc = 0x1650C0u;
    // 0x1650c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1650c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1650c4: 0x2444ead0  addiu       $a0, $v0, -0x1530
    ctx->pc = 0x1650c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961872));
    // 0x1650c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1650c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1650cc: 0xc059c48  jal         func_167120
    ctx->pc = 0x1650CCu;
    SET_GPR_U32(ctx, 31, 0x1650D4u);
    ctx->pc = 0x167120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167120u, 0x1650CCu, 0x1650D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1650D4u;
label_1650d4:
    // 0x1650d4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1650d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1650d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1650D8u;
    {
        const bool branch_taken_0x1650d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650d8) {
            ctx->pc = 0x165120u;
            goto label_165120;
        }
    }
    ctx->pc = 0x1650E0u;
label_1650e0:
    // 0x1650e0: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1650e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1650e4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1650e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1650e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1650E8u;
    {
        const bool branch_taken_0x1650e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650e8) {
            ctx->pc = 0x165104u;
            goto label_165104;
        }
    }
    ctx->pc = 0x1650F0u;
label_1650f0:
    // 0x1650f0: 0xae71000c  sw          $s1, 0xC($s3)
    ctx->pc = 0x1650f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 17));
    // 0x1650f4: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x1650f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x1650f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1650f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1650fc: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1650fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x165100: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x165100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_165104:
    // 0x165104: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x165104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x165108: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x165108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x16510c: 0xc059474  jal         func_1651D0
    ctx->pc = 0x16510Cu;
    SET_GPR_U32(ctx, 31, 0x165114u);
    ctx->pc = 0x1651D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1651D0u, 0x16510Cu, 0x165114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165114u;
label_165114:
    // 0x165114: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x165114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x165118: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16511c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x16511cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_165120:
    // 0x165120: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x165120u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165124: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x165124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165128: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16512c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16512cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165134: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x165134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x165138: 0x3e00008  jr          $ra
    ctx->pc = 0x165138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165140u;
}
