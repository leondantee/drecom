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

// Function: entry_001a8f48
// Address: 0x1a8f48 - 0x1a8f68
void entry_001a8f48_0x1a8f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8f48_0x1a8f48");
#endif

    ctx->pc = 0x1a8f48u;

    // 0x1a8f48: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a8f4c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8f50: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1a8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1a8f54: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8F54u;
    {
        const bool branch_taken_0x1a8f54 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a8f54) {
            ctx->pc = 0x1A8F68u;
            return;
        }
    }
    ctx->pc = 0x1A8F5Cu;
    // 0x1a8f5c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a8f60: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a8f64: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x1a8f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    ctx->pc = 0x1a8f68u;
}
