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

// Function: _ch3dmaCSC
// Address: 0x108b78 - 0x108c30
void _ch3dmaCSC_0x108b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ch3dmaCSC_0x108b78");
#endif

    ctx->pc = 0x108b78u;

    // 0x108b78: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108b7c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x108b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x108b80: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x108b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x108b84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108b88: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x108b88u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4));
    // 0x108b8c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x108b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x108b90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108b90u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x108b94: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x108B94u;
    {
        const bool branch_taken_0x108b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x108B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B94u;
        // 0x108b98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b94) {
            ctx->pc = 0x108BB4u;
            goto label_108bb4;
        }
    }
    ctx->pc = 0x108B9Cu;
    // 0x108b9c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108ba0: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x108ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x108ba4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x108ba8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x108ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x108bac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x108BACu;
    {
        const bool branch_taken_0x108bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BACu;
        // 0x108bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108bac) {
            ctx->pc = 0x108BC4u;
            goto label_108bc4;
        }
    }
    ctx->pc = 0x108BB4u;
label_108bb4:
    // 0x108bb4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x108bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x108bb8: 0xac623b20  sw          $v0, 0x3B20($v1)
    ctx->pc = 0x108bb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383B20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383B20u, _value); } while (0);
    // 0x108bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x108BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BBCu;
        // 0x108bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108BC4u;
label_108bc4:
    // 0x108bc4: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x108bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x108bc8: 0x8d023b28  lw          $v0, 0x3B28($t0)
    ctx->pc = 0x108bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383B28u));
    // 0x108bcc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x108BCCu;
    {
        const bool branch_taken_0x108bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BCCu;
        // 0x108bd0: 0x25073b28  addiu       $a3, $t0, 0x3B28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 15144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108bcc) {
            ctx->pc = 0x108C14u;
            goto label_108c14;
        }
    }
    ctx->pc = 0x108BD4u;
    // 0x108bd4: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x108bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x108bd8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108bdc: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x108bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x108be0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x108be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x108be4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x108be4u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 4));
    // 0x108be8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108bec: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x108becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x108bf0: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x108bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x108bf4: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x108bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x108bf8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x108bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x108bfc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x108bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x108c00: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x108c00u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 4));
    // 0x108c04: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x108c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x108c08: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x108c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x108c0c: 0xac26b000  sw          $a2, -0x5000($at)
    ctx->pc = 0x108c0cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 6));
    // 0x108c10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x108c10u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2));
label_108c14:
    // 0x108c14: 0x8d023b28  lw          $v0, 0x3B28($t0)
    ctx->pc = 0x108c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 15144)));
    // 0x108c18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x108c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x108c1c: 0xad023b28  sw          $v0, 0x3B28($t0)
    ctx->pc = 0x108c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 15144), GPR_U32(ctx, 2));
    // 0x108c20: 0xf  sync
    ctx->pc = 0x108c20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x108c24: 0x42000038  ei
    ctx->pc = 0x108c24u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x108c28: 0x3e00008  jr          $ra
    ctx->pc = 0x108C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C28u;
        // 0x108c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108C30u;
}
