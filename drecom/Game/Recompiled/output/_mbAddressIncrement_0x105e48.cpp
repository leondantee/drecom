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

// Function: _mbAddressIncrement
// Address: 0x105e48 - 0x105f58
void _mbAddressIncrement_0x105e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_mbAddressIncrement_0x105e48");
#endif

    switch (ctx->pc) {
        case 0x105e98u: goto label_105e98;
        case 0x105ea0u: goto label_105ea0;
        case 0x105ee0u: goto label_105ee0;
        case 0x105f00u: goto label_105f00;
        case 0x105f10u: goto label_105f10;
        default: break;
    }

    ctx->pc = 0x105e48u;

    // 0x105e48: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x105e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x105e4c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x105e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x105e50: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x105e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x105e54: 0x241e0022  addiu       $fp, $zero, 0x22
    ctx->pc = 0x105e54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x105e58: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x105e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x105e5c: 0x24170023  addiu       $s7, $zero, 0x23
    ctx->pc = 0x105e5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x105e60: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x105e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x105e64: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x105e64u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x105e68: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x105e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x105e6c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x105e6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105e70: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x105e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x105e74: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x105e74u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x105e78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x105e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105e7c: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x105e7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x105e80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x105e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x105e84: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x105e84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x105e88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x105e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x105e8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x105e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105e94: 0x0  nop
    ctx->pc = 0x105e94u;
    // NOP
label_105e98:
    // 0x105e98: 0xc041b9c  jal         func_106E70
    ctx->pc = 0x105E98u;
    SET_GPR_U32(ctx, 31, 0x105EA0u);
    ctx->pc = 0x105E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105E98u;
    // 0x105e9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E70u, 0x105E98u, 0x105EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EA0u;
label_105ea0:
    // 0x105ea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x105ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ea4: 0x121e0016  beq         $s0, $fp, . + 4 + (0x16 << 2)
    ctx->pc = 0x105EA4u;
    {
        const bool branch_taken_0x105ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        ctx->pc = 0x105EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EA4u;
        // 0x105ea8: 0x2e020023  sltiu       $v0, $s0, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ea4) {
            ctx->pc = 0x105F00u;
            goto label_105f00;
        }
    }
    ctx->pc = 0x105EACu;
    // 0x105eac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105EACu;
    {
        const bool branch_taken_0x105eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105eac) {
            ctx->pc = 0x105EC4u;
            goto label_105ec4;
        }
    }
    ctx->pc = 0x105EB4u;
    // 0x105eb4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105EB4u;
    {
        const bool branch_taken_0x105eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x105eb4) {
            ctx->pc = 0x105ED8u;
            goto label_105ed8;
        }
    }
    ctx->pc = 0x105EBCu;
    // 0x105ebc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x105EBCu;
    {
        const bool branch_taken_0x105ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EBCu;
        // 0x105ec0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ebc) {
            ctx->pc = 0x105F1Cu;
            goto label_105f1c;
        }
    }
    ctx->pc = 0x105EC4u;
label_105ec4:
    // 0x105ec4: 0x56170015  bnel        $s0, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x105EC4u;
    {
        const bool branch_taken_0x105ec4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        if (branch_taken_0x105ec4) {
            ctx->pc = 0x105EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105EC4u;
            // 0x105ec8: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105F1Cu;
            goto label_105f1c;
        }
    }
    ctx->pc = 0x105ECCu;
    // 0x105ecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105ed0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x105ED0u;
    {
        const bool branch_taken_0x105ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105ED0u;
        // 0x105ed4: 0x26310021  addiu       $s1, $s1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ed0) {
            ctx->pc = 0x105F20u;
            goto label_105f20;
        }
    }
    ctx->pc = 0x105ED8u;
label_105ed8:
    // 0x105ed8: 0xc041c0a  jal         func_107028
    ctx->pc = 0x105ED8u;
    SET_GPR_U32(ctx, 31, 0x105EE0u);
    ctx->pc = 0x105EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105ED8u;
    // 0x105edc: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107028u, 0x105ED8u, 0x105EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EE0u;
label_105ee0:
    // 0x105ee0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x105ee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ee4: 0x8e8244b0  lw          $v0, 0x44B0($s4)
    ctx->pc = 0x105ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17584)));
    // 0x105ee8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x105EE8u;
    {
        const bool branch_taken_0x105ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EE8u;
        // 0x105eec: 0x2664c680  addiu       $a0, $s3, -0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ee8) {
            ctx->pc = 0x105F08u;
            goto label_105f08;
        }
    }
    ctx->pc = 0x105EF0u;
    // 0x105ef0: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x105EF0u;
    {
        const bool branch_taken_0x105ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x105ef0) {
            ctx->pc = 0x105F08u;
            goto label_105f08;
        }
    }
    ctx->pc = 0x105EF8u;
    // 0x105ef8: 0xc041c58  jal         func_107160
    ctx->pc = 0x105EF8u;
    SET_GPR_U32(ctx, 31, 0x105F00u);
    ctx->pc = 0x105EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105EF8u;
    // 0x105efc: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x105EF8u, 0x105F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F00u;
label_105f00:
    // 0x105f00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x105F00u;
    {
        const bool branch_taken_0x105f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F00u;
        // 0x105f04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f00) {
            ctx->pc = 0x105F20u;
            goto label_105f20;
        }
    }
    ctx->pc = 0x105F08u;
label_105f08:
    // 0x105f08: 0xc042b2a  jal         func_10ACA8
    ctx->pc = 0x105F08u;
    SET_GPR_U32(ctx, 31, 0x105F10u);
    ctx->pc = 0x105F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105F08u;
    // 0x105f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACA8u, 0x105F08u, 0x105F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F10u;
label_105f10:
    // 0x105f10: 0xaed53d08  sw          $s5, 0x3D08($s6)
    ctx->pc = 0x105f10u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 15624), GPR_U32(ctx, 21));
    // 0x105f14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x105F14u;
    {
        const bool branch_taken_0x105f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F14u;
        // 0x105f18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f14) {
            ctx->pc = 0x105F28u;
            goto label_105f28;
        }
    }
    ctx->pc = 0x105F1Cu;
label_105f1c:
    // 0x105f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x105f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105f20:
    // 0x105f20: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x105F20u;
    {
        const bool branch_taken_0x105f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F20u;
        // 0x105f24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f20) {
            ctx->pc = 0x105E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105e98;
        }
    }
    ctx->pc = 0x105F28u;
label_105f28:
    // 0x105f28: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x105f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x105f2c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x105f2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105f30: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x105f30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105f34: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x105f34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105f38: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x105f38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105f3c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x105f3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105f40: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x105f40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105f44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105f48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105f50: 0x3e00008  jr          $ra
    ctx->pc = 0x105F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F50u;
        // 0x105f54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105F58u;
}
