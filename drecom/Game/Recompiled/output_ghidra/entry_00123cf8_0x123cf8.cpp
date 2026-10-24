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

// Function: entry_00123cf8
// Address: 0x123cf8 - 0x123d20
void entry_00123cf8_0x123cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123cf8_0x123cf8");
#endif

    switch (ctx->pc) {
        case 0x123d00u: goto label_123d00;
        default: break;
    }

    ctx->pc = 0x123cf8u;

    // 0x123cf8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x123CF8u;
    SET_GPR_U32(ctx, 31, 0x123D00u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x123CF8u, 0x123D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D00u;
label_123d00:
    // 0x123d00: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x123d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x123d04: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x123d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x123d08: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x123D08u;
    {
        const bool branch_taken_0x123d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d08) {
            ctx->pc = 0x123D20u;
            return;
        }
    }
    ctx->pc = 0x123D10u;
    // 0x123d10: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123d14: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x123d14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x123d18: 0x34830004  ori         $v1, $a0, 0x4
    ctx->pc = 0x123d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x123d1c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x123d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x123d20u;
}
