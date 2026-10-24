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

// Function: Emr_em10_routin
// Address: 0x33c300 - 0x33c4bc
void Emr_em10_routin_0x33c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Emr_em10_routin_0x33c300");
#endif

    ctx->pc = 0x33c300u;

    // 0x33c300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33c304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33c308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33c30c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x33c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x33c310: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33c310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33c314: 0x24505450  addiu       $s0, $v0, 0x5450
    ctx->pc = 0x33c314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21584));
    // 0x33c318: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33c31c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x33c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x33c320: 0x8e1100b0  lw          $s1, 0xB0($s0)
    ctx->pc = 0x33c320u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x895500u));
    // 0x33c324: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x33c324u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x89545Eu));
    // 0x33c328: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33c328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c32c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33c32cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33c330: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33c330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33c334: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c33c: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33c340: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33c340u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c344: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x33c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x33c348: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33c348u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33c34c: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x33c34cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x33c350: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33c350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c354: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33c354u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33c358: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33c358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33c35c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c364: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x33c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x33c368: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x33c368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x33c36c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x33c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x33c370: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x33C370u;
    {
        const bool branch_taken_0x33c370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c370) {
            ctx->pc = 0x33C498u;
            goto label_33c498;
        }
    }
    ctx->pc = 0x33C378u;
    // 0x33c378: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x33c378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x33c37c: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x33C37Cu;
    {
        const bool branch_taken_0x33c37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c37c) {
            ctx->pc = 0x33C48Cu;
            goto label_33c48c;
        }
    }
    ctx->pc = 0x33C384u;
    // 0x33c384: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x33c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x33c388: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x33C388u;
    {
        const bool branch_taken_0x33c388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c388) {
            ctx->pc = 0x33C480u;
            goto label_33c480;
        }
    }
    ctx->pc = 0x33C390u;
    // 0x33c390: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x33c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x33c394: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x33C394u;
    {
        const bool branch_taken_0x33c394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c394) {
            ctx->pc = 0x33C474u;
            goto label_33c474;
        }
    }
    ctx->pc = 0x33C39Cu;
    // 0x33c39c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x33c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x33c3a0: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x33C3A0u;
    {
        const bool branch_taken_0x33c3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c3a0) {
            ctx->pc = 0x33C468u;
            goto label_33c468;
        }
    }
    ctx->pc = 0x33C3A8u;
    // 0x33c3a8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x33c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x33c3ac: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x33C3ACu;
    {
        const bool branch_taken_0x33c3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c3ac) {
            ctx->pc = 0x33C45Cu;
            goto label_33c45c;
        }
    }
    ctx->pc = 0x33C3B4u;
    // 0x33c3b4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x33c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x33c3b8: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x33C3B8u;
    {
        const bool branch_taken_0x33c3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c3b8) {
            ctx->pc = 0x33C450u;
            goto label_33c450;
        }
    }
    ctx->pc = 0x33C3C0u;
    // 0x33c3c0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x33c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33c3c4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x33C3C4u;
    {
        const bool branch_taken_0x33c3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c3c4) {
            ctx->pc = 0x33C444u;
            goto label_33c444;
        }
    }
    ctx->pc = 0x33C3CCu;
    // 0x33c3cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33c3d0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x33C3D0u;
    {
        const bool branch_taken_0x33c3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c3d0) {
            ctx->pc = 0x33C438u;
            goto label_33c438;
        }
    }
    ctx->pc = 0x33C3D8u;
    // 0x33c3d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33c3dc: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33C3DCu;
    {
        const bool branch_taken_0x33c3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c3dc) {
            ctx->pc = 0x33C42Cu;
            goto label_33c42c;
        }
    }
    ctx->pc = 0x33C3E4u;
    // 0x33c3e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33c3e8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C3E8u;
    {
        const bool branch_taken_0x33c3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c3e8) {
            ctx->pc = 0x33C404u;
            goto label_33c404;
        }
    }
    ctx->pc = 0x33C3F0u;
    // 0x33c3f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c3f4: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x33C3F4u;
    {
        const bool branch_taken_0x33c3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c3f4) {
            ctx->pc = 0x33C4A4u;
            goto label_33c4a4;
        }
    }
    ctx->pc = 0x33C3FCu;
    // 0x33c3fc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x33C3FCu;
    {
        const bool branch_taken_0x33c3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c3fc) {
            ctx->pc = 0x33C4A4u;
            goto label_33c4a4;
        }
    }
    ctx->pc = 0x33C404u;
