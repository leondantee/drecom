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

// Function: Em0c_R1_br_mv02
// Address: 0x225730 - 0x225b38
void Em0c_R1_br_mv02_0x225730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_br_mv02_0x225730");
#endif

    switch (ctx->pc) {
        case 0x225790u: goto label_225790;
        case 0x225834u: goto label_225834;
        case 0x225858u: goto label_225858;
        case 0x2258a4u: goto label_2258a4;
        case 0x225980u: goto label_225980;
        case 0x225a1cu: goto label_225a1c;
        default: break;
    }

    ctx->pc = 0x225730u;

    // 0x225730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225734: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x225734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x225738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22573c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x22573cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x225740: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x225740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x225744: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x225744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x225748: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22574c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x22574cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x225750: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x225750u;
    {
        const bool branch_taken_0x225750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225750) {
            ctx->pc = 0x2257B4u;
            goto label_2257b4;
        }
    }
    ctx->pc = 0x225758u;
    // 0x225758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22575c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225760: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x225760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x225764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225768: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22576c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22576cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x225770: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225774: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x225774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x225778: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22577c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22577cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225780: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225784: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x225784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x225788: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225788u;
    SET_GPR_U32(ctx, 31, 0x225790u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225788u, 0x225790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225790u;
label_225790:
    // 0x225790: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x225790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225794: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x225794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x225798: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x225798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22579c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22579cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2257a0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2257a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2257a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2257a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2257a8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x2257a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x2257ac: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2257ACu;
    {
        const bool branch_taken_0x2257ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2257ac) {
            ctx->pc = 0x2258C0u;
            goto label_2258c0;
        }
    }
    ctx->pc = 0x2257B4u;
