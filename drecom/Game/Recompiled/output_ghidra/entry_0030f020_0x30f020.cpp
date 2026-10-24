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

// Function: entry_0030f020
// Address: 0x30f020 - 0x30f2d0
void entry_0030f020_0x30f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f020_0x30f020");
#endif

    switch (ctx->pc) {
        case 0x30f0dcu: goto label_30f0dc;
        case 0x30f0e8u: goto label_30f0e8;
        case 0x30f134u: goto label_30f134;
        case 0x30f140u: goto label_30f140;
        case 0x30f1bcu: goto label_30f1bc;
        case 0x30f1c8u: goto label_30f1c8;
        case 0x30f1d4u: goto label_30f1d4;
        case 0x30f208u: goto label_30f208;
        case 0x30f288u: goto label_30f288;
        default: break;
    }

    ctx->pc = 0x30f020u;

    // 0x30f020: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f024: 0x8c861338  lw          $a2, 0x1338($a0)
    ctx->pc = 0x30f024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f028: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x30f028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x30f02c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x30f02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x30f030: 0x14800116  bnez        $a0, . + 4 + (0x116 << 2)
    ctx->pc = 0x30F030u;
    {
        const bool branch_taken_0x30f030 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f030) {
            ctx->pc = 0x30F48Cu;
            return;
        }
    }
    ctx->pc = 0x30F038u;
    // 0x30f038: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f03c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30f03cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30f040: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30f040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f044: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x30f044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x30f048: 0x10600110  beqz        $v1, . + 4 + (0x110 << 2)
    ctx->pc = 0x30F048u;
    {
        const bool branch_taken_0x30f048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f048) {
            ctx->pc = 0x30F48Cu;
            return;
        }
    }
    ctx->pc = 0x30F050u;
    // 0x30f050: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x30f050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30f054: 0x24839a50  addiu       $v1, $a0, -0x65B0
    ctx->pc = 0x30f054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941264));
    // 0x30f058: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x30f058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x30f05c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30f05cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399A50u));
    // 0x30f060: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x30f060u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x30f064: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30f064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30f068: 0x24709a60  addiu       $s0, $v1, -0x65A0
    ctx->pc = 0x30f068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941280));
    // 0x30f06c: 0x27a701c0  addiu       $a3, $sp, 0x1C0
    ctx->pc = 0x30f06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x30f070: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x30f070u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x399A60u));
    // 0x30f074: 0x7a050010  lq          $a1, 0x10($s0)
    ctx->pc = 0x30f074u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x399A70u));
    // 0x30f078: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x30f078u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x399A80u));
    // 0x30f07c: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x30f07cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399A90u));
    // 0x30f080: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x30f080u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x30f084: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x30f084u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x30f088: 0x7ce40020  sq          $a0, 0x20($a3)
    ctx->pc = 0x30f088u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 4));
    // 0x30f08c: 0x7ce30030  sq          $v1, 0x30($a3)
    ctx->pc = 0x30f08cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 3));
    // 0x30f090: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30f090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30f094: 0x24649aa0  addiu       $a0, $v1, -0x6560
    ctx->pc = 0x30f094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941344));
    // 0x30f098: 0x27a30200  addiu       $v1, $sp, 0x200
    ctx->pc = 0x30f098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x30f09c: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x30f09cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x399AA0u));
    // 0x30f0a0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x30f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x30f0a4: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f0a8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30f0ac: 0x246301c0  addiu       $v1, $v1, 0x1C0
    ctx->pc = 0x30f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x30f0b0: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x30f0b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30f0b4: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x30f0b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30f0b8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x30f0b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30f0bc: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x30f0bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x30f0c0: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x30f0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x30f0c4: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x30f0c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x30f0c8: 0x24045502  addiu       $a0, $zero, 0x5502
    ctx->pc = 0x30f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21762));
    // 0x30f0cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30f0ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f0d0: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x30f0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x30f0d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30F0D4u;
    SET_GPR_U32(ctx, 31, 0x30F0DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30F0D4u, 0x30F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F0DCu;
label_30f0dc:
    // 0x30f0dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f0dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f0e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30F0E0u;
    SET_GPR_U32(ctx, 31, 0x30F0E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30F0E0u, 0x30F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F0E8u;
label_30f0e8:
    // 0x30f0e8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x30f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x30f0ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f0f0: 0x0  nop
    ctx->pc = 0x30f0f0u;
    // NOP
    // 0x30f0f4: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x30f0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x30f0f8: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f0fc: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30f100: 0x246701c0  addiu       $a3, $v1, 0x1C0
    ctx->pc = 0x30f100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x30f104: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x30f104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30f108: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30f108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30f10c: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x30f10cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30f110: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x30f110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x30f114: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30f114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30f118: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x30f118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x30f11c: 0x24025501  addiu       $v0, $zero, 0x5501
    ctx->pc = 0x30f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21761));
    // 0x30f120: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f124: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30f124u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f128: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x30f128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x30f12c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30F12Cu;
    SET_GPR_U32(ctx, 31, 0x30F134u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30F12Cu, 0x30F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F134u;
label_30f134:
    // 0x30f134: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f134u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f138: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30F138u;
    SET_GPR_U32(ctx, 31, 0x30F140u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30F138u, 0x30F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F140u;
label_30f140:
    // 0x30f140: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f140u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f144: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f148: 0x904409df  lbu         $a0, 0x9DF($v0)
    ctx->pc = 0x30f148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2527)));
    // 0x30f14c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x30f14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30f150: 0x30550003  andi        $s5, $v0, 0x3
    ctx->pc = 0x30f150u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30f154: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f158: 0x24651340  addiu       $a1, $v1, 0x1340
    ctx->pc = 0x30f158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4928));
    // 0x30f15c: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x30f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x30f160: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x30f160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x30f164: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30f164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f168: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30f168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30f16c: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x30f16cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f170: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30f170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f174: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30f174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30f178: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x30f178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x30f17c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x30f17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30f180: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30f180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x30f184: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30f184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f188: 0x2a31004  sllv        $v0, $v1, $s5
    ctx->pc = 0x30f188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x30f18c: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f190: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30f190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f194: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30f194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f198: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30f198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30f19c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x30f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x30f1a0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30f1a4: 0x244697b0  addiu       $a2, $v0, -0x6850
    ctx->pc = 0x30f1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30f1a8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x30f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30f1ac: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f1b0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x30f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f1b4: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x30F1B4u;
    SET_GPR_U32(ctx, 31, 0x30F1BCu);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x30F1B4u, 0x30F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1BCu;
