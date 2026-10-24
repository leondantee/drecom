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

// Function: ectrl0f_move10
// Address: 0x2fa270 - 0x2faebc
void ectrl0f_move10_0x2fa270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl0f_move10_0x2fa270");
#endif

    switch (ctx->pc) {
        case 0x2fa3b0u: goto label_2fa3b0;
        case 0x2fa3bcu: goto label_2fa3bc;
        case 0x2fa4b4u: goto label_2fa4b4;
        case 0x2fa4c0u: goto label_2fa4c0;
        case 0x2fa5bcu: goto label_2fa5bc;
        case 0x2fa5c8u: goto label_2fa5c8;
        case 0x2fa6ccu: goto label_2fa6cc;
        case 0x2fa6d8u: goto label_2fa6d8;
        case 0x2fa7d0u: goto label_2fa7d0;
        case 0x2fa7dcu: goto label_2fa7dc;
        case 0x2fa8e0u: goto label_2fa8e0;
        case 0x2fa8ecu: goto label_2fa8ec;
        case 0x2fa984u: goto label_2fa984;
        case 0x2fa990u: goto label_2fa990;
        case 0x2fa9fcu: goto label_2fa9fc;
        case 0x2faa08u: goto label_2faa08;
        case 0x2faaa0u: goto label_2faaa0;
        case 0x2faaacu: goto label_2faaac;
        case 0x2fab18u: goto label_2fab18;
        case 0x2fab24u: goto label_2fab24;
        case 0x2fabc0u: goto label_2fabc0;
        case 0x2fabccu: goto label_2fabcc;
        case 0x2fac34u: goto label_2fac34;
        case 0x2fac40u: goto label_2fac40;
        case 0x2facf0u: goto label_2facf0;
        case 0x2facfcu: goto label_2facfc;
        case 0x2fad68u: goto label_2fad68;
        case 0x2fad74u: goto label_2fad74;
        case 0x2fadbcu: goto label_2fadbc;
        case 0x2faddcu: goto label_2faddc;
        case 0x2fae0cu: goto label_2fae0c;
        case 0x2fae38u: goto label_2fae38;
        case 0x2fae60u: goto label_2fae60;
        case 0x2fae84u: goto label_2fae84;
        default: break;
    }

    ctx->pc = 0x2fa270u;

    // 0x2fa270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fa270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fa274: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2fa274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2fa278: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2fa278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2fa27c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fa27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fa280: 0x24649010  addiu       $a0, $v1, -0x6FF0
    ctx->pc = 0x2fa280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938640));
    // 0x2fa284: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2fa284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa288: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x2fa288u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x399010u));
    // 0x2fa28c: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x2fa28cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x2fa290: 0x8fa90028  lw          $t1, 0x28($sp)
    ctx->pc = 0x2fa290u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa294: 0x8d2500d4  lw          $a1, 0xD4($t1)
    ctx->pc = 0x2fa294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
    // 0x2fa298: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fa298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa29c: 0x14a60194  bne         $a1, $a2, . + 4 + (0x194 << 2)
    ctx->pc = 0x2FA29Cu;
    {
        const bool branch_taken_0x2fa29c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x2fa29c) {
            ctx->pc = 0x2FA8F0u;
            goto label_2fa8f0;
        }
    }
    ctx->pc = 0x2FA2A4u;
    // 0x2fa2a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2fa2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa2a8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2fa2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2fa2ac: 0x144000c8  bnez        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x2FA2ACu;
    {
        const bool branch_taken_0x2fa2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa2ac) {
            ctx->pc = 0x2FA5D0u;
            goto label_2fa5d0;
        }
    }
    ctx->pc = 0x2FA2B4u;
    // 0x2fa2b4: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2fa2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa2b8: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2fa2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2fa2bc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2fa2bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fa2c0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fa2c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fa2c4: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2fa2c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2fa2c8: 0x34c41d00  ori         $a0, $a2, 0x1D00
    ctx->pc = 0x2fa2c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)7424);
    // 0x2fa2cc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2fa2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa2d0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2fa2d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa2d4: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fa2d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fa2d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa2dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa2e0: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x2fa2e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa2e4: 0xe81024  and         $v0, $a3, $t0
    ctx->pc = 0x2fa2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x2fa2e8: 0x2583c  dsll32      $t3, $v0, 0
    ctx->pc = 0x2fa2e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa2ec: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2fa2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa2f0: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x2fa2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2fa2f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa2f8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2fa2f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa2fc: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x2fa2fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x2fa300: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x2fa300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2fa304: 0x625024  and         $t2, $v1, $v0
    ctx->pc = 0x2fa304u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa308: 0x16a1825  or          $v1, $t3, $t2
    ctx->pc = 0x2fa308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x2fa30c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2fa30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2fa310: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x2fa310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2fa314: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x2fa314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fa318: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fa318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fa31c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa320: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa324: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x2fa324u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa328: 0xc75824  and         $t3, $a2, $a3
    ctx->pc = 0x2fa328u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x2fa32c: 0xb283c  dsll32      $a1, $t3, 0
    ctx->pc = 0x2fa32cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) << (32 + 0));
    // 0x2fa330: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2fa330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2fa334: 0x24c2dbc0  addiu       $v0, $a2, -0x2440
    ctx->pc = 0x2fa334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x2fa338: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2fa338u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa33c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fa33cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fa340: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fa340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa344: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2fa344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2fa348: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2fa348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2fa34c: 0xe65024  and         $t2, $a3, $a2
    ctx->pc = 0x2fa34cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2fa350: 0xaa3025  or          $a2, $a1, $t2
    ctx->pc = 0x2fa350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x2fa354: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa358: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x2fa358u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa35c: 0x24a70640  addiu       $a3, $a1, 0x640
    ctx->pc = 0x2fa35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
    // 0x2fa360: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x2fa360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2fa364: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fa364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fa368: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa36c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa370: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa374: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x2fa374u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2fa378: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2fa378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2fa37c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa380: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x2fa380u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa384: 0x24a50640  addiu       $a1, $a1, 0x640
    ctx->pc = 0x2fa384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
    // 0x2fa388: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x2fa388u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fa38c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fa38cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fa390: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2fa390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa394: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2fa394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2fa398: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2fa398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fa39c: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x2fa39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x2fa3a0: 0x453825  or          $a3, $v0, $a1
    ctx->pc = 0x2fa3a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2fa3a4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2fa3a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fa3a8: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FA3A8u;
    SET_GPR_U32(ctx, 31, 0x2FA3B0u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FA3A8u, 0x2FA3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA3B0u;
label_2fa3b0:
    // 0x2fa3b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fa3b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa3b4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FA3B4u;
    SET_GPR_U32(ctx, 31, 0x2FA3BCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FA3B4u, 0x2FA3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA3BCu;
label_2fa3bc:
    // 0x2fa3bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2fa3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa3c0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2fa3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fa3c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa3c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa3cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fa3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fa3d0: 0x34441d00  ori         $a0, $v0, 0x1D00
    ctx->pc = 0x2fa3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7424);
    // 0x2fa3d4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2fa3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa3d8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2fa3d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa3dc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fa3dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fa3e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fa3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa3e4: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2fa3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2fa3e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa3ec: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2fa3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2fa3f0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2fa3f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa3f4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fa3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa3f8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2fa3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fa3fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa400: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fa400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa404: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fa404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fa408: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fa408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fa40c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fa40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fa410: 0xe22825  or          $a1, $a3, $v0
    ctx->pc = 0x2fa410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2fa414: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2fa414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2fa418: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2fa418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2fa41c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa420: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa424: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fa424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa428: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x2fa428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x2fa42c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa430: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2fa430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa434: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x2fa434u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fa438: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2fa438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2fa43c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2fa43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2fa440: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2fa440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa444: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fa444u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fa448: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fa448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa44c: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x2fa44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x2fa450: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa454: 0xe21824  and         $v1, $a3, $v0
    ctx->pc = 0x2fa454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2fa458: 0x1033025  or          $a2, $t0, $v1
    ctx->pc = 0x2fa458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x2fa45c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa460: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2fa460u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa464: 0x24630680  addiu       $v1, $v1, 0x680
    ctx->pc = 0x2fa464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1664));
    // 0x2fa468: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fa468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fa46c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa470: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa474: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa478: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa47c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa480: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2fa480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa484: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa488: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa488u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa48c: 0x24420680  addiu       $v0, $v0, 0x680
    ctx->pc = 0x2fa48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x2fa490: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa494: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa498: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2fa498u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa49c: 0x81438  dsll        $v0, $t0, 16
    ctx->pc = 0x2fa49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 16);
    // 0x2fa4a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa4a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2fa4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa4a8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2fa4a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2fa4ac: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FA4ACu;
    SET_GPR_U32(ctx, 31, 0x2FA4B4u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FA4ACu, 0x2FA4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA4B4u;
label_2fa4b4:
    // 0x2fa4b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fa4b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa4b8: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FA4B8u;
    SET_GPR_U32(ctx, 31, 0x2FA4C0u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FA4B8u, 0x2FA4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA4C0u;
label_2fa4c0:
    // 0x2fa4c0: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2fa4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa4c4: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x2fa4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2fa4c8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2fa4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fa4cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa4d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fa4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fa4d4: 0x34441d00  ori         $a0, $v0, 0x1D00
    ctx->pc = 0x2fa4d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7424);
    // 0x2fa4d8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2fa4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa4dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa4e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa4e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa4e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa4ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa4f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa4f4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2fa4f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa4f8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2fa4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa4fc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2fa4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa500: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fa500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fa504: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fa504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa508: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2fa508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2fa50c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa510: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2fa510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2fa514: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x2fa514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2fa518: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2fa518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2fa51c: 0x24c2dbc0  addiu       $v0, $a2, -0x2440
    ctx->pc = 0x2fa51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x2fa520: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa524: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa528: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2fa528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa52c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2fa52cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2fa530: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2fa530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fa534: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x2fa534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2fa538: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x2fa538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fa53c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2fa53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2fa540: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2fa540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2fa544: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2fa544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa548: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fa548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fa54c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa550: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa554: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa558: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2fa558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2fa55c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2fa55cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2fa560: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa564: 0x8c28dcf0  lw          $t0, -0x2310($at)
    ctx->pc = 0x2fa564u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa568: 0x250206c0  addiu       $v0, $t0, 0x6C0
    ctx->pc = 0x2fa568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1728));
    // 0x2fa56c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2fa56cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa570: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fa570u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fa574: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2fa574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa578: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x2fa578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x2fa57c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa580: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2fa580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2fa584: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2fa584u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa588: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa58c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa58cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa590: 0x244206c0  addiu       $v0, $v0, 0x6C0
    ctx->pc = 0x2fa590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x2fa594: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa598: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa59c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2fa59cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa5a0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2fa5a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2fa5a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2fa5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fa5a8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2fa5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2fa5ac: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2fa5acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2fa5b0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2fa5b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fa5b4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FA5B4u;
    SET_GPR_U32(ctx, 31, 0x2FA5BCu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FA5B4u, 0x2FA5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA5BCu;
label_2fa5bc:
    // 0x2fa5bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fa5bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa5c0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FA5C0u;
    SET_GPR_U32(ctx, 31, 0x2FA5C8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FA5C0u, 0x2FA5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA5C8u;
label_2fa5c8:
    // 0x2fa5c8: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x2FA5C8u;
    {
        const bool branch_taken_0x2fa5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa5c8) {
            ctx->pc = 0x2FA8F0u;
            goto label_2fa8f0;
        }
    }
    ctx->pc = 0x2FA5D0u;
label_2fa5d0:
    // 0x2fa5d0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2fa5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa5d4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2fa5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2fa5d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa5dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa5e0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2fa5e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fa5e4: 0x34a41d00  ori         $a0, $a1, 0x1D00
    ctx->pc = 0x2fa5e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7424);
    // 0x2fa5e8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2fa5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa5ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa5f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa5f4: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2fa5f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa5f8: 0x73438  dsll        $a2, $a3, 16
    ctx->pc = 0x2fa5f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << 16);
    // 0x2fa5fc: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x2fa5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2fa600: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa604: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2fa604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa608: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2fa608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa60c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2fa60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fa610: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fa610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fa614: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fa614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa618: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fa618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fa61c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fa61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fa620: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2fa620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2fa624: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x2fa624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2fa628: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2fa628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2fa62c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2fa62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2fa630: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa634: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa638: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa63c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa640: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa644: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa648: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x2fa648u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa64c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2fa64cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2fa650: 0x24e2dbc0  addiu       $v0, $a3, -0x2440
    ctx->pc = 0x2fa650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958016));
    // 0x2fa654: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2fa654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa658: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fa658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fa65c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fa65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa660: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2fa660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2fa664: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa668: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2fa668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2fa66c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x2fa66cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2fa670: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa674: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2fa674u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa678: 0x24c20540  addiu       $v0, $a2, 0x540
    ctx->pc = 0x2fa678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1344));
    // 0x2fa67c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa680: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa684: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fa684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa688: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fa688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fa68c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fa68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fa690: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fa690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fa694: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2fa694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa698: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa69c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa69cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa6a0: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x2fa6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x2fa6a4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2fa6a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa6a8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fa6a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fa6ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa6b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa6b4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2fa6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa6b8: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x2fa6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2fa6bc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2fa6bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2fa6c0: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2fa6c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fa6c4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FA6C4u;
    SET_GPR_U32(ctx, 31, 0x2FA6CCu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FA6C4u, 0x2FA6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA6CCu;
label_2fa6cc:
    // 0x2fa6cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fa6ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa6d0: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FA6D0u;
    SET_GPR_U32(ctx, 31, 0x2FA6D8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FA6D0u, 0x2FA6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA6D8u;
label_2fa6d8:
    // 0x2fa6d8: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2fa6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa6dc: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2fa6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2fa6e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa6e4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa6e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2fa6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fa6ec: 0x34641d00  ori         $a0, $v1, 0x1D00
    ctx->pc = 0x2fa6ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7424);
    // 0x2fa6f0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2fa6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa6f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fa6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fa6f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa6fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa700: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa704: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa708: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa70c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2fa70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa710: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2fa710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa714: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa718: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa71c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa720: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa724: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa728: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa72c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2fa72cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2fa730: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2fa730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2fa734: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2fa734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2fa738: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa73c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa740: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa744: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa748: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa74c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa750: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2fa750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa754: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2fa754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2fa758: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2fa758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2fa75c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa760: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa764: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa768: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa76c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa770: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa774: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2fa774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2fa778: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa77c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa77cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa780: 0x24420580  addiu       $v0, $v0, 0x580
    ctx->pc = 0x2fa780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x2fa784: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa788: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa78c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa790: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa794: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa798: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa79c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2fa79cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa7a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa7a4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa7a8: 0x24420580  addiu       $v0, $v0, 0x580
    ctx->pc = 0x2fa7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x2fa7ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa7b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa7b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa7b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa7bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa7c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa7c4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2fa7c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2fa7c8: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FA7C8u;
    SET_GPR_U32(ctx, 31, 0x2FA7D0u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FA7C8u, 0x2FA7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA7D0u;
label_2fa7d0:
    // 0x2fa7d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fa7d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa7d4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FA7D4u;
    SET_GPR_U32(ctx, 31, 0x2FA7DCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FA7D4u, 0x2FA7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA7DCu;
label_2fa7dc:
    // 0x2fa7dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fa7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa7e0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2fa7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fa7e4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2fa7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fa7e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa7ec: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x2fa7ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2fa7f0: 0x34e91d00  ori         $t1, $a3, 0x1D00
    ctx->pc = 0x2fa7f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)7424);
    // 0x2fa7f4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fa7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa7f8: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x2fa7f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fa7fc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fa7fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fa800: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa804: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa808: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x2fa808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa80c: 0xc72024  and         $a0, $a2, $a3
    ctx->pc = 0x2fa80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x2fa810: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2fa810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fa814: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fa814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa818: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x2fa818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fa81c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fa81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fa820: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa824: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x2fa824u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x2fa828: 0x34e2ffff  ori         $v0, $a3, 0xFFFF
    ctx->pc = 0x2fa828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2fa82c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2fa82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2fa830: 0xa24025  or          $t0, $a1, $v0
    ctx->pc = 0x2fa830u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2fa834: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2fa834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2fa838: 0x244bdbc0  addiu       $t3, $v0, -0x2440
    ctx->pc = 0x2fa838u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2fa83c: 0xb383c  dsll32      $a3, $t3, 0
    ctx->pc = 0x2fa83cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) << (32 + 0));
    // 0x2fa840: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fa840u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fa844: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fa844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa848: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x2fa848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x2fa84c: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x2fa84cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fa850: 0xe61024  and         $v0, $a3, $a2
    ctx->pc = 0x2fa850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2fa854: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x2fa854u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa858: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2fa858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2fa85c: 0x2462dbc0  addiu       $v0, $v1, -0x2440
    ctx->pc = 0x2fa85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2fa860: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2fa860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa864: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fa864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fa868: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fa868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa86c: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x2fa86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x2fa870: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa874: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x2fa874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2fa878: 0x1475825  or          $t3, $t2, $a3
    ctx->pc = 0x2fa878u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x2fa87c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa880: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x2fa880u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa884: 0x24a605c0  addiu       $a2, $a1, 0x5C0
    ctx->pc = 0x2fa884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x2fa888: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2fa888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fa88c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa890: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2fa890u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa894: 0x73438  dsll        $a2, $a3, 16
    ctx->pc = 0x2fa894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << 16);
    // 0x2fa898: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2fa898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2fa89c: 0x463024  and         $a2, $v0, $a2
    ctx->pc = 0x2fa89cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2fa8a0: 0x6503c  dsll32      $t2, $a2, 0
    ctx->pc = 0x2fa8a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fa8a4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa8a8: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2fa8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa8ac: 0x24c505c0  addiu       $a1, $a2, 0x5C0
    ctx->pc = 0x2fa8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1472));
    // 0x2fa8b0: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x2fa8b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fa8b4: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fa8b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fa8b8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2fa8b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa8bc: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x2fa8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x2fa8c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa8c4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2fa8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2fa8c8: 0x1423825  or          $a3, $t2, $v0
    ctx->pc = 0x2fa8c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x2fa8cc: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2fa8ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2fa8d0: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2fa8d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fa8d4: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x2fa8d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2fa8d8: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FA8D8u;
    SET_GPR_U32(ctx, 31, 0x2FA8E0u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FA8D8u, 0x2FA8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA8E0u;
label_2fa8e0:
    // 0x2fa8e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fa8e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa8e4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FA8E4u;
    SET_GPR_U32(ctx, 31, 0x2FA8ECu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FA8E4u, 0x2FA8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA8ECu;
label_2fa8ec:
    // 0x2fa8ec: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fa8ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2fa8f0:
    // 0x2fa8f0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fa8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa8f4: 0x8ca700d4  lw          $a3, 0xD4($a1)
    ctx->pc = 0x2fa8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fa8f8: 0x28e10007  slti        $at, $a3, 0x7
    ctx->pc = 0x2fa8f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2fa8fc: 0x14200042  bnez        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x2FA8FCu;
    {
        const bool branch_taken_0x2fa8fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa8fc) {
            ctx->pc = 0x2FAA08u;
            goto label_2faa08;
        }
    }
    ctx->pc = 0x2FA904u;
    // 0x2fa904: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fa904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa908: 0x8ca500d4  lw          $a1, 0xD4($a1)
    ctx->pc = 0x2fa908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fa90c: 0x28a10016  slti        $at, $a1, 0x16
    ctx->pc = 0x2fa90cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x2fa910: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x2FA910u;
    {
        const bool branch_taken_0x2fa910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa910) {
            ctx->pc = 0x2FAA08u;
            goto label_2faa08;
        }
    }
    ctx->pc = 0x2FA918u;
    // 0x2fa918: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fa918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa91c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2fa91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2fa920: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FA920u;
    {
        const bool branch_taken_0x2fa920 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa920) {
            ctx->pc = 0x2FA99Cu;
            goto label_2fa99c;
        }
    }
    ctx->pc = 0x2FA928u;
    // 0x2fa928: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2fa928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa92c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2fa92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2fa930: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2fa930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2fa934: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa938: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa93c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fa93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fa940: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2fa940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2fa944: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa948: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fa948u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fa94c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2fa94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fa950: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa954: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa954u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa958: 0x244506c0  addiu       $a1, $v0, 0x6C0
    ctx->pc = 0x2fa958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x2fa95c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2fa95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fa960: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa964: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa968: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa96c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa970: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2fa970u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa974: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fa974u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fa978: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fa978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa97c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FA97Cu;
    SET_GPR_U32(ctx, 31, 0x2FA984u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FA97Cu, 0x2FA984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA984u;
label_2fa984:
    // 0x2fa984: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fa984u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa988: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FA988u;
    SET_GPR_U32(ctx, 31, 0x2FA990u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FA988u, 0x2FA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA990u;
label_2fa990:
    // 0x2fa990: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fa990u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa994: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2FA994u;
    {
        const bool branch_taken_0x2fa994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa994) {
            ctx->pc = 0x2FAA08u;
            goto label_2faa08;
        }
    }
    ctx->pc = 0x2FA99Cu;
label_2fa99c:
    // 0x2fa99c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fa99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa9a0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2fa9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fa9a4: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x2fa9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x2fa9a8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2fa9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa9ac: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fa9acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fa9b0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2fa9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2fa9b4: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2fa9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2fa9b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa9bc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2fa9bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2fa9c0: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x2fa9c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2fa9c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa9c8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa9cc: 0x244205c0  addiu       $v0, $v0, 0x5C0
    ctx->pc = 0x2fa9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
    // 0x2fa9d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa9d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa9d8: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2fa9d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa9dc: 0x81438  dsll        $v0, $t0, 16
    ctx->pc = 0x2fa9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 16);
    // 0x2fa9e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa9e4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2fa9e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa9e8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fa9e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa9ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fa9ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fa9f0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fa9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa9f4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FA9F4u;
    SET_GPR_U32(ctx, 31, 0x2FA9FCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FA9F4u, 0x2FA9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA9FCu;
label_2fa9fc:
    // 0x2fa9fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fa9fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2faa00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FAA00u;
    SET_GPR_U32(ctx, 31, 0x2FAA08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FAA00u, 0x2FAA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA08u;
label_2faa08:
    // 0x2faa08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2faa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2faa0c: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x2faa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2faa10: 0x28c1000b  slti        $at, $a2, 0xB
    ctx->pc = 0x2faa10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2faa14: 0x14200043  bnez        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x2FAA14u;
    {
        const bool branch_taken_0x2faa14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2faa14) {
            ctx->pc = 0x2FAB24u;
            goto label_2fab24;
        }
    }
    ctx->pc = 0x2FAA1Cu;
    // 0x2faa1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2faa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2faa20: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2faa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2faa24: 0x28610012  slti        $at, $v1, 0x12
    ctx->pc = 0x2faa24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2faa28: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x2FAA28u;
    {
        const bool branch_taken_0x2faa28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faa28) {
            ctx->pc = 0x2FAB24u;
            goto label_2fab24;
        }
    }
    ctx->pc = 0x2FAA30u;
    // 0x2faa30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2faa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2faa34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2faa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2faa38: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FAA38u;
    {
        const bool branch_taken_0x2faa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2faa38) {
            ctx->pc = 0x2FAAB4u;
            goto label_2faab4;
        }
    }
    ctx->pc = 0x2FAA40u;
    // 0x2faa40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2faa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2faa44: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2faa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2faa48: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2faa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2faa4c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2faa4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2faa50: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2faa50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2faa54: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2faa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2faa58: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2faa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2faa5c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2faa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2faa60: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2faa60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2faa64: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x2faa64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2faa68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2faa68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2faa6c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2faa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2faa70: 0x24420680  addiu       $v0, $v0, 0x680
    ctx->pc = 0x2faa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x2faa74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2faa74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2faa78: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2faa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2faa7c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2faa7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2faa80: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x2faa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x2faa84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2faa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2faa88: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2faa88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2faa8c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2faa8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2faa90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2faa90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2faa94: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2faa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2faa98: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FAA98u;
    SET_GPR_U32(ctx, 31, 0x2FAAA0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FAA98u, 0x2FAAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAAA0u;
label_2faaa0:
    // 0x2faaa0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2faaa0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2faaa4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FAAA4u;
    SET_GPR_U32(ctx, 31, 0x2FAAACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FAAA4u, 0x2FAAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAAACu;
label_2faaac:
    // 0x2faaac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2FAAACu;
    {
        const bool branch_taken_0x2faaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faaac) {
            ctx->pc = 0x2FAB24u;
            goto label_2fab24;
        }
    }
    ctx->pc = 0x2FAAB4u;
label_2faab4:
    // 0x2faab4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2faab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2faab8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2faab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2faabc: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x2faabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2faac0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2faac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2faac4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2faac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2faac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2faac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2faacc: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2faaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2faad0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2faad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2faad4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2faad4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2faad8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2faad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2faadc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2faadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2faae0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2faae0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2faae4: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x2faae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x2faae8: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2faae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2faaec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2faaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2faaf0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2faaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2faaf4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2faaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2faaf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2faaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2faafc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2faafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fab00: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fab00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fab04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fab04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fab08: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fab08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fab0c: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x2fab0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fab10: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FAB10u;
    SET_GPR_U32(ctx, 31, 0x2FAB18u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FAB10u, 0x2FAB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB18u;
label_2fab18:
    // 0x2fab18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fab18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fab1c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FAB1Cu;
    SET_GPR_U32(ctx, 31, 0x2FAB24u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FAB1Cu, 0x2FAB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB24u;
label_2fab24:
    // 0x2fab24: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fab24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fab28: 0x8ca500d4  lw          $a1, 0xD4($a1)
    ctx->pc = 0x2fab28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fab2c: 0x28a1000d  slti        $at, $a1, 0xD
    ctx->pc = 0x2fab2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2fab30: 0x14200043  bnez        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x2FAB30u;
    {
        const bool branch_taken_0x2fab30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fab30) {
            ctx->pc = 0x2FAC40u;
            goto label_2fac40;
        }
    }
    ctx->pc = 0x2FAB38u;
    // 0x2fab38: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fab38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fab3c: 0x8ca500d4  lw          $a1, 0xD4($a1)
    ctx->pc = 0x2fab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fab40: 0x28a10012  slti        $at, $a1, 0x12
    ctx->pc = 0x2fab40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2fab44: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x2FAB44u;
    {
        const bool branch_taken_0x2fab44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fab44) {
            ctx->pc = 0x2FAC40u;
            goto label_2fac40;
        }
    }
    ctx->pc = 0x2FAB4Cu;
    // 0x2fab4c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2fab4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fab50: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2fab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fab54: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FAB54u;
    {
        const bool branch_taken_0x2fab54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fab54) {
            ctx->pc = 0x2FABD4u;
            goto label_2fabd4;
        }
    }
    ctx->pc = 0x2FAB5Cu;
    // 0x2fab5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2fab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fab60: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2fab60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fab64: 0x24a2000a  addiu       $v0, $a1, 0xA
    ctx->pc = 0x2fab64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x2fab68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fab68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fab6c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fab6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fab70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fab70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fab74: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2fab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2fab78: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2fab78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fab7c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2fab7cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2fab80: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x2fab80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2fab84: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fab84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fab88: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fab88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fab8c: 0x24470640  addiu       $a3, $v0, 0x640
    ctx->pc = 0x2fab8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x2fab90: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x2fab90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2fab94: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fab94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fab98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fab98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fab9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fab9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2faba0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2faba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2faba4: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x2faba4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2faba8: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2faba8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fabac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fabacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fabb0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2fabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fabb4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fabb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fabb8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FABB8u;
    SET_GPR_U32(ctx, 31, 0x2FABC0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FABB8u, 0x2FABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABC0u;
label_2fabc0:
    // 0x2fabc0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fabc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fabc4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FABC4u;
    SET_GPR_U32(ctx, 31, 0x2FABCCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FABC4u, 0x2FABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABCCu;
label_2fabcc:
    // 0x2fabcc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2FABCCu;
    {
        const bool branch_taken_0x2fabcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fabcc) {
            ctx->pc = 0x2FAC40u;
            goto label_2fac40;
        }
    }
    ctx->pc = 0x2FABD4u;
label_2fabd4:
    // 0x2fabd4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fabd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fabd8: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x2fabd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2fabdc: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x2fabdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x2fabe0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2fabe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fabe4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fabe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fabe8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2fabe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fabec: 0x34e20300  ori         $v0, $a3, 0x300
    ctx->pc = 0x2fabecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)768);
    // 0x2fabf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fabf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fabf4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fabf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fabf8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2fabf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fabfc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fabfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fac00: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fac00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fac04: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x2fac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x2fac08: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2fac08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fac0c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fac0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fac10: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2fac10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fac14: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x2fac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x2fac18: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2fac18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fac1c: 0xa33824  and         $a3, $a1, $v1
    ctx->pc = 0x2fac1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2fac20: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fac20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fac24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fac24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fac28: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fac28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fac2c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FAC2Cu;
    SET_GPR_U32(ctx, 31, 0x2FAC34u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FAC2Cu, 0x2FAC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC34u;
label_2fac34:
    // 0x2fac34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fac34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fac38: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FAC38u;
    SET_GPR_U32(ctx, 31, 0x2FAC40u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FAC38u, 0x2FAC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC40u;
label_2fac40:
    // 0x2fac40: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2fac40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fac44: 0x8cc300d4  lw          $v1, 0xD4($a2)
    ctx->pc = 0x2fac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2fac48: 0x28610013  slti        $at, $v1, 0x13
    ctx->pc = 0x2fac48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2fac4c: 0x14200049  bnez        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x2FAC4Cu;
    {
        const bool branch_taken_0x2fac4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fac4c) {
            ctx->pc = 0x2FAD74u;
            goto label_2fad74;
        }
    }
    ctx->pc = 0x2FAC54u;
    // 0x2fac54: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fac54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fac58: 0x8ca300d4  lw          $v1, 0xD4($a1)
    ctx->pc = 0x2fac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fac5c: 0x2861001e  slti        $at, $v1, 0x1E
    ctx->pc = 0x2fac5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2fac60: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x2FAC60u;
    {
        const bool branch_taken_0x2fac60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fac60) {
            ctx->pc = 0x2FAD74u;
            goto label_2fad74;
        }
    }
    ctx->pc = 0x2FAC68u;
    // 0x2fac68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fac68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fac6c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fac70: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fac70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fac74: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2FAC74u;
    {
        const bool branch_taken_0x2fac74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fac74) {
            ctx->pc = 0x2FAD74u;
            goto label_2fad74;
        }
    }
    ctx->pc = 0x2FAC7Cu;
    // 0x2fac7c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fac80: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2fac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2fac84: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FAC84u;
    {
        const bool branch_taken_0x2fac84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fac84) {
            ctx->pc = 0x2FAD04u;
            goto label_2fad04;
        }
    }
    ctx->pc = 0x2FAC8Cu;
    // 0x2fac8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2fac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fac90: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2fac90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fac94: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x2fac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x2fac98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fac9c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2faca0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2faca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2faca4: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2faca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2faca8: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x2faca8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2facac: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2facacu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2facb0: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x2facb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2facb4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2facb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2facb8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2facb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2facbc: 0x244606c0  addiu       $a2, $v0, 0x6C0
    ctx->pc = 0x2facbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x2facc0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2facc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2facc4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2facc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2facc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2facc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2faccc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2facccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2facd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2facd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2facd4: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x2facd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2facd8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2facd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2facdc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2facdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2face0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2face0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2face4: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2face4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2face8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FACE8u;
    SET_GPR_U32(ctx, 31, 0x2FACF0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FACE8u, 0x2FACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACF0u;
label_2facf0:
    // 0x2facf0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2facf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2facf4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FACF4u;
    SET_GPR_U32(ctx, 31, 0x2FACFCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FACF4u, 0x2FACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACFCu;
label_2facfc:
    // 0x2facfc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2FACFCu;
    {
        const bool branch_taken_0x2facfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2facfc) {
            ctx->pc = 0x2FAD74u;
            goto label_2fad74;
        }
    }
    ctx->pc = 0x2FAD04u;
label_2fad04:
    // 0x2fad04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fad08: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2fad08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fad0c: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x2fad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x2fad10: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2fad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fad14: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fad14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fad18: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2fad18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fad1c: 0x34e20300  ori         $v0, $a3, 0x300
    ctx->pc = 0x2fad1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)768);
    // 0x2fad20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fad20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fad24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fad24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fad28: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2fad28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fad2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fad2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fad30: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fad30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fad34: 0x244205c0  addiu       $v0, $v0, 0x5C0
    ctx->pc = 0x2fad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
    // 0x2fad38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fad38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fad3c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fad3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fad40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fad44: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x2fad44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x2fad48: 0x34e2ffff  ori         $v0, $a3, 0xFFFF
    ctx->pc = 0x2fad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2fad4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fad50: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fad50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fad54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fad54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fad58: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fad58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fad5c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2fad5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fad60: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FAD60u;
    SET_GPR_U32(ctx, 31, 0x2FAD68u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FAD60u, 0x2FAD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD68u;
label_2fad68:
    // 0x2fad68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fad68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fad6c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FAD6Cu;
    SET_GPR_U32(ctx, 31, 0x2FAD74u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FAD6Cu, 0x2FAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD74u;
label_2fad74:
    // 0x2fad74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fad74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fad78: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2fad78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fad7c: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2fad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2fad80: 0x14830040  bne         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2FAD80u;
    {
        const bool branch_taken_0x2fad80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fad80) {
            ctx->pc = 0x2FAE84u;
            goto label_2fae84;
        }
    }
    ctx->pc = 0x2FAD88u;
    // 0x2fad88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fad88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fad8c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fad90: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FAD90u;
    {
        const bool branch_taken_0x2fad90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fad90) {
            ctx->pc = 0x2FAE14u;
            goto label_2fae14;
        }
    }
    ctx->pc = 0x2FAD98u;
    // 0x2fad98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fad98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fad9c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2fad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fada0: 0x24670640  addiu       $a3, $v1, 0x640
    ctx->pc = 0x2fada0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
    // 0x2fada4: 0x2409001d  addiu       $t1, $zero, 0x1D
    ctx->pc = 0x2fada4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fada8: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2fada8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2fadac: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fadacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fadb0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fadb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fadb4: 0xc065580  jal         func_195600
    ctx->pc = 0x2FADB4u;
    SET_GPR_U32(ctx, 31, 0x2FADBCu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FADB4u, 0x2FADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADBCu;
label_2fadbc:
    // 0x2fadbc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fadbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fadc0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fadc4: 0x24470680  addiu       $a3, $v0, 0x680
    ctx->pc = 0x2fadc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x2fadc8: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x2fadc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fadcc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fadccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fadd0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fadd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fadd4: 0xc065580  jal         func_195600
    ctx->pc = 0x2FADD4u;
    SET_GPR_U32(ctx, 31, 0x2FADDCu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FADD4u, 0x2FADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADDCu;
label_2faddc:
    // 0x2faddc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2faddcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fade0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fade0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fade4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fade4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fade8: 0x244706c0  addiu       $a3, $v0, 0x6C0
    ctx->pc = 0x2fade8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x2fadec: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2fadecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fadf0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fadf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fadf4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2fadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fadf8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fadf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fadfc: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2fadfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae00: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2fae00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fae04: 0xc065580  jal         func_195600
    ctx->pc = 0x2FAE04u;
    SET_GPR_U32(ctx, 31, 0x2FAE0Cu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FAE04u, 0x2FAE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE0Cu;
label_2fae0c:
    // 0x2fae0c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2FAE0Cu;
    {
        const bool branch_taken_0x2fae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fae0c) {
            ctx->pc = 0x2FAE84u;
            goto label_2fae84;
        }
    }
    ctx->pc = 0x2FAE14u;
label_2fae14:
    // 0x2fae14: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fae14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fae18: 0x8c2bdcf0  lw          $t3, -0x2310($at)
    ctx->pc = 0x2fae18u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fae1c: 0x25670540  addiu       $a3, $t3, 0x540
    ctx->pc = 0x2fae1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 1344));
    // 0x2fae20: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2fae20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fae24: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2fae24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fae28: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fae28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae2c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fae2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae30: 0xc065580  jal         func_195600
    ctx->pc = 0x2FAE30u;
    SET_GPR_U32(ctx, 31, 0x2FAE38u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FAE30u, 0x2FAE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE38u;
label_2fae38:
    // 0x2fae38: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fae38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fae3c: 0x8c2adcf0  lw          $t2, -0x2310($at)
    ctx->pc = 0x2fae3cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fae40: 0x25430580  addiu       $v1, $t2, 0x580
    ctx->pc = 0x2fae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1408));
    // 0x2fae44: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2fae44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fae48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fae48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fae4c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae50: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fae50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae54: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x2fae54u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fae58: 0xc065580  jal         func_195600
    ctx->pc = 0x2FAE58u;
    SET_GPR_U32(ctx, 31, 0x2FAE60u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FAE58u, 0x2FAE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE60u;
label_2fae60:
    // 0x2fae60: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fae60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fae64: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fae64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fae68: 0x244705c0  addiu       $a3, $v0, 0x5C0
    ctx->pc = 0x2fae68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
    // 0x2fae6c: 0x240b001d  addiu       $t3, $zero, 0x1D
    ctx->pc = 0x2fae6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fae70: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x2fae70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2fae74: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae78: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fae78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fae7c: 0xc065580  jal         func_195600
    ctx->pc = 0x2FAE7Cu;
    SET_GPR_U32(ctx, 31, 0x2FAE84u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FAE7Cu, 0x2FAE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE84u;
label_2fae84:
    // 0x2fae84: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2fae84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fae88: 0x8ce600d4  lw          $a2, 0xD4($a3)
    ctx->pc = 0x2fae88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x2fae8c: 0x28c60032  slti        $a2, $a2, 0x32
    ctx->pc = 0x2fae8cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2fae90: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAE90u;
    {
        const bool branch_taken_0x2fae90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fae90) {
            ctx->pc = 0x2FAEACu;
            goto label_2faeac;
        }
    }
    ctx->pc = 0x2FAE98u;
    // 0x2fae98: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2fae98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fae9c: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x2fae9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2faea0: 0x39460010  xori        $a2, $t2, 0x10
    ctx->pc = 0x2faea0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)16);
    // 0x2faea4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2faea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2faea8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2faea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_2faeac:
    // 0x2faeac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2faeacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2faeb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2faeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2faeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAEBCu;
}
