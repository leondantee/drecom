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

// Function: entry_0010e8dc
// Address: 0x10e8dc - 0x10e904
void entry_0010e8dc_0x10e8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e8dc_0x10e8dc");
#endif

    switch (ctx->pc) {
        case 0x10e8f8u: goto label_10e8f8;
        default: break;
    }

    ctx->pc = 0x10e8dcu;

    // 0x10e8dc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10e8e0: 0x8c4345c4  lw          $v1, 0x45C4($v0)
    ctx->pc = 0x10e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3845C4u));
    // 0x10e8e4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E8E4u;
    {
        const bool branch_taken_0x10e8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8E4u;
        // 0x10e8e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8e4) {
            ctx->pc = 0x10E904u;
            return;
        }
    }
    ctx->pc = 0x10E8ECu;
    // 0x10e8ec: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10e8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10e8f0: 0xc085766  jal         func_215D98
    ctx->pc = 0x10E8F0u;
    SET_GPR_U32(ctx, 31, 0x10E8F8u);
    ctx->pc = 0x10E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8F0u;
    // 0x10e8f4: 0x24843e80  addiu       $a0, $a0, 0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215D98u;
    {
        ctx->pc = 0x10E8F8u;
        ps2_stubs::sceSifCheckStatRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E8F8u) { return; }
    ctx->pc = 0x10E8F8u;
label_10e8f8:
    // 0x10e8f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E8F8u;
    {
        const bool branch_taken_0x10e8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8F8u;
        // 0x10e8fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8f8) {
            ctx->pc = 0x10E904u;
            return;
        }
    }
    ctx->pc = 0x10E900u;
    // 0x10e900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10e900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10e904u;
}
