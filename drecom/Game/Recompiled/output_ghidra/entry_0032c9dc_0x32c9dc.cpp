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

// Function: entry_0032c9dc
// Address: 0x32c9dc - 0x32c9fc
void entry_0032c9dc_0x32c9dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c9dc_0x32c9dc");
#endif

    ctx->pc = 0x32c9dcu;

    // 0x32c9dc: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x32c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x32c9e0: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x32c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x32c9e4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x32c9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32c9e8: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x32c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x32c9ec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32c9f0: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32c9f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32C9F4u;
    {
        const bool branch_taken_0x32c9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c9f4) {
            ctx->pc = 0x32CA1Cu;
            return;
        }
    }
    ctx->pc = 0x32C9FCu;
}
