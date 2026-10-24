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

// Function: Em09_R1_mv07
// Address: 0x347350 - 0x347bf4
void Em09_R1_mv07_0x347350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv07_0x347350");
#endif

    switch (ctx->pc) {
        case 0x3473f4u: goto label_3473f4;
        case 0x3474d4u: goto label_3474d4;
        case 0x3474e4u: goto label_3474e4;
        case 0x3474f4u: goto label_3474f4;
        case 0x347500u: goto label_347500;
        case 0x3475f4u: goto label_3475f4;
        case 0x34765cu: goto label_34765c;
        case 0x34779cu: goto label_34779c;
        case 0x3477a8u: goto label_3477a8;
        case 0x3477b8u: goto label_3477b8;
        case 0x3477c4u: goto label_3477c4;
        case 0x3477e4u: goto label_3477e4;
        case 0x34784cu: goto label_34784c;
        default: break;
    }

    ctx->pc = 0x347350u;

    // 0x347350: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x347350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x347354: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x347354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x347358: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x347358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x34735c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x347360: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x347360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x347364: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x347364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x347368: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x347368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34736c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x347370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347374: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x347374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x347378: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34737c: 0x8c7202d0  lw          $s2, 0x2D0($v1)
    ctx->pc = 0x34737cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x347380: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347384: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x347384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347388: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x347388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x34738c: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x34738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x347390: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x347390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x347394: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347398: 0x90720002  lbu         $s2, 0x2($v1)
    ctx->pc = 0x347398u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34739c: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x34739cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3473a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3473a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3473a4: 0x108300f9  beq         $a0, $v1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x3473A4u;
    {
        const bool branch_taken_0x3473a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3473a4) {
            ctx->pc = 0x34778Cu;
            goto label_34778c;
        }
    }
    ctx->pc = 0x3473ACu;
    // 0x3473ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3473acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3473b0: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3473B0u;
    {
        const bool branch_taken_0x3473b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3473b0) {
            ctx->pc = 0x3474C4u;
            goto label_3474c4;
        }
    }
    ctx->pc = 0x3473B8u;
    // 0x3473b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3473B8u;
    {
        const bool branch_taken_0x3473b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3473b8) {
            ctx->pc = 0x3473C8u;
            goto label_3473c8;
        }
    }
    ctx->pc = 0x3473C0u;
    // 0x3473c0: 0x10000201  b           . + 4 + (0x201 << 2)
    ctx->pc = 0x3473C0u;
    {
        const bool branch_taken_0x3473c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3473c0) {
            ctx->pc = 0x347BC8u;
            goto label_347bc8;
        }
    }
    ctx->pc = 0x3473C8u;
