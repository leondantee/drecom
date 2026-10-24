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

// Function: entry_0010f51c
// Address: 0x10f51c - 0x10f580
void entry_0010f51c_0x10f51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f51c_0x10f51c");
#endif

    switch (ctx->pc) {
        case 0x10f530u: goto label_10f530;
        case 0x10f564u: goto label_10f564;
        case 0x10f578u: goto label_10f578;
        default: break;
    }

    ctx->pc = 0x10f51cu;

    // 0x10f51c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f520: 0x24505100  addiu       $s0, $v0, 0x5100
    ctx->pc = 0x10f520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20736));
    // 0x10f524: 0xac515100  sw          $s1, 0x5100($v0)
    ctx->pc = 0x10f524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20736), GPR_U32(ctx, 17));
    // 0x10f528: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10F528u;
    SET_GPR_U32(ctx, 31, 0x10F530u);
    ctx->pc = 0x10F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F528u;
    // 0x10f52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10F530u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F530u) { return; }
    ctx->pc = 0x10F530u;
label_10f530:
    // 0x10f530: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10f530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10f534: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10f534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10f538: 0x24514bc0  addiu       $s1, $v0, 0x4BC0
    ctx->pc = 0x10f538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19392));
    // 0x10f53c: 0x24844fe0  addiu       $a0, $a0, 0x4FE0
    ctx->pc = 0x10f53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20448));
    // 0x10f540: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10f540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f544: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f548: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x10f548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x10f54c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f550: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x10f550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f554: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x10f554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f558: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x10f558u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f55c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10F55Cu;
    SET_GPR_U32(ctx, 31, 0x10F564u);
    ctx->pc = 0x10F560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F55Cu;
    // 0x10f560: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10F564u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F564u) { return; }
    ctx->pc = 0x10F564u;
label_10f564:
    // 0x10f564: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F564u;
    {
        const bool branch_taken_0x10f564 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F564u;
        // 0x10f568: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f564) {
            ctx->pc = 0x10F580u;
            return;
        }
    }
    ctx->pc = 0x10F56Cu;
    // 0x10f56c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10f570: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F570u;
    SET_GPR_U32(ctx, 31, 0x10F578u);
    ctx->pc = 0x10F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F570u;
    // 0x10f574: 0x8c4445bc  lw          $a0, 0x45BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F578u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F578u) { return; }
    ctx->pc = 0x10F578u;
label_10f578:
    // 0x10f578: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10F578u;
    {
        const bool branch_taken_0x10f578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F578u;
        // 0x10f57c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f578) {
            ctx->pc = 0x10F598u;
            return;
        }
    }
    ctx->pc = 0x10F580u;
}