label_33c404:
    // 0x33c404: 0xc62111e4  lwc1        $f1, 0x11E4($s1)
    ctx->pc = 0x33c404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c408: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x33c408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x33c40c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33c40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c410: 0x0  nop
    ctx->pc = 0x33c410u;
    // NOP
    // 0x33c414: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x33c414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33c418: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x33c418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c41c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x33c41cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x33c420: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x33c420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x33c424: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x33C424u;
    {
        const bool branch_taken_0x33c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c424) {
            ctx->pc = 0x33C4A4u;
            goto label_33c4a4;
        }
    }
    ctx->pc = 0x33C42Cu;
label_33c42c:
    // 0x33c42c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c430: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x33C430u;
    {
        const bool branch_taken_0x33c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c430) {
            ctx->pc = 0x33C4A8u;
            goto label_33c4a8;
        }
    }
    ctx->pc = 0x33C438u;
label_33c438:
    // 0x33c438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c43c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x33C43Cu;
    {
        const bool branch_taken_0x33c43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c43c) {
            ctx->pc = 0x33C4A8u;
            goto label_33c4a8;
        }
    }
    ctx->pc = 0x33C444u;
label_33c444:
    // 0x33c444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c448: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x33C448u;
    {
        const bool branch_taken_0x33c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c448) {
            ctx->pc = 0x33C4A8u;
            goto label_33c4a8;
        }
    }
    ctx->pc = 0x33C450u;
label_33c450:
    // 0x33c450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c454: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x33C454u;
    {
        const bool branch_taken_0x33c454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c454) {
            ctx->pc = 0x33C4A8u;
            goto label_33c4a8;
        }
    }
    ctx->pc = 0x33C45Cu;
label_33c45c:
    // 0x33c45c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c460: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x33C460u;
    {
        const bool branch_taken_0x33c460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c460) {
            ctx->pc = 0x33C4A8u;
            goto label_33c4a8;
        }
    }
    ctx->pc = 0x33C468u;
label_33c468:
    // 0x33c468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c46c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x33C46Cu;
    {
        const bool branch_taken_0x33c46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c46c) {
            ctx->pc = 0x33C4A8u;
            goto label_33c4a8;
        }
    }
    ctx->pc = 0x33C474u;
label_33c474:
    // 0x33c474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c478: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33C478u;
    {
        const bool branch_taken_0x33c478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c478) {
            ctx->pc = 0x33C4A8u;
            goto label_33c4a8;
        }
    }
    ctx->pc = 0x33C480u;
label_33c480:
    // 0x33c480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c484: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33C484u;
    {
        const bool branch_taken_0x33c484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c484) {
            ctx->pc = 0x33C4A8u;
            goto label_33c4a8;
        }
    }
    ctx->pc = 0x33C48Cu;
label_33c48c:
    // 0x33c48c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c490: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33C490u;
    {
        const bool branch_taken_0x33c490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c490) {
            ctx->pc = 0x33C4A8u;
            goto label_33c4a8;
        }
    }
    ctx->pc = 0x33C498u;
label_33c498:
    // 0x33c498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c49c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33C49Cu;
    {
        const bool branch_taken_0x33c49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c49c) {
            ctx->pc = 0x33C4A8u;
            goto label_33c4a8;
        }
    }
    ctx->pc = 0x33C4A4u;
label_33c4a4:
    // 0x33c4a4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33c4a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33c4a8:
    // 0x33c4a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c4ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c4b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33c4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33c4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x33C4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C4BCu;
}
