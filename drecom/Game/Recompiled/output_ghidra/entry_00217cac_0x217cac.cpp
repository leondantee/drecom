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

// Function: entry_00217cac
// Address: 0x217cac - 0x217ccc
void entry_00217cac_0x217cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217cac_0x217cac");
#endif

    switch (ctx->pc) {
        case 0x217cc4u: goto label_217cc4;
        default: break;
    }

    ctx->pc = 0x217cacu;

    // 0x217cac: 0x2c420051  sltiu       $v0, $v0, 0x51
    ctx->pc = 0x217cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
    // 0x217cb0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x217CB0u;
    {
        const bool branch_taken_0x217cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CB0u;
        // 0x217cb4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217cb0) {
            ctx->pc = 0x217CCCu;
            return;
        }
    }
    ctx->pc = 0x217CB8u;
    // 0x217cb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cbc: 0xc046760  jal         func_119D80
    ctx->pc = 0x217CBCu;
    SET_GPR_U32(ctx, 31, 0x217CC4u);
    ctx->pc = 0x217CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CBCu;
    // 0x217cc0: 0x248410c0  addiu       $a0, $a0, 0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x217CC4u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217CC4u) { return; }
    ctx->pc = 0x217CC4u;
label_217cc4:
    // 0x217cc4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x217CC4u;
    {
        const bool branch_taken_0x217cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CC4u;
        // 0x217cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217cc4) {
            ctx->pc = 0x217D44u;
            return;
        }
    }
    ctx->pc = 0x217CCCu;
}
