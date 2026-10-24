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

// Function: Title_exit
// Address: 0x1a2d20 - 0x1a2d7c
void Title_exit_0x1a2d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Title_exit_0x1a2d20");
#endif

    switch (ctx->pc) {
        case 0x1a2d54u: goto label_1a2d54;
        case 0x1a2d6cu: goto label_1a2d6c;
        default: break;
    }

    ctx->pc = 0x1a2d20u;

    // 0x1a2d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2d24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1a2d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a2d28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2d2c: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1a2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1a2d30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2d34: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a2d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2d38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2d3c: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x1a2d3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x1a2d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2d44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2d48: 0xac220b04  sw          $v0, 0xB04($at)
    ctx->pc = 0x1a2d48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0B04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0B04u, _value); } while (0);
    // 0x1a2d4c: 0xc050798  jal         func_141E60
    ctx->pc = 0x1A2D4Cu;
    SET_GPR_U32(ctx, 31, 0x1A2D54u);
    ctx->pc = 0x141E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141E60u, 0x1A2D4Cu, 0x1A2D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D54u;
label_1a2d54:
    // 0x1a2d54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2d58: 0xac200b00  sw          $zero, 0xB00($at)
    ctx->pc = 0x1a2d58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D0B00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0B00u, _value); } while (0);
    // 0x1a2d5c: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x1a2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x1a2d60: 0x24440140  addiu       $a0, $v0, 0x140
    ctx->pc = 0x1a2d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1a2d64: 0xc067498  jal         func_19D260
    ctx->pc = 0x1A2D64u;
    SET_GPR_U32(ctx, 31, 0x1A2D6Cu);
    ctx->pc = 0x19D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D260u, 0x1A2D64u, 0x1A2D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D6Cu;
label_1a2d6c:
    // 0x1a2d6c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a2d6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2d70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a2d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a2d74: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D7Cu;
}
