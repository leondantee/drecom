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

// Function: entry_001a2460
// Address: 0x1a2460 - 0x1a2478
void entry_001a2460_0x1a2460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2460_0x1a2460");
#endif

    ctx->pc = 0x1a2460u;

    // 0x1a2460: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a2460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2464: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x1a2464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1a2468: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a2468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a246c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A246Cu;
    {
        const bool branch_taken_0x1a246c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a246c) {
            ctx->pc = 0x1A2480u;
            return;
        }
    }
    ctx->pc = 0x1A2474u;
    // 0x1a2474: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a2474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x1a2478u;
}
