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

// Function: entry_0032c98c
// Address: 0x32c98c - 0x32c9b4
void entry_0032c98c_0x32c98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c98c_0x32c98c");
#endif

    ctx->pc = 0x32c98cu;

    // 0x32c98c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c990: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c994: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32c994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c998: 0xafa60124  sw          $a2, 0x124($sp)
    ctx->pc = 0x32c998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 6));
    // 0x32c99c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9a0: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c9a4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9a8: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x32c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    // 0x32c9ac: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x32C9ACu;
    {
        const bool branch_taken_0x32c9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c9ac) {
            ctx->pc = 0x32CA1Cu;
            return;
        }
    }
    ctx->pc = 0x32C9B4u;
}
