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

// Function: entry_002161d0
// Address: 0x2161d0 - 0x2161e8
void entry_002161d0_0x2161d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002161d0_0x2161d0");
#endif

    switch (ctx->pc) {
        case 0x2161d8u: goto label_2161d8;
        default: break;
    }

    ctx->pc = 0x2161d0u;

    // 0x2161d0: 0xc084b78  jal         func_212DE0
    ctx->pc = 0x2161D0u;
    SET_GPR_U32(ctx, 31, 0x2161D8u);
    ctx->pc = 0x2161D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161D0u;
    // 0x2161d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DE0u;
    {
        ctx->pc = 0x2161D8u;
        ps2_stubs::sceSifSetDma(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2161D8u) { return; }
    ctx->pc = 0x2161D8u;
label_2161d8:
    // 0x2161d8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2161D8u;
    {
        const bool branch_taken_0x2161d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2161DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161D8u;
        // 0x2161dc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2161d8) {
            ctx->pc = 0x216210u;
            return;
        }
    }
    ctx->pc = 0x2161E0u;
    // 0x2161e0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2161e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2161e4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2161e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2161e8u;
}
