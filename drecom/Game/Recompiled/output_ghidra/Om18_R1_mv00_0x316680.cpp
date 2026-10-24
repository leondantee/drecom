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

// Function: Om18_R1_mv00
// Address: 0x316680 - 0x316b28
void Om18_R1_mv00_0x316680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_R1_mv00_0x316680");
#endif

    switch (ctx->pc) {
        case 0x316724u: goto label_316724;
        case 0x316770u: goto label_316770;
        case 0x316894u: goto label_316894;
        case 0x3168a0u: goto label_3168a0;
        case 0x3168e0u: goto label_3168e0;
        case 0x3168ecu: goto label_3168ec;
        case 0x316968u: goto label_316968;
        case 0x316a38u: goto label_316a38;
        case 0x316a60u: goto label_316a60;
        default: break;
    }

    ctx->pc = 0x316680u;

    // 0x316680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x316680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x316684: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x316684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x316688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31668c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x31668cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x316690: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x316690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x316694: 0x24429be0  addiu       $v0, $v0, -0x6420
    ctx->pc = 0x316694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941664));
    // 0x316698: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x316698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31669c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31669cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399BE0u));
    // 0x3166a0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3166a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3166a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3166a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3166a8: 0x8c5012a4  lw          $s0, 0x12A4($v0)
    ctx->pc = 0x3166a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x3166ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3166acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3166b0: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x3166b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3166b4: 0xc461010c  lwc1        $f1, 0x10C($v1)
    ctx->pc = 0x3166b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3166b8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3166b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x3166bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3166bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3166c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3166c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3166c4: 0x0  nop
    ctx->pc = 0x3166c4u;
    // NOP
    // 0x3166c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3166c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3166cc: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x3166ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x3166d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3166d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3166d4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3166d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3166d8: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x3166d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3166dc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3166dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3166e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3166e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3166e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3166e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3166e8: 0x0  nop
    ctx->pc = 0x3166e8u;
    // NOP
    // 0x3166ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3166ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3166f0: 0x0  nop
    ctx->pc = 0x3166f0u;
    // NOP
    // 0x3166f4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x3166F4u;
    {
        const bool branch_taken_0x3166f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3166f4) {
            ctx->pc = 0x316714u;
            goto label_316714;
        }
    }
    ctx->pc = 0x3166FCu;
    // 0x3166fc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x3166fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x316700: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x316700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x316704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316708: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31670c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x31670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x316710: 0xe440010c  swc1        $f0, 0x10C($v0)
    ctx->pc = 0x316710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
label_316714:
    // 0x316714: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316718: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x316718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x31671c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x31671Cu;
    SET_GPR_U32(ctx, 31, 0x316724u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x316724u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x316724u) { return; }
    ctx->pc = 0x316724u;
label_316724:
    // 0x316724: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316728: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31672c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x31672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x316730: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x316730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x316734: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316738: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x316738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x31673c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x31673cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x316740: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316744: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x316744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x316748: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x316748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x31674c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x31674cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316750: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316754: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316758: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x316758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x31675c: 0x8c8402d0  lw          $a0, 0x2D0($a0)
    ctx->pc = 0x31675cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x316760: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x316760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x316764: 0x24460104  addiu       $a2, $v0, 0x104
    ctx->pc = 0x316764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x316768: 0xc040d62  jal         func_103588
    ctx->pc = 0x316768u;
    SET_GPR_U32(ctx, 31, 0x316770u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x316770u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x316770u) { return; }
    ctx->pc = 0x316770u;
label_316770:
    // 0x316770: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316774: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x316774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x316778: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x316778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31677c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31677cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x316780: 0x108300a3  beq         $a0, $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x316780u;
    {
        const bool branch_taken_0x316780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x316780) {
            ctx->pc = 0x316A10u;
            goto label_316a10;
        }
    }
    ctx->pc = 0x316788u;
    // 0x316788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x316788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31678c: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x31678Cu;
    {
        const bool branch_taken_0x31678c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31678c) {
            ctx->pc = 0x3168FCu;
            goto label_3168fc;
        }
    }
    ctx->pc = 0x316794u;
    // 0x316794: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x316794u;
    {
        const bool branch_taken_0x316794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x316794) {
            ctx->pc = 0x3167A4u;
            goto label_3167a4;
        }
    }
    ctx->pc = 0x31679Cu;
    // 0x31679c: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x31679Cu;
    {
        const bool branch_taken_0x31679c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31679c) {
            ctx->pc = 0x316B14u;
            goto label_316b14;
        }
    }
    ctx->pc = 0x3167A4u;
