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

// Function: entry_001b1a40
// Address: 0x1b1a40 - 0x1b1a5c
void entry_001b1a40_0x1b1a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1a40_0x1b1a40");
#endif

    ctx->pc = 0x1b1a40u;

    // 0x1b1a40: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1b1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b1a44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b1a48: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x1b1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x1b1a4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1a50: 0x24530008  addiu       $s3, $v0, 0x8
    ctx->pc = 0x1b1a50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1b1a54: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B1A54u;
    {
        const bool branch_taken_0x1b1a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a54) {
            ctx->pc = 0x1B1AC0u;
            return;
        }
    }
    ctx->pc = 0x1B1A5Cu;
}
