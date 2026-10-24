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

// Function: Em0e_R1_br_mv02
// Address: 0x2442c0 - 0x244618
void Em0e_R1_br_mv02_0x2442c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_br_mv02_0x2442c0");
#endif

    switch (ctx->pc) {
        case 0x244314u: goto label_244314;
        case 0x244390u: goto label_244390;
        case 0x2443b4u: goto label_2443b4;
        case 0x244420u: goto label_244420;
        case 0x244428u: goto label_244428;
        case 0x2444d0u: goto label_2444d0;
        case 0x244538u: goto label_244538;
        case 0x244580u: goto label_244580;
        default: break;
    }

    ctx->pc = 0x2442c0u;

    // 0x2442c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2442c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2442c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2442c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2442c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2442c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2442cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2442ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2442d0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2442d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2442d4: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2442D4u;
    {
        const bool branch_taken_0x2442d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2442d4) {
            ctx->pc = 0x244444u;
            goto label_244444;
        }
    }
    ctx->pc = 0x2442DCu;
    // 0x2442dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2442dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2442e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2442e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2442e4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2442e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2442e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2442e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2442ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2442ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2442f0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2442f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2442f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2442f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2442f8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2442f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2442fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2442fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244300: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x244300u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244304: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244308: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x244308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x24430c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24430Cu;
    SET_GPR_U32(ctx, 31, 0x244314u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24430Cu, 0x244314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244314u;
label_244314:
    // 0x244314: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x244314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244318: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x244318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x24431c: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x24431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x244320: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x244320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x244324: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x244324u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x244328: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24432c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x24432cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x244330: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244334: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x244334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244338: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x244338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x24433c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x24433cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x244340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244344: 0x0  nop
    ctx->pc = 0x244344u;
    // NOP
    // 0x244348: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24434c: 0x0  nop
    ctx->pc = 0x24434cu;
    // NOP
    // 0x244350: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x244350u;
    {
        const bool branch_taken_0x244350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244350) {
            ctx->pc = 0x2443ACu;
            goto label_2443ac;
        }
    }
    ctx->pc = 0x244358u;
    // 0x244358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24435c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244360: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x244360u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x244364: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x244364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244368: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24436c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x24436cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x244370: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244374: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x244374u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x244378: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24437c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x24437cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244380: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244384: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x244384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x244388: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244388u;
    SET_GPR_U32(ctx, 31, 0x244390u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244388u, 0x244390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244390u;
label_244390:
    // 0x244390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x244390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244394: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x244394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x244398: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x244398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x24439c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x24439cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2443a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2443a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2443a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2443a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2443a8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2443a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2443ac:
    // 0x2443ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2443ACu;
    SET_GPR_U32(ctx, 31, 0x2443B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2443ACu, 0x2443B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2443B4u;
label_2443b4:
    // 0x2443b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2443b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2443b8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2443b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2443bc: 0x14600077  bnez        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x2443BCu;
    {
        const bool branch_taken_0x2443bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2443bc) {
            ctx->pc = 0x24459Cu;
            goto label_24459c;
        }
    }
    ctx->pc = 0x2443C4u;
    // 0x2443c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2443c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2443c8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2443c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2443cc: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x2443ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x2443d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2443d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2443d4: 0x0  nop
    ctx->pc = 0x2443d4u;
    // NOP
    // 0x2443d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2443d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2443dc: 0x0  nop
    ctx->pc = 0x2443dcu;
    // NOP
    // 0x2443e0: 0x4501006e  bc1t        . + 4 + (0x6E << 2)
    ctx->pc = 0x2443E0u;
    {
        const bool branch_taken_0x2443e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2443e0) {
            ctx->pc = 0x24459Cu;
            goto label_24459c;
        }
    }
    ctx->pc = 0x2443E8u;
    // 0x2443e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2443e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2443ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2443ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2443f0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2443f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2443f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2443f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2443f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2443f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2443fc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2443fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x244400: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244404: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x244404u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x244408: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24440c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x24440cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244410: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244414: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x244414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x244418: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244418u;
    SET_GPR_U32(ctx, 31, 0x244420u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244418u, 0x244420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244420u;
label_244420:
    // 0x244420: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x244420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244424: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x244424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_244428:
    // 0x244428: 0x2463008c  addiu       $v1, $v1, 0x8C
    ctx->pc = 0x244428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x24442c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x24442cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x244430: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x244430u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x244434: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244438: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x244438u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x24443c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x24443Cu;
    {
        const bool branch_taken_0x24443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24443c) {
            ctx->pc = 0x24459Cu;
            goto label_24459c;
        }
    }
    ctx->pc = 0x244444u;
