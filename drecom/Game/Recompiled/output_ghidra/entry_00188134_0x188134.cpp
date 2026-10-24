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

// Function: entry_00188134
// Address: 0x188134 - 0x188154
void entry_00188134_0x188134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188134_0x188134");
#endif

    switch (ctx->pc) {
        case 0x188144u: goto label_188144;
        default: break;
    }

    ctx->pc = 0x188134u;

    // 0x188134: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x188134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x188138: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x188138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18813c: 0xc061ed8  jal         func_187B60
    ctx->pc = 0x18813Cu;
    SET_GPR_U32(ctx, 31, 0x188144u);
    ctx->pc = 0x187B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187B60u, 0x18813Cu, 0x188144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188144u;
label_188144:
    // 0x188144: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188144u;
    {
        const bool branch_taken_0x188144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188144) {
            ctx->pc = 0x188154u;
            return;
        }
    }
    ctx->pc = 0x18814Cu;
    // 0x18814c: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x18814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x188150: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x188150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    ctx->pc = 0x188154u;
}
