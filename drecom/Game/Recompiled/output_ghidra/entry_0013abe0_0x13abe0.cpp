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

// Function: entry_0013abe0
// Address: 0x13abe0 - 0x13abf8
void entry_0013abe0_0x13abe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013abe0_0x13abe0");
#endif

    ctx->pc = 0x13abe0u;

    // 0x13abe0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13abe4: 0x8c621b68  lw          $v0, 0x1B68($v1)
    ctx->pc = 0x13abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
    // 0x13abe8: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x13abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x13abec: 0xac641b68  sw          $a0, 0x1B68($v1)
    ctx->pc = 0x13abecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 4));
    // 0x13abf0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13ABF0u;
    {
        const bool branch_taken_0x13abf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13abf0) {
            ctx->pc = 0x13AC60u;
            return;
        }
    }
    ctx->pc = 0x13ABF8u;
}
