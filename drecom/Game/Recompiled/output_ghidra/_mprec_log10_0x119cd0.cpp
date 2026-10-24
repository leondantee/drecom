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

// Function: _mprec_log10
// Address: 0x119cd0 - 0x119d3c
void _mprec_log10_0x119cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_mprec_log10_0x119cd0");
#endif

    switch (ctx->pc) {
        case 0x119d10u: goto label_119d10;
        case 0x119d20u: goto label_119d20;
        default: break;
    }

    ctx->pc = 0x119cd0u;

    // 0x119cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119cd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119cdc: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x119cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x119ce0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x119ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x119ce4: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x119ce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x119ce8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119CE8u;
    {
        const bool branch_taken_0x119ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CE8u;
        // 0x119cec: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ce8) {
            ctx->pc = 0x119D08u;
            goto label_119d08;
        }
    }
    ctx->pc = 0x119CF0u;
    // 0x119cf0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x119cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x119cf4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x119cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x119cf8: 0x2442da08  addiu       $v0, $v0, -0x25F8
    ctx->pc = 0x119cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957576));
    // 0x119cfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119d00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x119D00u;
    {
        const bool branch_taken_0x119d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D00u;
        // 0x119d04: 0xdc620000  ld          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d00) {
            ctx->pc = 0x119D2Cu;
            goto label_119d2c;
        }
    }
    ctx->pc = 0x119D08u;
label_119d08:
    // 0x119d08: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x119D08u;
    {
        const bool branch_taken_0x119d08 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x119D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D08u;
        // 0x119d0c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d08) {
            ctx->pc = 0x119D2Cu;
            goto label_119d2c;
        }
    }
    ctx->pc = 0x119D10u;
label_119d10:
    // 0x119d10: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x119d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x119d14: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x119d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x119d18: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x119D18u;
    SET_GPR_U32(ctx, 31, 0x119D20u);
    ctx->pc = 0x119D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D18u;
    // 0x119d1c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x119D18u, 0x119D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D20u;
label_119d20:
    // 0x119d20: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x119D20u;
    {
        const bool branch_taken_0x119d20 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x119D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D20u;
        // 0x119d24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d20) {
            ctx->pc = 0x119D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119d10;
        }
    }
    ctx->pc = 0x119D28u;
    // 0x119d28: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x119d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_119d2c:
    // 0x119d2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119d34: 0x3e00008  jr          $ra
    ctx->pc = 0x119D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D34u;
        // 0x119d38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119D3Cu;
}
