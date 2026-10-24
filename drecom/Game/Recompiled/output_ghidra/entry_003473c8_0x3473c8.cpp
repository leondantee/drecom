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

// Function: entry_003473c8
// Address: 0x3473c8 - 0x3474c4
void entry_003473c8_0x3473c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003473c8_0x3473c8");
#endif

    switch (ctx->pc) {
        case 0x3473f4u: goto label_3473f4;
        default: break;
    }

    ctx->pc = 0x3473c8u;

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
    ctx->pc = 0x3474c4u;
}
