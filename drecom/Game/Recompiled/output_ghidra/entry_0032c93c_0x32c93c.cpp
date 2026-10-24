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

// Function: entry_0032c93c
// Address: 0x32c93c - 0x32c964
void entry_0032c93c_0x32c93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c93c_0x32c93c");
#endif

    ctx->pc = 0x32c93cu;

    // 0x32c93c: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x32c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x32c940: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x32c940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x32c944: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x32c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x32c948: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x32c948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x32c94c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c950: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32c950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x32c954: 0x24160066  addiu       $s6, $zero, 0x66
    ctx->pc = 0x32c954u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x32c958: 0xafb6012c  sw          $s6, 0x12C($sp)
    ctx->pc = 0x32c958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 22));
    // 0x32c95c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x32C95Cu;
    {
        const bool branch_taken_0x32c95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c95c) {
            ctx->pc = 0x32CA1Cu;
            return;
        }
    }
    ctx->pc = 0x32C964u;
}
