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

// Function: _pictureData0
// Address: 0x105f58 - 0x10607c
void _pictureData0_0x105f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureData0_0x105f58");
#endif

    switch (ctx->pc) {
        case 0x105fc0u: goto label_105fc0;
        case 0x105fc4u: goto label_105fc4;
        case 0x105fccu: goto label_105fcc;
        case 0x105fe8u: goto label_105fe8;
        case 0x105ff0u: goto label_105ff0;
        case 0x106008u: goto label_106008;
        case 0x10603cu: goto label_10603c;
        case 0x106054u: goto label_106054;
        default: break;
    }

    ctx->pc = 0x105f58u;

    // 0x105f58: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x105f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x105f5c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x105f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x105f60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x105f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x105f64: 0x8c473d28  lw          $a3, 0x3D28($v0)
    ctx->pc = 0x105f64u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x383D28u));
    // 0x105f68: 0x8c663d2c  lw          $a2, 0x3D2C($v1)
    ctx->pc = 0x105f68u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383D2Cu));
    // 0x105f6c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x105f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x105f70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x105f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x105f74: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x105f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x105f78: 0xe68818  mult        $s1, $a3, $a2
    ctx->pc = 0x105f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x105f7c: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x105f7cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x105f80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x105f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x105f84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x105f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x105f88: 0x26a241f8  addiu       $v0, $s5, 0x41F8
    ctx->pc = 0x105f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16888));
    // 0x105f8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x105f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105f90: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x105f90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105f94: 0x8ca33dac  lw          $v1, 0x3DAC($a1)
    ctx->pc = 0x105f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 15788)));
    // 0x105f98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x105f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f9c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x105f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x105fa0: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x105fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x105fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105fa8: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x105fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x105fac: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x105facu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38447Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38447Cu, _value); } while (0);
    // 0x105fb0: 0xac400280  sw          $zero, 0x280($v0)
    ctx->pc = 0x105fb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x384478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x384478u, _value); } while (0);
    // 0x105fb4: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x105fb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x105fb8: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x105fb8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x105fbc: 0x0  nop
    ctx->pc = 0x105fbcu;
    // NOP
label_105fc0:
    // 0x105fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x105fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_105fc4:
    // 0x105fc4: 0xc04186a  jal         func_1061A8
    ctx->pc = 0x105FC4u;
    SET_GPR_U32(ctx, 31, 0x105FCCu);
    ctx->pc = 0x105FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FC4u;
    // 0x105fc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1061A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061A8u, 0x105FC4u, 0x105FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FCCu;
label_105fcc:
    // 0x105fcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x105fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fd0: 0x1214fffc  beq         $s0, $s4, . + 4 + (-0x4 << 2)
    ctx->pc = 0x105FD0u;
    {
        const bool branch_taken_0x105fd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x105FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FD0u;
        // 0x105fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fd0) {
            ctx->pc = 0x105FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105fc4;
        }
    }
    ctx->pc = 0x105FD8u;
    // 0x105fd8: 0x1213fff9  beq         $s0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x105FD8u;
    {
        const bool branch_taken_0x105fd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x105fd8) {
            ctx->pc = 0x105FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105fc0;
        }
    }
    ctx->pc = 0x105FE0u;
    // 0x105fe0: 0xc041b46  jal         func_106D18
    ctx->pc = 0x105FE0u;
    SET_GPR_U32(ctx, 31, 0x105FE8u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x105FE0u, 0x105FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FE8u;
label_105fe8:
    // 0x105fe8: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x105FE8u;
    SET_GPR_U32(ctx, 31, 0x105FF0u);
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x105FE8u, 0x105FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FF0u;
label_105ff0:
    // 0x105ff0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x105ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105ff4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x105ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x105ff8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x105ff8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x105ffc: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x105ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x106000: 0x2611ffff  addiu       $s1, $s0, -0x1
    ctx->pc = 0x106000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x106004: 0x2e120001  sltiu       $s2, $s0, 0x1
    ctx->pc = 0x106004u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_106008:
    // 0x106008: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x106008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10600c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x10600cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x106010: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x106010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x106014: 0x0  nop
    ctx->pc = 0x106014u;
    // NOP
    // 0x106018: 0x0  nop
    ctx->pc = 0x106018u;
    // NOP
    // 0x10601c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10601Cu;
    {
        const bool branch_taken_0x10601c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10601c) {
            ctx->pc = 0x106008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106008;
        }
    }
    ctx->pc = 0x106024u;
    // 0x106024: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106024u;
    {
        const bool branch_taken_0x106024 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x106028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106024u;
        // 0x106028: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106024) {
            ctx->pc = 0x106040u;
            goto label_106040;
        }
    }
    ctx->pc = 0x10602Cu;
    // 0x10602c: 0x26a241f8  addiu       $v0, $s5, 0x41F8
    ctx->pc = 0x10602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16888));
    // 0x106030: 0x8c440280  lw          $a0, 0x280($v0)
    ctx->pc = 0x106030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x106034: 0xc0412c6  jal         func_104B18
    ctx->pc = 0x106034u;
    SET_GPR_U32(ctx, 31, 0x10603Cu);
    ctx->pc = 0x106038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106034u;
    // 0x106038: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B18u, 0x106034u, 0x10603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10603Cu;
label_10603c:
    // 0x10603c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x10603cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_106040:
    // 0x106040: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106040u;
    {
        const bool branch_taken_0x106040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106040u;
        // 0x106044: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106040) {
            ctx->pc = 0x106058u;
            goto label_106058;
        }
    }
    ctx->pc = 0x106048u;
    // 0x106048: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x106048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10604c: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x10604Cu;
    SET_GPR_U32(ctx, 31, 0x106054u);
    ctx->pc = 0x106050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10604Cu;
    // 0x106050: 0x2484c6b8  addiu       $a0, $a0, -0x3948 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x10604Cu, 0x106054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106054u;
label_106054:
    // 0x106054: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x106054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106058:
    // 0x106058: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x106058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10605c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10605cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106060: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x106060u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106064: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x106064u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106068: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10606c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10606cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106074: 0x3e00008  jr          $ra
    ctx->pc = 0x106074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106074u;
        // 0x106078: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10607Cu;
}
