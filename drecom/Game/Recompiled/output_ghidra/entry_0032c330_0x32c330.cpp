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

// Function: entry_0032c330
// Address: 0x32c330 - 0x32c360
void entry_0032c330_0x32c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c330_0x32c330");
#endif

    ctx->pc = 0x32c330u;

    // 0x32c330: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32c334: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c338: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32c338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32c33c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x32c33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x32c340: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x32c340u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x32c344: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c348: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x32c348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32c34c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c350: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c354: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c358: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x32C358u;
    {
        const bool branch_taken_0x32c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c358) {
            ctx->pc = 0x32C3F8u;
            return;
        }
    }
    ctx->pc = 0x32C360u;
}
