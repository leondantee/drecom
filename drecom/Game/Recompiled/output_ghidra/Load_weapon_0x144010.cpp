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

// Function: Load_weapon
// Address: 0x144010 - 0x144438
void Load_weapon_0x144010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Load_weapon_0x144010");
#endif

    switch (ctx->pc) {
        case 0x144094u: goto label_144094;
        case 0x1440ecu: goto label_1440ec;
        case 0x1440f8u: goto label_1440f8;
        case 0x144110u: goto label_144110;
        case 0x144120u: goto label_144120;
        case 0x144130u: goto label_144130;
        case 0x144144u: goto label_144144;
        case 0x144154u: goto label_144154;
        case 0x144174u: goto label_144174;
        case 0x144184u: goto label_144184;
        case 0x144194u: goto label_144194;
        case 0x1441a8u: goto label_1441a8;
        case 0x1441b8u: goto label_1441b8;
        case 0x14439cu: goto label_14439c;
        case 0x1443a4u: goto label_1443a4;
        case 0x1443c8u: goto label_1443c8;
        case 0x1443ecu: goto label_1443ec;
        case 0x1443fcu: goto label_1443fc;
        case 0x144408u: goto label_144408;
        default: break;
    }

    ctx->pc = 0x144010u;

    // 0x144010: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x144010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x144014: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x144014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x144018: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x144018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14401c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x144020: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x144020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x144024: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x144024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x144028: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x144028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14402c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144030: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144038: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x144038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x14403c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14403cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x144040: 0x2474dbc0  addiu       $s4, $v1, -0x2440
    ctx->pc = 0x144040u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x144044: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x144044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x144048: 0x2470a4a0  addiu       $s0, $v1, -0x5B60
    ctx->pc = 0x144048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x14404c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14404cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x144050: 0x2471b700  addiu       $s1, $v1, -0x4900
    ctx->pc = 0x144050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948608));
    // 0x144054: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x144054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x144058: 0x106000eb  beqz        $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x144058u;
    {
        const bool branch_taken_0x144058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x144058) {
            ctx->pc = 0x144408u;
            goto label_144408;
        }
    }
    ctx->pc = 0x144060u;
    // 0x144060: 0x8e151240  lw          $s5, 0x1240($s0)
    ctx->pc = 0x144060u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x144064: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x144064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x144068: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x144068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14406c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14406cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x144070: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x144070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x144074: 0x244251b0  addiu       $v0, $v0, 0x51B0
    ctx->pc = 0x144074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20912));
    // 0x144078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14407c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144080: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x144080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x144084: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x144084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x144088: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x144088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14408c: 0xc0765a4  jal         func_1D9690
    ctx->pc = 0x14408Cu;
    SET_GPR_U32(ctx, 31, 0x144094u);
    ctx->pc = 0x1D9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9690u, 0x14408Cu, 0x144094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144094u;
label_144094:
    // 0x144094: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x144094u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x144098: 0x72a0b628  paddub      $s6, $s5, $zero
    ctx->pc = 0x144098u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x14409c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x14409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1440a0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1440a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1440a4: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1440a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1440a8: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x1440a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x1440ac: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1440acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1440b0: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x1440b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x1440b4: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x1440b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1440b8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1440b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1440bc: 0xae821364  sw          $v0, 0x1364($s4)
    ctx->pc = 0x1440bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4964), GPR_U32(ctx, 2));
    // 0x1440c0: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x1440c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1440c4: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x1440c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x1440c8: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1440c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1440cc: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x1440ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x1440d0: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1440d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1440d4: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x1440d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1440d8: 0x24062d80  addiu       $a2, $zero, 0x2D80
    ctx->pc = 0x1440d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11648));
    // 0x1440dc: 0x24070031  addiu       $a3, $zero, 0x31
    ctx->pc = 0x1440dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1440e0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1440e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1440e4: 0xc05e858  jal         func_17A160
    ctx->pc = 0x1440E4u;
    SET_GPR_U32(ctx, 31, 0x1440ECu);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x1440E4u, 0x1440ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440ECu;
label_1440ec:
    // 0x1440ec: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x1440ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1440f0: 0xc05e964  jal         func_17A590
    ctx->pc = 0x1440F0u;
    SET_GPR_U32(ctx, 31, 0x1440F8u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x1440F0u, 0x1440F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440F8u;
label_1440f8:
    // 0x1440f8: 0x8e021244  lw          $v0, 0x1244($s0)
    ctx->pc = 0x1440f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4676)));
    // 0x1440fc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1440fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x144100: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x144100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x144104: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x144104u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x144108: 0xc0951c0  jal         func_254700
    ctx->pc = 0x144108u;
    SET_GPR_U32(ctx, 31, 0x144110u);
    ctx->pc = 0x254700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254700u, 0x144108u, 0x144110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144110u;
