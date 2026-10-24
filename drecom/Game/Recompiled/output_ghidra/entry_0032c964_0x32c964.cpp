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

// Function: entry_0032c964
// Address: 0x32c964 - 0x32c98c
void entry_0032c964_0x32c964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c964_0x32c964");
#endif

    ctx->pc = 0x32c964u;

    // 0x32c964: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32c968: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c96c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32c970: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c974: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32c974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32c978: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c97c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c980: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c984: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x32C984u;
    {
        const bool branch_taken_0x32c984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c984) {
            ctx->pc = 0x32CA1Cu;
            return;
        }
    }
    ctx->pc = 0x32C98Cu;
}
