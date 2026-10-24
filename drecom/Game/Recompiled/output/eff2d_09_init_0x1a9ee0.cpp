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

// Function: eff2d_09_init
// Address: 0x1a9ee0 - 0x1aa044
void eff2d_09_init_0x1a9ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_09_init_0x1a9ee0");
#endif

    switch (ctx->pc) {
        case 0x1a9f20u: goto label_1a9f20;
        case 0x1a9f2cu: goto label_1a9f2c;
        case 0x1a9f44u: goto label_1a9f44;
        case 0x1a9f60u: goto label_1a9f60;
        case 0x1aa00cu: goto label_1aa00c;
        default: break;
    }

    ctx->pc = 0x1a9ee0u;

    // 0x1a9ee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a9ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a9ee4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1a9ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a9ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9eec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a9eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9ef0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1a9ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1a9ef4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9ef8: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x1a9ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1a9efc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9f00: 0x8c5101fc  lw          $s1, 0x1FC($v0)
    ctx->pc = 0x1a9f00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x1a9f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9f08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9f0c: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x1a9f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x1a9f10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a9f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9f14: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1a9f14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a9f18: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x1A9F18u;
    SET_GPR_U32(ctx, 31, 0x1A9F20u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x1A9F18u, 0x1A9F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F20u;
label_1a9f20:
    // 0x1a9f20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a9f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9f24: 0xc0c9918  jal         func_326460
    ctx->pc = 0x1A9F24u;
    SET_GPR_U32(ctx, 31, 0x1A9F2Cu);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x1A9F24u, 0x1A9F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F2Cu;
label_1a9f2c:
    // 0x1a9f2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a9f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a9f30: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1a9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1a9f34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a9f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9f38: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x1a9f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1a9f3c: 0xc0c96a8  jal         func_325AA0
    ctx->pc = 0x1A9F3Cu;
    SET_GPR_U32(ctx, 31, 0x1A9F44u);
    ctx->pc = 0x325AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325AA0u, 0x1A9F3Cu, 0x1A9F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F44u;
label_1a9f44:
    // 0x1a9f44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9f48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a9f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a9f4c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1a9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1a9f50: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1a9f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1a9f54: 0x244501a0  addiu       $a1, $v0, 0x1A0
    ctx->pc = 0x1a9f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x1a9f58: 0xc0c96a8  jal         func_325AA0
    ctx->pc = 0x1A9F58u;
    SET_GPR_U32(ctx, 31, 0x1A9F60u);
    ctx->pc = 0x325AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325AA0u, 0x1A9F58u, 0x1A9F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F60u;
label_1a9f60:
    // 0x1a9f60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a9f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a9f64: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1a9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1a9f68: 0xc4410190  lwc1        $f1, 0x190($v0)
    ctx->pc = 0x1a9f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9f6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9f70: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x1a9f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9f74: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1a9f74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a9f78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a9f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a9f7c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1a9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1a9f80: 0xc4410190  lwc1        $f1, 0x190($v0)
    ctx->pc = 0x1a9f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9f84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9f88: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x1a9f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9f8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a9f8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a9f90: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x1a9f90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a9f94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a9f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a9f98: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1a9f98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1a9f9c: 0xc4410194  lwc1        $f1, 0x194($v0)
    ctx->pc = 0x1a9f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9fa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9fa4: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x1a9fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9fa8: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1a9fa8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a9fac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a9facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a9fb0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1a9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1a9fb4: 0xc4410194  lwc1        $f1, 0x194($v0)
    ctx->pc = 0x1a9fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9fb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9fbc: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x1a9fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9fc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a9fc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a9fc4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a9fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a9fc8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1a9fc8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1a9fcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a9fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a9fd0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1a9fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1a9fd4: 0xc4410198  lwc1        $f1, 0x198($v0)
    ctx->pc = 0x1a9fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9fd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9fdc: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x1a9fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9fe0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1a9fe0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a9fe4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a9fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a9fe8: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1a9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1a9fec: 0xc4410198  lwc1        $f1, 0x198($v0)
    ctx->pc = 0x1a9fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9ff0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9ff4: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x1a9ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9ff8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a9ff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a9ffc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a9ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1aa000: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x1aa000u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1aa004: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1AA004u;
    SET_GPR_U32(ctx, 31, 0x1AA00Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1AA004u, 0x1AA00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA00Cu;
label_1aa00c:
    // 0x1aa00c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1aa00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aa010: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1aa010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1aa014: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1aa014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aa018: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x1aa018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x1aa01c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1aa01cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aa020: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1aa020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aa024: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1aa024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1aa028: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1aa028u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1aa02c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1aa02cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aa030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa038: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1aa038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1aa03c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA044u;
}
