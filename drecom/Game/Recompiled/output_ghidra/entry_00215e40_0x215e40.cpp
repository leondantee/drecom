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

// Function: entry_00215e40
// Address: 0x215e40 - 0x215e60
void entry_00215e40_0x215e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215e40_0x215e40");
#endif

    ctx->pc = 0x215e40u;

label_215e40:
    // 0x215e40: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x215e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e44: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x215e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x215e48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x215e48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e4c: 0x0  nop
    ctx->pc = 0x215e4cu;
    // NOP
    // 0x215e50: 0x0  nop
    ctx->pc = 0x215e50u;
    // NOP
    // 0x215e54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x215E54u;
    {
        const bool branch_taken_0x215e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215e54) {
            ctx->pc = 0x215E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215e40;
        }
    }
    ctx->pc = 0x215E5Cu;
    // 0x215e5c: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x215e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    ctx->pc = 0x215e60u;
}
