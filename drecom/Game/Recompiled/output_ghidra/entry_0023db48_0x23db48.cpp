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

// Function: entry_0023db48
// Address: 0x23db48 - 0x23db74
void entry_0023db48_0x23db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023db48_0x23db48");
#endif

    switch (ctx->pc) {
        case 0x23db60u: goto label_23db60;
        default: break;
    }

    ctx->pc = 0x23db48u;

    // 0x23db48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23db4c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23db50: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23db50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23db54: 0x24100024  addiu       $s0, $zero, 0x24
    ctx->pc = 0x23db54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x23db58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23DB58u;
    SET_GPR_U32(ctx, 31, 0x23DB60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23DB58u, 0x23DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB60u;
label_23db60:
    // 0x23db60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23db60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23db64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23db64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23db68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23DB68u;
    {
        const bool branch_taken_0x23db68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23db68) {
            ctx->pc = 0x23DB74u;
            return;
        }
    }
    ctx->pc = 0x23DB70u;
    // 0x23db70: 0x24100024  addiu       $s0, $zero, 0x24
    ctx->pc = 0x23db70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->pc = 0x23db74u;
}
