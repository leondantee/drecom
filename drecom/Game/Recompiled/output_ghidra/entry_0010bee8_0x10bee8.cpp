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

// Function: entry_0010bee8
// Address: 0x10bee8 - 0x10bf04
void entry_0010bee8_0x10bee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bee8_0x10bee8");
#endif

    ctx->pc = 0x10bee8u;

label_10bee8:
    // 0x10bee8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10beec: 0x0  nop
    ctx->pc = 0x10beecu;
    // NOP
    // 0x10bef0: 0x0  nop
    ctx->pc = 0x10bef0u;
    // NOP
    // 0x10bef4: 0x0  nop
    ctx->pc = 0x10bef4u;
    // NOP
    // 0x10bef8: 0x0  nop
    ctx->pc = 0x10bef8u;
    // NOP
    // 0x10befc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BEFCu;
    {
        const bool branch_taken_0x10befc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10befc) {
            ctx->pc = 0x10BEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bee8;
        }
    }
    ctx->pc = 0x10BF04u;
}
