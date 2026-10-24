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

// Function: entry_002257b4
// Address: 0x2257b4 - 0x2258c0
void entry_002257b4_0x2257b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002257b4_0x2257b4");
#endif

    switch (ctx->pc) {
        case 0x225834u: goto label_225834;
        case 0x225858u: goto label_225858;
        case 0x2258a4u: goto label_2258a4;
        default: break;
    }

    ctx->pc = 0x2257b4u;

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
            return;
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
            return;
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
            return;
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
    ctx->pc = 0x2258c0u;
}
