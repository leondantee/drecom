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

// Function: entry_0037845c
// Address: 0x37845c - 0x378478
void entry_0037845c_0x37845c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037845c_0x37845c");
#endif

    ctx->pc = 0x37845cu;

    // 0x37845c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37845cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378460: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x378460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x378464: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x378464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x378468: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x378468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x37846c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x37846cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x378470: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x378470u;
    {
        const bool branch_taken_0x378470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378470) {
            ctx->pc = 0x3784B0u;
            return;
        }
    }
    ctx->pc = 0x378478u;
}
