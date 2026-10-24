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

// Function: entry_002db9a0
// Address: 0x2db9a0 - 0x2db9c4
void entry_002db9a0_0x2db9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db9a0_0x2db9a0");
#endif

    switch (ctx->pc) {
        case 0x2db9a8u: goto label_2db9a8;
        default: break;
    }

    ctx->pc = 0x2db9a0u;

    // 0x2db9a0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB9A0u;
    SET_GPR_U32(ctx, 31, 0x2DB9A8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB9A0u, 0x2DB9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB9A8u;
label_2db9a8:
    // 0x2db9a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2db9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db9ac: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2db9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2db9b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB9B0u;
    {
        const bool branch_taken_0x2db9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db9b0) {
            ctx->pc = 0x2DB9C4u;
            return;
        }
    }
    ctx->pc = 0x2DB9B8u;
    // 0x2db9b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2db9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db9bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db9c0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2db9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2db9c4u;
}