label_2257b4:
    // 0x2257b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2257b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2257b8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2257b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2257bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2257bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2257c0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2257c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2257c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2257c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2257c8: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2257c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2257cc: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x2257ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x2257d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2257d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2257d4: 0x0  nop
    ctx->pc = 0x2257d4u;
    // NOP
    // 0x2257d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2257d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2257dc: 0x0  nop
    ctx->pc = 0x2257dcu;
    // NOP
    // 0x2257e0: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x2257E0u;
    {
        const bool branch_taken_0x2257e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2257e0) {
            ctx->pc = 0x2258C0u;
            goto label_2258c0;
        }
    }
    ctx->pc = 0x2257E8u;
    // 0x2257e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2257e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2257ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2257ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2257f0: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x2257f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2257f4: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2257F4u;
    {
        const bool branch_taken_0x2257f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2257f4) {
            ctx->pc = 0x2258C0u;
            goto label_2258c0;
        }
    }
    ctx->pc = 0x2257FCu;
    // 0x2257fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2257fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225800: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225804: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x225804u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x225808: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x225808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22580c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225810: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x225810u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x225814: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225818: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x225818u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22581c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225820: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x225820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225824: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225828: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x225828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22582c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22582Cu;
    SET_GPR_U32(ctx, 31, 0x225834u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22582Cu, 0x225834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225834u;
label_225834:
    // 0x225834: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x225834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225838: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x225838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x22583c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x22583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x225840: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x225840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x225844: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x225844u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x225848: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22584c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22584cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x225850: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225850u;
    SET_GPR_U32(ctx, 31, 0x225858u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225850u, 0x225858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225858u;
label_225858:
    // 0x225858: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x225858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22585c: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x22585cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x225860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225864: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x225864u;
    {
        const bool branch_taken_0x225864 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x225864) {
            ctx->pc = 0x2258C0u;
            goto label_2258c0;
        }
    }
    ctx->pc = 0x22586Cu;
    // 0x22586c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22586cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225870: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225874: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x225874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x225878: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x225878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22587c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22587cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225880: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x225880u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x225884: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225888: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x225888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22588c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225890: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x225890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225894: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225898: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x225898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22589c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22589Cu;
    SET_GPR_U32(ctx, 31, 0x2258A4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22589Cu, 0x2258A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2258A4u;
label_2258a4:
    // 0x2258a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2258a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2258a8: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2258a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2258ac: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x2258acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x2258b0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2258b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2258b4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2258b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2258b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2258b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2258bc: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x2258bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_2258c0:
    // 0x2258c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2258c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2258c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2258c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2258c8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x2258c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2258cc: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x2258ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x2258d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2258D0u;
    {
        const bool branch_taken_0x2258d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2258d0) {
            ctx->pc = 0x225908u;
            goto label_225908;
        }
    }
    ctx->pc = 0x2258D8u;
    // 0x2258d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2258d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2258dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2258dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2258e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2258e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2258e4: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x2258e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2258e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2258e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2258ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2258ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2258f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2258f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2258f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2258f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2258f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2258f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2258fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2258fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225900: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225904: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_225908:
    // 0x225908: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x225908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22590c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x22590cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x225910: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x225910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x225914: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x225914u;
    {
        const bool branch_taken_0x225914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225914) {
            ctx->pc = 0x2259C4u;
            goto label_2259c4;
        }
    }
    ctx->pc = 0x22591Cu;
    // 0x22591c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22591cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x225920: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x225920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x225924: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x225924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x225928: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x225928u;
    {
        const bool branch_taken_0x225928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225928) {
            ctx->pc = 0x2259C4u;
            goto label_2259c4;
        }
    }
    ctx->pc = 0x225930u;
    // 0x225930: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225934: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225938: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x225938u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x22593c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x22593Cu;
    {
        const bool branch_taken_0x22593c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22593c) {
            ctx->pc = 0x2259C4u;
            goto label_2259c4;
        }
    }
    ctx->pc = 0x225944u;
    // 0x225944: 0x8e0413e8  lw          $a0, 0x13E8($s0)
    ctx->pc = 0x225944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x225948: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22594c: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x22594Cu;
    {
        const bool branch_taken_0x22594c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22594c) {
            ctx->pc = 0x2259C4u;
            goto label_2259c4;
        }
    }
    ctx->pc = 0x225954u;
    // 0x225954: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225958: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x225958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22595c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x22595cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x225960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225964: 0x0  nop
    ctx->pc = 0x225964u;
    // NOP
    // 0x225968: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22596c: 0x0  nop
    ctx->pc = 0x22596cu;
    // NOP
    // 0x225970: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x225970u;
    {
        const bool branch_taken_0x225970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225970) {
            ctx->pc = 0x2259C4u;
            goto label_2259c4;
        }
    }
    ctx->pc = 0x225978u;
    // 0x225978: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225978u;
    SET_GPR_U32(ctx, 31, 0x225980u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225978u, 0x225980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225980u;
label_225980:
    // 0x225980: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x225980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225984: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x225984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x225988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22598c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22598Cu;
    {
        const bool branch_taken_0x22598c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22598c) {
            ctx->pc = 0x2259C4u;
            goto label_2259c4;
        }
    }
    ctx->pc = 0x225994u;
    // 0x225994: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225998: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22599c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22599cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2259a0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2259a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2259a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2259a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259a8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2259a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2259ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2259acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259b0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2259b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2259b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2259b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259b8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2259b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2259bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2259bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2259c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2259c4:
    // 0x2259c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2259c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2259c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2259cc: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x2259ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2259d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2259d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2259d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2259d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2259d8: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x2259d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x2259dc: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2259DCu;
    {
        const bool branch_taken_0x2259dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2259dc) {
            ctx->pc = 0x225A48u;
            goto label_225a48;
        }
    }
    ctx->pc = 0x2259E4u;
    // 0x2259e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2259e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2259e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2259e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259ec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2259ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2259f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2259f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2259f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2259f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259f8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2259f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2259fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2259fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a00: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x225a00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x225a04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a08: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x225a08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225a0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x225a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x225a14: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225A14u;
    SET_GPR_U32(ctx, 31, 0x225A1Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225A14u, 0x225A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A1Cu;
label_225a1c:
    // 0x225a1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x225a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225a20: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x225a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x225a24: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x225a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x225a28: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x225a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x225a2c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x225a2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x225a30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a34: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x225a34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x225a38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225a3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225a44: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x225a44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
label_225a48:
    // 0x225a48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x225a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x225a4c: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x225a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x225a50: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x225a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x225a54: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x225a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x225a58: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x225a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x225a5c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x225A5Cu;
    {
        const bool branch_taken_0x225a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225a5c) {
            ctx->pc = 0x225A94u;
            goto label_225a94;
        }
    }
    ctx->pc = 0x225A64u;
    // 0x225a64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225a68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x225a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x225a70: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x225a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x225a74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a78: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x225a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x225a7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a80: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x225a80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x225a84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x225a88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225a8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_225a94:
    // 0x225a94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x225a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x225a98: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x225a98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x225a9c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x225a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x225aa0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x225aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x225aa4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x225aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x225aa8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x225AA8u;
    {
        const bool branch_taken_0x225aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225aa8) {
            ctx->pc = 0x225AE0u;
            goto label_225ae0;
        }
    }
    ctx->pc = 0x225AB0u;
    // 0x225ab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225ab4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ab8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x225ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x225abc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x225abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x225ac0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ac4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x225ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x225ac8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225acc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x225accu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x225ad0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ad4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x225ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225ad8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225adc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_225ae0:
    // 0x225ae0: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x225ae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x225ae4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x225ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x225ae8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x225ae8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x225aec: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x225AECu;
    {
        const bool branch_taken_0x225aec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x225aec) {
            ctx->pc = 0x225B24u;
            goto label_225b24;
        }
    }
    ctx->pc = 0x225AF4u;
    // 0x225af4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225af8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225afc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x225afcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x225b00: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x225b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x225b04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225b08: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x225b08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x225b0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225b10: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x225b10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x225b14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225b18: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x225b18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225b1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225b20: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_225b24:
    // 0x225b24: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x225b24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225b2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x225b2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x225b30: 0x3e00008  jr          $ra
    ctx->pc = 0x225B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225B38u;
}
