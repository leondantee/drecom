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

// Function: Em1e_parts_yuka_ck
// Address: 0x3738f0 - 0x374014
void Em1e_parts_yuka_ck_0x3738f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1e_parts_yuka_ck_0x3738f0");
#endif

    switch (ctx->pc) {
        case 0x37391cu: goto label_37391c;
        case 0x373938u: goto label_373938;
        case 0x373a74u: goto label_373a74;
        case 0x373b74u: goto label_373b74;
        case 0x373b98u: goto label_373b98;
        case 0x373bb8u: goto label_373bb8;
        case 0x373be8u: goto label_373be8;
        case 0x373c4cu: goto label_373c4c;
        case 0x373ec0u: goto label_373ec0;
        case 0x373ee0u: goto label_373ee0;
        case 0x373f10u: goto label_373f10;
        case 0x373f74u: goto label_373f74;
        default: break;
    }

    ctx->pc = 0x3738f0u;

    // 0x3738f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3738f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3738f4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x3738f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x3738f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3738f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3738fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3738fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x373900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373904: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x373904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x373908: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x373908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x37390c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x37390cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x373910: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x373910u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x373914: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x373914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x373918: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x373918u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_37391c:
    // 0x37391c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x37391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373920: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x373920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373924: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x373924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x373928: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x373928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37392c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x37392cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x373930: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x373930u;
    SET_GPR_U32(ctx, 31, 0x373938u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x373930u, 0x373938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373938u;
label_373938:
    // 0x373938: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x373938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x37393c: 0x3c04c743  lui         $a0, 0xC743
    ctx->pc = 0x37393cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51011 << 16));
    // 0x373940: 0x34825000  ori         $v0, $a0, 0x5000
    ctx->pc = 0x373940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    // 0x373944: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x373944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x373948: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x373948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37394c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x37394cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x373950: 0x0  nop
    ctx->pc = 0x373950u;
    // NOP
    // 0x373954: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x373954u;
    {
        const bool branch_taken_0x373954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x373954) {
            ctx->pc = 0x373A58u;
            goto label_373a58;
        }
    }
    ctx->pc = 0x37395Cu;
    // 0x37395c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x37395cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373960: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x373960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x373964: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x373964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373968: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x373968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37396c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37396cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x373970: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x373970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x373974: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x373974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x373978: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x373978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x37397c: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x37397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x373980: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x373980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x373984: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x373984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373988: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x373988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37398c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x37398cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x373990: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x373990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x373994: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x373994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x373998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x373998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37399c: 0x0  nop
    ctx->pc = 0x37399cu;
    // NOP
    // 0x3739a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3739a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3739a4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3739a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x3739a8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x3739a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3739ac: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3739acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3739b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3739b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3739b4: 0x0  nop
    ctx->pc = 0x3739b4u;
    // NOP
    // 0x3739b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3739b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3739bc: 0x0  nop
    ctx->pc = 0x3739bcu;
    // NOP
    // 0x3739c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3739C0u;
    {
        const bool branch_taken_0x3739c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3739c0) {
            ctx->pc = 0x3739D8u;
            goto label_3739d8;
        }
    }
    ctx->pc = 0x3739C8u;
    // 0x3739c8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x3739c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x3739cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3739ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3739d0: 0x0  nop
    ctx->pc = 0x3739d0u;
    // NOP
    // 0x3739d4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3739d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_3739d8:
    // 0x3739d8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x3739d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3739dc: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x3739dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x3739e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3739e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3739e4: 0x0  nop
    ctx->pc = 0x3739e4u;
    // NOP
    // 0x3739e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3739e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3739ec: 0x0  nop
    ctx->pc = 0x3739ecu;
    // NOP
    // 0x3739f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3739F0u;
    {
        const bool branch_taken_0x3739f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3739f0) {
            ctx->pc = 0x373A08u;
            goto label_373a08;
        }
    }
    ctx->pc = 0x3739F8u;
    // 0x3739f8: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x3739f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x3739fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3739fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373a00: 0x0  nop
    ctx->pc = 0x373a00u;
    // NOP
    // 0x373a04: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x373a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_373a08:
    // 0x373a08: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x373a08u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x373a0c: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x373a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x373a10: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x373a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x373a14: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x373a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x373a18: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x373a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373a1c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x373a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373a20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373a24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x373a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x373a28: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x373a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x373a2c: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x373a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x373a30: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x373a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x373a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373a38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x373a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373a3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373a40: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373a44: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373a48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373a4c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x373a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373a50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x373a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x373a54: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_373a58:
    // 0x373a58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x373a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x373a5c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x373a5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x373a60: 0x1640ffae  bnez        $s2, . + 4 + (-0x52 << 2)
    ctx->pc = 0x373A60u;
    {
        const bool branch_taken_0x373a60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x373a60) {
            ctx->pc = 0x37391Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37391c;
        }
    }
    ctx->pc = 0x373A68u;
    // 0x373a68: 0x24100019  addiu       $s0, $zero, 0x19
    ctx->pc = 0x373a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x373a6c: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x373a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x373a70: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x373a70u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_373a74:
    // 0x373a74: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x373a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x373a78: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x373a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x373a7c: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x373a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x373a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373a84: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x373a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373a88: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x373a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373a8c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373a90: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373a94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373a98: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373a9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373aa0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373aa4: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x373aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x373aa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373aac: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x373aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373ab0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x373ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x373ab4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373ab8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x373ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x373abc: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x373abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x373ac0: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x373ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x373ac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373ac8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x373ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373acc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373ad0: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373ad4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373ad8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373adc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373ae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373ae4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373ae8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373aec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373af0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373af4: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x373af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373af8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x373af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x373afc: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373b00: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x373b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x373b04: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x373b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x373b08: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x373b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x373b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373b10: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x373b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373b14: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373b18: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373b1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373b20: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373b24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373b28: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x373b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x373b2c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373b30: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373b34: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373b3c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x373b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373b40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x373b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x373b44: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373b48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x373b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x373b4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x373b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x373b50: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x373b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x373b54: 0x1640ffc7  bnez        $s2, . + 4 + (-0x39 << 2)
    ctx->pc = 0x373B54u;
    {
        const bool branch_taken_0x373b54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x373b54) {
            ctx->pc = 0x373A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373a74;
        }
    }
    ctx->pc = 0x373B5Cu;
    // 0x373b5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373b60: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373b64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x373b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x373b68: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x373b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x373b6c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x373B6Cu;
    SET_GPR_U32(ctx, 31, 0x373B74u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x373B74u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373B74u) { return; }
    ctx->pc = 0x373B74u;
