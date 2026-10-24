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

// Function: entry_0010f8dc
// Address: 0x10f8dc - 0x10f940
void entry_0010f8dc_0x10f8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f8dc_0x10f8dc");
#endif

    switch (ctx->pc) {
        case 0x10f8f0u: goto label_10f8f0;
        case 0x10f924u: goto label_10f924;
        case 0x10f938u: goto label_10f938;
        default: break;
    }

    ctx->pc = 0x10f8dcu;

    // 0x10f8dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10f8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f8e0: 0x245051a0  addiu       $s0, $v0, 0x51A0
    ctx->pc = 0x10f8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20896));
    // 0x10f8e4: 0xac5151a0  sw          $s1, 0x51A0($v0)
    ctx->pc = 0x10f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20896), GPR_U32(ctx, 17));
    // 0x10f8e8: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10F8E8u;
    SET_GPR_U32(ctx, 31, 0x10F8F0u);
    ctx->pc = 0x10F8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F8E8u;
    // 0x10f8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10F8F0u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F8F0u) { return; }
    ctx->pc = 0x10F8F0u;
label_10f8f0:
    // 0x10f8f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10f8f4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10f8f8: 0x24514bc0  addiu       $s1, $v0, 0x4BC0
    ctx->pc = 0x10f8f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19392));
    // 0x10f8fc: 0x24844fe0  addiu       $a0, $a0, 0x4FE0
    ctx->pc = 0x10f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20448));
    // 0x10f900: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10f900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f904: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f908: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x10f908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10f90c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f910: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x10f910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f914: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x10f914u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f918: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x10f918u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10f91c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10F91Cu;
    SET_GPR_U32(ctx, 31, 0x10F924u);
    ctx->pc = 0x10F920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F91Cu;
    // 0x10f920: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10F924u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F924u) { return; }
    ctx->pc = 0x10F924u;
label_10f924:
    // 0x10f924: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F924u;
    {
        const bool branch_taken_0x10f924 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F924u;
        // 0x10f928: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f924) {
            ctx->pc = 0x10F940u;
            return;
        }
    }
    ctx->pc = 0x10F92Cu;
    // 0x10f92c: 0x8c4445bc  lw          $a0, 0x45BC($v0)
    ctx->pc = 0x10f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
    // 0x10f930: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F930u;
    SET_GPR_U32(ctx, 31, 0x10F938u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F938u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F938u) { return; }
    ctx->pc = 0x10F938u;
label_10f938:
    // 0x10f938: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10F938u;
    {
        const bool branch_taken_0x10f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F938u;
        // 0x10f93c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f938) {
            ctx->pc = 0x10F974u;
            return;
        }
    }
    ctx->pc = 0x10F940u;
}
