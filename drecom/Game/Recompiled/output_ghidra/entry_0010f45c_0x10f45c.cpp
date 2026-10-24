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

// Function: entry_0010f45c
// Address: 0x10f45c - 0x10f4c0
void entry_0010f45c_0x10f45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f45c_0x10f45c");
#endif

    switch (ctx->pc) {
        case 0x10f470u: goto label_10f470;
        case 0x10f4a4u: goto label_10f4a4;
        case 0x10f4b8u: goto label_10f4b8;
        default: break;
    }

    ctx->pc = 0x10f45cu;

    // 0x10f45c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10f45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f460: 0x245050f0  addiu       $s0, $v0, 0x50F0
    ctx->pc = 0x10f460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20720));
    // 0x10f464: 0xac5150f0  sw          $s1, 0x50F0($v0)
    ctx->pc = 0x10f464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20720), GPR_U32(ctx, 17));
    // 0x10f468: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10F468u;
    SET_GPR_U32(ctx, 31, 0x10F470u);
    ctx->pc = 0x10F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F468u;
    // 0x10f46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10F470u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F470u) { return; }
    ctx->pc = 0x10F470u;
label_10f470:
    // 0x10f470: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10f470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10f474: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10f474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10f478: 0x24514bc0  addiu       $s1, $v0, 0x4BC0
    ctx->pc = 0x10f478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19392));
    // 0x10f47c: 0x24844fe0  addiu       $a0, $a0, 0x4FE0
    ctx->pc = 0x10f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20448));
    // 0x10f480: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10f480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f484: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f488: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x10f488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x10f48c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f490: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x10f490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f494: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x10f494u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f498: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x10f498u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f49c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10F49Cu;
    SET_GPR_U32(ctx, 31, 0x10F4A4u);
    ctx->pc = 0x10F4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F49Cu;
    // 0x10f4a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10F4A4u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F4A4u) { return; }
    ctx->pc = 0x10F4A4u;
label_10f4a4:
    // 0x10f4a4: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F4A4u;
    {
        const bool branch_taken_0x10f4a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4A4u;
        // 0x10f4a8: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4a4) {
            ctx->pc = 0x10F4C0u;
            return;
        }
    }
    ctx->pc = 0x10F4ACu;
    // 0x10f4ac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10f4b0: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F4B0u;
    SET_GPR_U32(ctx, 31, 0x10F4B8u);
    ctx->pc = 0x10F4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4B0u;
    // 0x10f4b4: 0x8c4445bc  lw          $a0, 0x45BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F4B8u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F4B8u) { return; }
    ctx->pc = 0x10F4B8u;
label_10f4b8:
    // 0x10f4b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10F4B8u;
    {
        const bool branch_taken_0x10f4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4B8u;
        // 0x10f4bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4b8) {
            ctx->pc = 0x10F4D8u;
            return;
        }
    }
    ctx->pc = 0x10F4C0u;
}
