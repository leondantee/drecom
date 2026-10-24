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

// Function: entry_0032c9fc
// Address: 0x32c9fc - 0x32ca1c
void entry_0032c9fc_0x32c9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c9fc_0x32c9fc");
#endif

    ctx->pc = 0x32c9fcu;

    // 0x32c9fc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ca00: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x32ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x32ca04: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ca08: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32ca0c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ca10: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32ca14: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ca18: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    ctx->pc = 0x32ca1cu;
}
