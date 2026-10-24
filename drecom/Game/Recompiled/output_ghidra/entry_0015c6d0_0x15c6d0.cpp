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

// Function: entry_0015c6d0
// Address: 0x15c6d0 - 0x15c72c
void entry_0015c6d0_0x15c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c6d0_0x15c6d0");
#endif

    switch (ctx->pc) {
        case 0x15c700u: goto label_15c700;
        case 0x15c724u: goto label_15c724;
        default: break;
    }

    ctx->pc = 0x15c6d0u;

    // 0x15c6d0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x15c6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c6d4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x15c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x15c6d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c6dc: 0x0  nop
    ctx->pc = 0x15c6dcu;
    // NOP
    // 0x15c6e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15c6e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c6e4: 0x0  nop
    ctx->pc = 0x15c6e4u;
    // NOP
    // 0x15c6e8: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x15C6E8u;
    {
        const bool branch_taken_0x15c6e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c6e8) {
            ctx->pc = 0x15C72Cu;
            return;
        }
    }
    ctx->pc = 0x15C6F0u;
    // 0x15c6f0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x15c6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c6f4: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x15c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15c6f8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15C6F8u;
    SET_GPR_U32(ctx, 31, 0x15C700u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15C6F8u, 0x15C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C700u;
label_15c700:
    // 0x15c700: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15c700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15c704: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x15c704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
    // 0x15c708: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x15c708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x15c70c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15c70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15c710: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c714: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x15c714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c718: 0xc44d1568  lwc1        $f13, 0x1568($v0)
    ctx->pc = 0x15c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15c71c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x15C71Cu;
    SET_GPR_U32(ctx, 31, 0x15C724u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x15C71Cu, 0x15C724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C724u;
label_15c724:
    // 0x15c724: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c728: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x15c728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    ctx->pc = 0x15c72cu;
}
