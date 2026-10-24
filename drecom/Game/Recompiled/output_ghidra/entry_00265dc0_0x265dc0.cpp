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

// Function: entry_00265dc0
// Address: 0x265dc0 - 0x265dd0
void entry_00265dc0_0x265dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265dc0_0x265dc0");
#endif

    ctx->pc = 0x265dc0u;

    // 0x265dc0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x265dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x265dc4: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x265dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
    // 0x265dc8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x265dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x265dcc: 0xae031240  sw          $v1, 0x1240($s0)
    ctx->pc = 0x265dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 3));
    ctx->pc = 0x265dd0u;
}
