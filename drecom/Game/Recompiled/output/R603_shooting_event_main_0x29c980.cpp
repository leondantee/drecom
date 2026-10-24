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

// Function: R603_shooting_event_main
// Address: 0x29c980 - 0x29ca30
void R603_shooting_event_main_0x29c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R603_shooting_event_main_0x29c980");
#endif

    switch (ctx->pc) {
        case 0x29c9e8u: goto label_29c9e8;
        case 0x29ca04u: goto label_29ca04;
        case 0x29ca18u: goto label_29ca18;
        case 0x29ca20u: goto label_29ca20;
        default: break;
    }

    ctx->pc = 0x29c980u;

    // 0x29c980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c984: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x29c984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x29c988: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29c988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29c98c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x29c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x29c990: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x29c990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x29c994: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29c994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29c998: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29c998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29c99c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x29c99cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x29c9a0: 0x3c02449d  lui         $v0, 0x449D
    ctx->pc = 0x29c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17565 << 16));
    // 0x29c9a4: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x29c9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44564);
    // 0x29c9a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29c9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c9ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29c9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29c9b0: 0xe420dce0  swc1        $f0, -0x2320($at)
    ctx->pc = 0x29c9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE0u, _value); } while (0); }
    // 0x29c9b4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x29c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x29c9b8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x29c9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x29c9bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29c9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c9c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29c9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29c9c4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x29c9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x29c9c8: 0x3c02c5bc  lui         $v0, 0xC5BC
    ctx->pc = 0x29c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50620 << 16));
    // 0x29c9cc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x29c9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x29c9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29c9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c9d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29c9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29c9d8: 0xe420dce8  swc1        $f0, -0x2318($at)
    ctx->pc = 0x29c9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE8u, _value); } while (0); }
    // 0x29c9dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x29c9dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29c9e0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29C9E0u;
    SET_GPR_U32(ctx, 31, 0x29C9E8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29C9E0u, 0x29C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9E8u;
label_29c9e8:
    // 0x29c9e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29c9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29c9ec: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x29c9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC94u, _value); } while (0); }
    // 0x29c9f0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x29c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29c9f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x29c9f8: 0x2445ca30  addiu       $a1, $v0, -0x35D0
    ctx->pc = 0x29c9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953520));
    // 0x29c9fc: 0xc0848cc  jal         func_212330
    ctx->pc = 0x29C9FCu;
    SET_GPR_U32(ctx, 31, 0x29CA04u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x29C9FCu, 0x29CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA04u;
label_29ca04:
    // 0x29ca04: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x29ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29ca08: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x29ca0c: 0x2445ccf0  addiu       $a1, $v0, -0x3310
    ctx->pc = 0x29ca0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954224));
    // 0x29ca10: 0xc0848cc  jal         func_212330
    ctx->pc = 0x29CA10u;
    SET_GPR_U32(ctx, 31, 0x29CA18u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x29CA10u, 0x29CA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA18u;
label_29ca18:
    // 0x29ca18: 0xc084934  jal         func_2124D0
    ctx->pc = 0x29CA18u;
    SET_GPR_U32(ctx, 31, 0x29CA20u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x29CA18u, 0x29CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA20u;
label_29ca20:
    // 0x29ca20: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x29ca20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ca24: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x29ca24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29ca28: 0x3e00008  jr          $ra
    ctx->pc = 0x29CA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CA30u;
}
