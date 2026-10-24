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

// Function: entry_00192370
// Address: 0x192370 - 0x192388
void entry_00192370_0x192370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192370_0x192370");
#endif

    ctx->pc = 0x192370u;

    // 0x192370: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x192370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x192374: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192374u;
    {
        const bool branch_taken_0x192374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192374) {
            ctx->pc = 0x192388u;
            return;
        }
    }
    ctx->pc = 0x19237Cu;
    // 0x19237c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192380: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x192380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x192384: 0x0  nop
    ctx->pc = 0x192384u;
    // NOP
    ctx->pc = 0x192388u;
}
