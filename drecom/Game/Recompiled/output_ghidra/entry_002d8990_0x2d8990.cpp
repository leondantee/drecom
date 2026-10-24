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

// Function: entry_002d8990
// Address: 0x2d8990 - 0x2d89cc
void entry_002d8990_0x2d8990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8990_0x2d8990");
#endif

    ctx->pc = 0x2d8990u;

    // 0x2d8990: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8994: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8998: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d899c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d89a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d89a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d89a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d89a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d89a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d89ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d89acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d89b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d89b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d89b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d89b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d89b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d89bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d89bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d89c0: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d89c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d89c4: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x2D89C4u;
    {
        const bool branch_taken_0x2d89c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d89c4) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D89CCu;
}