label_3473c8:
    // 0x3473c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3473c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3473cc: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x3473ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3473d0: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3473d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3473d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3473d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3473d8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3473d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3473dc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3473dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3473e0: 0x24063c2c  addiu       $a2, $zero, 0x3C2C
    ctx->pc = 0x3473e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15404));
    // 0x3473e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3473e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3473e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3473e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3473ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3473ECu;
    SET_GPR_U32(ctx, 31, 0x3473F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3473ECu, 0x3473F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3473F4u;
label_3473f4:
    // 0x3473f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3473f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3473f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3473f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3473fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3473fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347400: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x347400u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x347404: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x347404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347408: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34740c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34740cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347410: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x347410u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x347414: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x347414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x347418: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34741c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34741cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347420: 0xa0850072  sb          $a1, 0x72($a0)
    ctx->pc = 0x347420u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 5));
    // 0x347424: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347428: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x347428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34742c: 0x24720960  addiu       $s2, $v1, 0x960
    ctx->pc = 0x34742cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x347430: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x347430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x347434: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x347434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x347438: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x347438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34743c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34743cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x347440: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x347440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x347444: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x347444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347448: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x347448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34744c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x347450: 0x34650001  ori         $a1, $v1, 0x1
    ctx->pc = 0x347450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x347454: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x347454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x347458: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x347458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x34745c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34745cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347460: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x347460u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x347464: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x347464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x347468: 0x2464a2e0  addiu       $a0, $v1, -0x5D20
    ctx->pc = 0x347468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943456));
    // 0x34746c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347470: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x347470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x347474: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347478: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x347478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34747c: 0xa0800028  sb          $zero, 0x28($a0)
    ctx->pc = 0x34747cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x347480: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x347480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347484: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347488: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x347488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34748c: 0xa0850029  sb          $a1, 0x29($a0)
    ctx->pc = 0x34748cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 5));
    // 0x347490: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x347490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x347494: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x347494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x347498: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34749c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3474a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3474a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3474a4: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x3474a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x3474a8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3474a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3474ac: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x3474acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3474b0: 0x24723840  addiu       $s2, $v1, 0x3840
    ctx->pc = 0x3474b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x3474b4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x3474b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x3474b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3474b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3474bc: 0x0  nop
    ctx->pc = 0x3474bcu;
    // NOP
    // 0x3474c0: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x3474c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_3474c4:
    // 0x3474c4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3474c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3474c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3474c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3474cc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3474CCu;
    SET_GPR_U32(ctx, 31, 0x3474D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3474CCu, 0x3474D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474D4u;
label_3474d4:
    // 0x3474d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3474d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3474d8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3474d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3474dc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3474DCu;
    SET_GPR_U32(ctx, 31, 0x3474E4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3474DCu, 0x3474E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474E4u;
label_3474e4:
    // 0x3474e4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3474e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3474e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3474e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3474ec: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3474ECu;
    SET_GPR_U32(ctx, 31, 0x3474F4u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3474ECu, 0x3474F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474F4u;
label_3474f4:
    // 0x3474f4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3474f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3474f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3474F8u;
    SET_GPR_U32(ctx, 31, 0x347500u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3474F8u, 0x347500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347500u;
label_347500:
    // 0x347500: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347504: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x347504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x347508: 0x24723840  addiu       $s2, $v1, 0x3840
    ctx->pc = 0x347508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x34750c: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x34750cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347510: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x347510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x347514: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34751c: 0x0  nop
    ctx->pc = 0x34751cu;
    // NOP
    // 0x347520: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x347520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x347524: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x347524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x347528: 0xc641012c  lwc1        $f1, 0x12C($s2)
    ctx->pc = 0x347528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34752c: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x34752cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x347530: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347538: 0x0  nop
    ctx->pc = 0x347538u;
    // NOP
    // 0x34753c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34753cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x347540: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x347540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x347544: 0xc6410130  lwc1        $f1, 0x130($s2)
    ctx->pc = 0x347544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347548: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x347548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x34754c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34754cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347554: 0x0  nop
    ctx->pc = 0x347554u;
    // NOP
    // 0x347558: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x347558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34755c: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x34755cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x347560: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x347560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347564: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x347564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x347568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34756c: 0x0  nop
    ctx->pc = 0x34756cu;
    // NOP
    // 0x347570: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x347570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347574: 0x0  nop
    ctx->pc = 0x347574u;
    // NOP
    // 0x347578: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x347578u;
    {
        const bool branch_taken_0x347578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x347578) {
            ctx->pc = 0x3475B0u;
            goto label_3475b0;
        }
    }
    ctx->pc = 0x347580u;
    // 0x347580: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x347580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x347584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347588: 0x0  nop
    ctx->pc = 0x347588u;
    // NOP
    // 0x34758c: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x34758cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x347590: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x347590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x347594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347598: 0x0  nop
    ctx->pc = 0x347598u;
    // NOP
    // 0x34759c: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x34759cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x3475a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3475a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3475a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3475a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3475a8: 0x0  nop
    ctx->pc = 0x3475a8u;
    // NOP
    // 0x3475ac: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x3475acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
label_3475b0:
    // 0x3475b0: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x3475b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3475b4: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x3475b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x3475b8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3475b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3475bc: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x3475bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3475c0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3475C0u;
    {
        const bool branch_taken_0x3475c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3475c0) {
            ctx->pc = 0x3475D4u;
            goto label_3475d4;
        }
    }
    ctx->pc = 0x3475C8u;
    // 0x3475c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3475c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3475cc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3475ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3475d0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x3475d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_3475d4:
    // 0x3475d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3475d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3475d8: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x3475d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x3475dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3475dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3475e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3475e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3475e4: 0x14830178  bne         $a0, $v1, . + 4 + (0x178 << 2)
    ctx->pc = 0x3475E4u;
    {
        const bool branch_taken_0x3475e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3475e4) {
            ctx->pc = 0x347BC8u;
            goto label_347bc8;
        }
    }
    ctx->pc = 0x3475ECu;
    // 0x3475ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3475ECu;
    SET_GPR_U32(ctx, 31, 0x3475F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3475ECu, 0x3475F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3475F4u;
label_3475f4:
    // 0x3475f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3475f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3475f8: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x3475f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3475fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3475fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347600: 0x14830171  bne         $a0, $v1, . + 4 + (0x171 << 2)
    ctx->pc = 0x347600u;
    {
        const bool branch_taken_0x347600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x347600) {
            ctx->pc = 0x347BC8u;
            goto label_347bc8;
        }
    }
    ctx->pc = 0x347608u;
    // 0x347608: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34760c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x34760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347610: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x347610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x347614: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x347614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x347618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34761c: 0x0  nop
    ctx->pc = 0x34761cu;
    // NOP
    // 0x347620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x347620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347624: 0x0  nop
    ctx->pc = 0x347624u;
    // NOP
    // 0x347628: 0x45000167  bc1f        . + 4 + (0x167 << 2)
    ctx->pc = 0x347628u;
    {
        const bool branch_taken_0x347628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x347628) {
            ctx->pc = 0x347BC8u;
            goto label_347bc8;
        }
    }
    ctx->pc = 0x347630u;
    // 0x347630: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x347630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x347634: 0x2463a4e8  addiu       $v1, $v1, -0x5B18
    ctx->pc = 0x347634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943976));
    // 0x347638: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x347638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x34763c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x34763cu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x3AA4E8u));
    // 0x347640: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x347640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3AA4EAu));
    // 0x347644: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x347644u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x347648: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x347648u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34764c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34764cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x347650: 0x2473dbc0  addiu       $s3, $v1, -0x2440
    ctx->pc = 0x347650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x347654: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x347654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347658: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x347658u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_34765c:
    // 0x34765c: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x34765cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x347660: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x347660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x347664: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x347664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x347668: 0x90630088  lbu         $v1, 0x88($v1)
    ctx->pc = 0x347668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x34766c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34766cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x347670: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x347670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x347674: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x347674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347678: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x347678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34767c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x347680: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x347680u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x347684: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347688: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x347688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34768c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x34768cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347690: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347694: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x347694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347698: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x347698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34769c: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x34769Cu;
    {
        const bool branch_taken_0x34769c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34769c) {
            ctx->pc = 0x347770u;
            goto label_347770;
        }
    }
    ctx->pc = 0x3476A4u;
    // 0x3476a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3476a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3476a8: 0x0  nop
    ctx->pc = 0x3476a8u;
    // NOP
    // 0x3476ac: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x3476acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x3476b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3476b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3476b4: 0x0  nop
    ctx->pc = 0x3476b4u;
    // NOP
    // 0x3476b8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x3476b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x3476bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3476bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3476c0: 0x0  nop
    ctx->pc = 0x3476c0u;
    // NOP
    // 0x3476c4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3476c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3476c8: 0xc6600120  lwc1        $f0, 0x120($s3)
    ctx->pc = 0x3476c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3476cc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x3476ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x3476d0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3476d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3476d4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x3476d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3476d8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3476d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x3476dc: 0xc6600128  lwc1        $f0, 0x128($s3)
    ctx->pc = 0x3476dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3476e0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3476e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3476e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3476e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3476e8: 0x0  nop
    ctx->pc = 0x3476e8u;
    // NOP
    // 0x3476ec: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3476ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3476f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3476f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3476f4: 0x0  nop
    ctx->pc = 0x3476f4u;
    // NOP
    // 0x3476f8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3476f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x3476fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3476fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347700: 0x0  nop
    ctx->pc = 0x347700u;
    // NOP
    // 0x347704: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x347704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x347708: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x347708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34770c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34770cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347710: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x347710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x347714: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x347714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x347718: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34771c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34771cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x347720: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x347720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x347724: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34772c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347730: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x347730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x347734: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x347734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x347738: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34773c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347740: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x347740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x347744: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x347744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x347748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34774c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347750: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x347750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x347754: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347758: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x347758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34775c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x34775cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x347760: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347764: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x347764u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x347768: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x347768u;
    {
        const bool branch_taken_0x347768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347768) {
            ctx->pc = 0x347BC8u;
            goto label_347bc8;
        }
    }
    ctx->pc = 0x347770u;
