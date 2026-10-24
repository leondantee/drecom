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

// Function: R111_init
// Address: 0x2785d0 - 0x278638
void R111_init_0x2785d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R111_init_0x2785d0");
#endif

    switch (ctx->pc) {
        case 0x2785ecu: goto label_2785ec;
        case 0x278608u: goto label_278608;
        case 0x27861cu: goto label_27861c;
        default: break;
    }

    ctx->pc = 0x2785d0u;

    // 0x2785d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2785d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2785d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2785d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2785d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2785d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2785dc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2785dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2785e0: 0x2444e130  addiu       $a0, $v0, -0x1ED0
    ctx->pc = 0x2785e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
    // 0x2785e4: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x2785E4u;
    SET_GPR_U32(ctx, 31, 0x2785ECu);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x2785E4u, 0x2785ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2785ECu;
label_2785ec:
    // 0x2785ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2785ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2785f0: 0x8c30f9f8  lw          $s0, -0x608($at)
    ctx->pc = 0x2785f0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9F8u));
    // 0x2785f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2785f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2785f8: 0x34420016  ori         $v0, $v0, 0x16
    ctx->pc = 0x2785f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
    // 0x2785fc: 0xae0212a8  sw          $v0, 0x12A8($s0)
    ctx->pc = 0x2785fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4776), GPR_U32(ctx, 2));
    // 0x278600: 0xc09e1b0  jal         func_2786C0
    ctx->pc = 0x278600u;
    SET_GPR_U32(ctx, 31, 0x278608u);
    ctx->pc = 0x2786C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2786C0u, 0x278600u, 0x278608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278608u;
label_278608:
    // 0x278608: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x278608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27860c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x278610: 0x24458840  addiu       $a1, $v0, -0x77C0
    ctx->pc = 0x278610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936640));
    // 0x278614: 0xc0848cc  jal         func_212330
    ctx->pc = 0x278614u;
    SET_GPR_U32(ctx, 31, 0x27861Cu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x278614u, 0x27861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27861Cu;
label_27861c:
    // 0x27861c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27861cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x278620: 0xac201a80  sw          $zero, 0x1A80($at)
    ctx->pc = 0x278620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A80u, _value); } while (0);
    // 0x278624: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x278624u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27862c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27862cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x278630: 0x3e00008  jr          $ra
    ctx->pc = 0x278630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278638u;
}
