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

// Function: Em19_R1_wait
// Address: 0x2e56f0 - 0x2e5960
void Em19_R1_wait_0x2e56f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R1_wait_0x2e56f0");
#endif

    switch (ctx->pc) {
        case 0x2e5750u: goto label_2e5750;
        case 0x2e587cu: goto label_2e587c;
        case 0x2e5898u: goto label_2e5898;
        case 0x2e58b0u: goto label_2e58b0;
        case 0x2e58bcu: goto label_2e58bc;
        case 0x2e58ccu: goto label_2e58cc;
        case 0x2e58e4u: goto label_2e58e4;
        case 0x2e594cu: goto label_2e594c;
        default: break;
    }

    ctx->pc = 0x2e56f0u;

    // 0x2e56f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e56f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e56f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2e56f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2e56f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e56f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e56fc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2e56fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2e5700: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5704: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2e5704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e5708: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e570c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e570cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e5710: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e5710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e5714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e5714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5718: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E5718u;
    {
        const bool branch_taken_0x2e5718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e5718) {
            ctx->pc = 0x2E5760u;
            goto label_2e5760;
        }
    }
    ctx->pc = 0x2E5720u;
    // 0x2e5720: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5720u;
    {
        const bool branch_taken_0x2e5720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5720) {
            ctx->pc = 0x2E5730u;
            goto label_2e5730;
        }
    }
    ctx->pc = 0x2E5728u;
    // 0x2e5728: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2E5728u;
    {
        const bool branch_taken_0x2e5728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5728) {
            ctx->pc = 0x2E594Cu;
            goto label_2e594c;
        }
    }
    ctx->pc = 0x2E5730u;
label_2e5730:
    // 0x2e5730: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5734: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e5734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5738: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e5738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e573c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2e573cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e5740: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e5740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5744: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e5744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e5748: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E5748u;
    SET_GPR_U32(ctx, 31, 0x2E5750u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E5748u, 0x2E5750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5750u;
label_2e5750:
    // 0x2e5750: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5754: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e5754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e5758: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e5758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e575c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e575cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e5760:
    // 0x2e5760: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5764: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e5764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5768: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e576c: 0x0  nop
    ctx->pc = 0x2e576cu;
    // NOP
    // 0x2e5770: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e5770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5774: 0x0  nop
    ctx->pc = 0x2e5774u;
    // NOP
    // 0x2e5778: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x2E5778u;
    {
        const bool branch_taken_0x2e5778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5778) {
            ctx->pc = 0x2E57C8u;
            goto label_2e57c8;
        }
    }
    ctx->pc = 0x2E5780u;
    // 0x2e5780: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5784: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2e5784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5788: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e578c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e578cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5790: 0x0  nop
    ctx->pc = 0x2e5790u;
    // NOP
    // 0x2e5794: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e5794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e5798: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e5798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2e579c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e57a0: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e57a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e57a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e57a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e57a8: 0x0  nop
    ctx->pc = 0x2e57a8u;
    // NOP
    // 0x2e57ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e57acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e57b0: 0x0  nop
    ctx->pc = 0x2e57b0u;
    // NOP
    // 0x2e57b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E57B4u;
    {
        const bool branch_taken_0x2e57b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e57b4) {
            ctx->pc = 0x2E57C8u;
            goto label_2e57c8;
        }
    }
    ctx->pc = 0x2E57BCu;
    // 0x2e57bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e57bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e57c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e57c4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e57c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2e57c8:
    // 0x2e57c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e57cc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e57ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e57d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e57d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e57d4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e57d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e57d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E57D8u;
    {
        const bool branch_taken_0x2e57d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e57d8) {
            ctx->pc = 0x2E57F0u;
            goto label_2e57f0;
        }
    }
    ctx->pc = 0x2E57E0u;
    // 0x2e57e0: 0x3c0241b4  lui         $v0, 0x41B4
    ctx->pc = 0x2e57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16820 << 16));
    // 0x2e57e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e57e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e57e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e57ec: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2e57ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2e57f0:
    // 0x2e57f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e57f4: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2e57f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e57f8: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x2e57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x2e57fc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e57fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e5800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5804: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e5804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e5808: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2e5808u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e580c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e580cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5810: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e5810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5814: 0x0  nop
    ctx->pc = 0x2e5814u;
    // NOP
    // 0x2e5818: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2E5818u;
    {
        const bool branch_taken_0x2e5818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5818) {
            ctx->pc = 0x2E5844u;
            goto label_2e5844;
        }
    }
    ctx->pc = 0x2E5820u;
    // 0x2e5820: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5824: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e5824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5828: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x2e5828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x2e582c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e582cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5830: 0x0  nop
    ctx->pc = 0x2e5830u;
    // NOP
    // 0x2e5834: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e5834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e5838: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2e5838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2e583c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E583Cu;
    {
        const bool branch_taken_0x2e583c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e583c) {
            ctx->pc = 0x2E5850u;
            goto label_2e5850;
        }
    }
    ctx->pc = 0x2E5844u;