label_144110:
    // 0x144110: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x144110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x144114: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x144114u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x144118: 0xc096558  jal         func_259560
    ctx->pc = 0x144118u;
    SET_GPR_U32(ctx, 31, 0x144120u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x144118u, 0x144120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144120u;
label_144120:
    // 0x144120: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x144120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x144124: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x144124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x144128: 0xc05be64  jal         func_16F990
    ctx->pc = 0x144128u;
    SET_GPR_U32(ctx, 31, 0x144130u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x144128u, 0x144130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144130u;
label_144130:
    // 0x144130: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x144130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x144134: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x144134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x144138: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x144138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x14413c: 0xc095384  jal         func_254E10
    ctx->pc = 0x14413Cu;
    SET_GPR_U32(ctx, 31, 0x144144u);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x14413Cu, 0x144144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144144u;
label_144144:
    // 0x144144: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x144144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x144148: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x144148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x14414c: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x14414Cu;
    SET_GPR_U32(ctx, 31, 0x144154u);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x14414Cu, 0x144154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144154u;
label_144154:
    // 0x144154: 0x8e221244  lw          $v0, 0x1244($s1)
    ctx->pc = 0x144154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4676)));
    // 0x144158: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x144158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x14415c: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x14415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x144160: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x144160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x144164: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x144164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x144168: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x144168u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14416c: 0xc095228  jal         func_2548A0
    ctx->pc = 0x14416Cu;
    SET_GPR_U32(ctx, 31, 0x144174u);
    ctx->pc = 0x2548A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A0u, 0x14416Cu, 0x144174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144174u;
label_144174:
    // 0x144174: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x144174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x144178: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x144178u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14417c: 0xc096558  jal         func_259560
    ctx->pc = 0x14417Cu;
    SET_GPR_U32(ctx, 31, 0x144184u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x14417Cu, 0x144184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144184u;
label_144184:
    // 0x144184: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x144184u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x144188: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x144188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x14418c: 0xc05be64  jal         func_16F990
    ctx->pc = 0x14418Cu;
    SET_GPR_U32(ctx, 31, 0x144194u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x14418Cu, 0x144194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144194u;
label_144194:
    // 0x144194: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x144194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x144198: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x144198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x14419c: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x14419cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1441a0: 0xc095384  jal         func_254E10
    ctx->pc = 0x1441A0u;
    SET_GPR_U32(ctx, 31, 0x1441A8u);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x1441A0u, 0x1441A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441A8u;
label_1441a8:
    // 0x1441a8: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1441a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x1441ac: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1441acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1441b0: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x1441B0u;
    SET_GPR_U32(ctx, 31, 0x1441B8u);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x1441B0u, 0x1441B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441B8u;
label_1441b8:
    // 0x1441b8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1441b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1441bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1441bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1441c0: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1441C0u;
    {
        const bool branch_taken_0x1441c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1441c0) {
            ctx->pc = 0x1442C0u;
            goto label_1442c0;
        }
    }
    ctx->pc = 0x1441C8u;
    // 0x1441c8: 0x8e330058  lw          $s3, 0x58($s1)
    ctx->pc = 0x1441c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1441cc: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x1441ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1441d0: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x1441d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1441d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1441d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1441d8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1441d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1441dc: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x1441dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1441e0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1441e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1441e4: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x1441e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1441e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1441e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1441ec: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1441ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1441f0: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x1441f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1441f4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1441f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1441f8: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x1441f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1441fc: 0x24530090  addiu       $s3, $v0, 0x90
    ctx->pc = 0x1441fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x144200: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x144200u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x144204: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x144204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x144208: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x144208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14420c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x14420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x144210: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x144210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x144214: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x144214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x144218: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x144218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x14421c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14421cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x144220: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x144220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x144224: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x144224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x144228: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x144228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x14422c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14422cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x144230: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x144230u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x144234: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x144234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x144238: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x144238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14423c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14423Cu;
    {
        const bool branch_taken_0x14423c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14423c) {
            ctx->pc = 0x14425Cu;
            goto label_14425c;
        }
    }
    ctx->pc = 0x144244u;
    // 0x144244: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x144244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x144248: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x144248u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x14424c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x144250: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x144250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x144254: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x144254u;
    {
        const bool branch_taken_0x144254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144254) {
            ctx->pc = 0x1442C0u;
            goto label_1442c0;
        }
    }
    ctx->pc = 0x14425Cu;