label_244444:
    // 0x244444: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x244444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244448: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x244448u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x24444c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24444cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x244450: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x244450u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x244454: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244458: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x244458u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x24445c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x24445cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x244460: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x244460u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x244464: 0x2861003c  slti        $at, $v1, 0x3C
    ctx->pc = 0x244464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x244468: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x244468u;
    {
        const bool branch_taken_0x244468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x244468) {
            ctx->pc = 0x2444ECu;
            goto label_2444ec;
        }
    }
    ctx->pc = 0x244470u;
    // 0x244470: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244474: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x244474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244478: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x244478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x24447c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x24447cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x244480: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244484: 0x0  nop
    ctx->pc = 0x244484u;
    // NOP
    // 0x244488: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x244488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24448c: 0x0  nop
    ctx->pc = 0x24448cu;
    // NOP
    // 0x244490: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x244490u;
    {
        const bool branch_taken_0x244490 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244490) {
            ctx->pc = 0x2444ECu;
            goto label_2444ec;
        }
    }
    ctx->pc = 0x244498u;
    // 0x244498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24449c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444a0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2444a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2444a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2444a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2444a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2444a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444ac: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2444acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2444b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2444b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444b4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2444b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2444b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2444b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444bc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2444bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2444c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2444c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2444c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2444c8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2444C8u;
    SET_GPR_U32(ctx, 31, 0x2444D0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2444C8u, 0x2444D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444D0u;
label_2444d0:
    // 0x2444d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2444d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2444d4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2444d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2444d8: 0x2463008c  addiu       $v1, $v1, 0x8C
    ctx->pc = 0x2444d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x2444dc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2444dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2444e0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2444e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2444e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2444e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444e8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x2444e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_2444ec:
    // 0x2444ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2444ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444f0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2444f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2444f4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2444f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2444f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2444f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2444fc: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x2444fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x244500: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x244500u;
    {
        const bool branch_taken_0x244500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x244500) {
            ctx->pc = 0x24459Cu;
            goto label_24459c;
        }
    }
    ctx->pc = 0x244508u;
    // 0x244508: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24450c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x24450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244510: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x244510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x244514: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x244514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x244518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24451c: 0x0  nop
    ctx->pc = 0x24451cu;
    // NOP
    // 0x244520: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244524: 0x0  nop
    ctx->pc = 0x244524u;
    // NOP
    // 0x244528: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x244528u;
    {
        const bool branch_taken_0x244528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244528) {
            ctx->pc = 0x24459Cu;
            goto label_24459c;
        }
    }
    ctx->pc = 0x244530u;
    // 0x244530: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244530u;
    SET_GPR_U32(ctx, 31, 0x244538u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244530u, 0x244538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244538u;
label_244538:
    // 0x244538: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x244538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24453c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x24453cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x244540: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x244540u;
    {
        const bool branch_taken_0x244540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x244540) {
            ctx->pc = 0x24459Cu;
            goto label_24459c;
        }
    }
    ctx->pc = 0x244548u;
    // 0x244548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24454c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244550: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x244550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x244554: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x244554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x244558: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24455c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x24455cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x244560: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244564: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x244564u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x244568: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24456c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x24456cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244570: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244574: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x244574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x244578: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244578u;
    SET_GPR_U32(ctx, 31, 0x244580u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244578u, 0x244580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244580u;
label_244580:
    // 0x244580: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x244580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244584: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x244584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x244588: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x244588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x24458c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x24458cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x244590: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x244590u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x244594: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244598: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x244598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_24459c:
    // 0x24459c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2445a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2445a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2445a4: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x2445a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2445a8: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2445A8u;
    {
        const bool branch_taken_0x2445a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2445a8) {
            ctx->pc = 0x244608u;
            goto label_244608;
        }
    }
    ctx->pc = 0x2445B0u;
    // 0x2445b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2445b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2445b4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2445b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2445b8: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x2445b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x2445bc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2445bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2445c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2445c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2445c4: 0x0  nop
    ctx->pc = 0x2445c4u;
    // NOP
    // 0x2445c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2445c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2445cc: 0x0  nop
    ctx->pc = 0x2445ccu;
    // NOP
    // 0x2445d0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2445D0u;
    {
        const bool branch_taken_0x2445d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2445d0) {
            ctx->pc = 0x244608u;
            goto label_244608;
        }
    }
    ctx->pc = 0x2445D8u;
    // 0x2445d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2445d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2445dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2445dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2445e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2445e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2445e4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2445e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2445e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2445e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2445ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2445ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2445f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2445f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2445f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2445f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2445f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2445f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2445fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2445fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244600: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244604: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x244604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_244608:
    // 0x244608: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x244608u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24460c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24460cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x244610: 0x3e00008  jr          $ra
    ctx->pc = 0x244610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244618u;
}
