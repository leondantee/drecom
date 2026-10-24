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

// Function: entry_00264f80
// Address: 0x264f80 - 0x264f90
void entry_00264f80_0x264f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264f80_0x264f80");
#endif

    ctx->pc = 0x264f80u;

    // 0x264f80: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x264f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x264f84: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x264f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
    // 0x264f88: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x264f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x264f8c: 0xae031240  sw          $v1, 0x1240($s0)
    ctx->pc = 0x264f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 3));
    ctx->pc = 0x264f90u;
}
