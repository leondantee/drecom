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

// Function: R118_init
// Address: 0x278960 - 0x2789f4
void R118_init_0x278960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R118_init_0x278960");
#endif

    switch (ctx->pc) {
        case 0x278978u: goto label_278978;
        case 0x278990u: goto label_278990;
        case 0x2789a8u: goto label_2789a8;
        case 0x2789d0u: goto label_2789d0;
        case 0x2789e4u: goto label_2789e4;
        default: break;
    }

    ctx->pc = 0x278960u;

    // 0x278960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x278964: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x278964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x278968: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27896c: 0x2444e540  addiu       $a0, $v0, -0x1AC0
    ctx->pc = 0x27896cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x278970: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x278970u;
    SET_GPR_U32(ctx, 31, 0x278978u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x278970u, 0x278978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278978u;
label_278978:
    // 0x278978: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27897c: 0x8c24f9e0  lw          $a0, -0x620($at)
    ctx->pc = 0x27897cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x278980: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x278980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x278984: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x278984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x278988: 0xc0a11c4  jal         func_284710
    ctx->pc = 0x278988u;
    SET_GPR_U32(ctx, 31, 0x278990u);
    ctx->pc = 0x284710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284710u, 0x278988u, 0x278990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278990u;
label_278990:
    // 0x278990: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x278994: 0x8c24f9e4  lw          $a0, -0x61C($at)
    ctx->pc = 0x278994u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x278998: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x278998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27899c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x27899cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2789a0: 0xc0a11c4  jal         func_284710
    ctx->pc = 0x2789A0u;
    SET_GPR_U32(ctx, 31, 0x2789A8u);
    ctx->pc = 0x284710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284710u, 0x2789A0u, 0x2789A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2789A8u;
label_2789a8:
    // 0x2789a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2789a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2789ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2789acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2789b0: 0xa0224f11  sb          $v0, 0x4F11($at)
    ctx->pc = 0x2789b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x2789b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2789b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2789b8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x2789b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2789bc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2789bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2789c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2789c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2789c4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x2789c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x2789c8: 0xc06ba60  jal         func_1AE980
    ctx->pc = 0x2789C8u;
    SET_GPR_U32(ctx, 31, 0x2789D0u);
    ctx->pc = 0x1AE980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE980u, 0x2789C8u, 0x2789D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2789D0u;
label_2789d0:
    // 0x2789d0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2789d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2789d4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x2789d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x2789d8: 0x24458a20  addiu       $a1, $v0, -0x75E0
    ctx->pc = 0x2789d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937120));
    // 0x2789dc: 0xc0848cc  jal         func_212330
    ctx->pc = 0x2789DCu;
    SET_GPR_U32(ctx, 31, 0x2789E4u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x2789DCu, 0x2789E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2789E4u;
label_2789e4:
    // 0x2789e4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2789e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2789e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2789e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2789ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2789ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2789ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2789F4u;
}
