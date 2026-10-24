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
// Address: 0x23007c - 0x2302b0
void caseD_0_0x23007c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x23007c");
#endif

    switch (ctx->pc) {
        case 0x2300c0u: goto label_2300c0;
        case 0x230254u: goto label_230254;
        case 0x230278u: goto label_230278;
        default: break;
    }

    ctx->pc = 0x23007cu;

    // 0x23007c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23007cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230080: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230084: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x230084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x230088: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23008c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23008cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230090: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x230090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x230094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230098: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23009c: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x23009cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2300a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2300a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2300a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2300a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2300a8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2300a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2300ac: 0x24060416  addiu       $a2, $zero, 0x416
    ctx->pc = 0x2300acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1046));
    // 0x2300b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2300b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2300b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2300b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2300b8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2300B8u;
    SET_GPR_U32(ctx, 31, 0x2300C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2300B8u, 0x2300C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2300C0u;
label_2300c0:
    // 0x2300c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2300c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2300c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2300c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2300c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2300c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2300cc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2300ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2300d0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2300d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2300d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2300d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2300d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2300d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2300dc: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2300dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2300e0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2300e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2300e4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2300e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2300e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2300e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2300ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2300ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2300f0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2300f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2300f4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2300f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2300f8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2300f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2300fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2300fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230100: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x230100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230104: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x230104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x230108: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x230108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x23010c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230110: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x230110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x230114: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x230114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x230118: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x230118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x23011c: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x23011cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x230120: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230124: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x230124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x230128: 0x24700120  addiu       $s0, $v1, 0x120
    ctx->pc = 0x230128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23012c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x23012cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x230130: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x230130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x230134: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x230134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x230138: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x230138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x23013c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x23013cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x230140: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x230140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x230144: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x230144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x230148: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x230148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x23014c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23014cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x230150: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230154: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x230154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x230158: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x230158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x23015c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23015cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x230160: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230164: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x230164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x230168: 0x24500240  addiu       $s0, $v0, 0x240
    ctx->pc = 0x230168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x23016c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23016cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x230170: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230174: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x230174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x230178: 0x245002d0  addiu       $s0, $v0, 0x2D0
    ctx->pc = 0x230178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x23017c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x23017cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x230180: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x230180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x230184: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x230184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x230188: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x230188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x23018c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23018cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x230190: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x230190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x230194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230198: 0x0  nop
    ctx->pc = 0x230198u;
    // NOP
    // 0x23019c: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x23019cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x2301a0: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x2301a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x2301a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2301a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2301a8: 0x0  nop
    ctx->pc = 0x2301a8u;
    // NOP
    // 0x2301ac: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x2301acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
    // 0x2301b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2301b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2301b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2301b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2301b8: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2301b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2301bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2301bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2301c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2301c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2301c4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2301c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2301c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2301c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2301cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2301ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2301d0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2301d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2301d4: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x2301d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x2301d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2301d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2301dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2301dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2301e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2301e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2301e4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2301e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2301e8: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x2301e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x2301ec: 0x9462002e  lhu         $v0, 0x2E($v1)
    ctx->pc = 0x2301ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2301f0: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2301f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2301f4: 0xa462002e  sh          $v0, 0x2E($v1)
    ctx->pc = 0x2301f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x2301f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2301f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2301fc: 0x245310b0  addiu       $s3, $v0, 0x10B0
    ctx->pc = 0x2301fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x230200: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x230200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x230204: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x230204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x230208: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x230208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23020c: 0xae6200f0  sw          $v0, 0xF0($s3)
    ctx->pc = 0x23020cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 2));
    // 0x230210: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230214: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230218: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x230218u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x23021c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23021cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230220: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x230220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x230224: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x230224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x230228: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x230228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23022c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x23022cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x230230: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x230230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x230234: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x230234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x230238: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x230238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23023c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230240: 0x2404051e  addiu       $a0, $zero, 0x51E
    ctx->pc = 0x230240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
    // 0x230244: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x230244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x230248: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x230248u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23024c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23024Cu;
    SET_GPR_U32(ctx, 31, 0x230254u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23024Cu, 0x230254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230254u;
label_230254:
    // 0x230254: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230258: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x230258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23025c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23025cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x230260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x230260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x230264: 0x24040517  addiu       $a0, $zero, 0x517
    ctx->pc = 0x230264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1303));
    // 0x230268: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x230268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23026c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23026cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x230270: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x230270u;
    SET_GPR_U32(ctx, 31, 0x230278u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x230270u, 0x230278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230278u;
label_230278:
    // 0x230278: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23027c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230280: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x230280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x230284: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x230284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x230288: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x230288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23028c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23028Cu;
    {
        const bool branch_taken_0x23028c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23028c) {
            ctx->pc = 0x2302B0u;
            return;
        }
    }
    ctx->pc = 0x230294u;
    // 0x230294: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x230294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x230298: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x230298u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x23029c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2302a0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x2302a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x2302a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2302a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2302a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2302a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2302ac: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x2302acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x2302b0u;
}
