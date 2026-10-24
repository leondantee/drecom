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

// Function: entry_0030221c
// Address: 0x30221c - 0x302260
void entry_0030221c_0x30221c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030221c_0x30221c");
#endif

    ctx->pc = 0x30221cu;

    // 0x30221c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30221cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302220: 0x8c641274  lw          $a0, 0x1274($v1)
    ctx->pc = 0x302220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4724)));
    // 0x302224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302228: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x302228u;
    {
        const bool branch_taken_0x302228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x302228) {
            ctx->pc = 0x302260u;
            return;
        }
    }
    ctx->pc = 0x302230u;
    // 0x302230: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302234: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302238: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30223c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x30223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x302240: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302244: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302248: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30224c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30224cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302250: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302254: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302258: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30225c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30225cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x302260u;
}
