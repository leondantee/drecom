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

// Function: entry_0031ff40
// Address: 0x31ff40 - 0x31fff0
void entry_0031ff40_0x31ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ff40_0x31ff40");
#endif

    switch (ctx->pc) {
        case 0x31ff48u: goto label_31ff48;
        case 0x31ff80u: goto label_31ff80;
        case 0x31ffb8u: goto label_31ffb8;
        default: break;
    }

    ctx->pc = 0x31ff40u;

    // 0x31ff40: 0xc067648  jal         func_19D920
    ctx->pc = 0x31FF40u;
    SET_GPR_U32(ctx, 31, 0x31FF48u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x31FF40u, 0x31FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FF48u;
label_31ff48:
    // 0x31ff48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff4c: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x31ff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ff50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31ff50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31ff54: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x31ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ff58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31ff60: 0xc4400480  lwc1        $f0, 0x480($v0)
    ctx->pc = 0x31ff60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ff64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31ff64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31ff68: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x31ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ff6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff70: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ff74: 0xe4600480  swc1        $f0, 0x480($v1)
    ctx->pc = 0x31ff74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1152), bits); }
    // 0x31ff78: 0xc067648  jal         func_19D920
    ctx->pc = 0x31FF78u;
    SET_GPR_U32(ctx, 31, 0x31FF80u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x31FF78u, 0x31FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FF80u;
label_31ff80:
    // 0x31ff80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff84: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x31ff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ff88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31ff88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31ff8c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x31ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ff90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31ff98: 0xc4400484  lwc1        $f0, 0x484($v0)
    ctx->pc = 0x31ff98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ff9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31ff9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31ffa0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x31ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ffa4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ffa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ffac: 0xe4400484  swc1        $f0, 0x484($v0)
    ctx->pc = 0x31ffacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1156), bits); }
    // 0x31ffb0: 0xc067648  jal         func_19D920
    ctx->pc = 0x31FFB0u;
    SET_GPR_U32(ctx, 31, 0x31FFB8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x31FFB0u, 0x31FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FFB8u;
label_31ffb8:
    // 0x31ffb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ffbc: 0xc4610274  lwc1        $f1, 0x274($v1)
    ctx->pc = 0x31ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ffc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31ffc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31ffc4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x31ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ffc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ffcc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x31ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31ffd0: 0xc4600488  lwc1        $f0, 0x488($v1)
    ctx->pc = 0x31ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ffd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31ffd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31ffd8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31ffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ffdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ffe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31ffe4: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x31ffe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x31ffe8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x31ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31ffec: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x31ffecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x31fff0u;
}
