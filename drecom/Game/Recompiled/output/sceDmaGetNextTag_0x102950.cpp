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

// Function: sceDmaGetNextTag
// Address: 0x102950 - 0x1029cc
void sceDmaGetNextTag_0x102950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaGetNextTag_0x102950");
#endif

    ctx->pc = 0x102950u;

    // 0x102950: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x102950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x102954: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x102954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x102958: 0x30450070  andi        $a1, $v0, 0x70
    ctx->pc = 0x102958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x10295c: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x10295Cu;
    {
        const bool branch_taken_0x10295c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x102960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10295Cu;
        // 0x102960: 0x28a20031  slti        $v0, $a1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10295c) {
            ctx->pc = 0x1029A4u;
            goto label_1029a4;
        }
    }
    ctx->pc = 0x102964u;
    // 0x102964: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102964u;
    {
        const bool branch_taken_0x102964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102964u;
        // 0x102968: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102964) {
            ctx->pc = 0x102988u;
            goto label_102988;
        }
    }
    ctx->pc = 0x10296Cu;
    // 0x10296c: 0x50a2000f  beql        $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10296Cu;
    {
        const bool branch_taken_0x10296c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x10296c) {
            ctx->pc = 0x102970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10296Cu;
            // 0x102970: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1029ACu;
            goto label_1029ac;
        }
    }
    ctx->pc = 0x102974u;
    // 0x102974: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x102974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x102978: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x102978u;
    {
        const bool branch_taken_0x102978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x10297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102978u;
        // 0x10297c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102978) {
            ctx->pc = 0x1029BCu;
            goto label_1029bc;
        }
    }
    ctx->pc = 0x102980u;
    // 0x102980: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x102980u;
    {
        const bool branch_taken_0x102980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102980) {
            ctx->pc = 0x1029C4u;
            goto label_1029c4;
        }
    }
    ctx->pc = 0x102988u;
label_102988:
    // 0x102988: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x102988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10298c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10298Cu;
    {
        const bool branch_taken_0x10298c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x102990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10298Cu;
        // 0x102990: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10298c) {
            ctx->pc = 0x1029A4u;
            goto label_1029a4;
        }
    }
    ctx->pc = 0x102994u;
    // 0x102994: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x102994u;
    {
        const bool branch_taken_0x102994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x102998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102994u;
        // 0x102998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102994) {
            ctx->pc = 0x1029BCu;
            goto label_1029bc;
        }
    }
    ctx->pc = 0x10299Cu;
    // 0x10299c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10299Cu;
    {
        const bool branch_taken_0x10299c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10299c) {
            ctx->pc = 0x1029C4u;
            goto label_1029c4;
        }
    }
    ctx->pc = 0x1029A4u;
label_1029a4:
    // 0x1029a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1029A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1029A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029A4u;
        // 0x1029a8: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1029A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1029ACu;
label_1029ac:
    // 0x1029ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1029acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1029b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1029b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1029b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1029B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1029B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029B4u;
        // 0x1029b8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1029B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1029BCu;
label_1029bc:
    // 0x1029bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1029BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1029C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029BCu;
        // 0x1029c0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1029BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1029C4u;
label_1029c4:
    // 0x1029c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1029C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1029C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1029CCu;
}
