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

// Function: Rck_box_hit_ck
// Address: 0x195d30 - 0x196028
void Rck_box_hit_ck_0x195d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rck_box_hit_ck_0x195d30");
#endif

    switch (ctx->pc) {
        case 0x195d5cu: goto label_195d5c;
        case 0x195f30u: goto label_195f30;
        case 0x195f44u: goto label_195f44;
        default: break;
    }

    ctx->pc = 0x195d30u;

    // 0x195d30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x195d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x195d34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x195d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x195d38: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x195d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x195d3c: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x195d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x195d40: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x195d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x195d44: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x195d44u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x195d48: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x195d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x195d4c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x195d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195d50: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x195d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195d54: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x195D54u;
    SET_GPR_U32(ctx, 31, 0x195D5Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x195D54u, 0x195D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D5Cu;
label_195d5c:
    // 0x195d5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x195d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x195d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195d64: 0x0  nop
    ctx->pc = 0x195d64u;
    // NOP
    // 0x195d68: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x195d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x195d6c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x195d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195d70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x195d70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195d74: 0x0  nop
    ctx->pc = 0x195d74u;
    // NOP
    // 0x195d78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x195d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195d7c: 0x0  nop
    ctx->pc = 0x195d7cu;
    // NOP
    // 0x195d80: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x195D80u;
    {
        const bool branch_taken_0x195d80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195d80) {
            ctx->pc = 0x195D9Cu;
            goto label_195d9c;
        }
    }
    ctx->pc = 0x195D88u;
    // 0x195d88: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x195d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195d8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x195d8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x195d90: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x195d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x195d94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x195D94u;
    {
        const bool branch_taken_0x195d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195d94) {
            ctx->pc = 0x195DA4u;
            goto label_195da4;
        }
    }
    ctx->pc = 0x195D9Cu;
label_195d9c:
    // 0x195d9c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x195d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195da0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x195da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_195da4:
    // 0x195da4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x195da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195da8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x195da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x195dac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x195dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195db0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x195db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195db4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x195db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195db8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x195db8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195dbc: 0x0  nop
    ctx->pc = 0x195dbcu;
    // NOP
    // 0x195dc0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x195DC0u;
    {
        const bool branch_taken_0x195dc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x195dc0) {
            ctx->pc = 0x195DD4u;
            goto label_195dd4;
        }
    }
    ctx->pc = 0x195DC8u;
    // 0x195dc8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x195dc8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195dcc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x195DCCu;
    {
        const bool branch_taken_0x195dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195dcc) {
            ctx->pc = 0x196018u;
            goto label_196018;
        }
    }
    ctx->pc = 0x195DD4u;
label_195dd4:
    // 0x195dd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x195dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195dd8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x195dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ddc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x195ddcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195de0: 0x0  nop
    ctx->pc = 0x195de0u;
    // NOP
    // 0x195de4: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x195DE4u;
    {
        const bool branch_taken_0x195de4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195de4) {
            ctx->pc = 0x195F1Cu;
            goto label_195f1c;
        }
    }
    ctx->pc = 0x195DECu;
    // 0x195dec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x195decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195df0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x195df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195df4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x195df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195df8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x195df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195dfc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x195dfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x195e00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x195e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195e04: 0x0  nop
    ctx->pc = 0x195e04u;
    // NOP
    // 0x195e08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x195e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195e0c: 0x0  nop
    ctx->pc = 0x195e0cu;
    // NOP
    // 0x195e10: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x195E10u;
    {
        const bool branch_taken_0x195e10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195e10) {
            ctx->pc = 0x195E3Cu;
            goto label_195e3c;
        }
    }
    ctx->pc = 0x195E18u;
    // 0x195e18: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x195e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195e1c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x195e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195e20: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x195e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195e24: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x195e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x195e28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x195e2c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x195e2cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x195e30: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x195e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x195e34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195E34u;
    {
        const bool branch_taken_0x195e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195e34) {
            ctx->pc = 0x195E54u;
            goto label_195e54;
        }
    }
    ctx->pc = 0x195E3Cu;
label_195e3c:
    // 0x195e3c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x195e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195e40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x195e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195e44: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x195e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195e48: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x195e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x195e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x195e50: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x195e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_195e54:
    // 0x195e54: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x195e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e58: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x195e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x195e5c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x195e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195e60: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x195e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195e64: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x195e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x195e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195e6c: 0x0  nop
    ctx->pc = 0x195e6cu;
    // NOP
    // 0x195e70: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x195E70u;
    {
        const bool branch_taken_0x195e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x195e70) {
            ctx->pc = 0x195E84u;
            goto label_195e84;
        }
    }
    ctx->pc = 0x195E78u;
    // 0x195e78: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x195e78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195e7c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x195E7Cu;
    {
        const bool branch_taken_0x195e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195e7c) {
            ctx->pc = 0x196018u;
            goto label_196018;
        }
    }
    ctx->pc = 0x195E84u;
label_195e84:
    // 0x195e84: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x195e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195e88: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x195e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195e8c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x195e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195e90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x195e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x195e94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x195e98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x195e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195e9c: 0x0  nop
    ctx->pc = 0x195e9cu;
    // NOP
    // 0x195ea0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x195ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195ea4: 0x0  nop
    ctx->pc = 0x195ea4u;
    // NOP
    // 0x195ea8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x195EA8u;
    {
        const bool branch_taken_0x195ea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195ea8) {
            ctx->pc = 0x195ED4u;
            goto label_195ed4;
        }
    }
    ctx->pc = 0x195EB0u;
    // 0x195eb0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x195eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195eb4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x195eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195eb8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x195eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195ebc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x195ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ec0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x195ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x195ec4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x195ec4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x195ec8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x195ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x195ecc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195ECCu;
    {
        const bool branch_taken_0x195ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ecc) {
            ctx->pc = 0x195EECu;
            goto label_195eec;
        }
    }
    ctx->pc = 0x195ED4u;
