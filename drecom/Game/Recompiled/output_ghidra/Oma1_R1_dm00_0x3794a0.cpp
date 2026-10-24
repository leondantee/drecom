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

// Function: Oma1_R1_dm00
// Address: 0x3794a0 - 0x379598
void Oma1_R1_dm00_0x3794a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma1_R1_dm00_0x3794a0");
#endif

    switch (ctx->pc) {
        case 0x3794fcu: goto label_3794fc;
        case 0x37955cu: goto label_37955c;
        default: break;
    }

    ctx->pc = 0x3794a0u;

    // 0x3794a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3794a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3794a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3794a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3794a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3794a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3794ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3794acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3794b0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3794b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3794b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3794b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3794b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3794b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3794bc: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3794BCu;
    {
        const bool branch_taken_0x3794bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3794bc) {
            ctx->pc = 0x379514u;
            goto label_379514;
        }
    }
    ctx->pc = 0x3794C4u;
    // 0x3794c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3794C4u;
    {
        const bool branch_taken_0x3794c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3794c4) {
            ctx->pc = 0x3794D4u;
            goto label_3794d4;
        }
    }
    ctx->pc = 0x3794CCu;
    // 0x3794cc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3794CCu;
    {
        const bool branch_taken_0x3794cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3794cc) {
            ctx->pc = 0x379588u;
            goto label_379588;
        }
    }
    ctx->pc = 0x3794D4u;
label_3794d4:
    // 0x3794d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3794d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3794d8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3794d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3794dc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3794dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3794e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3794e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3794e4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3794e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3794e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3794e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3794ec: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3794ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3794f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3794f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3794f4: 0xc0d8608  jal         func_361820
    ctx->pc = 0x3794F4u;
    SET_GPR_U32(ctx, 31, 0x3794FCu);
    ctx->pc = 0x361820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361820u, 0x3794F4u, 0x3794FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3794FCu;
label_3794fc:
    // 0x3794fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3794fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x379500: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x379500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x379504: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x379504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x379508: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x379508u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37950c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x37950Cu;
    {
        const bool branch_taken_0x37950c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37950c) {
            ctx->pc = 0x379588u;
            goto label_379588;
        }
    }
    ctx->pc = 0x379514u;
label_379514:
    // 0x379514: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x379514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x379518: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x379518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x37951c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x379520: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x379520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
    // 0x379524: 0x28610259  slti        $at, $v1, 0x259
    ctx->pc = 0x379524u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)601) ? 1 : 0);
    // 0x379528: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x379528u;
    {
        const bool branch_taken_0x379528 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x379528) {
            ctx->pc = 0x379588u;
            goto label_379588;
        }
    }
    ctx->pc = 0x379530u;
    // 0x379530: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x379530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x379534: 0xac401330  sw          $zero, 0x1330($v0)
    ctx->pc = 0x379534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4912), GPR_U32(ctx, 0));
    // 0x379538: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x379538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37953c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x37953cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x379540: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x379540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x379544: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x379544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x379548: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x379548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37954c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x37954cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x379550: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x379550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379554: 0xc0d8608  jal         func_361820
    ctx->pc = 0x379554u;
    SET_GPR_U32(ctx, 31, 0x37955Cu);
    ctx->pc = 0x361820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361820u, 0x379554u, 0x37955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37955Cu;
label_37955c:
    // 0x37955c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37955cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379560: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x379560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x379564: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x379564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x379568: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x379568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37956c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x37956cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x379570: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x379570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x379574: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x379574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x379578: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x379578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37957c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x37957cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x379580: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x379580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x379584: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x379584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_379588:
    // 0x379588: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x379588u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37958c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37958cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x379590: 0x3e00008  jr          $ra
    ctx->pc = 0x379590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379598u;
}
