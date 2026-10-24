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

// Function: entry_0018ecf0
// Address: 0x18ecf0 - 0x18ed04
void entry_0018ecf0_0x18ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ecf0_0x18ecf0");
#endif

    ctx->pc = 0x18ecf0u;

    // 0x18ecf0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x18ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x18ecf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ecf8: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x18ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
    // 0x18ecfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ed00: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x18ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x18ed04u;
}
