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

// Function: entry_001b4c94
// Address: 0x1b4c94 - 0x1b4cc8
void entry_001b4c94_0x1b4c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4c94_0x1b4c94");
#endif

    ctx->pc = 0x1b4c94u;

    // 0x1b4c94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4c98: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b4c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b4c9c: 0x3c032800  lui         $v1, 0x2800
    ctx->pc = 0x1b4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10240 << 16));
    // 0x1b4ca0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b4ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b4ca4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4CA4u;
    {
        const bool branch_taken_0x1b4ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ca4) {
            ctx->pc = 0x1B4CC8u;
            return;
        }
    }
    ctx->pc = 0x1B4CACu;
    // 0x1b4cac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4cb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4cb4: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b4cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4cb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4cbc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4cc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4CC0u;
    {
        const bool branch_taken_0x1b4cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4cc0) {
            ctx->pc = 0x1B4CE8u;
            return;
        }
    }
    ctx->pc = 0x1B4CC8u;
}