label_373b74:
    // 0x373b74: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x373b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373b78: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x373b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x373b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373b80: 0x0  nop
    ctx->pc = 0x373b80u;
    // NOP
    // 0x373b84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373b88: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x373b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x373b8c: 0x24100019  addiu       $s0, $zero, 0x19
    ctx->pc = 0x373b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x373b90: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x373b90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x373b94: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x373b94u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_373b98:
    // 0x373b98: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373b9c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373ba0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373ba8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x373ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x373bac: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x373bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x373bb0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x373BB0u;
    SET_GPR_U32(ctx, 31, 0x373BB8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x373BB8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373BB8u) { return; }
    ctx->pc = 0x373BB8u;
label_373bb8:
    // 0x373bb8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x373bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373bbc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x373bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x373bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373bc4: 0x0  nop
    ctx->pc = 0x373bc4u;
    // NOP
    // 0x373bc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373bcc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x373bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x373bd0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x373bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x373bd4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x373bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x373bd8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x373bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x373bdc: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x373bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x373be0: 0xc05a078  jal         func_1681E0
    ctx->pc = 0x373BE0u;
    SET_GPR_U32(ctx, 31, 0x373BE8u);
    ctx->pc = 0x1681E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681E0u, 0x373BE0u, 0x373BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BE8u;
