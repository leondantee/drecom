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

// Function: SndEffMove
// Address: 0x19ff40 - 0x1a0398
void SndEffMove_0x19ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndEffMove_0x19ff40");
#endif

    switch (ctx->pc) {
        case 0x19ffacu: goto label_19ffac;
        case 0x19ffc0u: goto label_19ffc0;
        case 0x19ffd4u: goto label_19ffd4;
        case 0x1a003cu: goto label_1a003c;
        case 0x1a0074u: goto label_1a0074;
        case 0x1a0084u: goto label_1a0084;
        case 0x1a01ccu: goto label_1a01cc;
        case 0x1a0204u: goto label_1a0204;
        case 0x1a026cu: goto label_1a026c;
        case 0x1a02a0u: goto label_1a02a0;
        case 0x1a02e4u: goto label_1a02e4;
        case 0x1a02f4u: goto label_1a02f4;
        case 0x1a0320u: goto label_1a0320;
        case 0x1a0340u: goto label_1a0340;
        default: break;
    }

    ctx->pc = 0x19ff40u;

    // 0x19ff40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19ff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x19ff44: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x19ff44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x19ff48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19ff48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19ff4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19ff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19ff50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19ff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19ff54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19ff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19ff58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19ff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19ff5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19ff5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19ff60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ff60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ff64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ff68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ff6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19ff6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19ff70: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x19ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x19ff74: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x19ff74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x19ff78: 0x146000fa  bnez        $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x19FF78u;
    {
        const bool branch_taken_0x19ff78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ff78) {
            ctx->pc = 0x1A0364u;
            goto label_1a0364;
        }
    }
    ctx->pc = 0x19FF80u;
    // 0x19ff80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19ff80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19ff84: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x19ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x19ff88: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x19ff88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x19ff8c: 0x146000f5  bnez        $v1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x19FF8Cu;
    {
        const bool branch_taken_0x19ff8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ff8c) {
            ctx->pc = 0x1A0364u;
            goto label_1a0364;
        }
    }
    ctx->pc = 0x19FF94u;
    // 0x19ff94: 0x24160008  addiu       $s6, $zero, 0x8
    ctx->pc = 0x19ff94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19ff98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19ff9c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x19ff9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x19ffa0: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x19ffa0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x19ffa4: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19FFA4u;
    SET_GPR_U32(ctx, 31, 0x19FFACu);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19FFA4u, 0x19FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFACu;
label_19ffac:
    // 0x19ffac: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x19FFACu;
    {
        const bool branch_taken_0x19ffac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ffac) {
            ctx->pc = 0x1A0364u;
            goto label_1a0364;
        }
    }
    ctx->pc = 0x19FFB4u;
    // 0x19ffb4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19ffb8: 0xc056a78  jal         func_15A9E0
    ctx->pc = 0x19FFB8u;
    SET_GPR_U32(ctx, 31, 0x19FFC0u);
    ctx->pc = 0x15A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A9E0u, 0x19FFB8u, 0x19FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFC0u;
label_19ffc0:
    // 0x19ffc0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x19ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x19ffc4: 0x24751b40  addiu       $s5, $v1, 0x1B40
    ctx->pc = 0x19ffc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x19ffc8: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x19ffc8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19ffcc: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x19FFCCu;
    {
        const bool branch_taken_0x19ffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ffcc) {
            ctx->pc = 0x1A0358u;
            goto label_1a0358;
        }
    }
    ctx->pc = 0x19FFD4u;
label_19ffd4:
    // 0x19ffd4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x19ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x19ffd8: 0x106000dd  beqz        $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x19FFD8u;
    {
        const bool branch_taken_0x19ffd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ffd8) {
            ctx->pc = 0x1A0350u;
            goto label_1a0350;
        }
    }
    ctx->pc = 0x19FFE0u;
    // 0x19ffe0: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x19ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x19ffe4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x19ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19ffe8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x19ffe8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x19ffec: 0x0  nop
    ctx->pc = 0x19ffecu;
    // NOP
    // 0x19fff0: 0x0  nop
    ctx->pc = 0x19fff0u;
    // NOP
    // 0x19fff4: 0x1810  mfhi        $v1
    ctx->pc = 0x19fff4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19fff8: 0x146000d1  bnez        $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x19FFF8u;
    {
        const bool branch_taken_0x19fff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fff8) {
            ctx->pc = 0x1A0340u;
            goto label_1a0340;
        }
    }
    ctx->pc = 0x1A0000u;
    // 0x1a0000: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x1a0000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0004: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1a0004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1a0008: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x1a0008u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1a000c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1a000cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a0010: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1a0010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1a0014: 0xac36c560  sw          $s6, -0x3AA0($at)
    ctx->pc = 0x1a0014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x5FC560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC560u, _value); } while (0);
    // 0x1a0018: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1a0018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1a001c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1a001cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1a0020: 0xac22c564  sw          $v0, -0x3A9C($at)
    ctx->pc = 0x1a0020u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC564u, _value); } while (0);
    // 0x1a0024: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a0024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a0028: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a0028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1a002c: 0x2445c520  addiu       $a1, $v0, -0x3AE0
    ctx->pc = 0x1a002cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x1a0030: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0034: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x1A0034u;
    SET_GPR_U32(ctx, 31, 0x1A003Cu);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x1A0034u, 0x1A003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A003Cu;
