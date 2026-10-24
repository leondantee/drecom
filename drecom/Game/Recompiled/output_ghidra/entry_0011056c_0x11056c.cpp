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

// Function: entry_0011056c
// Address: 0x11056c - 0x1105ac
void entry_0011056c_0x11056c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011056c_0x11056c");
#endif

    switch (ctx->pc) {
        case 0x110574u: goto label_110574;
        case 0x11059cu: goto label_11059c;
        default: break;
    }

    ctx->pc = 0x11056cu;

    // 0x11056c: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x11056Cu;
    SET_GPR_U32(ctx, 31, 0x110574u);
    ctx->pc = 0x110570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11056Cu;
    // 0x110570: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x110574u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110574u) { return; }
    ctx->pc = 0x110574u;
label_110574:
    // 0x110574: 0x26445200  addiu       $a0, $s2, 0x5200
    ctx->pc = 0x110574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20992));
    // 0x110578: 0x26075280  addiu       $a3, $s0, 0x5280
    ctx->pc = 0x110578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 21120));
    // 0x11057c: 0x262967c0  addiu       $t1, $s1, 0x67C0
    ctx->pc = 0x11057cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 26560));
    // 0x110580: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x110580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x110584: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x110584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x110588: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11058c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11058cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x110590: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x110590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110594: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x110594u;
    SET_GPR_U32(ctx, 31, 0x11059Cu);
    ctx->pc = 0x110598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110594u;
    // 0x110598: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x11059Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11059Cu) { return; }
    ctx->pc = 0x11059Cu;
label_11059c:
    // 0x11059c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11059cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105a0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1105A0u;
    {
        const bool branch_taken_0x1105a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1105A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105A0u;
        // 0x1105a4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105a0) {
            ctx->pc = 0x1105B4u;
            return;
        }
    }
    ctx->pc = 0x1105A8u;
    // 0x1105a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1105a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x1105acu;
}