label_30f1bc:
    // 0x30f1bc: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x30f1bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x30f1c0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30F1C0u;
    SET_GPR_U32(ctx, 31, 0x30F1C8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30F1C0u, 0x30F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1C8u;
label_30f1c8:
    // 0x30f1c8: 0x26e40010  addiu       $a0, $s7, 0x10
    ctx->pc = 0x30f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x30f1cc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30F1CCu;
    SET_GPR_U32(ctx, 31, 0x30F1D4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30F1CCu, 0x30F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1D4u;
label_30f1d4:
    // 0x30f1d4: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f1d8: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x30f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f1dc: 0xe6e00020  swc1        $f0, 0x20($s7)
    ctx->pc = 0x30f1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 32), bits); }
    // 0x30f1e0: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f1e4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x30f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x30f1e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30f1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f1ec: 0xc4601288  lwc1        $f0, 0x1288($v1)
    ctx->pc = 0x30f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f1f0: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x30f1f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x30f1f4: 0x0  nop
    ctx->pc = 0x30f1f4u;
    // NOP
    // 0x30f1f8: 0x0  nop
    ctx->pc = 0x30f1f8u;
    // NOP
    // 0x30f1fc: 0x0  nop
    ctx->pc = 0x30f1fcu;
    // NOP
    // 0x30f200: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x30F200u;
    SET_GPR_U32(ctx, 31, 0x30F208u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x30F200u, 0x30F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F208u;
label_30f208:
    // 0x30f208: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f20c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30f210: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x30f210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f214: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30f214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30f218: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x30f218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x30f21c: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x30f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f220: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x30f220u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30f224: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30f224u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30f228: 0xe6e00010  swc1        $f0, 0x10($s7)
    ctx->pc = 0x30f228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 16), bits); }
    // 0x30f22c: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f230: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30f230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30f234: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x30F234u;
    {
        const bool branch_taken_0x30f234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f234) {
            ctx->pc = 0x30F35Cu;
            return;
        }
    }
    ctx->pc = 0x30F23Cu;
    // 0x30f23c: 0x153880  sll         $a3, $s5, 2
    ctx->pc = 0x30f23cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x30f240: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x30f240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30f244: 0x248697b0  addiu       $a2, $a0, -0x6850
    ctx->pc = 0x30f244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940592));
    // 0x30f248: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x30f248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x30f24c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f250: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30f250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f254: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30f254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30f258: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30f258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f25c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30f260: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30f260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30f264: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f268: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30f268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30f26c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x30f26cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f270: 0x3c033fc8  lui         $v1, 0x3FC8
    ctx->pc = 0x30f270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16328 << 16));
    // 0x30f274: 0x3463f5c3  ori         $v1, $v1, 0xF5C3
    ctx->pc = 0x30f274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62915);
    // 0x30f278: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30f278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f27c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x30f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x30f280: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x30F280u;
    SET_GPR_U32(ctx, 31, 0x30F288u);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x30F280u, 0x30F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F288u;
label_30f288:
    // 0x30f288: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x30f288u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f28c: 0x8fb40298  lw          $s4, 0x298($sp)
    ctx->pc = 0x30f28cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f290: 0xc68100d4  lwc1        $f1, 0xD4($s4)
    ctx->pc = 0x30f290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f294: 0x3c03bfc8  lui         $v1, 0xBFC8
    ctx->pc = 0x30f294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49096 << 16));
    // 0x30f298: 0x3465f5c3  ori         $a1, $v1, 0xF5C3
    ctx->pc = 0x30f298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62915);
    // 0x30f29c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x30f29cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f2a0: 0x0  nop
    ctx->pc = 0x30f2a0u;
    // NOP
    // 0x30f2a4: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x30f2a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30f2a8: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30f2ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30f2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30f2b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30f2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f2b4: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x30F2B4u;
    {
        const bool branch_taken_0x30f2b4 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x30f2b4) {
            ctx->pc = 0x30F2D0u;
            return;
        }
    }
    ctx->pc = 0x30F2BCu;
    // 0x30f2bc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x30f2bcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f2c0: 0x0  nop
    ctx->pc = 0x30f2c0u;
    // NOP
    // 0x30f2c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30f2c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30f2c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30F2C8u;
    {
        const bool branch_taken_0x30f2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f2c8) {
            ctx->pc = 0x30F2ECu;
            return;
        }
    }
    ctx->pc = 0x30F2D0u;
}
