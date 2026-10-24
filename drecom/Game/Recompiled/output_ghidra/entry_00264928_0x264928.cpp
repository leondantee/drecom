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

// Function: entry_00264928
// Address: 0x264928 - 0x264938
void entry_00264928_0x264928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264928_0x264928");
#endif

    ctx->pc = 0x264928u;

    // 0x264928: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x264928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26492c: 0xae230368  sw          $v1, 0x368($s1)
    ctx->pc = 0x26492cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 3));
    // 0x264930: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x264930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x264934: 0xae231240  sw          $v1, 0x1240($s1)
    ctx->pc = 0x264934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4672), GPR_U32(ctx, 3));
    ctx->pc = 0x264938u;
}
