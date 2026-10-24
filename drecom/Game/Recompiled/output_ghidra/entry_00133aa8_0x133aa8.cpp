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

// Function: entry_00133aa8
// Address: 0x133aa8 - 0x133b54
void entry_00133aa8_0x133aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133aa8_0x133aa8");
#endif

    switch (ctx->pc) {
        case 0x133ab8u: goto label_133ab8;
        case 0x133ac4u: goto label_133ac4;
        case 0x133ad4u: goto label_133ad4;
        case 0x133aecu: goto label_133aec;
        default: break;
    }

    ctx->pc = 0x133aa8u;

    // 0x133aa8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133aac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133aacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133ab0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x133AB0u;
    SET_GPR_U32(ctx, 31, 0x133AB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133AB0u, 0x133AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AB8u;
label_133ab8:
    // 0x133ab8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133abc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x133ABCu;
    SET_GPR_U32(ctx, 31, 0x133AC4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x133ABCu, 0x133AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AC4u;
label_133ac4:
    // 0x133ac4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ac8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x133ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x133acc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x133ACCu;
    SET_GPR_U32(ctx, 31, 0x133AD4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x133ACCu, 0x133AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AD4u;
label_133ad4:
    // 0x133ad4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ad8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133adc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x133adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x133ae0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x133ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x133ae4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x133AE4u;
    SET_GPR_U32(ctx, 31, 0x133AECu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x133AE4u, 0x133AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AECu;
label_133aec:
    // 0x133aec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x133aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x133af0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133af4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x133af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133af8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133afc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x133afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x133b00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x133b04: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x133b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x133b08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b0c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x133b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133b10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b14: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x133b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x133b18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x133b1c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x133b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x133b20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b24: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x133b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133b28: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x133b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x133b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133b30: 0x0  nop
    ctx->pc = 0x133b30u;
    // NOP
    // 0x133b34: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x133B34u;
    {
        const bool branch_taken_0x133b34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x133b34) {
            ctx->pc = 0x133B54u;
            return;
        }
    }
    ctx->pc = 0x133B3Cu;
    // 0x133b3c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x133b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b44: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x133b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x133b48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133b4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b50: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x133b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x133b54u;
}
