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

// Function: entry_001ca630
// Address: 0x1ca630 - 0x1ca668
void entry_001ca630_0x1ca630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca630_0x1ca630");
#endif

    ctx->pc = 0x1ca630u;

    // 0x1ca630: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca634: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca638: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ca638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca63c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca640: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1ca640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca644: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca648: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ca648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca64c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ca64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca650: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1ca650u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca654: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1ca654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ca658: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca65c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1ca65cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1ca660: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1CA660u;
    {
        const bool branch_taken_0x1ca660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca660) {
            ctx->pc = 0x1CA8E8u;
            return;
        }
    }
    ctx->pc = 0x1CA668u;
}
