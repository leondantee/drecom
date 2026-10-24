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

// Function: entry_0032dc30
// Address: 0x32dc30 - 0x32dcc0
void entry_0032dc30_0x32dc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032dc30_0x32dc30");
#endif

    switch (ctx->pc) {
        case 0x32dc50u: goto label_32dc50;
        case 0x32dc74u: goto label_32dc74;
        case 0x32dc98u: goto label_32dc98;
        case 0x32dcbcu: goto label_32dcbc;
        default: break;
    }

    ctx->pc = 0x32dc30u;

    // 0x32dc30: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32dc34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32dc34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dc38: 0x0  nop
    ctx->pc = 0x32dc38u;
    // NOP
    // 0x32dc3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32dc3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32dc40: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dc44: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32dc44u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dc48: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32DC48u;
    SET_GPR_U32(ctx, 31, 0x32DC50u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32DC48u, 0x32DC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC50u;
label_32dc50:
    // 0x32dc50: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32dc54: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x32dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32dc58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32dc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dc5c: 0x0  nop
    ctx->pc = 0x32dc5cu;
    // NOP
    // 0x32dc60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32dc60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32dc64: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dc68: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32dc68u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dc6c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32DC6Cu;
    SET_GPR_U32(ctx, 31, 0x32DC74u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32DC6Cu, 0x32DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC74u;
label_32dc74:
    // 0x32dc74: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x32dc78: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32dc7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32dc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dc80: 0x0  nop
    ctx->pc = 0x32dc80u;
    // NOP
    // 0x32dc84: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32dc84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32dc88: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dc8c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32dc8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dc90: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32DC90u;
    SET_GPR_U32(ctx, 31, 0x32DC98u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32DC90u, 0x32DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC98u;
label_32dc98:
    // 0x32dc98: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32dc9c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x32dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32dca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32dca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dca4: 0x0  nop
    ctx->pc = 0x32dca4u;
    // NOP
    // 0x32dca8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32dca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32dcac: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dcb0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32dcb0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dcb4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32DCB4u;
    SET_GPR_U32(ctx, 31, 0x32DCBCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32DCB4u, 0x32DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DCBCu;
label_32dcbc:
    // 0x32dcbc: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32dcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    ctx->pc = 0x32dcc0u;
}
