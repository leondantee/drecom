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

// Function: entry_00133ef8
// Address: 0x133ef8 - 0x133fa4
void entry_00133ef8_0x133ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133ef8_0x133ef8");
#endif

    switch (ctx->pc) {
        case 0x133f08u: goto label_133f08;
        case 0x133f14u: goto label_133f14;
        case 0x133f24u: goto label_133f24;
        case 0x133f3cu: goto label_133f3c;
        default: break;
    }

    ctx->pc = 0x133ef8u;

    // 0x133ef8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133efc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133efcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133f00: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x133F00u;
    SET_GPR_U32(ctx, 31, 0x133F08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133F00u, 0x133F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F08u;
label_133f08:
    // 0x133f08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f0c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x133F0Cu;
    SET_GPR_U32(ctx, 31, 0x133F14u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x133F0Cu, 0x133F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F14u;
label_133f14:
    // 0x133f14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x133f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x133f1c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x133F1Cu;
    SET_GPR_U32(ctx, 31, 0x133F24u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x133F1Cu, 0x133F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F24u;
label_133f24:
    // 0x133f24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f28: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f2c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x133f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x133f30: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x133f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x133f34: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x133F34u;
    SET_GPR_U32(ctx, 31, 0x133F3Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x133F34u, 0x133F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F3Cu;
label_133f3c:
    // 0x133f3c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x133f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x133f40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f44: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x133f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133f48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f4c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x133f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x133f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x133f54: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x133f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x133f58: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f5c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x133f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133f60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f64: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x133f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x133f68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x133f6c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x133f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x133f70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f74: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x133f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133f78: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x133f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x133f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133f80: 0x0  nop
    ctx->pc = 0x133f80u;
    // NOP
    // 0x133f84: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x133F84u;
    {
        const bool branch_taken_0x133f84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x133f84) {
            ctx->pc = 0x133FA4u;
            return;
        }
    }
    ctx->pc = 0x133F8Cu;
    // 0x133f8c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x133f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133f94: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x133f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x133f98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133f9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133fa0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x133fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x133fa4u;
}
