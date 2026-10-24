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

// Function: entry_0032c3d8
// Address: 0x32c3d8 - 0x32c3f8
void entry_0032c3d8_0x32c3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c3d8_0x32c3d8");
#endif

    ctx->pc = 0x32c3d8u;

    // 0x32c3d8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c3dc: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c3e0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c3e4: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c3e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c3ec: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c3f0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c3f4: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x32c3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    ctx->pc = 0x32c3f8u;
}
