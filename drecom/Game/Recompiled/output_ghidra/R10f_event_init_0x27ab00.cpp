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

// Function: R10f_event_init
// Address: 0x27ab00 - 0x27ab30
void R10f_event_init_0x27ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10f_event_init_0x27ab00");
#endif

    switch (ctx->pc) {
        case 0x27ab1cu: goto label_27ab1c;
        default: break;
    }

    ctx->pc = 0x27ab00u;

    // 0x27ab00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27ab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27ab04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27ab04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27ab08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27ab0c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27ab10: 0x24501ac0  addiu       $s0, $v0, 0x1AC0
    ctx->pc = 0x27ab10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x27ab14: 0xc0a1244  jal         func_284910
    ctx->pc = 0x27AB14u;
    SET_GPR_U32(ctx, 31, 0x27AB1Cu);
    ctx->pc = 0x284910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284910u, 0x27AB14u, 0x27AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB1Cu;
label_27ab1c:
    // 0x27ab1c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27ab1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ab20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ab20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ab24: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27ab24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ab28: 0x3e00008  jr          $ra
    ctx->pc = 0x27AB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AB30u;
}