label_373be8:
    // 0x373be8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x373be8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x373bec: 0x126000ac  beqz        $s3, . + 4 + (0xAC << 2)
    ctx->pc = 0x373BECu;
    {
        const bool branch_taken_0x373bec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x373bec) {
            ctx->pc = 0x373EA0u;
            goto label_373ea0;
        }
    }
    ctx->pc = 0x373BF4u;
    // 0x373bf4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373bf8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373bfc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373c00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373c04: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x373c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373c08: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x373c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373c0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x373c0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x373c10: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x373c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x373c14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373c18: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373c1c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373c20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373c24: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x373c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373c28: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x373c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373c2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x373c2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x373c30: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x373c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x373c34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x373c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373c38: 0x0  nop
    ctx->pc = 0x373c38u;
    // NOP
    // 0x373c3c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x373c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x373c40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x373c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x373c44: 0xc067588  jal         func_19D620
    ctx->pc = 0x373C44u;
    SET_GPR_U32(ctx, 31, 0x373C4Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x373C44u, 0x373C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C4Cu;
label_373c4c:
    // 0x373c4c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x373c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x373c50: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373c54: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373c58: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373c60: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x373c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373c64: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x373c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373c68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373c68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373c6c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x373c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x373c70: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373c74: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373c78: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373c7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373c80: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x373c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373c84: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x373c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373c88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373c8c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373c90: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373c94: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x373c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x373c98: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373ca0: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x373ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373ca4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x373ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373ca8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373cac: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x373cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x373cb0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x373cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373cb4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373cb8: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373cbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373cc0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373cc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373cc8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373ccc: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x373cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x373cd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373cd4: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x373cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373cd8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x373cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373cdc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373ce0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x373ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x373ce4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x373ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373ce8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373cec: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373cf0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373cf4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373cf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373cfc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373d00: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x373d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x373d04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373d08: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x373d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373d0c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x373d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373d10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373d14: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373d18: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x373d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373d1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373d20: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373d24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373d28: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373d28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373d2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373d30: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373d34: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x373d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x373d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373d3c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x373d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373d40: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x373d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373d44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373d48: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x373d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x373d4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373d50: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373d54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373d58: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373d5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373d60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373d64: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373d68: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373d6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373d70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373d74: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x373d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373d78: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x373d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373d7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373d80: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x373d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x373d84: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373d88: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373d8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373d90: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373d94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373d98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373d9c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373da0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373da4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373da8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373dac: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x373dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373db0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x373db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373db4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373db8: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373dbc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373dc0: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373dc4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373dc8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373dcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373dd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373dd4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373dd8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373ddc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373de4: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x373de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373de8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x373de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373dec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373df0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x373df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x373df4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373df8: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373dfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373e00: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373e04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373e08: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x373e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x373e0c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373e10: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373e14: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373e1c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x373e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373e20: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x373e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373e24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373e28: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x373e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x373e2c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373e30: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373e34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373e38: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373e38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373e3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373e40: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x373e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x373e44: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373e48: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373e4c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373e54: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x373e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373e58: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x373e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373e5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373e5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373e60: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x373e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x373e64: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x373e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x373e68: 0x2442b550  addiu       $v0, $v0, -0x4AB0
    ctx->pc = 0x373e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948176));
    // 0x373e6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x373e70: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373e74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x373e78: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x373e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x373e7c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x373e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373e80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x373e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x373e84: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373e88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373e8c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x373e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373e90: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x373e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373e94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x373e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x373e98: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x373e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x373e9c: 0x0  nop
    ctx->pc = 0x373e9cu;
    // NOP
label_373ea0:
    // 0x373ea0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x373ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x373ea4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x373ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x373ea8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x373ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x373eac: 0x1640ff3a  bnez        $s2, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x373EACu;
    {
        const bool branch_taken_0x373eac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x373eac) {
            ctx->pc = 0x373B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373b98;
        }
    }
    ctx->pc = 0x373EB4u;
    // 0x373eb4: 0x24100021  addiu       $s0, $zero, 0x21
    ctx->pc = 0x373eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x373eb8: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x373eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x373ebc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x373ebcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_373ec0:
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
            goto label_373fd8;
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
label_373fd8:
    // 0x373fd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x373fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x373fdc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x373fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x373fe0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x373fe0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x373fe4: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x373fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x373fe8: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x373fe8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x373fec: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x373FECu;
    {
        const bool branch_taken_0x373fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373fec) {
            ctx->pc = 0x373EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373ec0;
        }
    }
    ctx->pc = 0x373FF4u;
    // 0x373ff4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x373ff4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x373ff8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x373ff8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373ffc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x373ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374008: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x374008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x37400c: 0x3e00008  jr          $ra
    ctx->pc = 0x37400Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37400Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374014u;
}
