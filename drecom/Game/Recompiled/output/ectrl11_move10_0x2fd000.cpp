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

// Function: ectrl11_move10
// Address: 0x2fd000 - 0x2fd6f4
void ectrl11_move10_0x2fd000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl11_move10_0x2fd000");
#endif

    switch (ctx->pc) {
        case 0x2fd0f8u: goto label_2fd0f8;
        case 0x2fd104u: goto label_2fd104;
        case 0x2fd1b0u: goto label_2fd1b0;
        case 0x2fd20cu: goto label_2fd20c;
        case 0x2fd224u: goto label_2fd224;
        case 0x2fd2a0u: goto label_2fd2a0;
        case 0x2fd2c8u: goto label_2fd2c8;
        case 0x2fd2e8u: goto label_2fd2e8;
        case 0x2fd318u: goto label_2fd318;
        case 0x2fd33cu: goto label_2fd33c;
        case 0x2fd3e0u: goto label_2fd3e0;
        case 0x2fd404u: goto label_2fd404;
        case 0x2fd420u: goto label_2fd420;
        case 0x2fd4c8u: goto label_2fd4c8;
        case 0x2fd4ecu: goto label_2fd4ec;
        case 0x2fd508u: goto label_2fd508;
        case 0x2fd5b4u: goto label_2fd5b4;
        case 0x2fd5dcu: goto label_2fd5dc;
        case 0x2fd5fcu: goto label_2fd5fc;
        case 0x2fd65cu: goto label_2fd65c;
        case 0x2fd688u: goto label_2fd688;
        case 0x2fd6a8u: goto label_2fd6a8;
        default: break;
    }

    ctx->pc = 0x2fd000u;

    // 0x2fd000: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2fd000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2fd004: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x2fd004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2fd008: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fd008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2fd00c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fd00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fd010: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fd010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fd014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fd018: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x2fd018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x2fd01c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2fd01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2fd020: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x2fd020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2fd024: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x2fd024u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fd028: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fd028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fd02c: 0x24639090  addiu       $v1, $v1, -0x6F70
    ctx->pc = 0x2fd02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938768));
    // 0x2fd030: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fd030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fd034: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fd034u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399090u));
    // 0x2fd038: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fd038u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fd03c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fd03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fd040: 0x246490a0  addiu       $a0, $v1, -0x6F60
    ctx->pc = 0x2fd040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938784));
    // 0x2fd044: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2fd044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fd048: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2fd048u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3990A0u));
    // 0x2fd04c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2fd04cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2fd050: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fd050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fd054: 0x246490b0  addiu       $a0, $v1, -0x6F50
    ctx->pc = 0x2fd054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938800));
    // 0x2fd058: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2fd058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fd05c: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x2fd05cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3990B0u));
    // 0x2fd060: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd060u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd064: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2fd064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2fd068: 0x24a690c0  addiu       $a2, $a1, -0x6F40
    ctx->pc = 0x2fd068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938816));
    // 0x2fd06c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2fd06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fd070: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2fd070u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3990C0u));
    // 0x2fd074: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fd074u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fd078: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fd078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fd07c: 0x246490d0  addiu       $a0, $v1, -0x6F30
    ctx->pc = 0x2fd07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938832));
    // 0x2fd080: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2fd080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2fd084: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2fd084u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3990D0u));
    // 0x2fd088: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2fd088u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2fd08c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2fd08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fd090: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fd090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fd094: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fd094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd098: 0x14640073  bne         $v1, $a0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2FD098u;
    {
        const bool branch_taken_0x2fd098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fd098) {
            ctx->pc = 0x2FD268u;
            goto label_2fd268;
        }
    }
    ctx->pc = 0x2FD0A0u;
    // 0x2fd0a0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2fd0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fd0a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fd0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fd0a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fd0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fd0ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fd0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fd0b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fd0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fd0b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fd0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fd0b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fd0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fd0bc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2fd0bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fd0c0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2fd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fd0c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fd0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fd0c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fd0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fd0cc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2fd0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fd0d0: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x2fd0d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x2fd0d4: 0x34a2ffff  ori         $v0, $a1, 0xFFFF
    ctx->pc = 0x2fd0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fd0d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fd0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fd0dc: 0xc22825  or          $a1, $a2, $v0
    ctx->pc = 0x2fd0dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2fd0e0: 0x24031902  addiu       $v1, $zero, 0x1902
    ctx->pc = 0x2fd0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6402));
    // 0x2fd0e4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2fd0e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fd0e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2fd0e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd0ec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fd0ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd0f0: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FD0F0u;
    SET_GPR_U32(ctx, 31, 0x2FD0F8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FD0F0u, 0x2FD0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD0F8u;
label_2fd0f8:
    // 0x2fd0f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fd0f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd0fc: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FD0FCu;
    SET_GPR_U32(ctx, 31, 0x2FD104u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FD0FCu, 0x2FD104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD104u;
label_2fd104:
    // 0x2fd104: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2fd104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fd108: 0xacc20100  sw          $v0, 0x100($a2)
    ctx->pc = 0x2fd108u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 256), GPR_U32(ctx, 2));
    // 0x2fd10c: 0x864315f0  lh          $v1, 0x15F0($s2)
    ctx->pc = 0x2fd10cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5616)));
    // 0x2fd110: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2fd110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fd114: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fd114u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fd118: 0x39e3c  dsll32      $s3, $v1, 24
    ctx->pc = 0x2fd118u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fd11c: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x2fd11cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x2fd120: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2fd120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fd124: 0x8c850100  lw          $a1, 0x100($a0)
    ctx->pc = 0x2fd124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2fd128: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x2fd128u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2fd12c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fd130: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fd130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fd134: 0x1223004c  beq         $s1, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2FD134u;
    {
        const bool branch_taken_0x2fd134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fd134) {
            ctx->pc = 0x2FD268u;
            goto label_2fd268;
        }
    }
    ctx->pc = 0x2FD13Cu;
    // 0x2fd13c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2fd13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fd140: 0xa223034d  sb          $v1, 0x34D($s1)
    ctx->pc = 0x2fd140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 845), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fd144: 0x8e240b18  lw          $a0, 0xB18($s1)
    ctx->pc = 0x2fd144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x2fd148: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2fd148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2fd14c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2fd14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2fd150: 0xae230b18  sw          $v1, 0xB18($s1)
    ctx->pc = 0x2fd150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 3));
    // 0x2fd154: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2fd154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2fd158: 0xa2230348  sb          $v1, 0x348($s1)
    ctx->pc = 0x2fd158u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fd15c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2fd15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2fd160: 0xa2230346  sb          $v1, 0x346($s1)
    ctx->pc = 0x2fd160u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fd164: 0x3c0342b0  lui         $v1, 0x42B0
    ctx->pc = 0x2fd164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17072 << 16));
    // 0x2fd168: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd16c: 0x0  nop
    ctx->pc = 0x2fd16cu;
    // NOP
    // 0x2fd170: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fd170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fd174: 0x3c0342b0  lui         $v1, 0x42B0
    ctx->pc = 0x2fd174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17072 << 16));
    // 0x2fd178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd17c: 0x0  nop
    ctx->pc = 0x2fd17cu;
    // NOP
    // 0x2fd180: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fd180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fd184: 0x3c0342b0  lui         $v1, 0x42B0
    ctx->pc = 0x2fd184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17072 << 16));
    // 0x2fd188: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd18c: 0x0  nop
    ctx->pc = 0x2fd18cu;
    // NOP
    // 0x2fd190: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fd190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fd194: 0x3c034218  lui         $v1, 0x4218
    ctx->pc = 0x2fd194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16920 << 16));
    // 0x2fd198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd19c: 0x0  nop
    ctx->pc = 0x2fd19cu;
    // NOP
    // 0x2fd1a0: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x2fd1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x2fd1a4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fd1a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fd1a8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2FD1A8u;
    {
        const bool branch_taken_0x2fd1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd1a8) {
            ctx->pc = 0x2FD258u;
            goto label_2fd258;
        }
    }
    ctx->pc = 0x2FD1B0u;
