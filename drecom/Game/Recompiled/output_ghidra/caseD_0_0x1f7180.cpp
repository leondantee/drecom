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

// Function: caseD_0
// Address: 0x1f7180 - 0x1f73c0
void caseD_0_0x1f7180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1f7180");
#endif

    switch (ctx->pc) {
        case 0x1f71b8u: goto label_1f71b8;
        case 0x1f7354u: goto label_1f7354;
        case 0x1f737cu: goto label_1f737c;
        default: break;
    }

    ctx->pc = 0x1f7180u;

    // 0x1f7180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7184: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7188: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f7188u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f718c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f718cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7190: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7194: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x1f7194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x1f7198: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f719c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f71a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f71a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f71a4: 0x24060417  addiu       $a2, $zero, 0x417
    ctx->pc = 0x1f71a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x1f71a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f71a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f71ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f71acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f71b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F71B0u;
    SET_GPR_U32(ctx, 31, 0x1F71B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F71B0u, 0x1F71B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71B8u;
label_1f71b8:
    // 0x1f71b8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1f71b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f71bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f71bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f71c0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f71c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f71c4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f71c8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1f71c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1f71cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f71ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f71d0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f71d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f71d4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f71d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f71d8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1f71d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1f71dc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1f71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1f71e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f71e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f71e4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f71e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f71e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f71ec: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1f71ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1f71f0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1f71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1f71f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f71f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f71f8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f71fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f71fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7200: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f7200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1f7204: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7208: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f7208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f720c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f7210: 0x34740018  ori         $s4, $v1, 0x18
    ctx->pc = 0x1f7210u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x1f7214: 0xac940030  sw          $s4, 0x30($a0)
    ctx->pc = 0x1f7214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 20));
    // 0x1f7218: 0x8fb500c8  lw          $s5, 0xC8($sp)
    ctx->pc = 0x1f7218u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f721c: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x1f721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x1f7220: 0x24710120  addiu       $s1, $v1, 0x120
    ctx->pc = 0x1f7220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f7224: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x1f7224u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f7228: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1f7228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f722c: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1f722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1f7230: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1f7230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1f7234: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x1f7234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x1f7238: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1f7238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f723c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f723cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f7240: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x1f7240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x1f7244: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1f7244u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7248: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f724c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1f724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1f7250: 0x24710090  addiu       $s1, $v1, 0x90
    ctx->pc = 0x1f7250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x1f7254: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1f7254u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7258: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f725c: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1f725cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1f7260: 0x24710240  addiu       $s1, $v1, 0x240
    ctx->pc = 0x1f7260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x1f7264: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1f7264u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7268: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x1f7268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f726c: 0x8cc40058  lw          $a0, 0x58($a2)
    ctx->pc = 0x1f726cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x1f7270: 0x249102d0  addiu       $s1, $a0, 0x2D0
    ctx->pc = 0x1f7270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x1f7274: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x1f7274u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f7278: 0x8e480024  lw          $t0, 0x24($s2)
    ctx->pc = 0x1f7278u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f727c: 0x35030002  ori         $v1, $t0, 0x2
    ctx->pc = 0x1f727cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x1f7280: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x1f7280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x1f7284: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1f7284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7288: 0x3c044496  lui         $a0, 0x4496
    ctx->pc = 0x1f7288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17558 << 16));
    // 0x1f728c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f728cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7290: 0x0  nop
    ctx->pc = 0x1f7290u;
    // NOP
    // 0x1f7294: 0xe64000a0  swc1        $f0, 0xA0($s2)
    ctx->pc = 0x1f7294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
    // 0x1f7298: 0x3c05c0a0  lui         $a1, 0xC0A0
    ctx->pc = 0x1f7298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49312 << 16));
    // 0x1f729c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f729cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f72a0: 0x0  nop
    ctx->pc = 0x1f72a0u;
    // NOP
    // 0x1f72a4: 0xe64000a4  swc1        $f0, 0xA4($s2)
    ctx->pc = 0x1f72a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
    // 0x1f72a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f72a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f72ac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f72acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f72b0: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f72b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f72b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f72b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f72b8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f72b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f72bc: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1f72bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x1f72c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f72c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f72c4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f72c8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f72c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1f72cc: 0x3c04c080  lui         $a0, 0xC080
    ctx->pc = 0x1f72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49280 << 16));
    // 0x1f72d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f72d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f72d4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f72d8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f72d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f72dc: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x1f72dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x1f72e0: 0x27c30150  addiu       $v1, $fp, 0x150
    ctx->pc = 0x1f72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1f72e4: 0x9477002e  lhu         $s7, 0x2E($v1)
    ctx->pc = 0x1f72e4u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x1f72e8: 0x36f60003  ori         $s6, $s7, 0x3
    ctx->pc = 0x1f72e8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)3);
    // 0x1f72ec: 0xa476002e  sh          $s6, 0x2E($v1)
    ctx->pc = 0x1f72ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 22));
    // 0x1f72f0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f72f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f72f4: 0x24a310b0  addiu       $v1, $a1, 0x10B0
    ctx->pc = 0x1f72f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4272));
    // 0x1f72f8: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x1f72f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x1f72fc: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1f72fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1f7300: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1f7300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1f7304: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1f7304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1f7308: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1f7308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1f730c: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x1f730cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x1f7310: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1f7310u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7314: 0x8fb500c8  lw          $s5, 0xC8($sp)
    ctx->pc = 0x1f7314u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7318: 0xa6b4127e  sh          $s4, 0x127E($s5)
    ctx->pc = 0x1f7318u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4734), (uint16_t)GPR_U32(ctx, 20));
    // 0x1f731c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f731cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7320: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f7320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f7324: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1f7324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1f7328: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f7328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f732c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f732cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f7330: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f7330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1f7334: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1f7334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f7338: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1f7338u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f733c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f733cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7340: 0x2404051e  addiu       $a0, $zero, 0x51E
    ctx->pc = 0x1f7340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
    // 0x1f7344: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f7344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f7348: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7348u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f734c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F734Cu;
    SET_GPR_U32(ctx, 31, 0x1F7354u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F734Cu, 0x1F7354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7354u;
label_1f7354:
    // 0x1f7354: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f7354u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f7358: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1f7358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x1f735c: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1f735cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1f7360: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f7360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f7364: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7368: 0x24040517  addiu       $a0, $zero, 0x517
    ctx->pc = 0x1f7368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1303));
    // 0x1f736c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f736cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f7370: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7370u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f7374: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F7374u;
    SET_GPR_U32(ctx, 31, 0x1F737Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F7374u, 0x1F737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F737Cu;
label_1f737c:
    // 0x1f737c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f737cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f7380: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7384: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x1f7384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7388: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f738c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1f738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7390: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1f7390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f7394: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1f7394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1f7398: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x1f7398u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f739c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F739Cu;
    {
        const bool branch_taken_0x1f739c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f739c) {
            ctx->pc = 0x1F73C0u;
            return;
        }
    }
    ctx->pc = 0x1F73A4u;
    // 0x1f73a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f73a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f73a8: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f73a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f73ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f73acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f73b0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1f73b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1f73b4: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x1f73b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f73b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f73b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f73bc: 0xac311a58  sw          $s1, 0x1A58($at)
    ctx->pc = 0x1f73bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x1f73c0u;
}
