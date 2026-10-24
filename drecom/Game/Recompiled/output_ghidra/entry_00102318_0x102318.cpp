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

// Function: entry_00102318
// Address: 0x102318 - 0x102328
void entry_00102318_0x102318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102318_0x102318");
#endif

    ctx->pc = 0x102318u;

    // 0x102318: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x102318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10231c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10231cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x102320: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x102320u;
    {
        const bool branch_taken_0x102320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102320u;
        // 0x102324: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102320) {
            ctx->pc = 0x1022D0u;
            return;
        }
    }
    ctx->pc = 0x102328u;
}
