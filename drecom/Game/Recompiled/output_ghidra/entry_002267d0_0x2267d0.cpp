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

// Function: entry_002267d0
// Address: 0x2267d0 - 0x226814
void entry_002267d0_0x2267d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002267d0_0x2267d0");
#endif

    ctx->pc = 0x2267d0u;

    // 0x2267d0: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x2267d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x2267d4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2267d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2267d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2267d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2267dc: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2267DCu;
    {
        const bool branch_taken_0x2267dc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2267dc) {
            ctx->pc = 0x226814u;
            return;
        }
    }
    ctx->pc = 0x2267E4u;
    // 0x2267e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2267e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2267e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2267ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2267f0: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2267f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2267f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267f8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2267f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2267fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226800: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x226800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226804: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226808: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x226808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22680c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226810: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x226810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x226814u;
}
