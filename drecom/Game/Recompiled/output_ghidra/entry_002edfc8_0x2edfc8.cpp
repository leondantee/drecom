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

// Function: entry_002edfc8
// Address: 0x2edfc8 - 0x2ee1ec
void entry_002edfc8_0x2edfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002edfc8_0x2edfc8");
#endif

    switch (ctx->pc) {
        case 0x2ee0ecu: goto label_2ee0ec;
        case 0x2ee1d8u: goto label_2ee1d8;
        default: break;
    }

    ctx->pc = 0x2edfc8u;

label_2edfc8:
    // 0x2edfc8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2edfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2edfcc:
    // 0x2edfcc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2edfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2edfd0:
    // 0x2edfd0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2edfd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2edfd4:
    // 0x2edfd4: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2edfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2edfd8:
    // 0x2edfd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2edfdc:
    // 0x2edfdc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2edfdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2edfe0:
    // 0x2edfe0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2edfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2edfe4:
    // 0x2edfe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2edfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2edfe8:
    // 0x2edfe8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2edfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2edfec:
    // 0x2edfec: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2edfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_2edff0:
    // 0x2edff0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2edff4:
    // 0x2edff4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2edff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2edff8:
    // 0x2edff8: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x2edff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
label_2edffc:
    // 0x2edffc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2edffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ee000:
    // 0x2ee000: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2ee000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2ee004:
    // 0x2ee004: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2ee004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2ee008:
    // 0x2ee008: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2ee00c:
    // 0x2ee00c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee010:
    // 0x2ee010: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ee010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2ee014:
    // 0x2ee014: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee018:
    // 0x2ee018: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2ee018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ee01c:
    // 0x2ee01c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ee01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2ee020:
    // 0x2ee020: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee024:
    // 0x2ee024: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee028:
    // 0x2ee028: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee02c:
    // 0x2ee02c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee030:
    // 0x2ee030: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee034:
    // 0x2ee034: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee038:
    // 0x2ee038: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2ee038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2ee03c:
    // 0x2ee03c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2ee03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2ee040:
    // 0x2ee040: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee044:
    // 0x2ee044: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee048:
    // 0x2ee048: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee04c:
    // 0x2ee04c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee050:
    // 0x2ee050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee054:
    // 0x2ee054: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee058:
    // 0x2ee058: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2ee058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2ee05c:
    // 0x2ee05c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ee05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2ee060:
    // 0x2ee060: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee064:
    // 0x2ee064: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee068:
    // 0x2ee068: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee06c:
    // 0x2ee06c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee070:
    // 0x2ee070: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee074:
    // 0x2ee074: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee078:
    // 0x2ee078: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2ee078u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_2ee07c:
    // 0x2ee07c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2ee07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2ee080:
    // 0x2ee080: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee084:
    // 0x2ee084: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee088:
    // 0x2ee088: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee08c:
    // 0x2ee08c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee090:
    // 0x2ee090: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee094:
    // 0x2ee094: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee098:
    // 0x2ee098: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ee098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2ee09c:
    // 0x2ee09c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ee09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2ee0a0:
    // 0x2ee0a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee0a4:
    // 0x2ee0a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee0a8:
    // 0x2ee0a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ee0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2ee0ac:
    // 0x2ee0ac: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2ee0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_2ee0b0:
    // 0x2ee0b0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2ee0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2ee0b4:
    // 0x2ee0b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee0b8:
    // 0x2ee0b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee0bc:
    // 0x2ee0bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ee0bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ee0c0:
    // 0x2ee0c0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2ee0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2ee0c4:
    // 0x2ee0c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ee0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ee0c8:
    // 0x2ee0c8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2ee0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2ee0cc:
    // 0x2ee0cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee0d0:
    // 0x2ee0d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee0d4:
    // 0x2ee0d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ee0d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ee0d8:
    // 0x2ee0d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ee0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ee0dc:
    // 0x2ee0dc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2ee0dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2ee0e0:
    // 0x2ee0e0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2ee0e0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2ee0e4:
    // 0x2ee0e4: 0xc0634c8  jal         func_18D320
