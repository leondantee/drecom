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

// Function: entry_0010f5f8
// Address: 0x10f5f8 - 0x10f648
void entry_0010f5f8_0x10f5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f5f8_0x10f5f8");
#endif

    switch (ctx->pc) {
        case 0x10f62cu: goto label_10f62c;
        case 0x10f640u: goto label_10f640;
        default: break;
    }

    ctx->pc = 0x10f5f8u;

    // 0x10f5f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10f5fc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10f600: 0x24504bc0  addiu       $s0, $v0, 0x4BC0
    ctx->pc = 0x10f600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19392));
    // 0x10f604: 0x24844fe0  addiu       $a0, $a0, 0x4FE0
    ctx->pc = 0x10f604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20448));
    // 0x10f608: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f60c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10f60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f610: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10f614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f618: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f61c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10f61cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f620: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x10f620u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10f624: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10F624u;
    SET_GPR_U32(ctx, 31, 0x10F62Cu);
    ctx->pc = 0x10F628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F624u;
    // 0x10f628: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10F62Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F62Cu) { return; }
    ctx->pc = 0x10F62Cu;
label_10f62c:
    // 0x10f62c: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F62Cu;
    {
        const bool branch_taken_0x10f62c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10f62c) {
            ctx->pc = 0x10F630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F62Cu;
            // 0x10f630: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F648u;
            return;
        }
    }
    ctx->pc = 0x10F634u;
    // 0x10f634: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10f634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10f638: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F638u;
    SET_GPR_U32(ctx, 31, 0x10F640u);
    ctx->pc = 0x10F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F638u;
    // 0x10f63c: 0x8c4445bc  lw          $a0, 0x45BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F640u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F640u) { return; }
    ctx->pc = 0x10F640u;
label_10f640:
    // 0x10f640: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10F640u;
    {
        const bool branch_taken_0x10f640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F640u;
        // 0x10f644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f640) {
            ctx->pc = 0x10F68Cu;
            return;
        }
    }
    ctx->pc = 0x10F648u;
}
