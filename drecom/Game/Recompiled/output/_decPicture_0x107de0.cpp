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

// Function: _decPicture
// Address: 0x107de0 - 0x107ec0
void _decPicture_0x107de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decPicture_0x107de0");
#endif

    switch (ctx->pc) {
        case 0x107e24u: goto label_107e24;
        case 0x107e8cu: goto label_107e8c;
        case 0x107e94u: goto label_107e94;
        default: break;
    }

    ctx->pc = 0x107de0u;

    // 0x107de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x107de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x107de4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x107de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107de8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107dec: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x107decu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107df0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x107df4: 0x8e233dac  lw          $v1, 0x3DAC($s1)
    ctx->pc = 0x107df4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DACu));
    // 0x107df8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x107df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107dfc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x107dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x107e00: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x107E00u;
    {
        const bool branch_taken_0x107e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E00u;
        // 0x107e04: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e00) {
            ctx->pc = 0x107E28u;
            goto label_107e28;
        }
    }
    ctx->pc = 0x107E08u;
    // 0x107e08: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x107e08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107e0c: 0x8e023d1c  lw          $v0, 0x3D1C($s0)
    ctx->pc = 0x107e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383D1Cu));
    // 0x107e10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107E10u;
    {
        const bool branch_taken_0x107e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E10u;
        // 0x107e14: 0x8e233dac  lw          $v1, 0x3DAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e10) {
            ctx->pc = 0x107E2Cu;
            goto label_107e2c;
        }
    }
    ctx->pc = 0x107E18u;
    // 0x107e18: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x107e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x107e1c: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x107E1Cu;
    SET_GPR_U32(ctx, 31, 0x107E24u);
    ctx->pc = 0x107E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E1Cu;
    // 0x107e20: 0x2484c7e8  addiu       $a0, $a0, -0x3818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x107E1Cu, 0x107E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E24u;
label_107e24:
    // 0x107e24: 0xae003d1c  sw          $zero, 0x3D1C($s0)
    ctx->pc = 0x107e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15644), GPR_U32(ctx, 0));
label_107e28:
    // 0x107e28: 0x8e233dac  lw          $v1, 0x3DAC($s1)
    ctx->pc = 0x107e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15788)));
label_107e2c:
    // 0x107e2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107e30: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x107E30u;
    {
        const bool branch_taken_0x107e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x107E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E30u;
        // 0x107e34: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e30) {
            ctx->pc = 0x107E70u;
            goto label_107e70;
        }
    }
    ctx->pc = 0x107E38u;
    // 0x107e38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107E38u;
    {
        const bool branch_taken_0x107e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E38u;
        // 0x107e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e38) {
            ctx->pc = 0x107E50u;
            goto label_107e50;
        }
    }
    ctx->pc = 0x107E40u;
    // 0x107e40: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107E40u;
    {
        const bool branch_taken_0x107e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x107E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E40u;
        // 0x107e44: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e40) {
            ctx->pc = 0x107E64u;
            goto label_107e64;
        }
    }
    ctx->pc = 0x107E48u;
    // 0x107e48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x107E48u;
    {
        const bool branch_taken_0x107e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E48u;
        // 0x107e4c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e48) {
            ctx->pc = 0x107E80u;
            goto label_107e80;
        }
    }
    ctx->pc = 0x107E50u;
label_107e50:
    // 0x107e50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x107e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107e54: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x107E54u;
    {
        const bool branch_taken_0x107e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E54u;
        // 0x107e58: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e54) {
            ctx->pc = 0x107E7Cu;
            goto label_107e7c;
        }
    }
    ctx->pc = 0x107E5Cu;
    // 0x107e5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x107E5Cu;
    {
        const bool branch_taken_0x107e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E5Cu;
        // 0x107e60: 0x8c503e44  lw          $s0, 0x3E44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e5c) {
            ctx->pc = 0x107E8Cu;
            goto label_107e8c;
        }
    }
    ctx->pc = 0x107E64u;
label_107e64:
    // 0x107e64: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x107e68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x107E68u;
    {
        const bool branch_taken_0x107e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E68u;
        // 0x107e6c: 0x8c503e48  lw          $s0, 0x3E48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e68) {
            ctx->pc = 0x107E8Cu;
            goto label_107e8c;
        }
    }
    ctx->pc = 0x107E70u;
label_107e70:
    // 0x107e70: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x107e74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x107E74u;
    {
        const bool branch_taken_0x107e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E74u;
        // 0x107e78: 0x8c503e4c  lw          $s0, 0x3E4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e74) {
            ctx->pc = 0x107E8Cu;
            goto label_107e8c;
        }
    }
    ctx->pc = 0x107E7Cu;
label_107e7c:
    // 0x107e7c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x107e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_107e80:
    // 0x107e80: 0x8c503e44  lw          $s0, 0x3E44($v0)
    ctx->pc = 0x107e80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15940)));
    // 0x107e84: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x107E84u;
    SET_GPR_U32(ctx, 31, 0x107E8Cu);
    ctx->pc = 0x107E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E84u;
    // 0x107e88: 0x2484c808  addiu       $a0, $a0, -0x37F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x107E84u, 0x107E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E8Cu;
label_107e8c:
    // 0x107e8c: 0xc0417d6  jal         func_105F58
    ctx->pc = 0x107E8Cu;
    SET_GPR_U32(ctx, 31, 0x107E94u);
    ctx->pc = 0x107E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E8Cu;
    // 0x107e90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F58u, 0x107E8Cu, 0x107E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E94u;
label_107e94:
    // 0x107e94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x107e94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e98: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x107E98u;
    {
        const bool branch_taken_0x107e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E98u;
        // 0x107e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e98) {
            ctx->pc = 0x107EA4u;
            goto label_107ea4;
        }
    }
    ctx->pc = 0x107EA0u;
    // 0x107ea0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x107ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_107ea4:
    // 0x107ea4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x107ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107ea8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x107ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107eac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107eacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107eb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x107EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EB8u;
        // 0x107ebc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107EC0u;
}
