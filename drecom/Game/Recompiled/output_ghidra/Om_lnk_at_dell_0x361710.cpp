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

// Function: Om_lnk_at_dell
// Address: 0x361710 - 0x361820
void Om_lnk_at_dell_0x361710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_lnk_at_dell_0x361710");
#endif

    switch (ctx->pc) {
        case 0x361778u: goto label_361778;
        case 0x361804u: goto label_361804;
        default: break;
    }

    ctx->pc = 0x361710u;

    // 0x361710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x361710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x361714: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x361714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x361718: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x361718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36171c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x361720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x361724: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x361724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x361728: 0xa7a50048  sh          $a1, 0x48($sp)
    ctx->pc = 0x361728u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 72), (uint16_t)GPR_U32(ctx, 5));
    // 0x36172c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x36172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361730: 0x8c641240  lw          $a0, 0x1240($v1)
    ctx->pc = 0x361730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x361734: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x361734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x361738: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x361738u;
    {
        const bool branch_taken_0x361738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x361738) {
            ctx->pc = 0x3617CCu;
            goto label_3617cc;
        }
    }
    ctx->pc = 0x361740u;
    // 0x361740: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x361740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361744: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x361744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x361748: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x361748u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36174c: 0x97a30048  lhu         $v1, 0x48($sp)
    ctx->pc = 0x36174cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361750: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x361750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x361754: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x361754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x361758: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x361758u;
    {
        const bool branch_taken_0x361758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x361758) {
            ctx->pc = 0x36179Cu;
            goto label_36179c;
        }
    }
    ctx->pc = 0x361760u;
    // 0x361760: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x361760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361764: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x361764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x361768: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x361768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x36176c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x36176cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361770: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x361770u;
    {
        const bool branch_taken_0x361770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361770) {
            ctx->pc = 0x361788u;
            goto label_361788;
        }
    }
    ctx->pc = 0x361778u;
label_361778:
    // 0x361778: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x361778u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x36177c: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x36177cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x361780: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x361780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x361784: 0x0  nop
    ctx->pc = 0x361784u;
    // NOP
label_361788:
    // 0x361788: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x361788u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x36178c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36178Cu;
    {
        const bool branch_taken_0x36178c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36178c) {
            ctx->pc = 0x361778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361778;
        }
    }
    ctx->pc = 0x361794u;
    // 0x361794: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x361794u;
    {
        const bool branch_taken_0x361794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361794) {
            ctx->pc = 0x361804u;
            goto label_361804;
        }
    }
    ctx->pc = 0x36179Cu;
label_36179c:
    // 0x36179c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x36179cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3617a0: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x3617a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x3617a4: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x3617a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3617a8: 0x97a30048  lhu         $v1, 0x48($sp)
    ctx->pc = 0x3617a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3617ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3617acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3617b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3617b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3617b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3617b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3617b8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3617b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3617bc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3617bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3617c0: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x3617c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x3617c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3617C4u;
    {
        const bool branch_taken_0x3617c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3617c4) {
            ctx->pc = 0x361804u;
            goto label_361804;
        }
    }
    ctx->pc = 0x3617CCu;
label_3617cc:
    // 0x3617cc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3617ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3617d0: 0x8c641244  lw          $a0, 0x1244($v1)
    ctx->pc = 0x3617d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4676)));
    // 0x3617d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3617d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3617d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3617d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3617dc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3617DCu;
    {
        const bool branch_taken_0x3617dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3617dc) {
            ctx->pc = 0x361804u;
            goto label_361804;
        }
    }
    ctx->pc = 0x3617E4u;
    // 0x3617e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3617e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3617e8: 0x8c421244  lw          $v0, 0x1244($v0)
    ctx->pc = 0x3617e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4676)));
    // 0x3617ec: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x3617ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x3617f0: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x3617f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x3617f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3617f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3617f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3617f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3617fc: 0xc05b9ec  jal         func_16E7B0
    ctx->pc = 0x3617FCu;
    SET_GPR_U32(ctx, 31, 0x361804u);
    ctx->pc = 0x16E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E7B0u, 0x3617FCu, 0x361804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361804u;
label_361804:
    // 0x361804: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x361804u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x361808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36180c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36180cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x361810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361814: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x361814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x361818: 0x3e00008  jr          $ra
    ctx->pc = 0x361818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361820u;
}
