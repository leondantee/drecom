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

// Function: spline
// Address: 0x290da0 - 0x290f80
void spline_0x290da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("spline_0x290da0");
#endif

    switch (ctx->pc) {
        case 0x290dd8u: goto label_290dd8;
        default: break;
    }

    ctx->pc = 0x290da0u;

    // 0x290da0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x290da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x290da4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x290da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x290da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x290da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x290dac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290db0: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x290db0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x290db4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x290db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x290db8: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x290db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x290dbc: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x290dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x290dc0: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x290dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x290dc4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x290dc4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x290dc8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x290dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290dcc: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x290dccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x290dd0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x290DD0u;
    {
        const bool branch_taken_0x290dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290dd0) {
            ctx->pc = 0x290E18u;
            goto label_290e18;
        }
    }
    ctx->pc = 0x290DD8u;
label_290dd8:
    // 0x290dd8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x290dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x290ddc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x290ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290de0: 0x38843  sra         $s1, $v1, 1
    ctx->pc = 0x290de0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 1));
    // 0x290de4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x290de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x290de8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x290de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290df0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x290df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290df4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x290df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290df8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x290df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290dfc: 0x0  nop
    ctx->pc = 0x290dfcu;
    // NOP
    // 0x290e00: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x290E00u;
    {
        const bool branch_taken_0x290e00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x290e00) {
            ctx->pc = 0x290E14u;
            goto label_290e14;
        }
    }
    ctx->pc = 0x290E08u;
    // 0x290e08: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x290e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x290e0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x290E0Cu;
    {
        const bool branch_taken_0x290e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290e0c) {
            ctx->pc = 0x290E18u;
            goto label_290e18;
        }
    }
    ctx->pc = 0x290E14u;
label_290e14:
    // 0x290e14: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x290e14u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_290e18:
    // 0x290e18: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x290e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x290e1c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x290E1Cu;
    {
        const bool branch_taken_0x290e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290e1c) {
            ctx->pc = 0x290DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290dd8;
        }
    }
    ctx->pc = 0x290E24u;
    // 0x290e24: 0x1a000002  blez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x290E24u;
    {
        const bool branch_taken_0x290e24 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x290e24) {
            ctx->pc = 0x290E30u;
            goto label_290e30;
        }
    }
    ctx->pc = 0x290E2Cu;
    // 0x290e2c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x290e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_290e30:
    // 0x290e30: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x290e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290e34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290e38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x290e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290e3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290e40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x290e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290e44: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290e48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x290e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290e4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290e50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x290e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290e54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x290e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290e58: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x290e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x290e5c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290e60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x290e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290e64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290e68: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x290e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290e6c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x290e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290e70: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x290e70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x290e74: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x290e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x290e78: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x290e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290e7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290e80: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x290e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x290e84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290e88: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x290e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290e8c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290e90: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x290e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x290e94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290e98: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x290e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290e9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x290e9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290ea0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x290ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ea4: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x290ea4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x290ea8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290eac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x290eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x290eb0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x290eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290eb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x290eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x290eb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290ebc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ec0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x290ec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290ec4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x290ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290ec8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290ecc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x290eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x290ed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290ed4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x290ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ed8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x290ed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x290edc: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x290edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ee0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x290ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290ee4: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x290ee4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x290ee8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x290ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290eec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290ef0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x290ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x290ef4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290ef8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x290ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290efc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290f00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x290f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x290f04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290f08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x290f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290f0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x290f0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290f10: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x290f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290f14: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x290f14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290f18: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x290f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290f1c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x290f1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x290f20: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290f24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x290f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x290f28: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x290f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290f2c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x290f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x290f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x290f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290f34: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290f38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x290f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290f3c: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x290f3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x290f40: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x290f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290f44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x290f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290f48: 0x46030040  add.s       $f1, $f0, $f3
    ctx->pc = 0x290f48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x290f4c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x290f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290f50: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x290f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290f54: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290f58: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x290f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x290f5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290f60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x290f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290f64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x290f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x290f68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x290f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290f6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290f74: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x290f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x290f78: 0x3e00008  jr          $ra
    ctx->pc = 0x290F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290F80u;
}