label_2fd1b0:
    // 0x2fd1b0: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd1b4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd1b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd1b8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd1bc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd1c0: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x2fd1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x2fd1c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fd1c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd1c8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2fd1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd1cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd1d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2fd1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd1d4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2fd1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2fd1d8: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd1dc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd1dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd1e0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd1e4: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2fd1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd1e8: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd1ec: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd1ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd1f0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd1f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd1f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd1fc: 0x24651600  addiu       $a1, $v1, 0x1600
    ctx->pc = 0x2fd1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fd200: 0x24461610  addiu       $a2, $v0, 0x1610
    ctx->pc = 0x2fd200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x2fd204: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD204u;
    SET_GPR_U32(ctx, 31, 0x2FD20Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD204u, 0x2FD20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD20Cu;
label_2fd20c:
    // 0x2fd20c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2fd210: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd214: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd218: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd21c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD21Cu;
    SET_GPR_U32(ctx, 31, 0x2FD224u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD224u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD224u) { return; }
    ctx->pc = 0x2FD224u;
label_2fd224:
    // 0x2fd224: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fd224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd22c: 0x0  nop
    ctx->pc = 0x2fd22cu;
    // NOP
    // 0x2fd230: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2fd230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2fd234: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fd234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd238: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd238u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd23c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fd23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd240: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fd240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fd244: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd248: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fd248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd24c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd24cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd250: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fd250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fd254: 0x0  nop
    ctx->pc = 0x2fd254u;
    // NOP
label_2fd258:
    // 0x2fd258: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x2fd258u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2fd25c: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2FD25Cu;
    {
        const bool branch_taken_0x2fd25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd25c) {
            ctx->pc = 0x2FD1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd1b0;
        }
    }
    ctx->pc = 0x2FD264u;
    // 0x2fd264: 0x0  nop
    ctx->pc = 0x2fd264u;
    // NOP
