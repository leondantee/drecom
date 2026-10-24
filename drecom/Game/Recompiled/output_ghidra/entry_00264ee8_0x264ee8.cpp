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

// Function: entry_00264ee8
// Address: 0x264ee8 - 0x264f18
void entry_00264ee8_0x264ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264ee8_0x264ee8");
#endif

    ctx->pc = 0x264ee8u;

    // 0x264ee8: 0xae1e009c  sw          $fp, 0x9C($s0)
    ctx->pc = 0x264ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 30));
    // 0x264eec: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x264eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x264ef0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x264ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x264ef4: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x264ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x264ef8: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x264ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x264efc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x264efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x264f00: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x264f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x264f04: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264f08: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264f0c: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264f10: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x264F10u;
    {
        const bool branch_taken_0x264f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264f10) {
            ctx->pc = 0x264F58u;
            return;
        }
    }
    ctx->pc = 0x264F18u;
}
