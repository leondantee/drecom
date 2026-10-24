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

// Function: caseD_7
// Address: 0x123df8 - 0x123e28
void caseD_7_0x123df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x123df8");
#endif

    switch (ctx->pc) {
        case 0x123e00u: goto label_123e00;
        default: break;
    }

    ctx->pc = 0x123df8u;

    // 0x123df8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x123DF8u;
    SET_GPR_U32(ctx, 31, 0x123E00u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x123DF8u, 0x123E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E00u;
label_123e00:
    // 0x123e00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x123e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x123e04: 0x30530003  andi        $s3, $v0, 0x3
    ctx->pc = 0x123e04u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x123e08: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x123E08u;
    {
        const bool branch_taken_0x123e08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x123e08) {
            ctx->pc = 0x123E28u;
            return;
        }
    }
    ctx->pc = 0x123E10u;
    // 0x123e10: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123e14: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x123e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x123e18: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x123e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x123e1c: 0xa4a2000e  sh          $v0, 0xE($a1)
    ctx->pc = 0x123e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x123e20: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x123E20u;
    {
        const bool branch_taken_0x123e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e20) {
            ctx->pc = 0x123E68u;
            return;
        }
    }
    ctx->pc = 0x123E28u;
}