label_2ee0e8:
    if (ctx->pc == 0x2EE0E8u) {
        ctx->pc = 0x2EE0ECu;
        goto label_2ee0ec;
    }
    ctx->pc = 0x2EE0E4u;
    SET_GPR_U32(ctx, 31, 0x2EE0ECu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2EE0E4u, 0x2EE0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0ECu;
label_2ee0ec:
    // 0x2ee0ec: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2ee0ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ee0f0:
    // 0x2ee0f0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ee0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2ee0f4:
    // 0x2ee0f4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ee0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_2ee0f8:
    // 0x2ee0f8: 0x1203003c  beq         $s0, $v1, . + 4 + (0x3C << 2)
label_2ee0fc:
    if (ctx->pc == 0x2EE0FCu) {
        ctx->pc = 0x2EE100u;
        goto label_2ee100;
    }
    ctx->pc = 0x2EE0F8u;
    {
        const bool branch_taken_0x2ee0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee0f8) {
            ctx->pc = 0x2EE1ECu;
            return;
        }
    }
    ctx->pc = 0x2EE100u;
label_2ee100:
    // 0x2ee100: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2ee100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2ee104:
    // 0x2ee104: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee108:
    // 0x2ee108: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2ee108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
label_2ee10c:
    // 0x2ee10c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ee110:
    // 0x2ee110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee114:
    // 0x2ee114: 0x0  nop
    ctx->pc = 0x2ee114u;
    // NOP
label_2ee118:
    // 0x2ee118: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2ee118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2ee11c:
    // 0x2ee11c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ee120:
    // 0x2ee120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee124:
    // 0x2ee124: 0x0  nop
    ctx->pc = 0x2ee124u;
    // NOP
label_2ee128:
    // 0x2ee128: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2ee128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2ee12c:
    // 0x2ee12c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ee130:
    // 0x2ee130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee134:
    // 0x2ee134: 0x0  nop
    ctx->pc = 0x2ee134u;
    // NOP
label_2ee138:
    // 0x2ee138: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2ee138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2ee13c:
    // 0x2ee13c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2ee13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_2ee140:
    // 0x2ee140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee144:
    // 0x2ee144: 0x0  nop
    ctx->pc = 0x2ee144u;
    // NOP
label_2ee148:
    // 0x2ee148: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2ee148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2ee14c:
    // 0x2ee14c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ee14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2ee150:
    // 0x2ee150: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ee150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ee154:
    // 0x2ee154: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ee154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee158:
    // 0x2ee158: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ee158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ee15c:
    // 0x2ee15c: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2ee15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2ee160:
    // 0x2ee160: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee164:
    // 0x2ee164: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2ee164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2ee168:
    // 0x2ee168: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee16c:
    // 0x2ee16c: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2ee16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_2ee170:
    // 0x2ee170: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee174:
    // 0x2ee174: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2ee174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_2ee178:
    // 0x2ee178: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ee17c:
    // 0x2ee17c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ee17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee180:
    // 0x2ee180: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2ee180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_2ee184:
    // 0x2ee184: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ee188:
    // 0x2ee188: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2ee188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee18c:
    // 0x2ee18c: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2ee18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_2ee190:
    // 0x2ee190: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ee194:
    // 0x2ee194: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ee194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee198:
    // 0x2ee198: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2ee198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
label_2ee19c:
    // 0x2ee19c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2ee19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee1a0:
    // 0x2ee1a0: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2ee1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2ee1a4:
    // 0x2ee1a4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2ee1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2ee1a8:
    // 0x2ee1a8: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2ee1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_2ee1ac:
    // 0x2ee1ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ee1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2ee1b0:
    // 0x2ee1b0: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2ee1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2ee1b4:
    // 0x2ee1b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2ee1b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2ee1b8:
    // 0x2ee1b8: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2ee1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2ee1bc:
    // 0x2ee1bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ee1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ee1c0:
    // 0x2ee1c0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ee1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2ee1c4:
    // 0x2ee1c4: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2ee1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2ee1c8:
    // 0x2ee1c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ee1cc:
    // 0x2ee1cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ee1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee1d0:
    // 0x2ee1d0: 0x40f809  jalr        $v0
label_2ee1d4:
    if (ctx->pc == 0x2EE1D4u) {
        ctx->pc = 0x2EE1D8u;
        goto label_2ee1d8;
    }
    ctx->pc = 0x2EE1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE1D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE1D0u, 0x2EE1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE1D8u;
label_2ee1d8:
    // 0x2ee1d8: 0x8e030ab8  lw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ee1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2ee1dc:
    // 0x2ee1dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ee1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ee1e0:
    // 0x2ee1e0: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ee1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
label_2ee1e4:
    // 0x2ee1e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ee1e8:
    if (ctx->pc == 0x2EE1E8u) {
        ctx->pc = 0x2EE1ECu;
        goto label_fallthrough_0x2ee1e4;
    }
    ctx->pc = 0x2EE1E4u;
    {
        const bool branch_taken_0x2ee1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee1e4) {
            ctx->pc = 0x2EE1F4u;
            return;
        }
    }
label_fallthrough_0x2ee1e4:
    ctx->pc = 0x2EE1ECu;
}
