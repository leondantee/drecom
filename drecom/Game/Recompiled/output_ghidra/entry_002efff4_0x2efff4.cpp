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

// Function: entry_002efff4
// Address: 0x2efff4 - 0x2f01d4
void entry_002efff4_0x2efff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002efff4_0x2efff4");
#endif

    switch (ctx->pc) {
        case 0x2f0120u: goto label_2f0120;
        default: break;
    }

    ctx->pc = 0x2efff4u;

    // 0x2efff4: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x2efff4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2efff8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2efff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2efffc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f0000: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f0000u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f0004: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2f0004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x2f0008: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f0008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f000c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f000cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f0010: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2f0010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2f0014: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f0018: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2f0018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f001c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f0020: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2f0020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2f0024: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f0024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f0028: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f0028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f002c: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x2f002cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x2f0030: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2f0030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f0034: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2f0034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2f0038: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x2f0038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x2f003c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f003cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0040: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f0040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f0044: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f0044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f0048: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f0048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f004c: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2f004cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f0050: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f0050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f0054: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f0054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f0058: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f0058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f005c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f005cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f0060: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f0060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f0064: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f0064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f0068: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f0068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f006c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f006cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f0070: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f0070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f0074: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f0074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f0078: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f0078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f007c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f007cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f0080: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f0080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f0084: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f0084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f0088: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f0088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f008c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2f008cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2f0090: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2f0090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2f0094: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f0094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f0098: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f0098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f009c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f009cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f00a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f00a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f00a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f00a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f00a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f00a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f00ac: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2f00acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f00b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2f00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2f00b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f00b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f00b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f00b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f00bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f00bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f00c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f00c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f00c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f00c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f00c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f00c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f00cc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2f00ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2f00d0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2f00d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f00d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f00d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f00d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f00d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f00dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f00dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f00e0: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2f00e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x2f00e4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2f00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f00e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f00e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f00ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f00ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f00f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f00f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f00f4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2f00f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2f00f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f00f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f00fc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2f00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f0100: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0104: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f0104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f0108: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f0108u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f010c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f010cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f0110: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f0110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f0114: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2f0114u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2f0118: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x2F0118u;
    SET_GPR_U32(ctx, 31, 0x2F0120u);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2F0118u, 0x2F0120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0120u;
label_2f0120:
    // 0x2f0120: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f0120u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f0124: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f0124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f0128: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f0128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f012c: 0x12030029  beq         $s0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2F012Cu;
    {
        const bool branch_taken_0x2f012c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f012c) {
            ctx->pc = 0x2F01D4u;
            return;
        }
    }
    ctx->pc = 0x2F0134u;
    // 0x2f0134: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2f0134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2f0138: 0xa202034d  sb          $v0, 0x34D($s0)
    ctx->pc = 0x2f0138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f013c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0140: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2f0140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f0144: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f0144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f0148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f014c: 0x0  nop
    ctx->pc = 0x2f014cu;
    // NOP
    // 0x2f0150: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f0150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f0154: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f0154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f0158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f015c: 0x0  nop
    ctx->pc = 0x2f015cu;
    // NOP
    // 0x2f0160: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f0160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f0164: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f0164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f0168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f016c: 0x0  nop
    ctx->pc = 0x2f016cu;
    // NOP
    // 0x2f0170: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f0170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2f0174: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f0174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f0178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f017c: 0x0  nop
    ctx->pc = 0x2f017cu;
    // NOP
    // 0x2f0180: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f0180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2f0184: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x2f0184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x2f0188: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f0188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f018c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f018cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0190: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2f0190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0194: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0198: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2f0198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x2f019c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2f019cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2f01a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f01a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f01a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f01a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f01a8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2f01a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f01ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f01acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f01b0: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x2f01b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x2f01b4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2f01b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f01b8: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2f01b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x2f01bc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2f01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f01c0: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2f01c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f01c4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f01c8: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2f01c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
    // 0x2f01cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F01CCu;
    {
        const bool branch_taken_0x2f01cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f01cc) {
            ctx->pc = 0x2F01DCu;
            return;
        }
    }
    ctx->pc = 0x2F01D4u;
}