label_2fd268:
    // 0x2fd268: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2fd268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fd26c: 0x8c710100  lw          $s1, 0x100($v1)
    ctx->pc = 0x2fd26cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2fd270: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fd270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fd274: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fd274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fd278: 0x12230116  beq         $s1, $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x2FD278u;
    {
        const bool branch_taken_0x2fd278 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fd278) {
            ctx->pc = 0x2FD6D4u;
            goto label_2fd6d4;
        }
    }
    ctx->pc = 0x2FD280u;
    // 0x2fd280: 0x864315f0  lh          $v1, 0x15F0($s2)
    ctx->pc = 0x2fd280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5616)));
    // 0x2fd284: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2fd284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fd288: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fd288u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fd28c: 0x39e3c  dsll32      $s3, $v1, 24
    ctx->pc = 0x2fd28cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fd290: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x2fd290u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x2fd294: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x2fd294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fd298: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2FD298u;
    {
        const bool branch_taken_0x2fd298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd298) {
            ctx->pc = 0x2FD390u;
            goto label_2fd390;
        }
    }
    ctx->pc = 0x2FD2A0u;
label_2fd2a0:
    // 0x2fd2a0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2fd2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fd2a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2fd2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2fd2a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd2ac: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2fd2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd2b0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2fd2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd2b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd2b8: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x2fd2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd2bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2fd2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2fd2c0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD2C0u;
    SET_GPR_U32(ctx, 31, 0x2FD2C8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD2C0u, 0x2FD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD2C8u;
label_2fd2c8:
    // 0x2fd2c8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2fd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd2cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd2d0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2fd2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd2d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fd2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2fd2d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd2dc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2fd2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2fd2e0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD2E0u;
    SET_GPR_U32(ctx, 31, 0x2FD2E8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD2E8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD2E8u) { return; }
    ctx->pc = 0x2FD2E8u;
label_2fd2e8:
    // 0x2fd2e8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2fd2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fd2ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2fd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2fd2f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fd2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fd2f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd2f8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2fd2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd2fc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2fd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd300: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fd300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fd304: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd308: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x2fd308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd30c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2fd30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2fd310: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD310u;
    SET_GPR_U32(ctx, 31, 0x2FD318u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD310u, 0x2FD318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD318u;
label_2fd318:
    // 0x2fd318: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2fd318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd31c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fd31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fd320: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fd320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fd324: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2fd324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd328: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fd328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2fd32c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd330: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2fd330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2fd334: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD334u;
    SET_GPR_U32(ctx, 31, 0x2FD33Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD33Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD33Cu) { return; }
    ctx->pc = 0x2FD33Cu;
label_2fd33c:
    // 0x2fd33c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fd33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd340: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd344: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2fd344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd348: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2fd348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd34c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2fd34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2fd350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd354: 0x0  nop
    ctx->pc = 0x2fd354u;
    // NOP
    // 0x2fd358: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fd358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fd35c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2fd35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2fd360: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fd360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fd364: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fd364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fd368: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd36c: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2fd36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd370: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2fd370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd374: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2fd374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2fd378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd37c: 0x0  nop
    ctx->pc = 0x2fd37cu;
    // NOP
    // 0x2fd380: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fd380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fd384: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2fd384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2fd388: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2fd388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fd38c: 0x0  nop
    ctx->pc = 0x2fd38cu;
    // NOP
label_2fd390:
    // 0x2fd390: 0x1600ffc3  bnez        $s0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2FD390u;
    {
        const bool branch_taken_0x2fd390 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd390) {
            ctx->pc = 0x2FD2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd2a0;
        }
    }
    ctx->pc = 0x2FD398u;
    // 0x2fd398: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2fd398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fd39c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2fd39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fd3a0: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2FD3A0u;
    {
        const bool branch_taken_0x2fd3a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd3a0) {
            ctx->pc = 0x2FD47Cu;
            goto label_2fd47c;
        }
    }
    ctx->pc = 0x2FD3A8u;
    // 0x2fd3a8: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd3ac: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd3acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd3b0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd3b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd3b8: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x2fd3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x2fd3bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fd3bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd3c0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2fd3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd3c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2fd3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2fd3c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2fd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2fd3cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd3d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd3d4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd3d8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2FD3D8u;
    SET_GPR_U32(ctx, 31, 0x2FD3E0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2FD3E0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD3E0u) { return; }
    ctx->pc = 0x2FD3E0u;