label_3167a4:
    // 0x3167a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167a8: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x3167a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x3167ac: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3167acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3167b0: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x3167b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x3167b4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3167b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3167b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167bc: 0xac4300c0  sw          $v1, 0xC0($v0)
    ctx->pc = 0x3167bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
    // 0x3167c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167c4: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x3167c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3167c8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3167c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3167cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167d0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x3167d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3167d4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3167d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3167d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167dc: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x3167dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3167e0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3167e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3167e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167e8: 0xc440012c  lwc1        $f0, 0x12C($v0)
    ctx->pc = 0x3167e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3167ec: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3167ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3167f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167f4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x3167f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3167f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3167f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3167fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316800: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x316800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x316804: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x316804u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x316808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31680c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316810: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x316810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x316814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316818: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31681c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x31681cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x316820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316828: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x316828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x31682c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31682cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x316830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316838: 0xe44000dc  swc1        $f0, 0xDC($v0)
    ctx->pc = 0x316838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
    // 0x31683c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316840: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x316840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x316844: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x316844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x316848: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x316848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x31684c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316850: 0xac40128c  sw          $zero, 0x128C($v0)
    ctx->pc = 0x316850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 0));
    // 0x316854: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316858: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x316858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x31685c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x31685cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x316860: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x316860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316868: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x316868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31686c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31686cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x316870: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x316870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x316874: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x316874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x316878: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x316878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31687c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31687cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x316880: 0x24045704  addiu       $a0, $zero, 0x5704
    ctx->pc = 0x316880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22276));
    // 0x316884: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x316884u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x316888: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x316888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31688c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31688Cu;
    SET_GPR_U32(ctx, 31, 0x316894u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31688Cu, 0x316894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316894u;
label_316894:
    // 0x316894: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x316894u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x316898: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x316898u;
    SET_GPR_U32(ctx, 31, 0x3168A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x316898u, 0x3168A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168A0u;
label_3168a0:
    // 0x3168a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3168a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3168a4: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x3168a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x3168a8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3168a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3168ac: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x3168acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x3168b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3168b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3168b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3168b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3168b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3168b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3168bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3168bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3168c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3168c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3168c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3168c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3168c8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3168c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3168cc: 0x24044501  addiu       $a0, $zero, 0x4501
    ctx->pc = 0x3168ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17665));
    // 0x3168d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3168d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3168d4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3168d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3168d8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3168D8u;
    SET_GPR_U32(ctx, 31, 0x3168E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3168D8u, 0x3168E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168E0u;
label_3168e0:
    // 0x3168e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3168e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3168e4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3168E4u;
    SET_GPR_U32(ctx, 31, 0x3168ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3168E4u, 0x3168ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168ECu;
label_3168ec:
    // 0x3168ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3168ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3168f0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3168f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3168f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3168f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3168f8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3168f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3168fc:
    // 0x3168fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3168fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316900: 0x8c83128c  lw          $v1, 0x128C($a0)
    ctx->pc = 0x316900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x316904: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x316904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x316908: 0xac83128c  sw          $v1, 0x128C($a0)
    ctx->pc = 0x316908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 3));
    // 0x31690c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316910: 0x8c63128c  lw          $v1, 0x128C($v1)
    ctx->pc = 0x316910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x316914: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x316914u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x316918: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x316918u;
    {
        const bool branch_taken_0x316918 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x316918) {
            ctx->pc = 0x316970u;
            goto label_316970;
        }
    }
    ctx->pc = 0x316920u;
    // 0x316920: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x316920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x316924: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x316924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x316928: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x316928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31692c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x316930: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x316930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x316934: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x316934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x316938: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x316938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31693c: 0x34440417  ori         $a0, $v0, 0x417
    ctx->pc = 0x31693cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1047);
    // 0x316940: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316944: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x316944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x316948: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x316948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x31694c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x31694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316950: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x316950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316954: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x316954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x316958: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x316958u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31695c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31695cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x316960: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x316960u;
    SET_GPR_U32(ctx, 31, 0x316968u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x316960u, 0x316968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316968u;
label_316968:
    // 0x316968: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31696c: 0xac60128c  sw          $zero, 0x128C($v1)
    ctx->pc = 0x31696cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 0));
