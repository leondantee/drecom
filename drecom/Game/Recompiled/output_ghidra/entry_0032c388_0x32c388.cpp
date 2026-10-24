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

// Function: entry_0032c388
// Address: 0x32c388 - 0x32c3b0
void entry_0032c388_0x32c388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c388_0x32c388");
#endif

    ctx->pc = 0x32c388u;

    // 0x32c388: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c38c: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x32c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x32c390: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c394: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c398: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c39c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c3a0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c3a4: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c3a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x32C3A8u;
    {
        const bool branch_taken_0x32c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c3a8) {
            ctx->pc = 0x32C3F8u;
            return;
        }
    }
    ctx->pc = 0x32C3B0u;
}
