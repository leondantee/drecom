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

// Function: Em0c_R1_br_mv03
// Address: 0x226380 - 0x226828
void Em0c_R1_br_mv03_0x226380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_br_mv03_0x226380");
#endif

    switch (ctx->pc) {
        case 0x226408u: goto label_226408;
        case 0x22642cu: goto label_22642c;
        case 0x226474u: goto label_226474;
        case 0x226504u: goto label_226504;
        case 0x226528u: goto label_226528;
        case 0x2265e0u: goto label_2265e0;
        case 0x22667cu: goto label_22667c;
        case 0x2266a0u: goto label_2266a0;
        default: break;
    }

    ctx->pc = 0x226380u;

    // 0x226380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226384: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x226384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x226388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22638c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x22638cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x226390: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x226390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x226394: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x226394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x226398: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22639c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x22639cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2263a0: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2263A0u;
    {
        const bool branch_taken_0x2263a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2263a0) {
            ctx->pc = 0x226498u;
            goto label_226498;
        }
    }
    ctx->pc = 0x2263A8u;
    // 0x2263a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2263a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2263ac: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2263acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2263b0: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x2263b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x2263b4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2263b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2263b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2263b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2263bc: 0x0  nop
    ctx->pc = 0x2263bcu;
    // NOP
    // 0x2263c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2263c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2263c4: 0x0  nop
    ctx->pc = 0x2263c4u;
    // NOP
    // 0x2263c8: 0x45010067  bc1t        . + 4 + (0x67 << 2)
    ctx->pc = 0x2263C8u;
    {
        const bool branch_taken_0x2263c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2263c8) {
            ctx->pc = 0x226568u;
            goto label_226568;
        }
    }
    ctx->pc = 0x2263D0u;
    // 0x2263d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2263d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2263d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2263d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2263d8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2263d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2263dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2263dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2263e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2263e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2263e4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2263e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2263e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2263e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2263ec: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2263ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2263f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2263f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2263f4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2263f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2263f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2263f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2263fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2263fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x226400: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226400u;
    SET_GPR_U32(ctx, 31, 0x226408u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226400u, 0x226408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226408u;
label_226408:
    // 0x226408: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x226408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22640c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22640cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x226410: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x226410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x226414: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x226414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x226418: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x226418u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22641c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226420: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x226420u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x226424: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226424u;
    SET_GPR_U32(ctx, 31, 0x22642Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226424u, 0x22642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22642Cu;
label_22642c:
    // 0x22642c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22642cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226430: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x226430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x226434: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x226434u;
    {
        const bool branch_taken_0x226434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x226434) {
            ctx->pc = 0x226568u;
            goto label_226568;
        }
    }
    ctx->pc = 0x22643Cu;
    // 0x22643c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22643cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226440: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226444: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x226444u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x226448: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x226448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22644c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22644cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226450: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x226450u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x226454: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226458: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x226458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22645c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226460: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x226460u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x226464: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226468: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x226468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22646c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22646Cu;
    SET_GPR_U32(ctx, 31, 0x226474u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22646Cu, 0x226474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226474u;
label_226474:
    // 0x226474: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x226474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226478: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x226478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22647c: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x22647cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x226480: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x226480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x226484: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x226484u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x226488: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22648c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x22648cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x226490: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x226490u;
    {
        const bool branch_taken_0x226490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226490) {
            ctx->pc = 0x226568u;
            goto label_226568;
        }
    }
    ctx->pc = 0x226498u;
label_226498:
    // 0x226498: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22649c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x22649cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2264a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2264a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2264a4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2264a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2264a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2264a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2264ac: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2264acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2264b0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x2264b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x2264b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2264b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2264b8: 0x0  nop
    ctx->pc = 0x2264b8u;
    // NOP
    // 0x2264bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2264bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2264c0: 0x0  nop
    ctx->pc = 0x2264c0u;
    // NOP
    // 0x2264c4: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x2264C4u;
    {
        const bool branch_taken_0x2264c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2264c4) {
            ctx->pc = 0x226568u;
            goto label_226568;
        }
    }
    ctx->pc = 0x2264CCu;
    // 0x2264cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2264ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2264d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2264d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2264d4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2264d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2264d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2264d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2264dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2264dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2264e0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2264e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2264e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2264e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2264e8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2264e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2264ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2264ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2264f0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2264f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2264f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2264f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2264f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2264f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2264fc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2264FCu;
    SET_GPR_U32(ctx, 31, 0x226504u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2264FCu, 0x226504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226504u;
label_226504:
    // 0x226504: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x226504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226508: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x226508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22650c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x22650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x226510: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x226510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x226514: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x226514u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226518: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22651c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22651cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x226520: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226520u;
    SET_GPR_U32(ctx, 31, 0x226528u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226520u, 0x226528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226528u;
label_226528:
    // 0x226528: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x226528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22652c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22652cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x226530: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x226530u;
    {
        const bool branch_taken_0x226530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226530) {
            ctx->pc = 0x226568u;
            goto label_226568;
        }
    }
    ctx->pc = 0x226538u;
    // 0x226538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22653c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226540: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x226540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x226544: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x226544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226548: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22654c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22654cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x226550: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226554: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x226554u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226558: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22655c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22655cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x226560: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226564: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x226564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_226568:
    // 0x226568: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x226568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22656c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x22656cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x226570: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x226570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x226574: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x226574u;
    {
        const bool branch_taken_0x226574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226574) {
            ctx->pc = 0x226624u;
            goto label_226624;
        }
    }
    ctx->pc = 0x22657Cu;
    // 0x22657c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22657cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x226580: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x226580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x226584: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x226584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x226588: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x226588u;
    {
        const bool branch_taken_0x226588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226588) {
            ctx->pc = 0x226624u;
            goto label_226624;
        }
    }
    ctx->pc = 0x226590u;
    // 0x226590: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226594: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226598: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x226598u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x22659c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x22659Cu;
    {
        const bool branch_taken_0x22659c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22659c) {
            ctx->pc = 0x226624u;
            goto label_226624;
        }
    }
    ctx->pc = 0x2265A4u;
    // 0x2265a4: 0x8e0413e8  lw          $a0, 0x13E8($s0)
    ctx->pc = 0x2265a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x2265a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2265a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2265ac: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2265ACu;
    {
        const bool branch_taken_0x2265ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2265ac) {
            ctx->pc = 0x226624u;
            goto label_226624;
        }
    }
    ctx->pc = 0x2265B4u;
    // 0x2265b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2265b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2265b8: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2265b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2265bc: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x2265bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x2265c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2265c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2265c4: 0x0  nop
    ctx->pc = 0x2265c4u;
    // NOP
    // 0x2265c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2265c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2265cc: 0x0  nop
    ctx->pc = 0x2265ccu;
    // NOP
    // 0x2265d0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2265D0u;
    {
        const bool branch_taken_0x2265d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2265d0) {
            ctx->pc = 0x226624u;
            goto label_226624;
        }
    }
    ctx->pc = 0x2265D8u;
    // 0x2265d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2265D8u;
    SET_GPR_U32(ctx, 31, 0x2265E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2265D8u, 0x2265E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2265E0u;
label_2265e0:
    // 0x2265e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2265e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2265e4: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2265e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2265e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2265e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2265ec: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2265ECu;
    {
        const bool branch_taken_0x2265ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2265ec) {
            ctx->pc = 0x226624u;
            goto label_226624;
        }
    }
    ctx->pc = 0x2265F4u;
    // 0x2265f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2265f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2265f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2265f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2265fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2265fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x226600: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x226600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x226604: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226608: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x226608u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x22660c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226610: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x226610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226618: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x226618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22661c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22661cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226620: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x226620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_226624:
    // 0x226624: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226628: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22662c: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x22662cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x226630: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x226630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x226634: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x226634u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226638: 0x2861002e  slti        $at, $v1, 0x2E
    ctx->pc = 0x226638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x22663c: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x22663Cu;
    {
        const bool branch_taken_0x22663c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22663c) {
            ctx->pc = 0x2266F0u;
            goto label_2266f0;
        }
    }
    ctx->pc = 0x226644u;
    // 0x226644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226648: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22664c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22664cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x226650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226654: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226658: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x226658u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22665c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226660: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x226660u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226664: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226668: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x226668u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22666c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226670: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x226670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x226674: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226674u;
    SET_GPR_U32(ctx, 31, 0x22667Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226674u, 0x22667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22667Cu;
label_22667c:
    // 0x22667c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22667cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226680: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x226680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x226684: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x226684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x226688: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x226688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22668c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22668cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226690: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226694: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x226694u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x226698: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226698u;
    SET_GPR_U32(ctx, 31, 0x2266A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226698u, 0x2266A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266A0u;
label_2266a0:
    // 0x2266a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2266a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2266a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2266a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2266a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2266A8u;
    {
        const bool branch_taken_0x2266a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2266a8) {
            ctx->pc = 0x2266E0u;
            goto label_2266e0;
        }
    }
    ctx->pc = 0x2266B0u;
    // 0x2266b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2266b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2266b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2266b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2266bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2266bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2266c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2266c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2266c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2266ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2266d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2266d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2266d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2266dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2266e0:
    // 0x2266e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2266e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2266e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2266e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2266ec: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x2266ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
label_2266f0:
    // 0x2266f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2266f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2266f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2266f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2266f8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x2266f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2266fc: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x2266fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x226700: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x226700u;
    {
        const bool branch_taken_0x226700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226700) {
            ctx->pc = 0x226738u;
            goto label_226738;
        }
    }
    ctx->pc = 0x226708u;
    // 0x226708: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22670c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226710: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x226710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x226714: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x226714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x226718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22671c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22671cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x226720: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226724: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x226724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226728: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22672c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22672cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x226730: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226734: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x226734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_226738:
    // 0x226738: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x226738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22673c: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x22673cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x226740: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x226740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x226744: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x226744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x226748: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x226748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22674c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22674Cu;
    {
        const bool branch_taken_0x22674c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22674c) {
            ctx->pc = 0x226784u;
            goto label_226784;
        }
    }
    ctx->pc = 0x226754u;
    // 0x226754: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226758: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22675c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22675cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x226760: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x226760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x226764: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226768: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x226768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x22676c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22676cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226770: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x226770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226774: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226778: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x226778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22677c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22677cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226780: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x226780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_226784:
    // 0x226784: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x226784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x226788: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x226788u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x22678c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x22678cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x226790: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x226790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x226794: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x226794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x226798: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x226798u;
    {
        const bool branch_taken_0x226798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226798) {
            ctx->pc = 0x2267D0u;
            goto label_2267d0;
        }
    }
    ctx->pc = 0x2267A0u;
    // 0x2267a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2267a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2267a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2267a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2267ac: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2267acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2267b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267b4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2267b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2267b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2267bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2267c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2267c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2267c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2267ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2267d0:
    // 0x2267d0: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x2267d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x2267d4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2267d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2267d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2267d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2267dc: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2267DCu;
    {
        const bool branch_taken_0x2267dc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2267dc) {
            ctx->pc = 0x226814u;
            goto label_226814;
        }
    }
    ctx->pc = 0x2267E4u;
    // 0x2267e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2267e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2267e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2267ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2267f0: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2267f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2267f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2267f8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2267f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2267fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2267fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226800: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x226800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226804: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226808: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x226808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22680c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226810: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x226810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_226814:
    // 0x226814: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x226814u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22681c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22681cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x226820: 0x3e00008  jr          $ra
    ctx->pc = 0x226820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226828u;
}
