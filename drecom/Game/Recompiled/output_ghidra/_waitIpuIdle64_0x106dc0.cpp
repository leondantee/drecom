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

// Function: _waitIpuIdle64
// Address: 0x106dc0 - 0x106e70
void _waitIpuIdle64_0x106dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_waitIpuIdle64_0x106dc0");
#endif

    switch (ctx->pc) {
        case 0x106e20u: goto label_106e20;
        case 0x106e34u: goto label_106e34;
        default: break;
    }

    ctx->pc = 0x106dc0u;

    // 0x106dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x106dc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106dc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x106dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x106dcc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x106dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x106dd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106dd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x106ddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106de0: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x106de0u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002000u));
    // 0x106de4: 0x481001c  bgez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x106DE4u;
    {
        const bool branch_taken_0x106de4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x106DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DE4u;
        // 0x106de8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106de4) {
            ctx->pc = 0x106E58u;
            goto label_106e58;
        }
    }
    ctx->pc = 0x106DECu;
    // 0x106dec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106df0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x106df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x106df4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106df4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x106df8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x106df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x106dfc: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x106DFCu;
    {
        const bool branch_taken_0x106dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DFCu;
        // 0x106e00: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106dfc) {
            ctx->pc = 0x106E5Cu;
            goto label_106e5c;
        }
    }
    ctx->pc = 0x106E04u;
    // 0x106e04: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x106e04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x106e08: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x106e08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x106e0c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x106e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x106e10: 0x36312000  ori         $s1, $s1, 0x2000
    ctx->pc = 0x106e10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8192);
    // 0x106e14: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x106e14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
    // 0x106e18: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x106e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e1c: 0x0  nop
    ctx->pc = 0x106e1cu;
    // NOP
label_106e20:
    // 0x106e20: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x106e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x106e24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106E24u;
    {
        const bool branch_taken_0x106e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E24u;
        // 0x106e28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e24) {
            ctx->pc = 0x106E38u;
            goto label_106e38;
        }
    }
    ctx->pc = 0x106E2Cu;
    // 0x106e2c: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x106E2Cu;
    SET_GPR_U32(ctx, 31, 0x106E34u);
    ctx->pc = 0x106E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E2Cu;
    // 0x106e30: 0x8e443bf4  lw          $a0, 0x3BF4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x106E2Cu, 0x106E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E34u;
label_106e34:
    // 0x106e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106e38:
    // 0x106e38: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x106e38u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106e3c: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106E3Cu;
    {
        const bool branch_taken_0x106e3c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x106E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E3Cu;
        // 0x106e40: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e3c) {
            ctx->pc = 0x106E58u;
            goto label_106e58;
        }
    }
    ctx->pc = 0x106E44u;
    // 0x106e44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x106e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106e48: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x106e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x106e4c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x106E4Cu;
    {
        const bool branch_taken_0x106e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E4Cu;
        // 0x106e50: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e4c) {
            ctx->pc = 0x106E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106e20;
        }
    }
    ctx->pc = 0x106E54u;
    // 0x106e54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x106e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_106e58:
    // 0x106e58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x106e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106e5c:
    // 0x106e5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106e60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106e68: 0x3e00008  jr          $ra
    ctx->pc = 0x106E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E68u;
        // 0x106e6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106E70u;
}