label_2fd3e0:
    // 0x2fd3e0: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd3e4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd3e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd3e8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd3ec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd3f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd3f4: 0x24451600  addiu       $a1, $v0, 0x1600
    ctx->pc = 0x2fd3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x2fd3f8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2fd3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd3fc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD3FCu;
    SET_GPR_U32(ctx, 31, 0x2FD404u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD3FCu, 0x2FD404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD404u;
label_2fd404:
    // 0x2fd404: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x2fd404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x2fd408: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x2fd408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x2fd40c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd410: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd414: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd418: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD418u;
    SET_GPR_U32(ctx, 31, 0x2FD420u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD420u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD420u) { return; }
    ctx->pc = 0x2FD420u;
label_2fd420:
    // 0x2fd420: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fd420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd428: 0x0  nop
    ctx->pc = 0x2fd428u;
    // NOP
    // 0x2fd42c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2fd42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2fd430: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x2fd430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd434: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fd434u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fd438: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fd438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fd43c: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fd43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fd440: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2fd440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fd444: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2fd444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fd448: 0x24631600  addiu       $v1, $v1, 0x1600
    ctx->pc = 0x2fd448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fd44c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd44cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd450: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2fd450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fd454: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fd454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd458: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd458u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd45c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fd45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd460: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd460u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd464: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fd464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fd468: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd46c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fd46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd470: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd470u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd474: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x2FD474u;
    {
        const bool branch_taken_0x2fd474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd474) {
            ctx->pc = 0x2FD6D4u;
            goto label_2fd6d4;
        }
    }
    ctx->pc = 0x2FD47Cu;
label_2fd47c:
    // 0x2fd47c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2fd47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fd480: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fd480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fd484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fd484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd488: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2FD488u;
    {
        const bool branch_taken_0x2fd488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fd488) {
            ctx->pc = 0x2FD568u;
            goto label_2fd568;
        }
    }
    ctx->pc = 0x2FD490u;
    // 0x2fd490: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd494: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd494u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd498: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd49c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd4a0: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x2fd4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x2fd4a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fd4a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd4a8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2fd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd4ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2fd4acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2fd4b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2fd4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2fd4b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd4b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd4bc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd4c0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2FD4C0u;
    SET_GPR_U32(ctx, 31, 0x2FD4C8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2FD4C8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD4C8u) { return; }
    ctx->pc = 0x2FD4C8u;
label_2fd4c8:
    // 0x2fd4c8: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd4cc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd4ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd4d0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd4d4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd4d8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd4dc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd4e0: 0x24461610  addiu       $a2, $v0, 0x1610
    ctx->pc = 0x2fd4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x2fd4e4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD4E4u;
    SET_GPR_U32(ctx, 31, 0x2FD4ECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD4E4u, 0x2FD4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD4ECu;
label_2fd4ec:
    // 0x2fd4ec: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x2fd4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x2fd4f0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x2fd4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x2fd4f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd4f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd4fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd500: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD500u;
    SET_GPR_U32(ctx, 31, 0x2FD508u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD508u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD508u) { return; }
    ctx->pc = 0x2FD508u;
label_2fd508:
    // 0x2fd508: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fd508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd50c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd50cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd510: 0x0  nop
    ctx->pc = 0x2fd510u;
    // NOP
    // 0x2fd514: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2fd514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2fd518: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fd518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd51c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd51cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd520: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2fd520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fd524: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fd524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd528: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd528u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd52c: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x2fd52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd530: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fd530u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fd534: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fd534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fd538: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fd538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fd53c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fd53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fd540: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd544: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2fd544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fd548: 0x24631600  addiu       $v1, $v1, 0x1600
    ctx->pc = 0x2fd548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fd54c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd54cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd550: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fd550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fd554: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd558: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fd558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd55c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd55cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd560: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2FD560u;
    {
        const bool branch_taken_0x2fd560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd560) {
            ctx->pc = 0x2FD6D4u;
            goto label_2fd6d4;
        }
    }
    ctx->pc = 0x2FD568u;
