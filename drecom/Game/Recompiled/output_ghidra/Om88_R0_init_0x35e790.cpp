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

// Function: Om88_R0_init
// Address: 0x35e790 - 0x35e89c
void Om88_R0_init_0x35e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om88_R0_init_0x35e790");
#endif

    switch (ctx->pc) {
        case 0x35e818u: goto label_35e818;
        default: break;
    }

    ctx->pc = 0x35e790u;

    // 0x35e790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35e794: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x35e794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x35e798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35e798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35e79c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35e7a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35e7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35e7a4: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x35e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x35e7a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x35e7ac: 0x2443aa80  addiu       $v1, $v0, -0x5580
    ctx->pc = 0x35e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945408));
    // 0x35e7b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e7b4: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x35e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x35e7b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e7bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e7c0: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x35e7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x35e7c4: 0x3c038800  lui         $v1, 0x8800
    ctx->pc = 0x35e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34816 << 16));
    // 0x35e7c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e7cc: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x35e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x35e7d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e7d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e7d8: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x35e7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x35e7dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e7e0: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x35e7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e7e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35e7e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35e7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35e7ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e7f0: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x35e7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x35e7f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35e7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35e7f8: 0x8c300ae8  lw          $s0, 0xAE8($at)
    ctx->pc = 0x35e7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x35e7fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e800: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x35e800u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35e804: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x35e804u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x35e808: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x35e808u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35e80c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x35e80cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x35e810: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x35E810u;
    SET_GPR_U32(ctx, 31, 0x35E818u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x35E810u, 0x35E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E818u;
label_35e818:
    // 0x35e818: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x35e818u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35e81c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x35e820: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x35e820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x35e824: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x35e824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x35e828: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35e828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x35e82c: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x35e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x35e830: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35e830u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x35e834: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x35e834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x35e838: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x35e838u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x35e83c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x35e840: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x35e840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x35e844: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x35e844u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x35e848: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x35e848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x35e84c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35e84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35e850: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x35e850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x35e854: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35e854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e858: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35e858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e85c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35e85cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35e860: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35e860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e864: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35e864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e868: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35e868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e86c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35e86cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e870: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35e870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e874: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35e874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e878: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35e878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e87c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35e880: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x35e880u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35e884: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35e884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e88c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e890: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35e890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35e894: 0x3e00008  jr          $ra
    ctx->pc = 0x35E894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E89Cu;
}
