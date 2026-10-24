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

// Function: entry_0010d3d4
// Address: 0x10d3d4 - 0x10d3f0
void entry_0010d3d4_0x10d3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d3d4_0x10d3d4");
#endif

    ctx->pc = 0x10d3d4u;

    // 0x10d3d4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10D3D4u;
    {
        const bool branch_taken_0x10d3d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10d3d4) {
            ctx->pc = 0x10D410u;
            return;
        }
    }
    ctx->pc = 0x10D3DCu;
    // 0x10d3dc: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x10d3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x10d3e0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10D3E0u;
    {
        const bool branch_taken_0x10d3e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3E0u;
        // 0x10d3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3e0) {
            ctx->pc = 0x10D410u;
            return;
        }
    }
    ctx->pc = 0x10D3E8u;
    // 0x10d3e8: 0x24c70050  addiu       $a3, $a2, 0x50
    ctx->pc = 0x10d3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x10d3ec: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x10d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    ctx->pc = 0x10d3f0u;
}
