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

// Function: entry_0033ac0c
// Address: 0x33ac0c - 0x33ac48
void entry_0033ac0c_0x33ac0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ac0c_0x33ac0c");
#endif

    switch (ctx->pc) {
        case 0x33ac40u: goto label_33ac40;
        default: break;
    }

    ctx->pc = 0x33ac0cu;

    // 0x33ac0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ac10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ac14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ac18: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x33ac18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33ac1c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x33ac1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ac20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ac24: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x33ac24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x33ac28: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x33ac28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ac2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ac30: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x33ac30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x33ac34: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x33ac34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33ac38: 0xc0ce914  jal         func_33A450
    ctx->pc = 0x33AC38u;
    SET_GPR_U32(ctx, 31, 0x33AC40u);
    ctx->pc = 0x33A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A450u, 0x33AC38u, 0x33AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC40u;
label_33ac40:
    // 0x33ac40: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x33AC40u;
    {
        const bool branch_taken_0x33ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ac40) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33AC48u;
}
