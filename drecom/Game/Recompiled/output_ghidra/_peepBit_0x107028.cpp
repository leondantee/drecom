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

// Function: _peepBit
// Address: 0x107028 - 0x10715c
void _peepBit_0x107028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_peepBit_0x107028");
#endif

    switch (ctx->pc) {
        case 0x1070a0u: goto label_1070a0;
        case 0x1070bcu: goto label_1070bc;
        case 0x107114u: goto label_107114;
        default: break;
    }

    ctx->pc = 0x107028u;

    // 0x107028: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x107028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10702c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10702cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x107030: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x107030u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x107034: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107038: 0x8e823c24  lw          $v0, 0x3C24($s4)
    ctx->pc = 0x107038u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383C24u));
    // 0x10703c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10703cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107040: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x107040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x107044: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x107044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x107048: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10704c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10704Cu;
    {
        const bool branch_taken_0x10704c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10704Cu;
        // 0x107050: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10704c) {
            ctx->pc = 0x107070u;
            goto label_107070;
        }
    }
    ctx->pc = 0x107054u;
    // 0x107054: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x107054u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x107058: 0x8e62449c  lw          $v0, 0x449C($s3)
    ctx->pc = 0x107058u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38449Cu));
    // 0x10705c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x10705cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x107060: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x107060u;
    {
        const bool branch_taken_0x107060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107060u;
        // 0x107064: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107060) {
            ctx->pc = 0x10712Cu;
            goto label_10712c;
        }
    }
    ctx->pc = 0x107068u;
    // 0x107068: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x107068u;
    {
        const bool branch_taken_0x107068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107068) {
            ctx->pc = 0x107078u;
            goto label_107078;
        }
    }
    ctx->pc = 0x107070u;
label_107070:
    // 0x107070: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x107070u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x107074: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_107078:
    // 0x107078: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x107078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10707c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10707cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x107080: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x107080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x107084: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107088: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x107088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10708c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10708cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x107090: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x107090u;
    {
        const bool branch_taken_0x107090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107090u;
        // 0x107094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107090) {
            ctx->pc = 0x1070ECu;
            goto label_1070ec;
        }
    }
    ctx->pc = 0x107098u;
    // 0x107098: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x107098u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10709c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x10709cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
label_1070a0:
    // 0x1070a0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1070a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070a4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1070a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1070a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1070A8u;
    {
        const bool branch_taken_0x1070a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1070ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070A8u;
        // 0x1070ac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070a8) {
            ctx->pc = 0x1070C0u;
            goto label_1070c0;
        }
    }
    ctx->pc = 0x1070B0u;
    // 0x1070b0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1070b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1070b4: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x1070B4u;
    SET_GPR_U32(ctx, 31, 0x1070BCu);
    ctx->pc = 0x1070B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070B4u;
    // 0x1070b8: 0x8c443bf4  lw          $a0, 0x3BF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x1070B4u, 0x1070BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070BCu;
label_1070bc:
    // 0x1070bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1070bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1070c0:
    // 0x1070c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1070c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1070c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1070c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1070c8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1070c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1070cc: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1070ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1070d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1070d0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1070d4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1070d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1070d8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1070d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1070dc: 0x1045fff0  beq         $v0, $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1070DCu;
    {
        const bool branch_taken_0x1070dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1070E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070DCu;
        // 0x1070e0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070dc) {
            ctx->pc = 0x1070A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1070a0;
        }
    }
    ctx->pc = 0x1070E4u;
    // 0x1070e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1070E4u;
    {
        const bool branch_taken_0x1070e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1070E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070E4u;
        // 0x1070e8: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070e4) {
            ctx->pc = 0x1070FCu;
            goto label_1070fc;
        }
    }
    ctx->pc = 0x1070ECu;
label_1070ec:
    // 0x1070ec: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1070ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1070f0: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1070f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x1070f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1070f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1070f8: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1070f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_1070fc:
    // 0x1070fc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1070fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x107100: 0x26043a70  addiu       $a0, $s0, 0x3A70
    ctx->pc = 0x107100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14960));
    // 0x107104: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x107104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x107108: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x107108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10710c: 0xc041b70  jal         func_106DC0
    ctx->pc = 0x10710Cu;
    SET_GPR_U32(ctx, 31, 0x107114u);
    ctx->pc = 0x107110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10710Cu;
    // 0x107110: 0xae833c24  sw          $v1, 0x3C24($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 15396), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DC0u, 0x10710Cu, 0x107114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107114u;
label_107114:
    // 0x107114: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x107114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x107118: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107118u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10711c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x10711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x107120: 0xae63449c  sw          $v1, 0x449C($s3)
    ctx->pc = 0x107120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 17564), GPR_U32(ctx, 3));
    // 0x107124: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107124u;
    {
        const bool branch_taken_0x107124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107124u;
        // 0x107128: 0xae424498  sw          $v0, 0x4498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107124) {
            ctx->pc = 0x107130u;
            goto label_107130;
        }
    }
    ctx->pc = 0x10712Cu;
label_10712c:
    // 0x10712c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x10712cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
label_107130:
    // 0x107130: 0x8e434498  lw          $v1, 0x4498($s2)
    ctx->pc = 0x107130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17560)));
    // 0x107134: 0x111023  negu        $v0, $s1
    ctx->pc = 0x107134u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x107138: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x107138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10713c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10713cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107140: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x107140u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x107144: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x107144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107148: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10714c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10714cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107154: 0x3e00008  jr          $ra
    ctx->pc = 0x107154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107154u;
        // 0x107158: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10715Cu;
}