label_2e5844:
    // 0x2e5844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5848: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e584c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2e584cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2e5850:
    // 0x2e5850: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e5850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5854: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2e5854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5858: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e585c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2e585cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2e5860: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e5860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e5864: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e5864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e5868: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2e5868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2e586c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2e586cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5870: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x2e5870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x2e5874: 0xc05c848  jal         func_172120
    ctx->pc = 0x2E5874u;
    SET_GPR_U32(ctx, 31, 0x2E587Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2E5874u, 0x2E587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E587Cu;
label_2e587c:
    // 0x2e587c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e587cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e5880: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5884: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2e5884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5888: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e5888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e588c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2e588cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5890: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E5890u;
    SET_GPR_U32(ctx, 31, 0x2E5898u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E5890u, 0x2E5898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5898u;
label_2e5898:
    // 0x2e5898: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e589c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e589cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e58a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e58a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e58a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e58a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E58A8u;
    SET_GPR_U32(ctx, 31, 0x2E58B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E58A8u, 0x2E58B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58B0u;
label_2e58b0:
    // 0x2e58b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e58b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58b4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E58B4u;
    SET_GPR_U32(ctx, 31, 0x2E58BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E58B4u, 0x2E58BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58BCu;
label_2e58bc:
    // 0x2e58bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e58c4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E58C4u;
    SET_GPR_U32(ctx, 31, 0x2E58CCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E58C4u, 0x2E58CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58CCu;
label_2e58cc:
    // 0x2e58cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e58ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58d4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2e58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2e58d8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2e58d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2e58dc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2E58DCu;
    SET_GPR_U32(ctx, 31, 0x2E58E4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2E58DCu, 0x2E58E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58E4u;
label_2e58e4:
    // 0x2e58e4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e58e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e58e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58ec: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2e58ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e58f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e58f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58f4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2e58f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e58f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e58f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e58fc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e58fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2e5900: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5904: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2e5904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5908: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e5908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e590c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e590cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5910: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2e5910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5914: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5918: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e5918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e591c: 0x0  nop
    ctx->pc = 0x2e591cu;
    // NOP
    // 0x2e5920: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5920u;
    {
        const bool branch_taken_0x2e5920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5920) {
            ctx->pc = 0x2E5940u;
            goto label_2e5940;
        }
    }
    ctx->pc = 0x2E5928u;
    // 0x2e5928: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e5928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e592c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e592cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5930: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2e5930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5934: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5938: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e593c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e593cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2e5940:
    // 0x2e5940: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e5940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5944: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E5944u;
    SET_GPR_U32(ctx, 31, 0x2E594Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E5944u, 0x2E594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E594Cu;
label_2e594c:
    // 0x2e594c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2e594cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5954: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e5954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e5958: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5960u;
}
