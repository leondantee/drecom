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

// Function: entry_0010f0ac
// Address: 0x10f0ac - 0x10f0f8
void entry_0010f0ac_0x10f0ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f0ac_0x10f0ac");
#endif

    switch (ctx->pc) {
        case 0x10f0dcu: goto label_10f0dc;
        case 0x10f0f0u: goto label_10f0f0;
        default: break;
    }

    ctx->pc = 0x10f0acu;

    // 0x10f0ac: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10f0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10f0b0: 0x24504bc0  addiu       $s0, $v0, 0x4BC0
    ctx->pc = 0x10f0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19392));
    // 0x10f0b4: 0x24844fe0  addiu       $a0, $a0, 0x4FE0
    ctx->pc = 0x10f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20448));
    // 0x10f0b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f0bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10f0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10f0c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10f0c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f0c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0cc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10f0ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0d0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x10f0d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f0d4: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10F0D4u;
    SET_GPR_U32(ctx, 31, 0x10F0DCu);
    ctx->pc = 0x10F0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0D4u;
    // 0x10f0d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10F0DCu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F0DCu) { return; }
    ctx->pc = 0x10F0DCu;
label_10f0dc:
    // 0x10f0dc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F0DCu;
    {
        const bool branch_taken_0x10f0dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0DCu;
        // 0x10f0e0: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0dc) {
            ctx->pc = 0x10F0F8u;
            return;
        }
    }
    ctx->pc = 0x10F0E4u;
    // 0x10f0e4: 0x8c4445bc  lw          $a0, 0x45BC($v0)
    ctx->pc = 0x10f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
    // 0x10f0e8: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F0E8u;
    SET_GPR_U32(ctx, 31, 0x10F0F0u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F0F0u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F0F0u) { return; }
    ctx->pc = 0x10F0F0u;
label_10f0f0:
    // 0x10f0f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10F0F0u;
    {
        const bool branch_taken_0x10f0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0F0u;
        // 0x10f0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0f0) {
            ctx->pc = 0x10F110u;
            return;
        }
    }
    ctx->pc = 0x10F0F8u;
}
