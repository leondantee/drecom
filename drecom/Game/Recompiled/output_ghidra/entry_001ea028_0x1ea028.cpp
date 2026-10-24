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

// Function: entry_001ea028
// Address: 0x1ea028 - 0x1ea208
void entry_001ea028_0x1ea028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea028_0x1ea028");
#endif

    switch (ctx->pc) {
        case 0x1ea128u: goto label_1ea128;
        case 0x1ea134u: goto label_1ea134;
        case 0x1ea16cu: goto label_1ea16c;
        case 0x1ea178u: goto label_1ea178;
        case 0x1ea1b0u: goto label_1ea1b0;
        case 0x1ea1bcu: goto label_1ea1bc;
        case 0x1ea1f4u: goto label_1ea1f4;
        case 0x1ea200u: goto label_1ea200;
        default: break;
    }

    ctx->pc = 0x1ea028u;

    // 0x1ea028: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea02c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ea02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ea030: 0x90620073  lbu         $v0, 0x73($v1)
    ctx->pc = 0x1ea030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
    // 0x1ea034: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1ea034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ea038: 0xa0640073  sb          $a0, 0x73($v1)
    ctx->pc = 0x1ea038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ea03c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1ea03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1ea040: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x1ea040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x1ea044: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ea044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ea048: 0xac220a90  sw          $v0, 0xA90($at)
    ctx->pc = 0x1ea048u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x600A90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A90u, _value); } while (0);
    // 0x1ea04c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1ea04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1ea050: 0x34430011  ori         $v1, $v0, 0x11
    ctx->pc = 0x1ea050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x1ea054: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ea054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ea058: 0xac230a94  sw          $v1, 0xA94($at)
    ctx->pc = 0x1ea058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600A94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A94u, _value); } while (0);
    // 0x1ea05c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea060: 0x24561330  addiu       $s6, $v0, 0x1330
    ctx->pc = 0x1ea060u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ea064: 0x92c30073  lbu         $v1, 0x73($s6)
    ctx->pc = 0x1ea064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 115)));
    // 0x1ea068: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ea068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ea06c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1ea06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1ea070: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1EA070u;
    {
        const bool branch_taken_0x1ea070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea070) {
            ctx->pc = 0x1EA2A0u;
            return;
        }
    }
    ctx->pc = 0x1EA078u;
    // 0x1ea078: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea07c: 0x846210a6  lh          $v0, 0x10A6($v1)
    ctx->pc = 0x1ea07cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1ea080: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ea080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ea084: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ea084u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ea088: 0x4400085  bltz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1EA088u;
    {
        const bool branch_taken_0x1ea088 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ea088) {
            ctx->pc = 0x1EA2A0u;
            return;
        }
    }
    ctx->pc = 0x1EA090u;
    // 0x1ea090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea094: 0x0  nop
    ctx->pc = 0x1ea094u;
    // NOP
    // 0x1ea098: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ea098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ea09c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea09cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea0a0: 0x0  nop
    ctx->pc = 0x1ea0a0u;
    // NOP
    // 0x1ea0a4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ea0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ea0a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea0ac: 0x0  nop
    ctx->pc = 0x1ea0acu;
    // NOP
    // 0x1ea0b0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1ea0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1ea0b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1ea0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea0b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ea0b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea0bc: 0x0  nop
    ctx->pc = 0x1ea0bcu;
    // NOP
    // 0x1ea0c0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1ea0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1ea0c4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ea0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea0c8: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x1ea0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ea0cc: 0x94c200aa  lhu         $v0, 0xAA($a2)
    ctx->pc = 0x1ea0ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 170)));
    // 0x1ea0d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ea0d4: 0x30560004  andi        $s6, $v0, 0x4
    ctx->pc = 0x1ea0d4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ea0d8: 0x12c0004b  beqz        $s6, . + 4 + (0x4B << 2)
    ctx->pc = 0x1EA0D8u;
    {
        const bool branch_taken_0x1ea0d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea0d8) {
            ctx->pc = 0x1EA208u;
            return;
        }
    }
    ctx->pc = 0x1EA0E0u;
    // 0x1ea0e0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1ea0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1ea0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea0e8: 0x0  nop
    ctx->pc = 0x1ea0e8u;
    // NOP
    // 0x1ea0ec: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ea0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ea0f0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea0f4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ea0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ea0f8: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x1ea0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1ea0fc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1ea0fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ea100: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1ea100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1ea104: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1ea104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ea108: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x1ea108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x1ea10c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ea110: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x1ea110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ea114: 0x24040e15  addiu       $a0, $zero, 0xE15
    ctx->pc = 0x1ea114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
    // 0x1ea118: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ea118u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ea11c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ea120: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1EA120u;
    SET_GPR_U32(ctx, 31, 0x1EA128u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1EA120u, 0x1EA128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA128u;
label_1ea128:
    // 0x1ea128: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea128u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea12c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1EA12Cu;
    SET_GPR_U32(ctx, 31, 0x1EA134u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1EA12Cu, 0x1EA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA134u;
label_1ea134:
    // 0x1ea134: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x1ea134u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea138: 0x8d090130  lw          $t1, 0x130($t0)
    ctx->pc = 0x1ea138u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
    // 0x1ea13c: 0x25220280  addiu       $v0, $t1, 0x280
    ctx->pc = 0x1ea13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 640));
    // 0x1ea140: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea144: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ea144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ea148: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ea148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ea14c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ea14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ea150: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ea154: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1ea154u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ea158: 0x24040e15  addiu       $a0, $zero, 0xE15
    ctx->pc = 0x1ea158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
    // 0x1ea15c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ea15cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ea160: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ea164: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1EA164u;
    SET_GPR_U32(ctx, 31, 0x1EA16Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1EA164u, 0x1EA16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA16Cu;
label_1ea16c:
    // 0x1ea16c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea16cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea170: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1EA170u;
    SET_GPR_U32(ctx, 31, 0x1EA178u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1EA170u, 0x1EA178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA178u;
label_1ea178:
    // 0x1ea178: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea17c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ea17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ea180: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1ea180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1ea184: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea188: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ea188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ea18c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ea18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ea190: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ea190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ea194: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ea198: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1ea198u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ea19c: 0x24040e13  addiu       $a0, $zero, 0xE13
    ctx->pc = 0x1ea19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
    // 0x1ea1a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ea1a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ea1a4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ea1a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1EA1A8u;
    SET_GPR_U32(ctx, 31, 0x1EA1B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1EA1A8u, 0x1EA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1B0u;
label_1ea1b0:
    // 0x1ea1b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea1b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea1b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1EA1B4u;
    SET_GPR_U32(ctx, 31, 0x1EA1BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1EA1B4u, 0x1EA1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1BCu;
label_1ea1bc:
    // 0x1ea1bc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea1c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ea1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ea1c4: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x1ea1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1ea1c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea1cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ea1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ea1d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ea1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ea1d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ea1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ea1d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ea1dc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1ea1dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ea1e0: 0x24040e13  addiu       $a0, $zero, 0xE13
    ctx->pc = 0x1ea1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
    // 0x1ea1e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ea1e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ea1e8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ea1ec: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1EA1ECu;
    SET_GPR_U32(ctx, 31, 0x1EA1F4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1EA1ECu, 0x1EA1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1F4u;
label_1ea1f4:
    // 0x1ea1f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea1f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea1f8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1EA1F8u;
    SET_GPR_U32(ctx, 31, 0x1EA200u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1EA1F8u, 0x1EA200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA200u;
label_1ea200:
    // 0x1ea200: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1EA200u;
    {
        const bool branch_taken_0x1ea200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea200) {
            ctx->pc = 0x1EA2A0u;
            return;
        }
    }
    ctx->pc = 0x1EA208u;
}
