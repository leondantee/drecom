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

// Function: entry_0023b0c0
// Address: 0x23b0c0 - 0x23b268
void entry_0023b0c0_0x23b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b0c0_0x23b0c0");
#endif

    switch (ctx->pc) {
        case 0x23b0ecu: goto label_23b0ec;
        case 0x23b108u: goto label_23b108;
        case 0x23b120u: goto label_23b120;
        case 0x23b130u: goto label_23b130;
        case 0x23b1c0u: goto label_23b1c0;
        case 0x23b244u: goto label_23b244;
        case 0x23b24cu: goto label_23b24c;
        default: break;
    }

    ctx->pc = 0x23b0c0u;

    // 0x23b0c0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b0c4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x23b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b0c8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b0cc: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x23b0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b0d0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23b0d4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23b0d8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x23b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x23b0dc: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x23b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x23b0e0: 0xc4cd0038  lwc1        $f13, 0x38($a2)
    ctx->pc = 0x23b0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23b0e4: 0xc05c848  jal         func_172120
    ctx->pc = 0x23B0E4u;
    SET_GPR_U32(ctx, 31, 0x23B0ECu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23B0E4u, 0x23B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B0ECu;
label_23b0ec:
    // 0x23b0ec: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x23b0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x23b0f0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b0f4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x23b0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b0f8: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x23b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b0fc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23b0fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23b100: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23B100u;
    SET_GPR_U32(ctx, 31, 0x23B108u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23B100u, 0x23B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B108u;
label_23b108:
    // 0x23b108: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b10c: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x23b10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x23b110: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b114: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23b114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23b118: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23B118u;
    SET_GPR_U32(ctx, 31, 0x23B120u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23B118u, 0x23B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B120u;
label_23b120:
    // 0x23b120: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x23b120u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23b124: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b128: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23B128u;
    SET_GPR_U32(ctx, 31, 0x23B130u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23B128u, 0x23B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B130u;
label_23b130:
    // 0x23b130: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x23b130u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23b134: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b138: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x23b138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x23b13c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23b13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23b140: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23b140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x23b144: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x23B144u;
    {
        const bool branch_taken_0x23b144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b144) {
            ctx->pc = 0x23B318u;
            return;
        }
    }
    ctx->pc = 0x23B14Cu;
    // 0x23b14c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b150: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x23b150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x23b154: 0x24830880  addiu       $v1, $a0, 0x880
    ctx->pc = 0x23b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2176));
    // 0x23b158: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x23b158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x23b15c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b15cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b160: 0x0  nop
    ctx->pc = 0x23b160u;
    // NOP
    // 0x23b164: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x23b164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x23b168: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x23b168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x23b16c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b170: 0x0  nop
    ctx->pc = 0x23b170u;
    // NOP
    // 0x23b174: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x23b174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x23b178: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b17c: 0x0  nop
    ctx->pc = 0x23b17cu;
    // NOP
    // 0x23b180: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x23b180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x23b184: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23b184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23b188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b18c: 0x0  nop
    ctx->pc = 0x23b18cu;
    // NOP
    // 0x23b190: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x23b190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x23b194: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23b194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23b198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b19c: 0x0  nop
    ctx->pc = 0x23b19cu;
    // NOP
    // 0x23b1a0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x23b1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x23b1a4: 0xa7a00074  sh          $zero, 0x74($sp)
    ctx->pc = 0x23b1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x23b1a8: 0xa3a00076  sb          $zero, 0x76($sp)
    ctx->pc = 0x23b1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 118), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b1ac: 0xa3a00077  sb          $zero, 0x77($sp)
    ctx->pc = 0x23b1acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b1b0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b1b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x23b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23b1b8: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23B1B8u;
    SET_GPR_U32(ctx, 31, 0x23B1C0u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23B1B8u, 0x23B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B1C0u;
label_23b1c0:
    // 0x23b1c0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x23B1C0u;
    {
        const bool branch_taken_0x23b1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b1c0) {
            ctx->pc = 0x23B318u;
            return;
        }
    }
    ctx->pc = 0x23B1C8u;
    // 0x23b1c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b1c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b1cc: 0x0  nop
    ctx->pc = 0x23b1ccu;
    // NOP
    // 0x23b1d0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x23b1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x23b1d4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23b1d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b1dc: 0x0  nop
    ctx->pc = 0x23b1dcu;
    // NOP
    // 0x23b1e0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x23b1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x23b1e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b1e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b1e8: 0x0  nop
    ctx->pc = 0x23b1e8u;
    // NOP
    // 0x23b1ec: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x23b1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x23b1f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23b1f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b1f8: 0x0  nop
    ctx->pc = 0x23b1f8u;
    // NOP
    // 0x23b1fc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x23b1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x23b200: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b204: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23b204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b208: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23b20c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23b20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23b210: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23b210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23b214: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23b214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23b218: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23b218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23b21c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b220: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23b220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23b224: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b228: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23b228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23b22c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x23b22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23b230: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b230u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b234: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23b234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23b238: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23b238u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b23c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23B23Cu;
    SET_GPR_U32(ctx, 31, 0x23B244u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23B23Cu, 0x23B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B244u;
label_23b244:
    // 0x23b244: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B244u;
    SET_GPR_U32(ctx, 31, 0x23B24Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B244u, 0x23B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B24Cu;
label_23b24c:
    // 0x23b24c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B24Cu;
    {
        const bool branch_taken_0x23b24c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23b24c) {
            ctx->pc = 0x23B268u;
            return;
        }
    }
    ctx->pc = 0x23B254u;
    // 0x23b254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b258: 0x0  nop
    ctx->pc = 0x23b258u;
    // NOP
    // 0x23b25c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23b25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23b260: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23B260u;
    {
        const bool branch_taken_0x23b260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b260) {
            ctx->pc = 0x23B284u;
            return;
        }
    }
    ctx->pc = 0x23B268u;
}
