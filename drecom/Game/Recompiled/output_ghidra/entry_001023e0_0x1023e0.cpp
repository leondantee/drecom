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

// Function: entry_001023e0
// Address: 0x1023e0 - 0x102400
void entry_001023e0_0x1023e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001023e0_0x1023e0");
#endif

    ctx->pc = 0x1023e0u;

label_1023e0:
    // 0x1023e0: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1023e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1023e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1023e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023e8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1023e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023ec: 0x0  nop
    ctx->pc = 0x1023ecu;
    // NOP
    // 0x1023f0: 0x0  nop
    ctx->pc = 0x1023f0u;
    // NOP
    // 0x1023f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1023F4u;
    {
        const bool branch_taken_0x1023f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1023f4) {
            ctx->pc = 0x1023E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1023e0;
        }
    }
    ctx->pc = 0x1023FCu;
    // 0x1023fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1023fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x102400u;
}
