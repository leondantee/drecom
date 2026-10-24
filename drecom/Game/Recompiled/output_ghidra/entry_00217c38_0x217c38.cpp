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

// Function: entry_00217c38
// Address: 0x217c38 - 0x217c48
void entry_00217c38_0x217c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217c38_0x217c38");
#endif

    switch (ctx->pc) {
        case 0x217c40u: goto label_217c40;
        default: break;
    }

    ctx->pc = 0x217c38u;

    // 0x217c38: 0xc084ba4  jal         func_212E90
    ctx->pc = 0x217C38u;
    SET_GPR_U32(ctx, 31, 0x217C40u);
    ctx->pc = 0x212E90u;
    {
        ctx->pc = 0x217C40u;
        ps2_stubs::sceResetttyinit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217C40u) { return; }
    ctx->pc = 0x217C40u;
label_217c40:
    // 0x217c40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x217C40u;
    {
        const bool branch_taken_0x217c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C40u;
        // 0x217c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c40) {
            ctx->pc = 0x217C4Cu;
            return;
        }
    }
    ctx->pc = 0x217C48u;
}
