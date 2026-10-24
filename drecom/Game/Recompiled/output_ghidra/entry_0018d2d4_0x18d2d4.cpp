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

// Function: entry_0018d2d4
// Address: 0x18d2d4 - 0x18d2e8
void entry_0018d2d4_0x18d2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d2d4_0x18d2d4");
#endif

    ctx->pc = 0x18d2d4u;

    // 0x18d2d4: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x18d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x18d2d8: 0xae020b20  sw          $v0, 0xB20($s0)
    ctx->pc = 0x18d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2848), GPR_U32(ctx, 2));
    // 0x18d2dc: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x18d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x18d2e0: 0xac500b24  sw          $s0, 0xB24($v0)
    ctx->pc = 0x18d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2852), GPR_U32(ctx, 16));
    // 0x18d2e4: 0xae50006c  sw          $s0, 0x6C($s2)
    ctx->pc = 0x18d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 16));
    ctx->pc = 0x18d2e8u;
}
