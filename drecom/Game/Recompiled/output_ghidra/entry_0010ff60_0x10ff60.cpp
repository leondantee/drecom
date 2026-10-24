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

// Function: entry_0010ff60
// Address: 0x10ff60 - 0x10ff84
void entry_0010ff60_0x10ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ff60_0x10ff60");
#endif

    switch (ctx->pc) {
        case 0x10ff78u: goto label_10ff78;
        default: break;
    }

    ctx->pc = 0x10ff60u;

    // 0x10ff60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10ff64: 0x2842020e  slti        $v0, $v0, 0x20E
    ctx->pc = 0x10ff64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)526) ? 1 : 0);
    // 0x10ff68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FF68u;
    {
        const bool branch_taken_0x10ff68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF68u;
        // 0x10ff6c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff68) {
            ctx->pc = 0x10FF84u;
            return;
        }
    }
    ctx->pc = 0x10FF70u;
    // 0x10ff70: 0xc046760  jal         func_119D80
    ctx->pc = 0x10FF70u;
    SET_GPR_U32(ctx, 31, 0x10FF78u);
    ctx->pc = 0x10FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF70u;
    // 0x10ff74: 0x2484d040  addiu       $a0, $a0, -0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10FF78u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FF78u) { return; }
    ctx->pc = 0x10FF78u;
label_10ff78:
    // 0x10ff78: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x10ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x10ff7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10FF7Cu;
    {
        const bool branch_taken_0x10ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF7Cu;
        // 0x10ff80: 0x2402ff87  addiu       $v0, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff7c) {
            ctx->pc = 0x10FF88u;
            return;
        }
    }
    ctx->pc = 0x10FF84u;
}
