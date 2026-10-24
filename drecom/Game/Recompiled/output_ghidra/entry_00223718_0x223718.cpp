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

// Function: entry_00223718
// Address: 0x223718 - 0x2240f4
void entry_00223718_0x223718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223718_0x223718");
#endif

    switch (ctx->pc) {
        case 0x223740u: goto label_223740;
        case 0x223760u: goto label_223760;
        case 0x223858u: goto label_223858;
        case 0x22386cu: goto label_22386c;
        case 0x223894u: goto label_223894;
        case 0x2238b8u: goto label_2238b8;
        case 0x2238d0u: goto label_2238d0;
        case 0x22391cu: goto label_22391c;
        case 0x2239f0u: goto label_2239f0;
        case 0x223a3cu: goto label_223a3c;
        case 0x223b14u: goto label_223b14;
        case 0x223b60u: goto label_223b60;
        case 0x223c40u: goto label_223c40;
        case 0x223c88u: goto label_223c88;
        case 0x223db4u: goto label_223db4;
        case 0x223e28u: goto label_223e28;
        case 0x223e98u: goto label_223e98;
        case 0x224010u: goto label_224010;
        case 0x224050u: goto label_224050;
        default: break;
    }

    ctx->pc = 0x223718u;

    // 0x223718: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x223718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x22371c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x22371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223720: 0x90431308  lbu         $v1, 0x1308($v0)
    ctx->pc = 0x223720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x223724: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x223724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x223728: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x223728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x22372c: 0x24820244  addiu       $v0, $a0, 0x244
    ctx->pc = 0x22372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 580));
    // 0x223730: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x223730u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223734: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x223734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x223738: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x223738u;
    SET_GPR_U32(ctx, 31, 0x223740u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x223738u, 0x223740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223740u;
label_223740:
    // 0x223740: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x223740u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223744: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x223744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x223748: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x223748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22374c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x22374cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x223750: 0x26650150  addiu       $a1, $s3, 0x150
    ctx->pc = 0x223750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
    // 0x223754: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x223754u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223758: 0xc074674  jal         func_1D19D0
    ctx->pc = 0x223758u;
    SET_GPR_U32(ctx, 31, 0x223760u);
    ctx->pc = 0x1D19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19D0u, 0x223758u, 0x223760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223760u;
label_223760:
    // 0x223760: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x223760u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223764: 0xde650080  ld          $a1, 0x80($s3)
    ctx->pc = 0x223764u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x223768: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x223768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22376c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22376cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x223770: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x223770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x223774: 0xfe640080  sd          $a0, 0x80($s3)
    ctx->pc = 0x223774u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 128), GPR_U64(ctx, 4));
    // 0x223778: 0xde6501d0  ld          $a1, 0x1D0($s3)
    ctx->pc = 0x223778u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x22377c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x22377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x223780: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x223780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x223784: 0xa2f025  or          $fp, $a1, $v0
    ctx->pc = 0x223784u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x223788: 0xfe7e01d0  sd          $fp, 0x1D0($s3)
    ctx->pc = 0x223788u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 464), GPR_U64(ctx, 30));
    // 0x22378c: 0xde630080  ld          $v1, 0x80($s3)
    ctx->pc = 0x22378cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x223790: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x223790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x223794: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x223794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x223798: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x223798u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22379c: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x22379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x2237a0: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x2237a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2237a4: 0x1051025  or          $v0, $t0, $a1
    ctx->pc = 0x2237a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x2237a8: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x2237a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2237ac: 0xfe690080  sd          $t1, 0x80($s3)
    ctx->pc = 0x2237acu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 128), GPR_U64(ctx, 9));
    // 0x2237b0: 0xde6901d0  ld          $t1, 0x1D0($s3)
    ctx->pc = 0x2237b0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x2237b4: 0x240affe7  addiu       $t2, $zero, -0x19
    ctx->pc = 0x2237b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x2237b8: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x2237b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2237bc: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x2237bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2237c0: 0x148c38  dsll        $s1, $s4, 16
    ctx->pc = 0x2237c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) << 16);
    // 0x2237c4: 0x3623ffff  ori         $v1, $s1, 0xFFFF
    ctx->pc = 0x2237c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x2237c8: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x2237c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2237cc: 0x1321824  and         $v1, $t1, $s2
    ctx->pc = 0x2237ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 18));
    // 0x2237d0: 0xfe6301d0  sd          $v1, 0x1D0($s3)
    ctx->pc = 0x2237d0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 464), GPR_U64(ctx, 3));
    // 0x2237d4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2237d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2237d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2237d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2237dc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2237dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2237e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2237e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2237e4: 0xfe6300b8  sd          $v1, 0xB8($s3)
    ctx->pc = 0x2237e4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 184), GPR_U64(ctx, 3));
    // 0x2237e8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2237e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2237ec: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2237ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2237f0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2237f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2237f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2237f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2237f8: 0xfe6300e8  sd          $v1, 0xE8($s3)
    ctx->pc = 0x2237f8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 232), GPR_U64(ctx, 3));
    // 0x2237fc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2237fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223800: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x223800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x223804: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x223804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223808: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x223808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22380c: 0xfe630208  sd          $v1, 0x208($s3)
    ctx->pc = 0x22380cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 520), GPR_U64(ctx, 3));
    // 0x223810: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x223810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223814: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x223814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x223818: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x223818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22381c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22381cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x223820: 0xfe630238  sd          $v1, 0x238($s3)
    ctx->pc = 0x223820u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 568), GPR_U64(ctx, 3));
    // 0x223824: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x223824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x223828: 0x34740006  ori         $s4, $v1, 0x6
    ctx->pc = 0x223828u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x22382c: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x22382cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
    // 0x223830: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x223830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x223834: 0x34439400  ori         $v1, $v0, 0x9400
    ctx->pc = 0x223834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37888);
    // 0x223838: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x223838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22383c: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x22383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x223840: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x223840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x223844: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x223844u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x223848: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x223848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x22384c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x22384cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x223850: 0xc0958e0  jal         func_256380
    ctx->pc = 0x223850u;
    SET_GPR_U32(ctx, 31, 0x223858u);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x223850u, 0x223858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223858u;
