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

// Function: entry_00118598
// Address: 0x118598 - 0x1185b4
void entry_00118598_0x118598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118598_0x118598");
#endif

    ctx->pc = 0x118598u;

label_118598:
    // 0x118598: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x118598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x11859c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x11859cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1185a0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1185a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1185a4: 0x0  nop
    ctx->pc = 0x1185a4u;
    // NOP
    // 0x1185a8: 0x0  nop
    ctx->pc = 0x1185a8u;
    // NOP
    // 0x1185ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1185ACu;
    {
        const bool branch_taken_0x1185ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1185ac) {
            ctx->pc = 0x118598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118598;
        }
    }
    ctx->pc = 0x1185B4u;
}