label_347770:
    // 0x347770: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x347770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x347774: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x347774u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x347778: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x347778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34777c: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x34777Cu;
    {
        const bool branch_taken_0x34777c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34777c) {
            ctx->pc = 0x34765Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34765c;
        }
    }
    ctx->pc = 0x347784u;
    // 0x347784: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x347784u;
    {
        const bool branch_taken_0x347784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347784) {
            ctx->pc = 0x347BC8u;
            goto label_347bc8;
        }
    }
    ctx->pc = 0x34778Cu;
label_34778c:
    // 0x34778c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34778cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347790: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x347790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x347794: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x347794u;
    SET_GPR_U32(ctx, 31, 0x34779Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x347794u, 0x34779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34779Cu;
label_34779c:
    // 0x34779c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34779cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3477a0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3477A0u;
    SET_GPR_U32(ctx, 31, 0x3477A8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3477A0u, 0x3477A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477A8u;
label_3477a8:
    // 0x3477a8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3477a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3477ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3477acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3477b0: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3477B0u;
    SET_GPR_U32(ctx, 31, 0x3477B8u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3477B0u, 0x3477B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477B8u;
label_3477b8:
    // 0x3477b8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3477b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3477bc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3477BCu;
    SET_GPR_U32(ctx, 31, 0x3477C4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3477BCu, 0x3477C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477C4u;
label_3477c4:
    // 0x3477c4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3477c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3477c8: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x3477c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x3477cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3477ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3477d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3477d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3477d4: 0x14830068  bne         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x3477D4u;
    {
        const bool branch_taken_0x3477d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3477d4) {
            ctx->pc = 0x347978u;
            goto label_347978;
        }
    }
    ctx->pc = 0x3477DCu;
    // 0x3477dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3477DCu;
    SET_GPR_U32(ctx, 31, 0x3477E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3477DCu, 0x3477E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477E4u;
label_3477e4:
    // 0x3477e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3477e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3477e8: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x3477e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3477ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3477ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3477f0: 0x14830061  bne         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x3477F0u;
    {
        const bool branch_taken_0x3477f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3477f0) {
            ctx->pc = 0x347978u;
            goto label_347978;
        }
    }
    ctx->pc = 0x3477F8u;
    // 0x3477f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3477f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3477fc: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x3477fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347800: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x347800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x347804: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x347804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x347808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34780c: 0x0  nop
    ctx->pc = 0x34780cu;
    // NOP
    // 0x347810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x347810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347814: 0x0  nop
    ctx->pc = 0x347814u;
    // NOP
    // 0x347818: 0x45000057  bc1f        . + 4 + (0x57 << 2)
    ctx->pc = 0x347818u;
    {
        const bool branch_taken_0x347818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x347818) {
            ctx->pc = 0x347978u;
            goto label_347978;
        }
    }
    ctx->pc = 0x347820u;
    // 0x347820: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x347820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x347824: 0x2463a4f0  addiu       $v1, $v1, -0x5B10
    ctx->pc = 0x347824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943984));
    // 0x347828: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x347828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x34782c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x34782cu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x3AA4F0u));
    // 0x347830: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x347830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3AA4F2u));
    // 0x347834: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x347834u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x347838: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x347838u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34783c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34783cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x347840: 0x2474dbc0  addiu       $s4, $v1, -0x2440
    ctx->pc = 0x347840u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x347844: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x347844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347848: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x347848u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_34784c:
    // 0x34784c: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x34784cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x347850: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x347850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x347854: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x347854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x347858: 0x9063008c  lbu         $v1, 0x8C($v1)
    ctx->pc = 0x347858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x34785c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34785cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x347860: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x347860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x347864: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x347864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347868: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x347868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34786c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34786cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x347870: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x347870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x347874: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347878: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x347878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34787c: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x34787cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347880: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x347880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x347884: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x347884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347888: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x347888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34788c: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x34788Cu;
    {
        const bool branch_taken_0x34788c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34788c) {
            ctx->pc = 0x347960u;
            goto label_347960;
        }
    }
    ctx->pc = 0x347894u;
    // 0x347894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347898: 0x0  nop
    ctx->pc = 0x347898u;
    // NOP
    // 0x34789c: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x34789cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x3478a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3478a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3478a4: 0x0  nop
    ctx->pc = 0x3478a4u;
    // NOP
    // 0x3478a8: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x3478a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x3478ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3478acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3478b0: 0x0  nop
    ctx->pc = 0x3478b0u;
    // NOP
    // 0x3478b4: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x3478b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x3478b8: 0xc6800120  lwc1        $f0, 0x120($s4)
    ctx->pc = 0x3478b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3478bc: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x3478bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x3478c0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3478c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3478c4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x3478c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3478c8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x3478c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x3478cc: 0xc6800128  lwc1        $f0, 0x128($s4)
    ctx->pc = 0x3478ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3478d0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x3478d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x3478d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3478d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3478d8: 0x0  nop
    ctx->pc = 0x3478d8u;
    // NOP
    // 0x3478dc: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x3478dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x3478e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3478e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3478e4: 0x0  nop
    ctx->pc = 0x3478e4u;
    // NOP
    // 0x3478e8: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x3478e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x3478ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3478ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3478f0: 0x0  nop
    ctx->pc = 0x3478f0u;
    // NOP
    // 0x3478f4: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x3478f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x3478f8: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x3478f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x3478fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3478fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347900: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x347900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x347904: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x347904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x347908: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x347908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x34790c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34790cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x347910: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x347910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x347914: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34791c: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x34791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x347920: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x347920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x347924: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x347924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x347928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34792c: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x34792cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x347930: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x347930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x347934: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x347934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x347938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34793c: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x34793cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x347940: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x347940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x347944: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x347944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x347948: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x347948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34794c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x34794cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x347950: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x347950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x347954: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x347954u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x347958: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x347958u;
    {
        const bool branch_taken_0x347958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347958) {
            ctx->pc = 0x347978u;
            goto label_347978;
        }
    }
    ctx->pc = 0x347960u;
