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

// Function: entry_0010fdfc
// Address: 0x10fdfc - 0x10fe0c
void entry_0010fdfc_0x10fdfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fdfc_0x10fdfc");
#endif

    ctx->pc = 0x10fdfcu;

    // 0x10fdfc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FDFCu;
    {
        const bool branch_taken_0x10fdfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDFCu;
        // 0x10fe00: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fdfc) {
            ctx->pc = 0x10FE0Cu;
            return;
        }
    }
    ctx->pc = 0x10FE04u;
    // 0x10fe04: 0xc046760  jal         func_119D80
    ctx->pc = 0x10FE04u;
    SET_GPR_U32(ctx, 31, 0x10FE0Cu);
    ctx->pc = 0x10FE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE04u;
    // 0x10fe08: 0x2484cd58  addiu       $a0, $a0, -0x32A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10FE0Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FE0Cu) { return; }
    ctx->pc = 0x10FE0Cu;
}