label_1a003c:
    // 0x1a003c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1a003cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1a0040: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1a0040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a0044: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x1a0044u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x1a0048: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1a0048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a004c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a004cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a0050: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x1a0050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x1a0054: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1a0054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a0058: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a0058u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a005c: 0x2be3c  dsll32      $s7, $v0, 24
    ctx->pc = 0x1a005cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a0060: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x1a0060u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
    // 0x1a0064: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1a0064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a0068: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x1a0068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1a006c: 0xc05f7ac  jal         func_17DEB0
    ctx->pc = 0x1A006Cu;
    SET_GPR_U32(ctx, 31, 0x1A0074u);
    ctx->pc = 0x17DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DEB0u, 0x1A006Cu, 0x1A0074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0074u;
label_1a0074:
    // 0x1a0074: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1a0074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1a0078: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x1a0078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1a007c: 0xc056a38  jal         func_15A8E0
    ctx->pc = 0x1A007Cu;
    SET_GPR_U32(ctx, 31, 0x1A0084u);
    ctx->pc = 0x15A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A8E0u, 0x1A007Cu, 0x1A0084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0084u;
label_1a0084:
    // 0x1a0084: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a0084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1a0088: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1a0088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a008c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a008cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0090: 0x0  nop
    ctx->pc = 0x1a0090u;
    // NOP
    // 0x1a0094: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0098: 0x0  nop
    ctx->pc = 0x1a0098u;
    // NOP
    // 0x1a009c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1A009Cu;
    {
        const bool branch_taken_0x1a009c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a009c) {
            ctx->pc = 0x1A00B8u;
            goto label_1a00b8;
        }
    }
    ctx->pc = 0x1A00A4u;
    // 0x1a00a4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a00a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a00a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a00a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a00ac: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a00acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1a00b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A00B0u;
    {
        const bool branch_taken_0x1a00b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a00b0) {
            ctx->pc = 0x1A00C0u;
            goto label_1a00c0;
        }
    }
    ctx->pc = 0x1A00B8u;
label_1a00b8:
    // 0x1a00b8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a00b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a00bc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a00bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1a00c0:
    // 0x1a00c0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1a00c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a00c4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1a00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1a00c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a00c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1a00cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a00ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a00d0: 0x0  nop
    ctx->pc = 0x1a00d0u;
    // NOP
    // 0x1a00d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a00d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a00d8: 0x0  nop
    ctx->pc = 0x1a00d8u;
    // NOP
    // 0x1a00dc: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1A00DCu;
    {
        const bool branch_taken_0x1a00dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a00dc) {
            ctx->pc = 0x1A0148u;
            goto label_1a0148;
        }
    }
    ctx->pc = 0x1A00E4u;
    // 0x1a00e4: 0x26e2fffb  addiu       $v0, $s7, -0x5
    ctx->pc = 0x1a00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967291));
    // 0x1a00e8: 0x2be3c  dsll32      $s7, $v0, 24
    ctx->pc = 0x1a00e8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a00ec: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x1a00ecu;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
    // 0x1a00f0: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1a00f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a00f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a00f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a00f8: 0x0  nop
    ctx->pc = 0x1a00f8u;
    // NOP
    // 0x1a00fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a00fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0100: 0x0  nop
    ctx->pc = 0x1a0100u;
    // NOP
    // 0x1a0104: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0104u;
    {
        const bool branch_taken_0x1a0104 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0104) {
            ctx->pc = 0x1A0120u;
            goto label_1a0120;
        }
    }
    ctx->pc = 0x1A010Cu;
    // 0x1a010c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a010cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0110: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a0110u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a0114: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1a0114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1a0118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0118u;
    {
        const bool branch_taken_0x1a0118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0118) {
            ctx->pc = 0x1A0128u;
            goto label_1a0128;
        }
    }
    ctx->pc = 0x1A0120u;
label_1a0120:
    // 0x1a0120: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a0120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0124: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1a0124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1a0128:
    // 0x1a0128: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a0128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1a012c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a012cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1a0130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a0130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0134: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1a0134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0138: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a0138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a013c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1a013cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1a0140: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A0140u;
    {
        const bool branch_taken_0x1a0140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0140) {
            ctx->pc = 0x1A0188u;
            goto label_1a0188;
        }
    }
    ctx->pc = 0x1A0148u;
