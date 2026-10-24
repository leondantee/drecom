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

// Function: entry_0032c3b0
// Address: 0x32c3b0 - 0x32c3d8
void entry_0032c3b0_0x32c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c3b0_0x32c3b0");
#endif

    ctx->pc = 0x32c3b0u;

    // 0x32c3b0: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x32c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x32c3b4: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x32c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x32c3b8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x32c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32c3bc: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c3c0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c3c4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x32c3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x32c3c8: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x32c3c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x32c3cc: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c3d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32C3D0u;
    {
        const bool branch_taken_0x32c3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c3d0) {
            ctx->pc = 0x32C3F8u;
            return;
        }
    }
    ctx->pc = 0x32C3D8u;
}
