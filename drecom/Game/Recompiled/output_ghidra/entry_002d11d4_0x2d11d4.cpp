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

// Function: entry_002d11d4
// Address: 0x2d11d4 - 0x2d11f4
void entry_002d11d4_0x2d11d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d11d4_0x2d11d4");
#endif

    ctx->pc = 0x2d11d4u;

    // 0x2d11d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d11d8: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x2d11d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x2d11dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D11DCu;
    {
        const bool branch_taken_0x2d11dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d11dc) {
            ctx->pc = 0x2D11F4u;
            return;
        }
    }
    ctx->pc = 0x2D11E4u;
    // 0x2d11e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d11e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d11e8: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x2d11e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x2d11ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d11f0: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x2d11f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
    ctx->pc = 0x2d11f4u;
}