label_2fd568:
    // 0x2fd568: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2fd568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fd56c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fd56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fd570: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fd570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fd574: 0x14830057  bne         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x2FD574u;
    {
        const bool branch_taken_0x2fd574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fd574) {
            ctx->pc = 0x2FD6D4u;
            goto label_2fd6d4;
        }
    }
    ctx->pc = 0x2FD57Cu;
    // 0x2fd57c: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x2fd57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd580: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fd580u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fd584: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fd584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fd588: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2fd588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fd58c: 0x24631610  addiu       $v1, $v1, 0x1610
    ctx->pc = 0x2fd58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x2fd590: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd590u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd594: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fd594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd598: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd598u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd59c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2fd59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2fd5a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2fd5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd5a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd5a8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd5ac: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2FD5ACu;
    SET_GPR_U32(ctx, 31, 0x2FD5B4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2FD5B4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD5B4u) { return; }
    ctx->pc = 0x2FD5B4u;
label_2fd5b4:
    // 0x2fd5b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fd5b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd5b8: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x2fd5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd5bc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fd5bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fd5c0: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x2fd5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fd5c4: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2fd5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fd5c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd5cc: 0x24651600  addiu       $a1, $v1, 0x1600
    ctx->pc = 0x2fd5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fd5d0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2fd5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd5d4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD5D4u;
    SET_GPR_U32(ctx, 31, 0x2FD5DCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD5D4u, 0x2FD5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD5DCu;
label_2fd5dc:
    // 0x2fd5dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fd5dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd5e0: 0x3c033eaa  lui         $v1, 0x3EAA
    ctx->pc = 0x2fd5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16042 << 16));
    // 0x2fd5e4: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x2fd5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x2fd5e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2fd5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd5ec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd5f0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd5f4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD5F4u;
    SET_GPR_U32(ctx, 31, 0x2FD5FCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD5FCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD5FCu) { return; }
    ctx->pc = 0x2FD5FCu;
label_2fd5fc:
    // 0x2fd5fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fd5fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd600: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fd600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd604: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd608: 0x0  nop
    ctx->pc = 0x2fd608u;
    // NOP
    // 0x2fd60c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2fd60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2fd610: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fd610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd614: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd614u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd618: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2fd618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fd61c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2fd61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd620: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd620u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd624: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd628: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd628u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd62c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd630: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd634: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x2fd634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x2fd638: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2fd638u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd63c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2fd63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd640: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x2fd640u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x2fd644: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2fd644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2fd648: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2fd648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd64c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd650: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd654: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2FD654u;
    SET_GPR_U32(ctx, 31, 0x2FD65Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2FD65Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD65Cu) { return; }
    ctx->pc = 0x2FD65Cu;
label_2fd65c:
    // 0x2fd65c: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd660: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd660u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd664: 0x229c0  sll         $a1, $v0, 7
    ctx->pc = 0x2fd664u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd668: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x2fd668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2fd66c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2fd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd670: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fd670u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd674: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2fd674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd678: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fd678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd67c: 0x24661610  addiu       $a2, $v1, 0x1610
    ctx->pc = 0x2fd67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x2fd680: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD680u;
    SET_GPR_U32(ctx, 31, 0x2FD688u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD680u, 0x2FD688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD688u;
label_2fd688:
    // 0x2fd688: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fd688u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd68c: 0x3c133eaa  lui         $s3, 0x3EAA
    ctx->pc = 0x2fd68cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16042 << 16));
    // 0x2fd690: 0x3663aaab  ori         $v1, $s3, 0xAAAB
    ctx->pc = 0x2fd690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)43691);
    // 0x2fd694: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2fd694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd698: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd69c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd6a0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD6A0u;
    SET_GPR_U32(ctx, 31, 0x2FD6A8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD6A8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD6A8u) { return; }
    ctx->pc = 0x2FD6A8u;
label_2fd6a8:
    // 0x2fd6a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fd6a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fd6ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fd6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd6b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd6b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd6b4: 0x0  nop
    ctx->pc = 0x2fd6b4u;
    // NOP
    // 0x2fd6b8: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2fd6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2fd6bc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fd6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd6c0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd6c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd6c4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fd6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fd6c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd6cc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fd6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd6d0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2fd6d4:
    // 0x2fd6d4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2fd6d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fd6d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fd6d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fd6dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fd6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fd6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fd6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd6e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2fd6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2fd6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD6F4u;
}
