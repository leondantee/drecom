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

// Function: entry_0010f1fc
// Address: 0x10f1fc - 0x10f248
void entry_0010f1fc_0x10f1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f1fc_0x10f1fc");
#endif

    switch (ctx->pc) {
        case 0x10f22cu: goto label_10f22c;
        case 0x10f240u: goto label_10f240;
        default: break;
    }

    ctx->pc = 0x10f1fcu;

    // 0x10f1fc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10f200: 0x24504bc0  addiu       $s0, $v0, 0x4BC0
    ctx->pc = 0x10f200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19392));
    // 0x10f204: 0x24844fe0  addiu       $a0, $a0, 0x4FE0
    ctx->pc = 0x10f204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20448));
    // 0x10f208: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f20c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10f20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f214: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10f214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f218: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f21c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10f21cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f220: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x10f220u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f224: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10F224u;
    SET_GPR_U32(ctx, 31, 0x10F22Cu);
    ctx->pc = 0x10F228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F224u;
    // 0x10f228: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10F22Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F22Cu) { return; }
    ctx->pc = 0x10F22Cu;
label_10f22c:
    // 0x10f22c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F22Cu;
    {
        const bool branch_taken_0x10f22c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F22Cu;
        // 0x10f230: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f22c) {
            ctx->pc = 0x10F248u;
            return;
        }
    }
    ctx->pc = 0x10F234u;
    // 0x10f234: 0x8c4445bc  lw          $a0, 0x45BC($v0)
    ctx->pc = 0x10f234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
    // 0x10f238: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F238u;
    SET_GPR_U32(ctx, 31, 0x10F240u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F240u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F240u) { return; }
    ctx->pc = 0x10F240u;
label_10f240:
    // 0x10f240: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10F240u;
    {
        const bool branch_taken_0x10f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F240u;
        // 0x10f244: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f240) {
            ctx->pc = 0x10F260u;
            return;
        }
    }
    ctx->pc = 0x10F248u;
}