label_1a0148:
    // 0x1a0148: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1a0148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a014c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a014cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0150: 0x0  nop
    ctx->pc = 0x1a0150u;
    // NOP
    // 0x1a0154: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0158: 0x0  nop
    ctx->pc = 0x1a0158u;
    // NOP
    // 0x1a015c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1A015Cu;
    {
        const bool branch_taken_0x1a015c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a015c) {
            ctx->pc = 0x1A0178u;
            goto label_1a0178;
        }
    }
    ctx->pc = 0x1A0164u;
    // 0x1a0164: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a0164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0168: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a0168u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a016c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1a016cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1a0170: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0170u;
    {
        const bool branch_taken_0x1a0170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0170) {
            ctx->pc = 0x1A0180u;
            goto label_1a0180;
        }
    }
    ctx->pc = 0x1A0178u;
label_1a0178:
    // 0x1a0178: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a0178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a017c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1a017cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1a0180:
    // 0x1a0180: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1a0180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0184: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1a0184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1a0188:
    // 0x1a0188: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1a0188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a018c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a018cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0190: 0x0  nop
    ctx->pc = 0x1a0190u;
    // NOP
    // 0x1a0194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0198: 0x0  nop
    ctx->pc = 0x1a0198u;
    // NOP
    // 0x1a019c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1A019Cu;
    {
        const bool branch_taken_0x1a019c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a019c) {
            ctx->pc = 0x1A01DCu;
            goto label_1a01dc;
        }
    }
    ctx->pc = 0x1A01A4u;
    // 0x1a01a4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1a01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1a01a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a01a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a01ac: 0x3c024222  lui         $v0, 0x4222
    ctx->pc = 0x1a01acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16930 << 16));
    // 0x1a01b0: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x1a01b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x1a01b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a01b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a01b8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1a01b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a01bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a01bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a01c0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1a01c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1a01c4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1A01C4u;
    SET_GPR_U32(ctx, 31, 0x1A01CCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1A01C4u, 0x1A01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01CCu;
label_1a01cc:
    // 0x1a01cc: 0x2a63c  dsll32      $s4, $v0, 24
    ctx->pc = 0x1a01ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a01d0: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x1a01d0u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
    // 0x1a01d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A01D4u;
    {
        const bool branch_taken_0x1a01d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a01d4) {
            ctx->pc = 0x1A0210u;
            goto label_1a0210;
        }
    }
    ctx->pc = 0x1A01DCu;
label_1a01dc:
    // 0x1a01dc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1a01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1a01e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a01e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a01e4: 0x3c024222  lui         $v0, 0x4222
    ctx->pc = 0x1a01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16930 << 16));
    // 0x1a01e8: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x1a01e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x1a01ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a01ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a01f0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1a01f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a01f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a01f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a01f8: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x1a01f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1a01fc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1A01FCu;
    SET_GPR_U32(ctx, 31, 0x1A0204u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1A01FCu, 0x1A0204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0204u;
label_1a0204:
    // 0x1a0204: 0x2a63c  dsll32      $s4, $v0, 24
    ctx->pc = 0x1a0204u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a0208: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x1a0208u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
    // 0x1a020c: 0x0  nop
    ctx->pc = 0x1a020cu;
    // NOP
label_1a0210:
    // 0x1a0210: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1a0210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0214: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1a0214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0218: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a0218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a021c: 0x0  nop
    ctx->pc = 0x1a021cu;
    // NOP
    // 0x1a0220: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0220u;
    {
        const bool branch_taken_0x1a0220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0220) {
            ctx->pc = 0x1A0234u;
            goto label_1a0234;
        }
    }
    ctx->pc = 0x1A0228u;
    // 0x1a0228: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1a0228u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a022c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A022Cu;
    {
        const bool branch_taken_0x1a022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a022c) {
            ctx->pc = 0x1A0278u;
            goto label_1a0278;
        }
    }
    ctx->pc = 0x1A0234u;
