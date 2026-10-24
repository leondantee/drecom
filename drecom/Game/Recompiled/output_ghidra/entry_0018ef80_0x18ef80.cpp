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

// Function: entry_0018ef80
// Address: 0x18ef80 - 0x18ef94
void entry_0018ef80_0x18ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ef80_0x18ef80");
#endif

    ctx->pc = 0x18ef80u;

    // 0x18ef80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef84: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x18ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x18ef88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef8c: 0x8c420b24  lw          $v0, 0xB24($v0)
    ctx->pc = 0x18ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x18ef90: 0x0  nop
    ctx->pc = 0x18ef90u;
    // NOP
    ctx->pc = 0x18ef94u;
}