label_195ed4:
    // 0x195ed4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x195ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195ed8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x195ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195edc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x195edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195ee0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x195ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x195ee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x195ee8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x195ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_195eec:
    // 0x195eec: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x195eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ef0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x195ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x195ef4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x195ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195ef8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x195ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195efc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x195efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x195f00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195f04: 0x0  nop
    ctx->pc = 0x195f04u;
    // NOP
    // 0x195f08: 0x45010042  bc1t        . + 4 + (0x42 << 2)
    ctx->pc = 0x195F08u;
    {
        const bool branch_taken_0x195f08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x195f08) {
            ctx->pc = 0x196014u;
            goto label_196014;
        }
    }
    ctx->pc = 0x195F10u;
    // 0x195f10: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x195f10u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195f14: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x195F14u;
    {
        const bool branch_taken_0x195f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195f14) {
            ctx->pc = 0x196018u;
            goto label_196018;
        }
    }
    ctx->pc = 0x195F1Cu;
label_195f1c:
    // 0x195f1c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x195f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f20: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x195f20u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x195f24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x195f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x195f28: 0xc067844  jal         func_19E110
    ctx->pc = 0x195F28u;
    SET_GPR_U32(ctx, 31, 0x195F30u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x195F28u, 0x195F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F30u;
label_195f30:
    // 0x195f30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x195f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x195f34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x195f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x195f38: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x195f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x195f3c: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x195F3Cu;
    SET_GPR_U32(ctx, 31, 0x195F44u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x195F3Cu, 0x195F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F44u;
label_195f44:
    // 0x195f44: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x195f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195f48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x195f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195f4c: 0x0  nop
    ctx->pc = 0x195f4cu;
    // NOP
    // 0x195f50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x195f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195f54: 0x0  nop
    ctx->pc = 0x195f54u;
    // NOP
    // 0x195f58: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x195F58u;
    {
        const bool branch_taken_0x195f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195f58) {
            ctx->pc = 0x195F74u;
            goto label_195f74;
        }
    }
    ctx->pc = 0x195F60u;
    // 0x195f60: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x195f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x195f64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x195f68: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x195f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x195f6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x195F6Cu;
    {
        const bool branch_taken_0x195f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195f6c) {
            ctx->pc = 0x195F7Cu;
            goto label_195f7c;
        }
    }
    ctx->pc = 0x195F74u;
label_195f74:
    // 0x195f74: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x195f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f78: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x195f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_195f7c:
    // 0x195f7c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x195f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f80: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x195f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x195f84: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x195f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195f88: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x195f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195f8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x195f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x195f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195f94: 0x0  nop
    ctx->pc = 0x195f94u;
    // NOP
    // 0x195f98: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x195F98u;
    {
        const bool branch_taken_0x195f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x195f98) {
            ctx->pc = 0x195FACu;
            goto label_195fac;
        }
    }
    ctx->pc = 0x195FA0u;
    // 0x195fa0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x195fa0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195fa4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x195FA4u;
    {
        const bool branch_taken_0x195fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195fa4) {
            ctx->pc = 0x196018u;
            goto label_196018;
        }
    }
    ctx->pc = 0x195FACu;
label_195fac:
    // 0x195fac: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x195facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195fb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x195fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195fb4: 0x0  nop
    ctx->pc = 0x195fb4u;
    // NOP
    // 0x195fb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x195fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195fbc: 0x0  nop
    ctx->pc = 0x195fbcu;
    // NOP
    // 0x195fc0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x195FC0u;
    {
        const bool branch_taken_0x195fc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195fc0) {
            ctx->pc = 0x195FDCu;
            goto label_195fdc;
        }
    }
    ctx->pc = 0x195FC8u;
    // 0x195fc8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x195fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195fcc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x195fccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x195fd0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x195fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x195fd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x195FD4u;
    {
        const bool branch_taken_0x195fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195fd4) {
            ctx->pc = 0x195FE4u;
            goto label_195fe4;
        }
    }
    ctx->pc = 0x195FDCu;
label_195fdc:
    // 0x195fdc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x195fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195fe0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x195fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_195fe4:
    // 0x195fe4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x195fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195fe8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x195fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x195fec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x195fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195ff0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x195ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195ff4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x195ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ff8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x195ff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195ffc: 0x0  nop
    ctx->pc = 0x195ffcu;
    // NOP
    // 0x196000: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x196000u;
    {
        const bool branch_taken_0x196000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x196000) {
            ctx->pc = 0x196014u;
            goto label_196014;
        }
    }
    ctx->pc = 0x196008u;
    // 0x196008: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x196008u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19600c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19600Cu;
    {
        const bool branch_taken_0x19600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19600c) {
            ctx->pc = 0x196018u;
            goto label_196018;
        }
    }
    ctx->pc = 0x196014u;
label_196014:
    // 0x196014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196018:
    // 0x196018: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x196018u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19601c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x19601cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x196020: 0x3e00008  jr          $ra
    ctx->pc = 0x196020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196028u;
}
