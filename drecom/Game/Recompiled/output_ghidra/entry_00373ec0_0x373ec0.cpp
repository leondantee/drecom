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

// Function: entry_00373ec0
// Address: 0x373ec0 - 0x373fd8
void entry_00373ec0_0x373ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373ec0_0x373ec0");
#endif

    switch (ctx->pc) {
        case 0x373ee0u: goto label_373ee0;
        case 0x373f10u: goto label_373f10;
        case 0x373f74u: goto label_373f74;
        default: break;
    }

    ctx->pc = 0x373ec0u;

    // 0x373ec0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373ec4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373ec8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373ecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373ed0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x373ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x373ed4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x373ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x373ed8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x373ED8u;
    SET_GPR_U32(ctx, 31, 0x373EE0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x373EE0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373EE0u) { return; }
    ctx->pc = 0x373EE0u;
label_373ee0:
    // 0x373ee0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x373ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373ee4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x373ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x373ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373eec: 0x0  nop
    ctx->pc = 0x373eecu;
    // NOP
    // 0x373ef0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373ef4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x373ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x373ef8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x373ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x373efc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x373efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x373f00: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x373f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x373f04: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x373f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x373f08: 0xc05a078  jal         func_1681E0
    ctx->pc = 0x373F08u;
    SET_GPR_U32(ctx, 31, 0x373F10u);
    ctx->pc = 0x1681E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681E0u, 0x373F08u, 0x373F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F10u;
label_373f10:
    // 0x373f10: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x373f10u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x373f14: 0x12600030  beqz        $s3, . + 4 + (0x30 << 2)
    ctx->pc = 0x373F14u;
    {
        const bool branch_taken_0x373f14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x373f14) {
            ctx->pc = 0x373FD8u;
            return;
        }
    }
    ctx->pc = 0x373F1Cu;
    // 0x373f1c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x373f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373f20: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x373f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373f24: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x373f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x373f28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x373f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x373f2c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x373f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373f30: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x373f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373f34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x373f34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x373f38: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x373f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x373f3c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x373f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373f40: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x373f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373f44: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x373f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x373f48: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x373f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x373f4c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x373f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373f50: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x373f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373f54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x373f54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x373f58: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x373f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x373f5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x373f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373f60: 0x0  nop
    ctx->pc = 0x373f60u;
    // NOP
    // 0x373f64: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x373f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x373f68: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x373f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x373f6c: 0xc067588  jal         func_19D620
    ctx->pc = 0x373F6Cu;
    SET_GPR_U32(ctx, 31, 0x373F74u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x373F6Cu, 0x373F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F74u;
label_373f74:
    // 0x373f74: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x373f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x373f78: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x373f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373f7c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373f80: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x373f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x373f84: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x373f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x373f88: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x373f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373f8c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x373f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373f90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373f94: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x373f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x373f98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x373f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373f9c: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x373f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373fa0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x373fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x373fa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x373fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x373fa8: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x373fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373fac: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x373facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373fb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373fb4: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x373fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x373fb8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x373fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373fbc: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x373fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373fc0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x373fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x373fc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x373fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x373fc8: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x373fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373fcc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x373fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373fd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373fd4: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x373fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    ctx->pc = 0x373fd8u;
}
