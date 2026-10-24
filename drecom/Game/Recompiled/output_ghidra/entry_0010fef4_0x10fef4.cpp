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

// Function: entry_0010fef4
// Address: 0x10fef4 - 0x10ff40
void entry_0010fef4_0x10fef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fef4_0x10fef4");
#endif

    switch (ctx->pc) {
        case 0x10ff2cu: goto label_10ff2c;
        default: break;
    }

    ctx->pc = 0x10fef4u;

    // 0x10fef4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10fef8: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x10FEF8u;
    {
        const bool branch_taken_0x10fef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEF8u;
        // 0x10fefc: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fef8) {
            ctx->pc = 0x10FE88u;
            return;
        }
    }
    ctx->pc = 0x10FF00u;
    // 0x10ff00: 0x267067c0  addiu       $s0, $s3, 0x67C0
    ctx->pc = 0x10ff00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 26560));
    // 0x10ff04: 0x26875280  addiu       $a3, $s4, 0x5280
    ctx->pc = 0x10ff04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x10ff08: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10ff0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff10: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x10ff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x10ff14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ff14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff18: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x10ff18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10ff1c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10ff1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff20: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x10ff20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10ff24: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10FF24u;
    SET_GPR_U32(ctx, 31, 0x10FF2Cu);
    ctx->pc = 0x10FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF24u;
    // 0x10ff28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10FF2Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FF2Cu) { return; }
    ctx->pc = 0x10FF2Cu;
label_10ff2c:
    // 0x10ff2c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FF2Cu;
    {
        const bool branch_taken_0x10ff2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10ff2c) {
            ctx->pc = 0x10FF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FF2Cu;
            // 0x10ff30: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FF40u;
            return;
        }
    }
    ctx->pc = 0x10FF34u;
    // 0x10ff34: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x10ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x10ff38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x10FF38u;
    {
        const bool branch_taken_0x10ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF38u;
        // 0x10ff3c: 0x2442ff9c  addiu       $v0, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff38) {
            ctx->pc = 0x10FF88u;
            return;
        }
    }
    ctx->pc = 0x10FF40u;
}