label_316970:
    // 0x316970: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x316970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316974: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x316974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x316978: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x316978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x31697c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x31697cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x316980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316984: 0x0  nop
    ctx->pc = 0x316984u;
    // NOP
    // 0x316988: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x316988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31698c: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x31698cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x316990: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x316990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316994: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x316994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x316998: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x316998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x31699c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x31699cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3169a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3169a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3169a4: 0x0  nop
    ctx->pc = 0x3169a4u;
    // NOP
    // 0x3169a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3169a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3169ac: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x3169acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x3169b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3169b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3169b4: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x3169b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3169b8: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x3169b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x3169bc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x3169bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3169c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3169c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3169c4: 0x0  nop
    ctx->pc = 0x3169c4u;
    // NOP
    // 0x3169c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3169c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3169cc: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x3169ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x3169d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3169d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3169d4: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x3169d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3169d8: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x3169d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x3169dc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3169dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3169e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3169e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3169e4: 0x0  nop
    ctx->pc = 0x3169e4u;
    // NOP
    // 0x3169e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3169e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3169ec: 0x0  nop
    ctx->pc = 0x3169ecu;
    // NOP
    // 0x3169f0: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x3169F0u;
    {
        const bool branch_taken_0x3169f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3169f0) {
            ctx->pc = 0x316B14u;
            goto label_316b14;
        }
    }
    ctx->pc = 0x3169F8u;
    // 0x3169f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3169f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3169fc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3169fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x316a00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x316a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x316a04: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x316a04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x316a08: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x316A08u;
    {
        const bool branch_taken_0x316a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316a08) {
            ctx->pc = 0x316B14u;
            goto label_316b14;
        }
    }
    ctx->pc = 0x316A10u;
label_316a10:
    // 0x316a10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a14: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x316a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x316a18: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x316a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x316a1c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x316a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316a20: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x316a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316a24: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x316a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x316a28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x316a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x316a2c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x316a2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x316a30: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x316A30u;
    SET_GPR_U32(ctx, 31, 0x316A38u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x316A30u, 0x316A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A38u;
label_316a38:
    // 0x316a38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a3c: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x316a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x316a40: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x316a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x316a44: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x316a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316a48: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x316a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316a4c: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x316a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x316a50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x316a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316a54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x316a54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x316a58: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x316A58u;
    SET_GPR_U32(ctx, 31, 0x316A60u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x316A58u, 0x316A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A60u;
label_316a60:
    // 0x316a60: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x316a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a64: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x316a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x316a68: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x316a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x316a6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x316a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x316a70: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x316a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x316a74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x316a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316a78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x316a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x316a80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a84: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x316a84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x316a88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x316a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x316a90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x316a94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x316a98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x316a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x316aa0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x316aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x316aa4: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x316aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x316aa8: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x316aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x316aac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316ab0: 0xac6400c0  sw          $a0, 0xC0($v1)
    ctx->pc = 0x316ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 4));
    // 0x316ab4: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x316ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x316ab8: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x316ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x316abc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316ac0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316ac4: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x316ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x316ac8: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x316ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x316acc: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x316accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x316ad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316ad4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316ad8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x316ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x316adc: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x316adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x316ae0: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x316ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x316ae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316ae8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316aec: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x316aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x316af0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316af4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316af8: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x316af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x316afc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316b00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316b04: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x316b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x316b08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316b0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316b10: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x316b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_316b14:
    // 0x316b14: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x316b14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316b1c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x316b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x316b20: 0x3e00008  jr          $ra
    ctx->pc = 0x316B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316B28u;
}
