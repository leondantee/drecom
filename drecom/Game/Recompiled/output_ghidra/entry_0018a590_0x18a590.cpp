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

// Function: entry_0018a590
// Address: 0x18a590 - 0x18a5a8
void entry_0018a590_0x18a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a590_0x18a590");
#endif

    ctx->pc = 0x18a590u;

    // 0x18a590: 0x26c3f4d0  addiu       $v1, $s6, -0xB30
    ctx->pc = 0x18a590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294964432));
    // 0x18a594: 0xaec30b28  sw          $v1, 0xB28($s6)
    ctx->pc = 0x18a594u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2856), GPR_U32(ctx, 3));
    // 0x18a598: 0x26c30b30  addiu       $v1, $s6, 0xB30
    ctx->pc = 0x18a598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 2864));
    // 0x18a59c: 0xaec30b2c  sw          $v1, 0xB2C($s6)
    ctx->pc = 0x18a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2860), GPR_U32(ctx, 3));
    // 0x18a5a0: 0x26d60b30  addiu       $s6, $s6, 0xB30
    ctx->pc = 0x18a5a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2864));
    // 0x18a5a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x18a5a8u;
}
