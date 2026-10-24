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

// Function: entry_0010f2a4
// Address: 0x10f2a4 - 0x10f2f0
void entry_0010f2a4_0x10f2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f2a4_0x10f2a4");
#endif

    switch (ctx->pc) {
        case 0x10f2d4u: goto label_10f2d4;
        case 0x10f2e8u: goto label_10f2e8;
        default: break;
    }

    ctx->pc = 0x10f2a4u;

    // 0x10f2a4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10f2a8: 0x24504bc0  addiu       $s0, $v0, 0x4BC0
    ctx->pc = 0x10f2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19392));
    // 0x10f2ac: 0x24844fe0  addiu       $a0, $a0, 0x4FE0
    ctx->pc = 0x10f2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20448));
    // 0x10f2b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f2b4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x10f2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10f2b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10f2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f2c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2c4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10f2c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2c8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x10f2c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10f2cc: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10F2CCu;
    SET_GPR_U32(ctx, 31, 0x10F2D4u);
    ctx->pc = 0x10F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F2CCu;
    // 0x10f2d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10F2D4u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F2D4u) { return; }
    ctx->pc = 0x10F2D4u;
label_10f2d4:
    // 0x10f2d4: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F2D4u;
    {
        const bool branch_taken_0x10f2d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2D4u;
        // 0x10f2d8: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f2d4) {
            ctx->pc = 0x10F2F0u;
            return;
        }
    }
    ctx->pc = 0x10F2DCu;
    // 0x10f2dc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10f2e0: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F2E0u;
    SET_GPR_U32(ctx, 31, 0x10F2E8u);
    ctx->pc = 0x10F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F2E0u;
    // 0x10f2e4: 0x8c4445bc  lw          $a0, 0x45BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F2E8u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F2E8u) { return; }
    ctx->pc = 0x10F2E8u;
label_10f2e8:
    // 0x10f2e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10F2E8u;
    {
        const bool branch_taken_0x10f2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2E8u;
        // 0x10f2ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f2e8) {
            ctx->pc = 0x10F330u;
            return;
        }
    }
    ctx->pc = 0x10F2F0u;
}
