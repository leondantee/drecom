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

// Function: entry_0035a6b8
// Address: 0x35a6b8 - 0x35a6ec
void entry_0035a6b8_0x35a6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a6b8_0x35a6b8");
#endif

    ctx->pc = 0x35a6b8u;

    // 0x35a6b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a6bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a6c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35a6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35a6c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a6c8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35a6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a6cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a6d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35a6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a6d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a6d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35a6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a6dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a6e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35a6e4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x35A6E4u;
    {
        const bool branch_taken_0x35a6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a6e4) {
            ctx->pc = 0x35A7D4u;
            return;
        }
    }
    ctx->pc = 0x35A6ECu;
}
