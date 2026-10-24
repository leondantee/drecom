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

// Function: Em01s_R1_turn
// Address: 0x3093b0 - 0x309560
void Em01s_R1_turn_0x3093b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R1_turn_0x3093b0");
#endif

    switch (ctx->pc) {
        case 0x309404u: goto label_309404;
        case 0x309430u: goto label_309430;
        case 0x309460u: goto label_309460;
        case 0x309494u: goto label_309494;
        case 0x3094a0u: goto label_3094a0;
        case 0x3094b0u: goto label_3094b0;
        case 0x3094bcu: goto label_3094bc;
        default: break;
    }

    ctx->pc = 0x3093b0u;

    // 0x3093b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3093b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3093b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3093b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3093b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3093b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3093bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3093bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3093c0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3093c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3093c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3093c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3093c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3093c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3093cc: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3093CCu;
    {
        const bool branch_taken_0x3093cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3093cc) {
            ctx->pc = 0x309484u;
            goto label_309484;
        }
    }
    ctx->pc = 0x3093D4u;
    // 0x3093d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3093D4u;
    {
        const bool branch_taken_0x3093d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3093d4) {
            ctx->pc = 0x3093E4u;
            goto label_3093e4;
        }
    }
    ctx->pc = 0x3093DCu;
    // 0x3093dc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x3093DCu;
    {
        const bool branch_taken_0x3093dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3093dc) {
            ctx->pc = 0x309550u;
            goto label_309550;
        }
    }
    ctx->pc = 0x3093E4u;
label_3093e4:
    // 0x3093e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3093e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3093e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3093e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3093ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3093ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3093f0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3093f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3093f4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3093f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3093f8: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x3093f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x3093fc: 0xc05cc90  jal         func_173240
    ctx->pc = 0x3093FCu;
    SET_GPR_U32(ctx, 31, 0x309404u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x3093FCu, 0x309404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309404u;
label_309404:
    // 0x309404: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x309404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x309408: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x309408u;
    {
        const bool branch_taken_0x309408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309408) {
            ctx->pc = 0x309440u;
            goto label_309440;
        }
    }
    ctx->pc = 0x309410u;
    // 0x309410: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309414: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309418: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x309418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30941c: 0x24062834  addiu       $a2, $zero, 0x2834
    ctx->pc = 0x30941cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10292));
    // 0x309420: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x309420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309424: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x309424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x309428: 0xc0965d0  jal         func_259740
    ctx->pc = 0x309428u;
    SET_GPR_U32(ctx, 31, 0x309430u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x309428u, 0x309430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309430u;
label_309430:
    // 0x309430: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309434: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x309434u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x309438: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x309438u;
    {
        const bool branch_taken_0x309438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309438) {
            ctx->pc = 0x30946Cu;
            goto label_30946c;
        }
    }
    ctx->pc = 0x309440u;
label_309440:
    // 0x309440: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309444: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309448: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x309448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30944c: 0x24062834  addiu       $a2, $zero, 0x2834
    ctx->pc = 0x30944cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10292));
    // 0x309450: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x309450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x309454: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x309454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x309458: 0xc0965d0  jal         func_259740
    ctx->pc = 0x309458u;
    SET_GPR_U32(ctx, 31, 0x309460u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x309458u, 0x309460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309460u;
label_309460:
    // 0x309460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x309460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309464: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309468: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x309468u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_30946c:
    // 0x30946c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309470: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x309470u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x309474: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309478: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x309478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30947c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30947cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309480: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x309480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_309484:
    // 0x309484: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309488: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x309488u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30948c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30948Cu;
    SET_GPR_U32(ctx, 31, 0x309494u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30948Cu, 0x309494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309494u;
label_309494:
    // 0x309494: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309498: 0xc05cd10  jal         func_173440
    ctx->pc = 0x309498u;
    SET_GPR_U32(ctx, 31, 0x3094A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x309498u, 0x3094A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094A0u;
label_3094a0:
    // 0x3094a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3094a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3094a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3094a8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3094A8u;
    SET_GPR_U32(ctx, 31, 0x3094B0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3094A8u, 0x3094B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094B0u;
label_3094b0:
    // 0x3094b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3094b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094b4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3094B4u;
    SET_GPR_U32(ctx, 31, 0x3094BCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3094B4u, 0x3094BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094BCu;
label_3094bc:
    // 0x3094bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3094bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094c0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3094c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3094c4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3094C4u;
    {
        const bool branch_taken_0x3094c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3094c4) {
            ctx->pc = 0x309550u;
            goto label_309550;
        }
    }
    ctx->pc = 0x3094CCu;
    // 0x3094cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3094ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3094d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3094d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3094d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3094d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3094d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3094dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3094dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3094e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3094e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3094e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3094e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3094ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3094ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3094f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3094f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3094f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3094f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3094f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3094fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3094fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x309500: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309504: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x309504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x309508: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30950c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x30950cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x309510: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x309510u;
    {
        const bool branch_taken_0x309510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309510) {
            ctx->pc = 0x309538u;
            goto label_309538;
        }
    }
    ctx->pc = 0x309518u;
    // 0x309518: 0x3c03bf20  lui         $v1, 0xBF20
    ctx->pc = 0x309518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48928 << 16));
    // 0x30951c: 0x3463d97c  ori         $v1, $v1, 0xD97C
    ctx->pc = 0x30951cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55676);
    // 0x309520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309524: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309528: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x309528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x30952c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30952cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x309530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x309530u;
    {
        const bool branch_taken_0x309530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309530) {
            ctx->pc = 0x309550u;
            goto label_309550;
        }
    }
    ctx->pc = 0x309538u;
label_309538:
    // 0x309538: 0x3c033f20  lui         $v1, 0x3F20
    ctx->pc = 0x309538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16160 << 16));
    // 0x30953c: 0x3463d97c  ori         $v1, $v1, 0xD97C
    ctx->pc = 0x30953cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55676);
    // 0x309540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309544: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309548: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x309548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x30954c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30954cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_309550:
    // 0x309550: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x309550u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309554: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x309554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x309558: 0x3e00008  jr          $ra
    ctx->pc = 0x309558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309560u;
}