label_14425c:
    // 0x14425c: 0x8e330058  lw          $s3, 0x58($s1)
    ctx->pc = 0x14425cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x144260: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x144260u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x144264: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x144264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x144268: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x144268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14426c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x14426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x144270: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x144270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x144274: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x144274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x144278: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x144278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x14427c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14427cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x144280: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x144280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x144284: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x144284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x144288: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x144288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x14428c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x14428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x144290: 0x24530090  addiu       $s3, $v0, 0x90
    ctx->pc = 0x144290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x144294: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x144294u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x144298: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x144298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x14429c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14429cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1442a0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1442a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1442a4: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1442a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1442a8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1442a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1442ac: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x1442acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1442b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1442b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1442b4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1442b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1442b8: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x1442b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1442bc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1442bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1442c0:
    // 0x1442c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1442c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1442c4: 0x0  nop
    ctx->pc = 0x1442c4u;
    // NOP
    // 0x1442c8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1442c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1442cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1442ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1442d0: 0x0  nop
    ctx->pc = 0x1442d0u;
    // NOP
    // 0x1442d4: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x1442d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x1442d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1442d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1442dc: 0x0  nop
    ctx->pc = 0x1442dcu;
    // NOP
    // 0x1442e0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x1442e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x1442e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1442e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1442e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1442e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1442ec: 0x0  nop
    ctx->pc = 0x1442ecu;
    // NOP
    // 0x1442f0: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x1442f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x1442f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1442f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1442f8: 0x0  nop
    ctx->pc = 0x1442f8u;
    // NOP
    // 0x1442fc: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1442fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x144300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144304: 0x0  nop
    ctx->pc = 0x144304u;
    // NOP
    // 0x144308: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x144308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x14430c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14430cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144310: 0x0  nop
    ctx->pc = 0x144310u;
    // NOP
    // 0x144314: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x144314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x144318: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x144318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14431c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x14431cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x144320: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x144320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x144324: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x144324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x144328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14432c: 0x0  nop
    ctx->pc = 0x14432cu;
    // NOP
    // 0x144330: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x144330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x144334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144338: 0x0  nop
    ctx->pc = 0x144338u;
    // NOP
    // 0x14433c: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x14433cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x144340: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144344: 0x0  nop
    ctx->pc = 0x144344u;
    // NOP
    // 0x144348: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x144348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x14434c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14434cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x144350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144354: 0x0  nop
    ctx->pc = 0x144354u;
    // NOP
    // 0x144358: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x144358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x14435c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14435cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144360: 0x0  nop
    ctx->pc = 0x144360u;
    // NOP
    // 0x144364: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x144364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x144368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14436c: 0x0  nop
    ctx->pc = 0x14436cu;
    // NOP
    // 0x144370: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x144370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x144374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144378: 0x0  nop
    ctx->pc = 0x144378u;
    // NOP
    // 0x14437c: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x14437cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x144380: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x144380u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x144384: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x144384u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x144388: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x144388u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14438c: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x14438cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x144390: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x144390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x144394: 0xc096558  jal         func_259560
    ctx->pc = 0x144394u;
    SET_GPR_U32(ctx, 31, 0x14439Cu);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x144394u, 0x14439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14439Cu;
label_14439c:
    // 0x14439c: 0xc05d030  jal         func_1740C0
    ctx->pc = 0x14439Cu;
    SET_GPR_U32(ctx, 31, 0x1443A4u);
    ctx->pc = 0x1740C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1740C0u, 0x14439Cu, 0x1443A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443A4u;
label_1443a4:
    // 0x1443a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1443A4u;
    {
        const bool branch_taken_0x1443a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1443a4) {
            ctx->pc = 0x1443D0u;
            goto label_1443d0;
        }
    }
    ctx->pc = 0x1443ACu;
    // 0x1443ac: 0x8e851364  lw          $a1, 0x1364($s4)
    ctx->pc = 0x1443acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4964)));
    // 0x1443b0: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1443b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1443b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1443b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1443b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1443b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1443bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1443bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1443c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1443C0u;
    SET_GPR_U32(ctx, 31, 0x1443C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1443C0u, 0x1443C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443C8u;
label_1443c8:
    // 0x1443c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1443C8u;
    {
        const bool branch_taken_0x1443c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1443c8) {
            ctx->pc = 0x1443ECu;
            goto label_1443ec;
        }
    }
    ctx->pc = 0x1443D0u;
label_1443d0:
    // 0x1443d0: 0x8e851364  lw          $a1, 0x1364($s4)
    ctx->pc = 0x1443d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4964)));
    // 0x1443d4: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1443d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1443d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1443d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1443dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1443dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1443e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1443e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1443e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1443E4u;
    SET_GPR_U32(ctx, 31, 0x1443ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1443E4u, 0x1443ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443ECu;
label_1443ec:
    // 0x1443ec: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1443ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1443f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1443f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1443f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1443F4u;
    SET_GPR_U32(ctx, 31, 0x1443FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1443F4u, 0x1443FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443FCu;
label_1443fc:
    // 0x1443fc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1443fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x144400: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x144400u;
    SET_GPR_U32(ctx, 31, 0x144408u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x144400u, 0x144408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144408u;
label_144408:
    // 0x144408: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x144408u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14440c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14440cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x144410: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x144410u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144414: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x144414u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144418: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x144418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14441c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14441cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144420: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14442c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x14442cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x144430: 0x3e00008  jr          $ra
    ctx->pc = 0x144430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144438u;
}
