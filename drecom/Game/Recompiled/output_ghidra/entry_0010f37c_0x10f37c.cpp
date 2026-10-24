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

// Function: entry_0010f37c
// Address: 0x10f37c - 0x10f3c8
void entry_0010f37c_0x10f37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f37c_0x10f37c");
#endif

    switch (ctx->pc) {
        case 0x10f3acu: goto label_10f3ac;
        case 0x10f3c0u: goto label_10f3c0;
        default: break;
    }

    ctx->pc = 0x10f37cu;

    // 0x10f37c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10f380: 0x24504bc0  addiu       $s0, $v0, 0x4BC0
    ctx->pc = 0x10f380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19392));
    // 0x10f384: 0x24844fe0  addiu       $a0, $a0, 0x4FE0
    ctx->pc = 0x10f384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20448));
    // 0x10f388: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f38c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x10f38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x10f390: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f394: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10f394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f398: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f39c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10f39cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3a0: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x10f3a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10f3a4: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10F3A4u;
    SET_GPR_U32(ctx, 31, 0x10F3ACu);
    ctx->pc = 0x10F3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3A4u;
    // 0x10f3a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10F3ACu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F3ACu) { return; }
    ctx->pc = 0x10F3ACu;
label_10f3ac:
    // 0x10f3ac: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F3ACu;
    {
        const bool branch_taken_0x10f3ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3ACu;
        // 0x10f3b0: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3ac) {
            ctx->pc = 0x10F3C8u;
            return;
        }
    }
    ctx->pc = 0x10F3B4u;
    // 0x10f3b4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10f3b8: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F3B8u;
    SET_GPR_U32(ctx, 31, 0x10F3C0u);
    ctx->pc = 0x10F3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3B8u;
    // 0x10f3bc: 0x8c4445bc  lw          $a0, 0x45BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F3C0u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F3C0u) { return; }
    ctx->pc = 0x10F3C0u;
label_10f3c0:
    // 0x10f3c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x10F3C0u;
    {
        const bool branch_taken_0x10f3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3C0u;
        // 0x10f3c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3c0) {
            ctx->pc = 0x10F418u;
            return;
        }
    }
    ctx->pc = 0x10F3C8u;
}