label_1a0234:
    // 0x1a0234: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x1a0234u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0238: 0x0  nop
    ctx->pc = 0x1a0238u;
    // NOP
    // 0x1a023c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1a023cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a0240: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x1a0240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0244: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1a0244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0248: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a0248u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a024c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1a024cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a0250: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1a0250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0254: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1a0254u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a0258: 0x0  nop
    ctx->pc = 0x1a0258u;
    // NOP
    // 0x1a025c: 0x0  nop
    ctx->pc = 0x1a025cu;
    // NOP
    // 0x1a0260: 0x0  nop
    ctx->pc = 0x1a0260u;
    // NOP
    // 0x1a0264: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1A0264u;
    SET_GPR_U32(ctx, 31, 0x1A026Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1A0264u, 0x1A026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A026Cu;
label_1a026c:
    // 0x1a026c: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x1a026cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a0270: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x1a0270u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x1a0274: 0x0  nop
    ctx->pc = 0x1a0274u;
    // NOP
label_1a0278:
    // 0x1a0278: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x1a0278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x1a027c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1a027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a0280: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1a0280u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a0284: 0x0  nop
    ctx->pc = 0x1a0284u;
    // NOP
    // 0x1a0288: 0x0  nop
    ctx->pc = 0x1a0288u;
    // NOP
    // 0x1a028c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a028cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a0290: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A0290u;
    {
        const bool branch_taken_0x1a0290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0290) {
            ctx->pc = 0x1A02E8u;
            goto label_1a02e8;
        }
    }
    ctx->pc = 0x1A0298u;
    // 0x1a0298: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1A0298u;
    SET_GPR_U32(ctx, 31, 0x1A02A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1A0298u, 0x1A02A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02A0u;
label_1a02a0:
    // 0x1a02a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a02a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a02a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a02a8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a02a8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a02ac: 0x0  nop
    ctx->pc = 0x1a02acu;
    // NOP
    // 0x1a02b0: 0x0  nop
    ctx->pc = 0x1a02b0u;
    // NOP
    // 0x1a02b4: 0x1810  mfhi        $v1
    ctx->pc = 0x1a02b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a02b8: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1a02b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1a02bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a02bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a02c0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a02c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a02c4: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x1a02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x1a02c8: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x1a02c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a02cc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1a02ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a02d0: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x1a02d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1a02d4: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1a02d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1a02d8: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x1a02d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1a02dc: 0xc0ce318  jal         func_338C60
    ctx->pc = 0x1A02DCu;
    SET_GPR_U32(ctx, 31, 0x1A02E4u);
    ctx->pc = 0x338C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C60u, 0x1A02DCu, 0x1A02E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02E4u;
label_1a02e4:
    // 0x1a02e4: 0x0  nop
    ctx->pc = 0x1a02e4u;
    // NOP
label_1a02e8:
    // 0x1a02e8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1a02e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a02ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A02ECu;
    {
        const bool branch_taken_0x1a02ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a02ec) {
            ctx->pc = 0x1A0328u;
            goto label_1a0328;
        }
    }
    ctx->pc = 0x1A02F4u;
label_1a02f4:
    // 0x1a02f4: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1a02f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1a02f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a02fc: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a0300: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x1a0300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x1a0304: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x1a0304u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a0308: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1a0308u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a030c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x1a030cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1a0310: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1a0310u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1a0314: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a0314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0318: 0xc0ce394  jal         func_338E50
    ctx->pc = 0x1A0318u;
    SET_GPR_U32(ctx, 31, 0x1A0320u);
    ctx->pc = 0x338E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338E50u, 0x1A0318u, 0x1A0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0320u;
label_1a0320:
    // 0x1a0320: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a0320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a0324: 0x0  nop
    ctx->pc = 0x1a0324u;
    // NOP
label_1a0328:
    // 0x1a0328: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1a0328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a032c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A032Cu;
    {
        const bool branch_taken_0x1a032c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a032c) {
            ctx->pc = 0x1A02F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a02f4;
        }
    }
    ctx->pc = 0x1A0334u;
    // 0x1a0334: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a0334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0338: 0xc0ce824  jal         func_33A090
    ctx->pc = 0x1A0338u;
    SET_GPR_U32(ctx, 31, 0x1A0340u);
    ctx->pc = 0x33A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A090u, 0x1A0338u, 0x1A0340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0340u;
label_1a0340:
    // 0x1a0340: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x1a0340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x1a0344: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a0344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a0348: 0xaea30024  sw          $v1, 0x24($s5)
    ctx->pc = 0x1a0348u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 3));
    // 0x1a034c: 0x0  nop
    ctx->pc = 0x1a034cu;
    // NOP
label_1a0350:
    // 0x1a0350: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x1a0350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x1a0354: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1a0354u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1a0358:
    // 0x1a0358: 0x2bc30003  slti        $v1, $fp, 0x3
    ctx->pc = 0x1a0358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a035c: 0x1460ff1d  bnez        $v1, . + 4 + (-0xE3 << 2)
    ctx->pc = 0x1A035Cu;
    {
        const bool branch_taken_0x1a035c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a035c) {
            ctx->pc = 0x19FFD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ffd4;
        }
    }
    ctx->pc = 0x1A0364u;
label_1a0364:
    // 0x1a0364: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1a0364u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a0368: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1a0368u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a036c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a036cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a0370: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a0370u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a0374: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a0374u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a0378: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a0378u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a037c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a037cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0380: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a038c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1a038cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1a0390: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0398u;
}
