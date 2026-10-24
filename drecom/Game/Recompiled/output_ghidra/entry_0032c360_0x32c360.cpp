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

// Function: entry_0032c360
// Address: 0x32c360 - 0x32c388
void entry_0032c360_0x32c360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c360_0x32c360");
#endif

    ctx->pc = 0x32c360u;

    // 0x32c360: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c364: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c368: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32c368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c36c: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x32c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x32c370: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32c370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c374: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x32c374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x32c378: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c37c: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c380: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x32C380u;
    {
        const bool branch_taken_0x32c380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c380) {
            ctx->pc = 0x32C3F8u;
            return;
        }
    }
    ctx->pc = 0x32C388u;
}
