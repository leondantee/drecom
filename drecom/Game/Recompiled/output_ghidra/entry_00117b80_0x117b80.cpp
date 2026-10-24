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

// Function: entry_00117b80
// Address: 0x117b80 - 0x117b94
void entry_00117b80_0x117b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117b80_0x117b80");
#endif

    ctx->pc = 0x117b80u;

    // 0x117b80: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x117b80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x117b84: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x117b84u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x117b88: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x117b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x117b8c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x117B8Cu;
    {
        const bool branch_taken_0x117b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B8Cu;
        // 0x117b90: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b8c) {
            ctx->pc = 0x117A40u;
            return;
        }
    }
    ctx->pc = 0x117B94u;
}