label_223858:
    // 0x223858: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x223858u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22385c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x22385cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x223860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x223860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223864: 0xc0958e0  jal         func_256380
    ctx->pc = 0x223864u;
    SET_GPR_U32(ctx, 31, 0x22386Cu);
    ctx->pc = 0x256380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256380u, 0x223864u, 0x22386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22386Cu;
label_22386c:
    // 0x22386c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22386cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223870: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x223870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223874: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223878: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x223878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x22387c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22387cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x223880: 0x30660080  andi        $a2, $v1, 0x80
    ctx->pc = 0x223880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x223884: 0x24840254  addiu       $a0, $a0, 0x254
    ctx->pc = 0x223884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 596));
    // 0x223888: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x223888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x22388c: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x22388Cu;
    SET_GPR_U32(ctx, 31, 0x223894u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x22388Cu, 0x223894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223894u;
label_223894:
    // 0x223894: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x223894u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223898: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x223898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x22389c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x22389cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2238a0: 0x8fb50110  lw          $s5, 0x110($sp)
    ctx->pc = 0x2238a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2238a4: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x2238a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2238a8: 0x24650150  addiu       $a1, $v1, 0x150
    ctx->pc = 0x2238a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x2238ac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2238acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2238b0: 0xc0747f8  jal         func_1D1FE0
    ctx->pc = 0x2238B0u;
    SET_GPR_U32(ctx, 31, 0x2238B8u);
    ctx->pc = 0x1D1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1FE0u, 0x2238B0u, 0x2238B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2238B8u;
label_2238b8:
    // 0x2238b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2238b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2238bc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2238bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2238c0: 0x2464025c  addiu       $a0, $v1, 0x25C
    ctx->pc = 0x2238c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 604));
    // 0x2238c4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2238c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2238c8: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x2238C8u;
    SET_GPR_U32(ctx, 31, 0x2238D0u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x2238C8u, 0x2238D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2238D0u;
label_2238d0:
    // 0x2238d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2238d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2238d4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2238d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2238d8: 0x8c5e025c  lw          $fp, 0x25C($v0)
    ctx->pc = 0x2238d8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
    // 0x2238dc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2238dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2238e0: 0x8c620260  lw          $v0, 0x260($v1)
    ctx->pc = 0x2238e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 608)));
    // 0x2238e4: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x2238e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x2238e8: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x2238e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x2238ec: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x2238ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x2238f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2238f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2238f4: 0x3c025080  lui         $v0, 0x5080
    ctx->pc = 0x2238f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20608 << 16));
    // 0x2238f8: 0x34474040  ori         $a3, $v0, 0x4040
    ctx->pc = 0x2238f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x2238fc: 0x3c170080  lui         $s7, 0x80
    ctx->pc = 0x2238fcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)128 << 16));
    // 0x223900: 0x36e84040  ori         $t0, $s7, 0x4040
    ctx->pc = 0x223900u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16448);
    // 0x223904: 0x3c023020  lui         $v0, 0x3020
    ctx->pc = 0x223904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12320 << 16));
    // 0x223908: 0x34495020  ori         $t1, $v0, 0x5020
    ctx->pc = 0x223908u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20512);
    // 0x22390c: 0x3c160020  lui         $s6, 0x20
    ctx->pc = 0x22390cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32 << 16));
    // 0x223910: 0x36ca4020  ori         $t2, $s6, 0x4020
    ctx->pc = 0x223910u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)16416);
    // 0x223914: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x223914u;
    SET_GPR_U32(ctx, 31, 0x22391Cu);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x223914u, 0x22391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22391Cu;
