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

// Function: entry_0032c308
// Address: 0x32c308 - 0x32c330
void entry_0032c308_0x32c308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c308_0x32c308");
#endif

    ctx->pc = 0x32c308u;

    // 0x32c308: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x32c308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x32c30c: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x32c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x32c310: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x32c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x32c314: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c318: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32c318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32c31c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c320: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c324: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c328: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x32C328u;
    {
        const bool branch_taken_0x32c328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c328) {
            ctx->pc = 0x32C3F8u;
            return;
        }
    }
    ctx->pc = 0x32C330u;
}
