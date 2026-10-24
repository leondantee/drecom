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

// Function: Om82_R0_init
// Address: 0x35b0f0 - 0x35b1fc
void Om82_R0_init_0x35b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om82_R0_init_0x35b0f0");
#endif

    switch (ctx->pc) {
        case 0x35b178u: goto label_35b178;
        default: break;
    }

    ctx->pc = 0x35b0f0u;

    // 0x35b0f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35b0f4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x35b0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x35b0f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35b0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35b0fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35b0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35b100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35b100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35b104: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x35b104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x35b108: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35b108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x35b10c: 0x2443a970  addiu       $v1, $v0, -0x5690
    ctx->pc = 0x35b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945136));
    // 0x35b110: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35b110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b114: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x35b114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x35b118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35b118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b11c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b120: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x35b120u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x35b124: 0x3c038200  lui         $v1, 0x8200
    ctx->pc = 0x35b124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33280 << 16));
    // 0x35b128: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35b128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b12c: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x35b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x35b130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35b130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b134: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b138: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x35b138u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x35b13c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b140: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x35b140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b144: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x35b144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x35b148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35b148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35b14c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b150: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x35b150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x35b154: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35b154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35b158: 0x8c300ae8  lw          $s0, 0xAE8($at)
    ctx->pc = 0x35b158u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x35b15c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b160: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x35b160u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35b164: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x35b164u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x35b168: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x35b168u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35b16c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x35b16cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x35b170: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x35B170u;
    SET_GPR_U32(ctx, 31, 0x35B178u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x35B170u, 0x35B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B178u;
label_35b178:
    // 0x35b178: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x35b178u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35b17c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x35b180: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x35b180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x35b184: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x35b184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x35b188: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35b188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x35b18c: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x35b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x35b190: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35b190u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x35b194: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x35b194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x35b198: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x35b198u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x35b19c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x35b1a0: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x35b1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x35b1a4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x35b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x35b1a8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x35b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x35b1ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35b1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35b1b0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x35b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x35b1b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b1b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b1bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35b1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b1c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b1c4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35b1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b1c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b1cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35b1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b1d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b1d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35b1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b1d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b1dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35b1e0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x35b1e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35b1e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35b1e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b1e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b1e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b1ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b1f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35b1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35b1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x35B1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B1FCu;
}
