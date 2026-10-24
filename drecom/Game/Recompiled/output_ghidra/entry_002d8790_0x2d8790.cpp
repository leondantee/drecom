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

// Function: entry_002d8790
// Address: 0x2d8790 - 0x2d87d4
void entry_002d8790_0x2d8790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8790_0x2d8790");
#endif

    ctx->pc = 0x2d8790u;

    // 0x2d8790: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8794: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8798: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d879c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d879cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d87a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d87a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d87a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d87a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d87a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d87a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d87ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d87acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d87b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d87b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d87b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d87b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d87b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d87b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d87bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d87c0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d87c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d87c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d87c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d87c8: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d87c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d87cc: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x2D87CCu;
    {
        const bool branch_taken_0x2d87cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d87cc) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D87D4u;
}