label_22391c:
    // 0x22391c: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x22391cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x223920: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x223920u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x223924: 0x8fa70114  lw          $a3, 0x114($sp)
    ctx->pc = 0x223924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x223928: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x223928u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x22392c: 0x71009628  paddub      $s2, $t0, $zero
    ctx->pc = 0x22392cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x223930: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x223930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x223934: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x223934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x223938: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x223938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22393c: 0x3c042402  lui         $a0, 0x2402
    ctx->pc = 0x22393cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9218 << 16));
    // 0x223940: 0x34820700  ori         $v0, $a0, 0x700
    ctx->pc = 0x223940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1792);
    // 0x223944: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x223944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x223948: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x223948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x22394c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x22394cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x223950: 0x3c174080  lui         $s7, 0x4080
    ctx->pc = 0x223950u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16512 << 16));
    // 0x223954: 0x36e20002  ori         $v0, $s7, 0x2
    ctx->pc = 0x223954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    // 0x223958: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x223958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22395c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x22395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x223960: 0x438025  or          $s0, $v0, $v1
    ctx->pc = 0x223960u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x223964: 0x26560050  addiu       $s6, $s2, 0x50
    ctx->pc = 0x223964u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x223968: 0xfed00000  sd          $s0, 0x0($s6)
    ctx->pc = 0x223968u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 16));
    // 0x22396c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x22396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223970: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x223970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x223974: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x223974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x223978: 0x438025  or          $s0, $v0, $v1
    ctx->pc = 0x223978u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22397c: 0xfe300020  sd          $s0, 0x20($s1)
    ctx->pc = 0x22397cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 16));
    // 0x223980: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x223980u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223984: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x223984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x223988: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x223988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22398c: 0x438025  or          $s0, $v0, $v1
    ctx->pc = 0x22398cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x223990: 0xfe500020  sd          $s0, 0x20($s2)
    ctx->pc = 0x223990u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 16));
    // 0x223994: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x223994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x223998: 0x34761001  ori         $s6, $v1, 0x1001
    ctx->pc = 0x223998u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4097);
    // 0x22399c: 0xfe360030  sd          $s6, 0x30($s1)
    ctx->pc = 0x22399cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 22));
    // 0x2239a0: 0x3c100005  lui         $s0, 0x5
    ctx->pc = 0x2239a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)5 << 16));
    // 0x2239a4: 0x36021001  ori         $v0, $s0, 0x1001
    ctx->pc = 0x2239a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4097);
    // 0x2239a8: 0xfe420030  sd          $v0, 0x30($s2)
    ctx->pc = 0x2239a8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 2));
    // 0x2239ac: 0x3c03612e  lui         $v1, 0x612E
    ctx->pc = 0x2239acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24878 << 16));
    // 0x2239b0: 0x34764000  ori         $s6, $v1, 0x4000
    ctx->pc = 0x2239b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2239b4: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x2239b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x2239b8: 0x34108021  ori         $s0, $zero, 0x8021
    ctx->pc = 0x2239b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
    // 0x2239bc: 0x202b025  or          $s6, $s0, $v0
    ctx->pc = 0x2239bcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2239c0: 0xfe360070  sd          $s6, 0x70($s1)
    ctx->pc = 0x2239c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 22));
    // 0x2239c4: 0x3c10612e  lui         $s0, 0x612E
    ctx->pc = 0x2239c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)24878 << 16));
    // 0x2239c8: 0x36024000  ori         $v0, $s0, 0x4000
    ctx->pc = 0x2239c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
    // 0x2239cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2239ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2239d0: 0x34028021  ori         $v0, $zero, 0x8021
    ctx->pc = 0x2239d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
    // 0x2239d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2239d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2239d8: 0xfe420070  sd          $v0, 0x70($s2)
    ctx->pc = 0x2239d8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
    // 0x2239dc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2239dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2239e0: 0x2444026c  addiu       $a0, $v0, 0x26C
    ctx->pc = 0x2239e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 620));
    // 0x2239e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2239e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2239e8: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x2239E8u;
    SET_GPR_U32(ctx, 31, 0x2239F0u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x2239E8u, 0x2239F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2239F0u;
label_2239f0:
    // 0x2239f0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2239f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2239f4: 0x8c5e026c  lw          $fp, 0x26C($v0)
    ctx->pc = 0x2239f4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x2239f8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2239f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2239fc: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x2239fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x223a00: 0xafa40114  sw          $a0, 0x114($sp)
    ctx->pc = 0x223a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 4));
    // 0x223a04: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x223a04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x223a08: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x223a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x223a0c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x223a0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x223a10: 0x3c087060  lui         $t0, 0x7060
    ctx->pc = 0x223a10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28768 << 16));
    // 0x223a14: 0x35076060  ori         $a3, $t0, 0x6060
    ctx->pc = 0x223a14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)24672);
    // 0x223a18: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x223a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x223a1c: 0x34626060  ori         $v0, $v1, 0x6060
    ctx->pc = 0x223a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24672);
    // 0x223a20: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x223a20u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223a24: 0x3c027040  lui         $v0, 0x7040
    ctx->pc = 0x223a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28736 << 16));
    // 0x223a28: 0x34494040  ori         $t1, $v0, 0x4040
    ctx->pc = 0x223a28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x223a2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x223a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x223a30: 0x344a4040  ori         $t2, $v0, 0x4040
    ctx->pc = 0x223a30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x223a34: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x223A34u;
    SET_GPR_U32(ctx, 31, 0x223A3Cu);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x223A34u, 0x223A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A3Cu;