label_347960:
    // 0x347960: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x347960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x347964: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x347964u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x347968: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x347968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34796c: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x34796Cu;
    {
        const bool branch_taken_0x34796c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34796c) {
            ctx->pc = 0x34784Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34784c;
        }
    }
    ctx->pc = 0x347974u;
    // 0x347974: 0x0  nop
    ctx->pc = 0x347974u;
    // NOP
label_347978:
    // 0x347978: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34797c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34797cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x347980: 0x24723840  addiu       $s2, $v1, 0x3840
    ctx->pc = 0x347980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x347984: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x347984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347988: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x347988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34798c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34798cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347990: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347994: 0x0  nop
    ctx->pc = 0x347994u;
    // NOP
    // 0x347998: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x347998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34799c: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x34799cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x3479a0: 0xc641012c  lwc1        $f1, 0x12C($s2)
    ctx->pc = 0x3479a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3479a4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x3479a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x3479a8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3479a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3479ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3479acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3479b0: 0x0  nop
    ctx->pc = 0x3479b0u;
    // NOP
    // 0x3479b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3479b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3479b8: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x3479b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x3479bc: 0xc6410130  lwc1        $f1, 0x130($s2)
    ctx->pc = 0x3479bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3479c0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x3479c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x3479c4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3479c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3479c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3479c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3479cc: 0x0  nop
    ctx->pc = 0x3479ccu;
    // NOP
    // 0x3479d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3479d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3479d4: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x3479d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x3479d8: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x3479d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3479dc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3479dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x3479e0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3479e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3479e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3479e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3479e8: 0x0  nop
    ctx->pc = 0x3479e8u;
    // NOP
    // 0x3479ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3479ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3479f0: 0x0  nop
    ctx->pc = 0x3479f0u;
    // NOP
    // 0x3479f4: 0x45000074  bc1f        . + 4 + (0x74 << 2)
    ctx->pc = 0x3479F4u;
    {
        const bool branch_taken_0x3479f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3479f4) {
            ctx->pc = 0x347BC8u;
            goto label_347bc8;
        }
    }
    ctx->pc = 0x3479FCu;
    // 0x3479fc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3479fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x347a00: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347a08: 0x0  nop
    ctx->pc = 0x347a08u;
    // NOP
    // 0x347a0c: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x347a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x347a10: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x347a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x347a14: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347a1c: 0x0  nop
    ctx->pc = 0x347a1cu;
    // NOP
    // 0x347a20: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x347a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x347a24: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x347a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x347a28: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347a2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347a2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347a30: 0x0  nop
    ctx->pc = 0x347a30u;
    // NOP
    // 0x347a34: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x347a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x347a38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x347a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347a3c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x347a40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x347a44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x347a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347a48: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x347a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x347a50: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x347a54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x347a58: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x347a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x347a60: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x347a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x347a68: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x347a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x347a6c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347a74: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x347a74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x347a78: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a7c: 0x24721330  addiu       $s2, $v1, 0x1330
    ctx->pc = 0x347a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347a80: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x347a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x347a84: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x347a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x347a88: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x347a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x347a8c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x347a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x347a90: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a94: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x347a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x347a98: 0x24720960  addiu       $s2, $v1, 0x960
    ctx->pc = 0x347a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x347a9c: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x347a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x347aa0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x347aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347aa4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x347aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x347aa8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x347aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x347aac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347ab0: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x347ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347ab4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x347ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x347ab8: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x347ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x347abc: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x347abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x347ac0: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x347ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x347ac4: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x347ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347ac8: 0x94c7000e  lhu         $a3, 0xE($a2)
    ctx->pc = 0x347ac8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x347acc: 0x30e8bfff  andi        $t0, $a3, 0xBFFF
    ctx->pc = 0x347accu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)49151);
    // 0x347ad0: 0xa4c8000e  sh          $t0, 0xE($a2)
    ctx->pc = 0x347ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 8));
    // 0x347ad4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347ad8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347adc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x347adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x347ae0: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x347ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x347ae4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x347AE4u;
    {
        const bool branch_taken_0x347ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x347ae4) {
            ctx->pc = 0x347B04u;
            goto label_347b04;
        }
    }
    ctx->pc = 0x347AECu;
    // 0x347aec: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x347aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x347af0: 0x2463a340  addiu       $v1, $v1, -0x5CC0
    ctx->pc = 0x347af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943552));
    // 0x347af4: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x347af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347af8: 0xaca31228  sw          $v1, 0x1228($a1)
    ctx->pc = 0x347af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4648), GPR_U32(ctx, 3));
    // 0x347afc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x347AFCu;
    {
        const bool branch_taken_0x347afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347afc) {
            ctx->pc = 0x347B14u;
            goto label_347b14;
        }
    }
    ctx->pc = 0x347B04u;
