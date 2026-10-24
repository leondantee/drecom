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

// Function: Em18_R1_escape_R
// Address: 0x2df3d0 - 0x2df584
void Em18_R1_escape_R_0x2df3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_escape_R_0x2df3d0");
#endif

    switch (ctx->pc) {
        case 0x2df43cu: goto label_2df43c;
        case 0x2df4a8u: goto label_2df4a8;
        case 0x2df4b4u: goto label_2df4b4;
        case 0x2df4c4u: goto label_2df4c4;
        case 0x2df4d0u: goto label_2df4d0;
        default: break;
    }

    ctx->pc = 0x2df3d0u;

    // 0x2df3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df3d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2df3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2df3d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2df3dc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2df3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2df3e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df3e4: 0x247010b0  addiu       $s0, $v1, 0x10B0
    ctx->pc = 0x2df3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x2df3e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df3ec: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2df3ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df3f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2df3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2df3f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2df3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df3f8: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DF3F8u;
    {
        const bool branch_taken_0x2df3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2df3f8) {
            ctx->pc = 0x2DF458u;
            goto label_2df458;
        }
    }
    ctx->pc = 0x2DF400u;
    // 0x2df400: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF400u;
    {
        const bool branch_taken_0x2df400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df400) {
            ctx->pc = 0x2DF410u;
            goto label_2df410;
        }
    }
    ctx->pc = 0x2DF408u;
    // 0x2df408: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2DF408u;
    {
        const bool branch_taken_0x2df408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df408) {
            ctx->pc = 0x2DF570u;
            goto label_2df570;
        }
    }
    ctx->pc = 0x2DF410u;
label_2df410:
    // 0x2df410: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2df410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2df414: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df418: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2df418u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2df41c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df420: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df424: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2df424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2df428: 0x24060a25  addiu       $a2, $zero, 0xA25
    ctx->pc = 0x2df428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2597));
    // 0x2df42c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2df42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2df430: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2df430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df434: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DF434u;
    SET_GPR_U32(ctx, 31, 0x2DF43Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DF434u, 0x2DF43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF43Cu;
label_2df43c:
    // 0x2df43c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2df43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2df440: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df444: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2df444u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2df448: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df44c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2df44cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df450: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df454: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2df454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2df458:
    // 0x2df458: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df45c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2df45cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2df460: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2df460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2df464: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2df464u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2df468: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df46c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2df46cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2df470: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2df470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2df474: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2df474u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2df478: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DF478u;
    {
        const bool branch_taken_0x2df478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df478) {
            ctx->pc = 0x2DF498u;
            goto label_2df498;
        }
    }
    ctx->pc = 0x2DF480u;
    // 0x2df480: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df484: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x2df484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x2df488: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2df488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2df48c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2df48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2df490: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2df490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2df494: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x2df494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
label_2df498:
    // 0x2df498: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df49c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df49cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df4a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DF4A0u;
    SET_GPR_U32(ctx, 31, 0x2DF4A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DF4A0u, 0x2DF4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF4A8u;
label_2df4a8:
    // 0x2df4a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df4ac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DF4ACu;
    SET_GPR_U32(ctx, 31, 0x2DF4B4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DF4ACu, 0x2DF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF4B4u;
label_2df4b4:
    // 0x2df4b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df4b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df4b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df4bc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DF4BCu;
    SET_GPR_U32(ctx, 31, 0x2DF4C4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DF4BCu, 0x2DF4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF4C4u;
label_2df4c4:
    // 0x2df4c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df4c8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DF4C8u;
    SET_GPR_U32(ctx, 31, 0x2DF4D0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DF4C8u, 0x2DF4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF4D0u;
label_2df4d0:
    // 0x2df4d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df4d4: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2df4d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2df4d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2df4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2df4dc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2df4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2df4e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DF4E0u;
    {
        const bool branch_taken_0x2df4e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df4e0) {
            ctx->pc = 0x2DF520u;
            goto label_2df520;
        }
    }
    ctx->pc = 0x2DF4E8u;
    // 0x2df4e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df4ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df4f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df4f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2df4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df4f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df4fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df500: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df504: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df508: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df50c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df50cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df510: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df514: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df518: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DF518u;
    {
        const bool branch_taken_0x2df518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df518) {
            ctx->pc = 0x2DF570u;
            goto label_2df570;
        }
    }
    ctx->pc = 0x2DF520u;
label_2df520:
    // 0x2df520: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df524: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2df524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2df528: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DF528u;
    {
        const bool branch_taken_0x2df528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df528) {
            ctx->pc = 0x2DF570u;
            goto label_2df570;
        }
    }
    ctx->pc = 0x2DF530u;
    // 0x2df530: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df534: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x2df534u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df53c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df540: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df544: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2df544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df548: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df54c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df54cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df550: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df554: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df554u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df558: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df55c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df55cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df560: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df564: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df568: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DF568u;
    {
        const bool branch_taken_0x2df568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df568) {
            ctx->pc = 0x2DF570u;
            goto label_2df570;
        }
    }
    ctx->pc = 0x2DF570u;
label_2df570:
    // 0x2df570: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2df570u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df578: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df57c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF584u;
}