label_223a3c:
    // 0x223a3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x223a3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223a40: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x223a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x223a44: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x223a44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x223a48: 0x8fa70114  lw          $a3, 0x114($sp)
    ctx->pc = 0x223a48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x223a4c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x223a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x223a50: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x223a50u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223a54: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x223a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x223a58: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x223a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x223a5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x223a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x223a60: 0x3c042402  lui         $a0, 0x2402
    ctx->pc = 0x223a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9218 << 16));
    // 0x223a64: 0x34850700  ori         $a1, $a0, 0x700
    ctx->pc = 0x223a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1792);
    // 0x223a68: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x223a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x223a6c: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x223a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x223a70: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x223a70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x223a74: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x223a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x223a78: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x223a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x223a7c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x223a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x223a80: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x223a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x223a84: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x223a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x223a88: 0x26460050  addiu       $a2, $s2, 0x50
    ctx->pc = 0x223a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x223a8c: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x223a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x223a90: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x223a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223a94: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x223a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x223a98: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x223a98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x223a9c: 0x1225825  or          $t3, $t1, $v0
    ctx->pc = 0x223a9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x223aa0: 0xfe2b0020  sd          $t3, 0x20($s1)
    ctx->pc = 0x223aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 11));
    // 0x223aa4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x223aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223aa8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x223aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x223aac: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x223aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x223ab0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x223ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x223ab4: 0xfe420020  sd          $v0, 0x20($s2)
    ctx->pc = 0x223ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 2));
    // 0x223ab8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x223ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x223abc: 0x34501001  ori         $s0, $v0, 0x1001
    ctx->pc = 0x223abcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x223ac0: 0xfe300030  sd          $s0, 0x30($s1)
    ctx->pc = 0x223ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 16));
    // 0x223ac4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x223ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x223ac8: 0x34431001  ori         $v1, $v0, 0x1001
    ctx->pc = 0x223ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x223acc: 0xfe430030  sd          $v1, 0x30($s2)
    ctx->pc = 0x223accu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 3));
    // 0x223ad0: 0x3c02612e  lui         $v0, 0x612E
    ctx->pc = 0x223ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24878 << 16));
    // 0x223ad4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x223ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x223ad8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x223ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x223adc: 0x34048009  ori         $a0, $zero, 0x8009
    ctx->pc = 0x223adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x223ae0: 0x862825  or          $a1, $a0, $a2
    ctx->pc = 0x223ae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x223ae4: 0xfe250070  sd          $a1, 0x70($s1)
    ctx->pc = 0x223ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 5));
    // 0x223ae8: 0x3c03612e  lui         $v1, 0x612E
    ctx->pc = 0x223ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24878 << 16));
    // 0x223aec: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x223aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x223af0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x223af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x223af4: 0x34058009  ori         $a1, $zero, 0x8009
    ctx->pc = 0x223af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x223af8: 0xa33025  or          $a2, $a1, $v1
    ctx->pc = 0x223af8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x223afc: 0xfe460070  sd          $a2, 0x70($s2)
    ctx->pc = 0x223afcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 6));
    // 0x223b00: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223b04: 0x24640274  addiu       $a0, $v1, 0x274
    ctx->pc = 0x223b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 628));
    // 0x223b08: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x223b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x223b0c: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x223B0Cu;
    SET_GPR_U32(ctx, 31, 0x223B14u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x223B0Cu, 0x223B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B14u;
label_223b14:
    // 0x223b14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x223b14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223b18: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x223b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223b1c: 0x8c9e0274  lw          $fp, 0x274($a0)
    ctx->pc = 0x223b1cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x223b20: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223b24: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x223b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x223b28: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x223b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
    // 0x223b2c: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x223b2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x223b30: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x223b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x223b34: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x223b34u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x223b38: 0x3c147060  lui         $s4, 0x7060
    ctx->pc = 0x223b38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)28768 << 16));
    // 0x223b3c: 0x36876060  ori         $a3, $s4, 0x6060
    ctx->pc = 0x223b3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)24672);
    // 0x223b40: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x223b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x223b44: 0x34686060  ori         $t0, $v1, 0x6060
    ctx->pc = 0x223b44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24672);
    // 0x223b48: 0x3c037060  lui         $v1, 0x7060
    ctx->pc = 0x223b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28768 << 16));
    // 0x223b4c: 0x34696060  ori         $t1, $v1, 0x6060
    ctx->pc = 0x223b4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24672);
    // 0x223b50: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x223b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x223b54: 0x346a6060  ori         $t2, $v1, 0x6060
    ctx->pc = 0x223b54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24672);
    // 0x223b58: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x223B58u;
    SET_GPR_U32(ctx, 31, 0x223B60u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x223B58u, 0x223B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B60u;
label_223b60:
    // 0x223b60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x223b60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223b64: 0x8fd10008  lw          $s1, 0x8($fp)
    ctx->pc = 0x223b64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x223b68: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x223b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x223b6c: 0x8c720008  lw          $s2, 0x8($v1)
    ctx->pc = 0x223b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x223b70: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x223b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x223b74: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x223b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x223b78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x223b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x223b7c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x223b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x223b80: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x223b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x223b84: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x223b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x223b88: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x223b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x223b8c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x223b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x223b90: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x223b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x223b94: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x223b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x223b98: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x223b98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x223b9c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x223b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x223ba0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x223ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x223ba4: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x223ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x223ba8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x223ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x223bac: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x223bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x223bb0: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x223bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x223bb4: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x223bb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x223bb8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x223bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x223bbc: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x223bbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223bc0: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x223bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x223bc4: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x223bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x223bc8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x223bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x223bcc: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x223bccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
    // 0x223bd0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x223bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223bd4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x223bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x223bd8: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x223bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x223bdc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x223bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x223be0: 0xfe440020  sd          $a0, 0x20($s2)
    ctx->pc = 0x223be0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 4));
    // 0x223be4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x223be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x223be8: 0x34621001  ori         $v0, $v1, 0x1001
    ctx->pc = 0x223be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4097);
    // 0x223bec: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x223becu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x223bf0: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x223bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x223bf4: 0x34c21001  ori         $v0, $a2, 0x1001
    ctx->pc = 0x223bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4097);
    // 0x223bf8: 0xfe420030  sd          $v0, 0x30($s2)
    ctx->pc = 0x223bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 2));
    // 0x223bfc: 0x3c05612e  lui         $a1, 0x612E
    ctx->pc = 0x223bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24878 << 16));
    // 0x223c00: 0x34a24000  ori         $v0, $a1, 0x4000
    ctx->pc = 0x223c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x223c04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x223c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x223c08: 0x34038009  ori         $v1, $zero, 0x8009
    ctx->pc = 0x223c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x223c0c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x223c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x223c10: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x223c10u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x223c14: 0x3c06612e  lui         $a2, 0x612E
    ctx->pc = 0x223c14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24878 << 16));
    // 0x223c18: 0x34c54000  ori         $a1, $a2, 0x4000
    ctx->pc = 0x223c18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x223c1c: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x223c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x223c20: 0x34058009  ori         $a1, $zero, 0x8009
    ctx->pc = 0x223c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x223c24: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x223c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x223c28: 0xfe420070  sd          $v0, 0x70($s2)
    ctx->pc = 0x223c28u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
    // 0x223c2c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x223c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223c30: 0x2444027c  addiu       $a0, $v0, 0x27C
    ctx->pc = 0x223c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 636));
    // 0x223c34: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x223c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x223c38: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x223C38u;
    SET_GPR_U32(ctx, 31, 0x223C40u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x223C38u, 0x223C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C40u;
label_223c40:
    // 0x223c40: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x223c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223c44: 0x8c5e027c  lw          $fp, 0x27C($v0)
    ctx->pc = 0x223c44u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
    // 0x223c48: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223c4c: 0x8c620280  lw          $v0, 0x280($v1)
    ctx->pc = 0x223c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x223c50: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x223c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x223c54: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x223c54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x223c58: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x223c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x223c5c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x223c5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x223c60: 0x3c027040  lui         $v0, 0x7040
    ctx->pc = 0x223c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28736 << 16));
    // 0x223c64: 0x34474040  ori         $a3, $v0, 0x4040
    ctx->pc = 0x223c64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x223c68: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x223c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x223c6c: 0x34484040  ori         $t0, $v0, 0x4040
    ctx->pc = 0x223c6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x223c70: 0x3c097060  lui         $t1, 0x7060
    ctx->pc = 0x223c70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28768 << 16));
    // 0x223c74: 0x35296060  ori         $t1, $t1, 0x6060
    ctx->pc = 0x223c74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)24672);
    // 0x223c78: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x223c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x223c7c: 0x344a6060  ori         $t2, $v0, 0x6060
    ctx->pc = 0x223c7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    // 0x223c80: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x223C80u;
    SET_GPR_U32(ctx, 31, 0x223C88u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x223C80u, 0x223C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C88u;
label_223c88:
    // 0x223c88: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x223c88u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223c8c: 0x8fd10008  lw          $s1, 0x8($fp)
    ctx->pc = 0x223c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x223c90: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x223c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x223c94: 0x8c720008  lw          $s2, 0x8($v1)
    ctx->pc = 0x223c94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x223c98: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x223c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x223c9c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x223c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x223ca0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x223ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x223ca4: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x223ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x223ca8: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x223ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x223cac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x223cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x223cb0: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x223cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x223cb4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x223cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x223cb8: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x223cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x223cbc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x223cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x223cc0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x223cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x223cc4: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x223cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x223cc8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x223cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x223ccc: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x223cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x223cd0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x223cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x223cd4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x223cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223cd8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x223cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x223cdc: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x223cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x223ce0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x223ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x223ce4: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x223ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x223ce8: 0x24140080  addiu       $s4, $zero, 0x80
    ctx->pc = 0x223ce8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223cec: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x223cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x223cf0: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x223cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x223cf4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x223cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x223cf8: 0xfe430020  sd          $v1, 0x20($s2)
    ctx->pc = 0x223cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 3));
    // 0x223cfc: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x223cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x223d00: 0x34a31001  ori         $v1, $a1, 0x1001
    ctx->pc = 0x223d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4097);
    // 0x223d04: 0xfe230030  sd          $v1, 0x30($s1)
    ctx->pc = 0x223d04u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 3));
    // 0x223d08: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x223d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x223d0c: 0x34831001  ori         $v1, $a0, 0x1001
    ctx->pc = 0x223d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4097);
    // 0x223d10: 0xfe430030  sd          $v1, 0x30($s2)
    ctx->pc = 0x223d10u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 3));
    // 0x223d14: 0x3c03612e  lui         $v1, 0x612E
    ctx->pc = 0x223d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24878 << 16));
    // 0x223d18: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x223d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x223d1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x223d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x223d20: 0x34068009  ori         $a2, $zero, 0x8009
    ctx->pc = 0x223d20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x223d24: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x223d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x223d28: 0xfe240070  sd          $a0, 0x70($s1)
    ctx->pc = 0x223d28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 4));
    // 0x223d2c: 0x3c03612e  lui         $v1, 0x612E
    ctx->pc = 0x223d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24878 << 16));
    // 0x223d30: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x223d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x223d34: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x223d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x223d38: 0x34158009  ori         $s5, $zero, 0x8009
    ctx->pc = 0x223d38u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x223d3c: 0x2a32825  or          $a1, $s5, $v1
    ctx->pc = 0x223d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x223d40: 0xfe450070  sd          $a1, 0x70($s2)
    ctx->pc = 0x223d40u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 5));
    // 0x223d44: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x223d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223d48: 0x90831308  lbu         $v1, 0x1308($a0)
    ctx->pc = 0x223d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4872)));
    // 0x223d4c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x223d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x223d50: 0x30850080  andi        $a1, $a0, 0x80
    ctx->pc = 0x223d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x223d54: 0x14a000e7  bnez        $a1, . + 4 + (0xE7 << 2)
    ctx->pc = 0x223D54u;
    {
        const bool branch_taken_0x223d54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x223d54) {
            ctx->pc = 0x2240F4u;
            return;
        }
    }
    ctx->pc = 0x223D5Cu;
    // 0x223d5c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x223d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x223d60: 0x24820ae8  addiu       $v0, $a0, 0xAE8
    ctx->pc = 0x223d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
    // 0x223d64: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x223d64u;
    SET_GPR_S32(ctx, 30, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x223d68: 0x27c3000f  addiu       $v1, $fp, 0xF
    ctx->pc = 0x223d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 15));
    // 0x223d6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x223d6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x223d70: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x223d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x223d74: 0x24450ae8  addiu       $a1, $v0, 0xAE8
    ctx->pc = 0x223d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x223d78: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x223d78u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x223d7c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x223d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x223d80: 0xe24024  and         $t0, $a3, $v0
    ctx->pc = 0x223d80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x223d84: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x223d84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x223d88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x223d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x223d8c: 0x8c370ae8  lw          $s7, 0xAE8($at)
    ctx->pc = 0x223d8cu;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x223d90: 0x8fa90128  lw          $t1, 0x128($sp)
    ctx->pc = 0x223d90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223d94: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x223d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x223d98: 0x244a0120  addiu       $t2, $v0, 0x120
    ctx->pc = 0x223d98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x223d9c: 0x71408628  paddub      $s0, $t2, $zero
    ctx->pc = 0x223d9cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x223da0: 0x8e160034  lw          $s6, 0x34($s0)
    ctx->pc = 0x223da0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x223da4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x223da4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x223da8: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x223da8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x223dac: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x223DACu;
    SET_GPR_U32(ctx, 31, 0x223DB4u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x223DACu, 0x223DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223DB4u;
label_223db4:
    // 0x223db4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x223db4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223db8: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x223db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x223dbc: 0x24a70ae8  addiu       $a3, $a1, 0xAE8
    ctx->pc = 0x223dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x223dc0: 0xacf70000  sw          $s7, 0x0($a3)
    ctx->pc = 0x223dc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x223dc4: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x223dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x223dc8: 0x25020ae8  addiu       $v0, $t0, 0xAE8
    ctx->pc = 0x223dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 2792));
    // 0x223dcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x223dccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x223dd0: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x223dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x223dd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x223dd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x223dd8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x223dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x223ddc: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x223ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x223de0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x223de0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x223de4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x223de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x223de8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x223de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x223dec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x223decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x223df0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x223df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x223df4: 0x8c370ae8  lw          $s7, 0xAE8($at)
    ctx->pc = 0x223df4u;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x223df8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223dfc: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x223dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x223e00: 0x24500480  addiu       $s0, $v0, 0x480
    ctx->pc = 0x223e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x223e04: 0x8e160034  lw          $s6, 0x34($s0)
    ctx->pc = 0x223e04u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x223e08: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x223e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x223e0c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x223e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x223e10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x223e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x223e14: 0xaec20024  sw          $v0, 0x24($s6)
    ctx->pc = 0x223e14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 2));
    // 0x223e18: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x223e18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x223e1c: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x223e1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x223e20: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x223E20u;
    SET_GPR_U32(ctx, 31, 0x223E28u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x223E20u, 0x223E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E28u;
label_223e28:
    // 0x223e28: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x223e28u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223e2c: 0x7200be28  paddub      $s7, $s0, $zero
    ctx->pc = 0x223e2cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x223e30: 0x3c16005d  lui         $s6, 0x5D
    ctx->pc = 0x223e30u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)93 << 16));
    // 0x223e34: 0x26c30ae8  addiu       $v1, $s6, 0xAE8
    ctx->pc = 0x223e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 2792));
    // 0x223e38: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x223e38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x223e3c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x223e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x223e40: 0x24500ae8  addiu       $s0, $v0, 0xAE8
    ctx->pc = 0x223e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x223e44: 0x8e160000  lw          $s6, 0x0($s0)
    ctx->pc = 0x223e44u;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x223e48: 0x26c3000f  addiu       $v1, $s6, 0xF
    ctx->pc = 0x223e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 15));
    // 0x223e4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x223e4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x223e50: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x223e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x223e54: 0x24500ae8  addiu       $s0, $v0, 0xAE8
    ctx->pc = 0x223e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x223e58: 0x8e160000  lw          $s6, 0x0($s0)
    ctx->pc = 0x223e58u;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x223e5c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x223e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x223e60: 0x2c31024  and         $v0, $s6, $v1
    ctx->pc = 0x223e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x223e64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x223e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x223e68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x223e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x223e6c: 0x8c300ae8  lw          $s0, 0xAE8($at)
    ctx->pc = 0x223e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x223e70: 0x7200be28  paddub      $s7, $s0, $zero
    ctx->pc = 0x223e70u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x223e74: 0x8fb60128  lw          $s6, 0x128($sp)
    ctx->pc = 0x223e74u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223e78: 0x8ec20058  lw          $v0, 0x58($s6)
    ctx->pc = 0x223e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x223e7c: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x223e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x223e80: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x223e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x223e84: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x223e84u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x223e88: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x223e88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x223e8c: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x223e8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x223e90: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x223E90u;
    SET_GPR_U32(ctx, 31, 0x223E98u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x223E90u, 0x223E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E98u;
label_223e98:
    // 0x223e98: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x223e98u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223e9c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x223e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x223ea0: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x223ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x223ea4: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x223ea4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x223ea8: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x223ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x223eac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x223eacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223eb0: 0x0  nop
    ctx->pc = 0x223eb0u;
    // NOP
    // 0x223eb4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x223eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x223eb8: 0x3c0543a0  lui         $a1, 0x43A0
    ctx->pc = 0x223eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17312 << 16));
    // 0x223ebc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x223ebcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223ec0: 0x0  nop
    ctx->pc = 0x223ec0u;
    // NOP
    // 0x223ec4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x223ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x223ec8: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x223ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x223ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223ed0: 0x0  nop
    ctx->pc = 0x223ed0u;
    // NOP
    // 0x223ed4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x223ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x223ed8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x223ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x223edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223ee0: 0x0  nop
    ctx->pc = 0x223ee0u;
    // NOP
    // 0x223ee4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x223ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x223ee8: 0x3c1e4448  lui         $fp, 0x4448
    ctx->pc = 0x223ee8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)17480 << 16));
    // 0x223eec: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x223eecu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223ef0: 0x0  nop
    ctx->pc = 0x223ef0u;
    // NOP
    // 0x223ef4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x223ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x223ef8: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x223ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x223efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223f00: 0x0  nop
    ctx->pc = 0x223f00u;
    // NOP
    // 0x223f04: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x223f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x223f08: 0x3c04c448  lui         $a0, 0xC448
    ctx->pc = 0x223f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50248 << 16));
    // 0x223f0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x223f0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223f10: 0x0  nop
    ctx->pc = 0x223f10u;
    // NOP
    // 0x223f14: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x223f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x223f18: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x223f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x223f1c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x223f1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223f20: 0x0  nop
    ctx->pc = 0x223f20u;
    // NOP
    // 0x223f24: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x223f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x223f28: 0x3c07c448  lui         $a3, 0xC448
    ctx->pc = 0x223f28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50248 << 16));
    // 0x223f2c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x223f2cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223f30: 0x0  nop
    ctx->pc = 0x223f30u;
    // NOP
    // 0x223f34: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x223f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x223f38: 0x3c0843a0  lui         $t0, 0x43A0
    ctx->pc = 0x223f38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17312 << 16));
    // 0x223f3c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x223f3cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223f40: 0x0  nop
    ctx->pc = 0x223f40u;
    // NOP
    // 0x223f44: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x223f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x223f48: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x223f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x223f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223f50: 0x0  nop
    ctx->pc = 0x223f50u;
    // NOP
    // 0x223f54: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x223f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x223f58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x223f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x223f5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223f60: 0x0  nop
    ctx->pc = 0x223f60u;
    // NOP
    // 0x223f64: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x223f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x223f68: 0x3c09c448  lui         $t1, 0xC448
    ctx->pc = 0x223f68u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)50248 << 16));
    // 0x223f6c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x223f6cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223f70: 0x0  nop
    ctx->pc = 0x223f70u;
    // NOP
    // 0x223f74: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x223f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x223f78: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x223f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x223f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223f80: 0x0  nop
    ctx->pc = 0x223f80u;
    // NOP
    // 0x223f84: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x223f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x223f88: 0x3c0ac448  lui         $t2, 0xC448
    ctx->pc = 0x223f88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)50248 << 16));
    // 0x223f8c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x223f8cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223f90: 0x0  nop
    ctx->pc = 0x223f90u;
    // NOP
    // 0x223f94: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x223f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x223f98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x223f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x223f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223fa0: 0x0  nop
    ctx->pc = 0x223fa0u;
    // NOP
    // 0x223fa4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x223fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x223fa8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x223fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223fac: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x223facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x223fb0: 0xafa50118  sw          $a1, 0x118($sp)
    ctx->pc = 0x223fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 5));
    // 0x223fb4: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x223fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223fb8: 0x94e210a4  lhu         $v0, 0x10A4($a3)
    ctx->pc = 0x223fb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4260)));
    // 0x223fbc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x223fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x223fc0: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x223fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x223fc4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x223fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x223fc8: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x223fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x223fcc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x223fccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x223fd0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x223fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x223fd4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x223fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x223fd8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x223fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x223fdc: 0x2463cfd0  addiu       $v1, $v1, -0x3030
    ctx->pc = 0x223fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954960));
    // 0x223fe0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x223fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223fe4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x223fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x223fe8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x223fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x223fec: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x223fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x223ff0: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x223ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x223ff4: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x223ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x223ff8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x223ff8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223ffc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x223ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224000: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x224000u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x224004: 0x246b0980  addiu       $t3, $v1, 0x980
    ctx->pc = 0x224004u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 2432));
    // 0x224008: 0xc05acdc  jal         func_16B370
    ctx->pc = 0x224008u;
    SET_GPR_U32(ctx, 31, 0x224010u);
    ctx->pc = 0x16B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B370u, 0x224008u, 0x224010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224010u;
