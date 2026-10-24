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

// Function: entry_00279a1c
// Address: 0x279a1c - 0x279a54
void entry_00279a1c_0x279a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279a1c_0x279a1c");
#endif

    switch (ctx->pc) {
        case 0x279a34u: goto label_279a34;
        case 0x279a40u: goto label_279a40;
        default: break;
    }

    ctx->pc = 0x279a1cu;

    // 0x279a1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279a20: 0xac201aa0  sw          $zero, 0x1AA0($at)
    ctx->pc = 0x279a20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621AA0u, _value); } while (0);
    // 0x279a24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279a28: 0x2444f0f0  addiu       $a0, $v0, -0xF10
    ctx->pc = 0x279a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x279a2c: 0xc0a1048  jal         func_284120
    ctx->pc = 0x279A2Cu;
    SET_GPR_U32(ctx, 31, 0x279A34u);
    ctx->pc = 0x284120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284120u, 0x279A2Cu, 0x279A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A34u;
label_279a34:
    // 0x279a34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279a38: 0xc0c79e8  jal         func_31E7A0
    ctx->pc = 0x279A38u;
    SET_GPR_U32(ctx, 31, 0x279A40u);
    ctx->pc = 0x31E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7A0u, 0x279A38u, 0x279A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A40u;
label_279a40:
    // 0x279a40: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x279a40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279a48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x279a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x279a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x279A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279A54u;
}
