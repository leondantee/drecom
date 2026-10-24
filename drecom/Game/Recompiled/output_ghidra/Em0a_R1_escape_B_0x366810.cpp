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

// Function: Em0a_R1_escape_B
// Address: 0x366810 - 0x3669bc
void Em0a_R1_escape_B_0x366810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_escape_B_0x366810");
#endif

    switch (ctx->pc) {
        case 0x36687cu: goto label_36687c;
        case 0x3668a8u: goto label_3668a8;
        case 0x3668b4u: goto label_3668b4;
        case 0x3668c4u: goto label_3668c4;
        case 0x3668d0u: goto label_3668d0;
        case 0x366918u: goto label_366918;
        case 0x366944u: goto label_366944;
        case 0x366950u: goto label_366950;
        case 0x366960u: goto label_366960;
        case 0x36696cu: goto label_36696c;
        default: break;
    }

    ctx->pc = 0x366810u;

    // 0x366810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x366814: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x366814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x366818: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x366818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36681c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36681cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366820: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x366820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366824: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x366824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x366828: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x366828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36682c: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x36682Cu;
    {
        const bool branch_taken_0x36682c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36682c) {
            ctx->pc = 0x366934u;
            goto label_366934;
        }
    }
    ctx->pc = 0x366834u;
    // 0x366834: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x366834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366838: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x366838u;
    {
        const bool branch_taken_0x366838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x366838) {
            ctx->pc = 0x3668F8u;
            goto label_3668f8;
        }
    }
    ctx->pc = 0x366840u;
    // 0x366840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366844: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x366844u;
    {
        const bool branch_taken_0x366844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x366844) {
            ctx->pc = 0x366898u;
            goto label_366898;
        }
    }
    ctx->pc = 0x36684Cu;
    // 0x36684c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36684Cu;
    {
        const bool branch_taken_0x36684c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36684c) {
            ctx->pc = 0x36685Cu;
            goto label_36685c;
        }
    }
    ctx->pc = 0x366854u;
    // 0x366854: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x366854u;
    {
        const bool branch_taken_0x366854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366854) {
            ctx->pc = 0x3669ACu;
            goto label_3669ac;
        }
    }
    ctx->pc = 0x36685Cu;
label_36685c:
    // 0x36685c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366860: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366864: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x366868: 0x24060a0d  addiu       $a2, $zero, 0xA0D
    ctx->pc = 0x366868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2573));
    // 0x36686c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36686cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366870: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366874: 0xc0965d0  jal         func_259740
    ctx->pc = 0x366874u;
    SET_GPR_U32(ctx, 31, 0x36687Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366874u, 0x36687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36687Cu;
label_36687c:
    // 0x36687c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x36687cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x366880: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366884: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x366884u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x366888: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36688c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36688cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x366894: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_366898:
    // 0x366898: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36689c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36689cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3668a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3668A0u;
    SET_GPR_U32(ctx, 31, 0x3668A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3668A0u, 0x3668A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668A8u;
label_3668a8:
    // 0x3668a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3668a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3668ac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3668ACu;
    SET_GPR_U32(ctx, 31, 0x3668B4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3668ACu, 0x3668B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668B4u;
label_3668b4:
    // 0x3668b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3668b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3668b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3668b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3668bc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3668BCu;
    SET_GPR_U32(ctx, 31, 0x3668C4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3668BCu, 0x3668C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668C4u;
label_3668c4:
    // 0x3668c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3668c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3668c8: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x3668C8u;
    SET_GPR_U32(ctx, 31, 0x3668D0u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x3668C8u, 0x3668D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668D0u;
label_3668d0:
    // 0x3668d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3668d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3668d4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3668d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3668d8: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3668D8u;
    {
        const bool branch_taken_0x3668d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3668d8) {
            ctx->pc = 0x3669ACu;
            goto label_3669ac;
        }
    }
    ctx->pc = 0x3668E0u;
    // 0x3668e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3668e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3668e4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3668e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3668e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3668e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3668ec: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3668ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3668f0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3668F0u;
    {
        const bool branch_taken_0x3668f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3668f0) {
            ctx->pc = 0x3669ACu;
            goto label_3669ac;
        }
    }
    ctx->pc = 0x3668F8u;
label_3668f8:
    // 0x3668f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3668f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3668fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3668fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366900: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x366904: 0x2406050e  addiu       $a2, $zero, 0x50E
    ctx->pc = 0x366904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    // 0x366908: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x366908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36690c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36690cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366910: 0xc0965d0  jal         func_259740
    ctx->pc = 0x366910u;
    SET_GPR_U32(ctx, 31, 0x366918u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366910u, 0x366918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366918u;
label_366918:
    // 0x366918: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x366918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36691c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366920: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x366920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x366924: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366928: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x366928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36692c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x366930: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_366934:
    // 0x366934: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366938: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366938u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36693c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36693Cu;
    SET_GPR_U32(ctx, 31, 0x366944u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36693Cu, 0x366944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366944u;
label_366944:
    // 0x366944: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366948: 0xc05cd10  jal         func_173440
    ctx->pc = 0x366948u;
    SET_GPR_U32(ctx, 31, 0x366950u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x366948u, 0x366950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366950u;
label_366950:
    // 0x366950: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366954: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366954u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366958: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366958u;
    SET_GPR_U32(ctx, 31, 0x366960u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366958u, 0x366960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366960u;
label_366960:
    // 0x366960: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366964: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366964u;
    SET_GPR_U32(ctx, 31, 0x36696Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366964u, 0x36696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36696Cu;
label_36696c:
    // 0x36696c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36696cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366970: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x366970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x366974: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x366974u;
    {
        const bool branch_taken_0x366974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366974) {
            ctx->pc = 0x3669ACu;
            goto label_3669ac;
        }
    }
    ctx->pc = 0x36697Cu;
    // 0x36697c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36697cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366980: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366984: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x366984u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x366988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36698c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36698cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366990: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x366990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x366994: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366998: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x366998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36699c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3669a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3669a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3669a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3669a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3669a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3669a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3669ac:
    // 0x3669ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3669acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3669b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3669b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3669b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3669B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3669B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3669BCu;
}