label_224010:
    // 0x224010: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x224010u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x224014: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x224014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x224018: 0x944310a4  lhu         $v1, 0x10A4($v0)
    ctx->pc = 0x224018u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4260)));
    // 0x22401c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x22401cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x224020: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x224020u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x224024: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x224024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x224028: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x224028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22402c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22402cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x224030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224034: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x224034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x224038: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x224038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x22403c: 0x24c4cfd0  addiu       $a0, $a2, -0x3030
    ctx->pc = 0x22403cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954960));
    // 0x224040: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x224040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x224044: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x224044u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x224048: 0xc05ae10  jal         func_16B840
    ctx->pc = 0x224048u;
    SET_GPR_U32(ctx, 31, 0x224050u);
    ctx->pc = 0x16B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B840u, 0x224048u, 0x224050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224050u;
label_224050:
    // 0x224050: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x224050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x224054: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x224054u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x224058: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x224058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22405c: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x22405cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x224060: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x224060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x224064: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x224064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x224068: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x224068u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22406c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x22406cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x224070: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x224070u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x224074: 0x3c1e0062  lui         $fp, 0x62
    ctx->pc = 0x224074u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
    // 0x224078: 0x27c3cfd0  addiu       $v1, $fp, -0x3030
    ctx->pc = 0x224078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294954960));
    // 0x22407c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22407cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x224080: 0xa4600014  sh          $zero, 0x14($v1)
    ctx->pc = 0x224080u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x224084: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x224084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x224088: 0x8ca702d0  lw          $a3, 0x2D0($a1)
    ctx->pc = 0x224088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x22408c: 0x24f44010  addiu       $s4, $a3, 0x4010
    ctx->pc = 0x22408cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 16400));
    // 0x224090: 0x96880140  lhu         $t0, 0x140($s4)
    ctx->pc = 0x224090u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x224094: 0x35030008  ori         $v1, $t0, 0x8
    ctx->pc = 0x224094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8);
    // 0x224098: 0xa6830140  sh          $v1, 0x140($s4)
    ctx->pc = 0x224098u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x22409c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22409cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2240a0: 0x0  nop
    ctx->pc = 0x2240a0u;
    // NOP
    // 0x2240a4: 0xe6800128  swc1        $f0, 0x128($s4)
    ctx->pc = 0x2240a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 296), bits); }
    // 0x2240a8: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x2240a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x2240ac: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2240acu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2240b0: 0x0  nop
    ctx->pc = 0x2240b0u;
    // NOP
    // 0x2240b4: 0xe680012c  swc1        $f0, 0x12C($s4)
    ctx->pc = 0x2240b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 300), bits); }
    // 0x2240b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2240b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2240bc: 0x0  nop
    ctx->pc = 0x2240bcu;
    // NOP
    // 0x2240c0: 0xe6800130  swc1        $f0, 0x130($s4)
    ctx->pc = 0x2240c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 304), bits); }
    // 0x2240c4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2240c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2240c8: 0x8c6a0008  lw          $t2, 0x8($v1)
    ctx->pc = 0x2240c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2240cc: 0x31431000  andi        $v1, $t2, 0x1000
    ctx->pc = 0x2240ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4096);
    // 0x2240d0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2240D0u;
    {
        const bool branch_taken_0x2240d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2240d0) {
            ctx->pc = 0x2240F4u;
            return;
        }
    }
    ctx->pc = 0x2240D8u;
    // 0x2240d8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2240d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2240dc: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x2240dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2240e0: 0x36230200  ori         $v1, $s1, 0x200
    ctx->pc = 0x2240e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)512);
    // 0x2240e4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2240e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2240e8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2240e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2240ec: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2240ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2240f0: 0xa47210a6  sh          $s2, 0x10A6($v1)
    ctx->pc = 0x2240f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 18));
    ctx->pc = 0x2240f4u;
}
