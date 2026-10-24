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

// Function: entry_002d8640
// Address: 0x2d8640 - 0x2d8684
void entry_002d8640_0x2d8640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8640_0x2d8640");
#endif

    ctx->pc = 0x2d8640u;

    // 0x2d8640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8644: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8648: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d864c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d864cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8650: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8654: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8658: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d865c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d865cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8660: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8664: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8668: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d866c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d866cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8670: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d8670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8674: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8678: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8678u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d867c: 0x10000240  b           . + 4 + (0x240 << 2)
    ctx->pc = 0x2D867Cu;
    {
        const bool branch_taken_0x2d867c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d867c) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8684u;
}
