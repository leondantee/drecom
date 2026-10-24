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

// Function: Em0a_R1_catch_eye
// Address: 0x3654d0 - 0x36560c
void Em0a_R1_catch_eye_0x3654d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_catch_eye_0x3654d0");
#endif

    switch (ctx->pc) {
        case 0x365530u: goto label_365530;
        case 0x365590u: goto label_365590;
        case 0x36559cu: goto label_36559c;
        case 0x3655acu: goto label_3655ac;
        case 0x3655b8u: goto label_3655b8;
        default: break;
    }

    ctx->pc = 0x3654d0u;

    // 0x3654d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3654d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3654d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3654d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3654d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3654d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3654dc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3654dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x3654e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3654e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3654e4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x3654e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3654e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3654e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3654ec: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3654ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3654f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3654f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3654f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3654f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3654f8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3654F8u;
    {
        const bool branch_taken_0x3654f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3654f8) {
            ctx->pc = 0x365540u;
            goto label_365540;
        }
    }
    ctx->pc = 0x365500u;
    // 0x365500: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x365500u;
    {
        const bool branch_taken_0x365500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x365500) {
            ctx->pc = 0x365510u;
            goto label_365510;
        }
    }
    ctx->pc = 0x365508u;
    // 0x365508: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x365508u;
    {
        const bool branch_taken_0x365508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365508) {
            ctx->pc = 0x3655F8u;
            goto label_3655f8;
        }
    }
    ctx->pc = 0x365510u;
label_365510:
    // 0x365510: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365514: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x365514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365518: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x365518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36551c: 0x24061e07  addiu       $a2, $zero, 0x1E07
    ctx->pc = 0x36551cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7687));
    // 0x365520: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x365520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365524: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x365524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x365528: 0xc0965d0  jal         func_259740
    ctx->pc = 0x365528u;
    SET_GPR_U32(ctx, 31, 0x365530u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x365528u, 0x365530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365530u;
label_365530:
    // 0x365530: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365534: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x365534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36553c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36553cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_365540:
    // 0x365540: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365544: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x365544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x365548: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36554c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x365550: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x365550u;
    {
        const bool branch_taken_0x365550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365550) {
            ctx->pc = 0x365580u;
            goto label_365580;
        }
    }
    ctx->pc = 0x365558u;
    // 0x365558: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36555c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x36555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x365560: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x365560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x365564: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x365564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x365568: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x365568u;
    {
        const bool branch_taken_0x365568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365568) {
            ctx->pc = 0x365580u;
            goto label_365580;
        }
    }
    ctx->pc = 0x365570u;
    // 0x365570: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365574: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x365574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x365578: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x365578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x36557c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_365580:
    // 0x365580: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x365580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365584: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365584u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365588: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365588u;
    SET_GPR_U32(ctx, 31, 0x365590u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365588u, 0x365590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365590u;
label_365590:
    // 0x365590: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x365590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365594: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365594u;
    SET_GPR_U32(ctx, 31, 0x36559Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365594u, 0x36559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36559Cu;
label_36559c:
    // 0x36559c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36559cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3655a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3655a4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3655A4u;
    SET_GPR_U32(ctx, 31, 0x3655ACu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3655A4u, 0x3655ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3655ACu;
label_3655ac:
    // 0x3655ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3655acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655b0: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x3655B0u;
    SET_GPR_U32(ctx, 31, 0x3655B8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x3655B0u, 0x3655B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3655B8u;
label_3655b8:
    // 0x3655b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3655b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3655bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3655c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3655C0u;
    {
        const bool branch_taken_0x3655c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3655c0) {
            ctx->pc = 0x3655F8u;
            goto label_3655f8;
        }
    }
    ctx->pc = 0x3655C8u;
    // 0x3655c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3655c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3655cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3655ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3655d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3655d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3655d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3655d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3655d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3655dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3655e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3655e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3655e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3655e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3655e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3655ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3655f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3655f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3655f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3655f8:
    // 0x3655f8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3655f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3655fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3655fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365600: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x365600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x365604: 0x3e00008  jr          $ra
    ctx->pc = 0x365604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36560Cu;
}
