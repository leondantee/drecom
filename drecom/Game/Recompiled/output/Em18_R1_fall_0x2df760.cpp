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

// Function: Em18_R1_fall
// Address: 0x2df760 - 0x2df9d8
void Em18_R1_fall_0x2df760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_fall_0x2df760");
#endif

    switch (ctx->pc) {
        case 0x2df7ccu: goto label_2df7cc;
        case 0x2df858u: goto label_2df858;
        case 0x2df864u: goto label_2df864;
        case 0x2df874u: goto label_2df874;
        case 0x2df880u: goto label_2df880;
        case 0x2df8a4u: goto label_2df8a4;
        case 0x2df8ccu: goto label_2df8cc;
        case 0x2df8f8u: goto label_2df8f8;
        case 0x2df904u: goto label_2df904;
        case 0x2df914u: goto label_2df914;
        case 0x2df920u: goto label_2df920;
        case 0x2df94cu: goto label_2df94c;
        default: break;
    }

    ctx->pc = 0x2df760u;

    // 0x2df760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df764: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2df764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2df768: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2df768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2df76c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df770: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2df770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df774: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2df774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2df778: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2df778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2df77c: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x2DF77Cu;
    {
        const bool branch_taken_0x2df77c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2df77c) {
            ctx->pc = 0x2DF8E8u;
            goto label_2df8e8;
        }
    }
    ctx->pc = 0x2DF784u;
    // 0x2df784: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2df784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df788: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2DF788u;
    {
        const bool branch_taken_0x2df788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2df788) {
            ctx->pc = 0x2DF8ACu;
            goto label_2df8ac;
        }
    }
    ctx->pc = 0x2DF790u;
    // 0x2df790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2df790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df794: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DF794u;
    {
        const bool branch_taken_0x2df794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2df794) {
            ctx->pc = 0x2DF834u;
            goto label_2df834;
        }
    }
    ctx->pc = 0x2DF79Cu;
    // 0x2df79c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF79Cu;
    {
        const bool branch_taken_0x2df79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df79c) {
            ctx->pc = 0x2DF7ACu;
            goto label_2df7ac;
        }
    }
    ctx->pc = 0x2DF7A4u;
    // 0x2df7a4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2DF7A4u;
    {
        const bool branch_taken_0x2df7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df7a4) {
            ctx->pc = 0x2DF9C8u;
            goto label_2df9c8;
        }
    }
    ctx->pc = 0x2DF7ACu;
