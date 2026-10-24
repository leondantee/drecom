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

// Function: Em01_R1_walk
// Address: 0x3022c0 - 0x30249c
void Em01_R1_walk_0x3022c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_walk_0x3022c0");
#endif

    switch (ctx->pc) {
        case 0x302358u: goto label_302358;
        case 0x302380u: goto label_302380;
        case 0x3023e8u: goto label_3023e8;
        case 0x3023f4u: goto label_3023f4;
        case 0x302420u: goto label_302420;
        case 0x302434u: goto label_302434;
        case 0x30245cu: goto label_30245c;
        case 0x302468u: goto label_302468;
        case 0x302478u: goto label_302478;
        case 0x302484u: goto label_302484;
        default: break;
    }

    ctx->pc = 0x3022c0u;

    // 0x3022c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3022c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3022c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3022c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3022c8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3022c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x3022cc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3022ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3022d0: 0x246394f0  addiu       $v1, $v1, -0x6B10
    ctx->pc = 0x3022d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939888));
    // 0x3022d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3022d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3022d8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3022d8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3994F0u));
    // 0x3022dc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3022dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3022e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3022e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3022e4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3022e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3022e8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3022e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3022ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3022ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3022f0: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3022F0u;
    {
        const bool branch_taken_0x3022f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3022f0) {
            ctx->pc = 0x302398u;
            goto label_302398;
        }
    }
    ctx->pc = 0x3022F8u;
    // 0x3022f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3022F8u;
    {
        const bool branch_taken_0x3022f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3022f8) {
            ctx->pc = 0x302308u;
            goto label_302308;
        }
    }
    ctx->pc = 0x302300u;
    // 0x302300: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x302300u;
    {
        const bool branch_taken_0x302300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302300) {
            ctx->pc = 0x30248Cu;
            goto label_30248c;
        }
    }
    ctx->pc = 0x302308u;
label_302308:
    // 0x302308: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30230c: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x30230cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x302310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x302310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302314: 0x0  nop
    ctx->pc = 0x302314u;
    // NOP
    // 0x302318: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x302318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30231c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x30231cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x302320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x302320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302324: 0x0  nop
    ctx->pc = 0x302324u;
    // NOP
    // 0x302328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30232c: 0x0  nop
    ctx->pc = 0x30232cu;
    // NOP
    // 0x302330: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x302330u;
    {
        const bool branch_taken_0x302330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302330) {
            ctx->pc = 0x302360u;
            goto label_302360;
        }
    }
    ctx->pc = 0x302338u;
    // 0x302338: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30233c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302340: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x302340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x302344: 0x24065a29  addiu       $a2, $zero, 0x5A29
    ctx->pc = 0x302344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23081));
    // 0x302348: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x302348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30234c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30234cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x302350: 0xc0965d0  jal         func_259740
    ctx->pc = 0x302350u;
    SET_GPR_U32(ctx, 31, 0x302358u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x302350u, 0x302358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302358u;
label_302358:
    // 0x302358: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x302358u;
    {
        const bool branch_taken_0x302358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302358) {
            ctx->pc = 0x302380u;
            goto label_302380;
        }
    }
    ctx->pc = 0x302360u;
label_302360:
    // 0x302360: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302364: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x302364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302368: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x302368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30236c: 0x24065a01  addiu       $a2, $zero, 0x5A01
    ctx->pc = 0x30236cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23041));
    // 0x302370: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x302370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302374: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x302374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x302378: 0xc0965d0  jal         func_259740
    ctx->pc = 0x302378u;
    SET_GPR_U32(ctx, 31, 0x302380u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x302378u, 0x302380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302380u;
label_302380:
    // 0x302380: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302384: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x302384u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x302388: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x302388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30238c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30238cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x302390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302394: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x302394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_302398:
    // 0x302398: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30239c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30239cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3023a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3023a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3023a4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3023a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3023a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3023A8u;
    {
        const bool branch_taken_0x3023a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3023a8) {
            ctx->pc = 0x3023F4u;
            goto label_3023f4;
        }
    }
    ctx->pc = 0x3023B0u;
    // 0x3023b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3023b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3023b4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3023b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3023b8: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x3023b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x3023bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3023bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3023c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3023c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3023c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3023c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3023c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3023c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3023cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3023ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3023d0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3023d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3023d4: 0x24040504  addiu       $a0, $zero, 0x504
    ctx->pc = 0x3023d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x3023d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3023d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3023dc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3023dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3023e0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3023E0u;
    SET_GPR_U32(ctx, 31, 0x3023E8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3023E0u, 0x3023E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023E8u;
label_3023e8:
    // 0x3023e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3023e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3023ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3023ECu;
    SET_GPR_U32(ctx, 31, 0x3023F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3023ECu, 0x3023F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023F4u;
label_3023f4:
    // 0x3023f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3023f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3023f8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x3023f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3023fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3023fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302400: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x302400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x302404: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x302404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x302408: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30240c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30240cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x302410: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x302410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302414: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x302414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x302418: 0xc05c848  jal         func_172120
    ctx->pc = 0x302418u;
    SET_GPR_U32(ctx, 31, 0x302420u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x302418u, 0x302420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302420u;
label_302420:
    // 0x302420: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302424: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x302424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302428: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x302428u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30242c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30242Cu;
    SET_GPR_U32(ctx, 31, 0x302434u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30242Cu, 0x302434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302434u;
label_302434:
    // 0x302434: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302438: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x302438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30243c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30243cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302440: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x302440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x302444: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302448: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x302448u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30244c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30244cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302450: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x302450u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302454: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x302454u;
    SET_GPR_U32(ctx, 31, 0x30245Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x302454u, 0x30245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30245Cu;
label_30245c:
    // 0x30245c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30245cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302460: 0xc05cd10  jal         func_173440
    ctx->pc = 0x302460u;
    SET_GPR_U32(ctx, 31, 0x302468u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x302460u, 0x302468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302468u;
label_302468:
    // 0x302468: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x302468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30246c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30246cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302470: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x302470u;
    SET_GPR_U32(ctx, 31, 0x302478u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x302470u, 0x302478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302478u;
label_302478:
    // 0x302478: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x302478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30247c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30247Cu;
    SET_GPR_U32(ctx, 31, 0x302484u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30247Cu, 0x302484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302484u;
label_302484:
    // 0x302484: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x302484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302488: 0x0  nop
    ctx->pc = 0x302488u;
    // NOP
label_30248c:
    // 0x30248c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30248cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302490: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x302490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x302494: 0x3e00008  jr          $ra
    ctx->pc = 0x302494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30249Cu;
}