label_347b04:
    // 0x347b04: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x347b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x347b08: 0x2464a280  addiu       $a0, $v1, -0x5D80
    ctx->pc = 0x347b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943360));
    // 0x347b0c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b10: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x347b10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
label_347b14:
    // 0x347b14: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b18: 0x24721330  addiu       $s2, $v1, 0x1330
    ctx->pc = 0x347b18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347b1c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x347b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x347b20: 0x30a40008  andi        $a0, $a1, 0x8
    ctx->pc = 0x347b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x347b24: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x347B24u;
    {
        const bool branch_taken_0x347b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x347b24) {
            ctx->pc = 0x347B60u;
            goto label_347b60;
        }
    }
    ctx->pc = 0x347B2Cu;
    // 0x347b2c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347b34: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x347b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x347b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347b3c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x347b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b40: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x347b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x347b44: 0xa065006f  sb          $a1, 0x6F($v1)
    ctx->pc = 0x347b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 5));
    // 0x347b48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x347b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347b4c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x347b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b50: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x347b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x347b54: 0xa0650072  sb          $a1, 0x72($v1)
    ctx->pc = 0x347b54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 5));
    // 0x347b58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x347B58u;
    {
        const bool branch_taken_0x347b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347b58) {
            ctx->pc = 0x347B88u;
            goto label_347b88;
        }
    }
    ctx->pc = 0x347B60u;
label_347b60:
    // 0x347b60: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b64: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x347b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347b68: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x347b68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x347b6c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347b74: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x347b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x347b78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x347b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347b7c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x347b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b80: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x347b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x347b84: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x347b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
label_347b88:
    // 0x347b88: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x347b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x347b8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347b94: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x347b94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x347b98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b9c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347ba0: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x347ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x347ba4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347ba8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347bac: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x347bacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x347bb0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x347bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x347bb4: 0x3472cccd  ori         $s2, $v1, 0xCCCD
    ctx->pc = 0x347bb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347bb8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x347bb8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347bbc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x347bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347bc0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x347bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x347bc4: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x347bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_347bc8:
    // 0x347bc8: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x347bc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x347bcc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x347bccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x347bd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x347bd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x347bd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x347bd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x347bd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x347bd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347bdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347be0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347be8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x347be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x347bec: 0x3e00008  jr          $ra
    ctx->pc = 0x347BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347BF4u;
}