label_2df7ac:
    // 0x2df7ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df7b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df7b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2df7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2df7b8: 0x2406050d  addiu       $a2, $zero, 0x50D
    ctx->pc = 0x2df7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1293));
    // 0x2df7bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2df7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df7c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2df7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df7c4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DF7C4u;
    SET_GPR_U32(ctx, 31, 0x2DF7CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DF7C4u, 0x2DF7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF7CCu;
label_2df7cc:
    // 0x2df7cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df7d0: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x2df7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x2df7d4: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2df7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2df7d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2df7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2df7dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2df7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2df7e0: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x2df7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x2df7e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df7e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2df7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2df7ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2df7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2df7f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2df7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2df7f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF7F4u;
    {
        const bool branch_taken_0x2df7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df7f4) {
            ctx->pc = 0x2DF808u;
            goto label_2df808;
        }
    }
    ctx->pc = 0x2DF7FCu;
    // 0x2df7fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2df7fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df800: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df804: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2df804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2df808:
    // 0x2df808: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2df808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2df80c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df810: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2df810u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2df814: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2df814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2df818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2df818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df81c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df820: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2df820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x2df824: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df828: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2df828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df82c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df830: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2df830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2df834:
    // 0x2df834: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df838: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2df838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2df83c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2df83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2df840: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2df840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2df844: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2df844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2df848: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df84c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df84cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df850: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DF850u;
    SET_GPR_U32(ctx, 31, 0x2DF858u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DF850u, 0x2DF858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF858u;
label_2df858:
    // 0x2df858: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df85c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DF85Cu;
    SET_GPR_U32(ctx, 31, 0x2DF864u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DF85Cu, 0x2DF864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF864u;
label_2df864:
    // 0x2df864: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df868: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2df868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2df86c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DF86Cu;
    SET_GPR_U32(ctx, 31, 0x2DF874u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DF86Cu, 0x2DF874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF874u;
label_2df874:
    // 0x2df874: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df878: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x2DF878u;
    SET_GPR_U32(ctx, 31, 0x2DF880u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x2DF878u, 0x2DF880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF880u;
label_2df880:
    // 0x2df880: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DF880u;
    {
        const bool branch_taken_0x2df880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df880) {
            ctx->pc = 0x2DF898u;
            goto label_2df898;
        }
    }
    ctx->pc = 0x2DF888u;
    // 0x2df888: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df88c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2df88cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df894: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2df894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2df898:
    // 0x2df898: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df89c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DF89Cu;
    SET_GPR_U32(ctx, 31, 0x2DF8A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DF89Cu, 0x2DF8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF8A4u;
label_2df8a4:
    // 0x2df8a4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2DF8A4u;
    {
        const bool branch_taken_0x2df8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df8a4) {
            ctx->pc = 0x2DF9C8u;
            goto label_2df9c8;
        }
    }
    ctx->pc = 0x2DF8ACu;
label_2df8ac:
    // 0x2df8ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df8b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df8b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2df8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2df8b8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2df8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2df8bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2df8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df8c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2df8c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df8c4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DF8C4u;
    SET_GPR_U32(ctx, 31, 0x2DF8CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DF8C4u, 0x2DF8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF8CCu;
label_2df8cc:
    // 0x2df8cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2df8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df8d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df8d4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2df8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2df8d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df8dc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2df8dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df8e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df8e4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2df8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2df8e8:
    // 0x2df8e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df8ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df8ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df8f0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DF8F0u;
    SET_GPR_U32(ctx, 31, 0x2DF8F8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DF8F0u, 0x2DF8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF8F8u;
label_2df8f8:
    // 0x2df8f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df8fc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DF8FCu;
    SET_GPR_U32(ctx, 31, 0x2DF904u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DF8FCu, 0x2DF904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF904u;
label_2df904:
    // 0x2df904: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df908: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df908u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df90c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DF90Cu;
    SET_GPR_U32(ctx, 31, 0x2DF914u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DF90Cu, 0x2DF914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF914u;
label_2df914:
    // 0x2df914: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df918: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DF918u;
    SET_GPR_U32(ctx, 31, 0x2DF920u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DF918u, 0x2DF920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF920u;
label_2df920:
    // 0x2df920: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df924: 0x8c6312c4  lw          $v1, 0x12C4($v1)
    ctx->pc = 0x2df924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4804)));
    // 0x2df928: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2df928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2df92c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DF92Cu;
    {
        const bool branch_taken_0x2df92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df92c) {
            ctx->pc = 0x2DF98Cu;
            goto label_2df98c;
        }
    }
    ctx->pc = 0x2DF934u;
    // 0x2df934: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df938: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df93c: 0xc46c12d0  lwc1        $f12, 0x12D0($v1)
    ctx->pc = 0x2df93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2df940: 0xc44d12d8  lwc1        $f13, 0x12D8($v0)
    ctx->pc = 0x2df940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2df944: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2DF944u;
    SET_GPR_U32(ctx, 31, 0x2DF94Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DF944u, 0x2DF94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF94Cu;
label_2df94c:
    // 0x2df94c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df950: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2df950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x2df954: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df958: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df95c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df95cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df960: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2df960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2df964: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df968: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df96c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df970: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df970u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df974: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df978: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df97c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df980: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df984: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DF984u;
    {
        const bool branch_taken_0x2df984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df984) {
            ctx->pc = 0x2DF9C8u;
            goto label_2df9c8;
        }
    }
    ctx->pc = 0x2DF98Cu;
label_2df98c:
    // 0x2df98c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df990: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2df990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2df994: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DF994u;
    {
        const bool branch_taken_0x2df994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df994) {
            ctx->pc = 0x2DF9C8u;
            goto label_2df9c8;
        }
    }
    ctx->pc = 0x2DF99Cu;
    // 0x2df99c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df9a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df9a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df9a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df9ac: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2df9acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df9b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df9b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df9b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df9bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df9c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df9c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2df9c8:
    // 0x2df9c8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2df9c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df9cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2df9ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2df9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF9D8u;
}
