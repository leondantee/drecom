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

// Function: entry_0032c9b4
// Address: 0x32c9b4 - 0x32c9dc
void entry_0032c9b4_0x32c9b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c9b4_0x32c9b4");
#endif

    ctx->pc = 0x32c9b4u;

    // 0x32c9b4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9b8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c9bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9c0: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c9c4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9c8: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c9cc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9d0: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c9d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x32C9D4u;
    {
        const bool branch_taken_0x32c9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c9d4) {
            ctx->pc = 0x32CA1Cu;
            return;
        }
    }
    ctx->pc = 0x32C9DCu;
}
