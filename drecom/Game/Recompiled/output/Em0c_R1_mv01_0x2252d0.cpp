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

// Function: Em0c_R1_mv01
// Address: 0x2252d0 - 0x22572c
void Em0c_R1_mv01_0x2252d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv01_0x2252d0");
#endif

    switch (ctx->pc) {
        case 0x225464u: goto label_225464;
        case 0x22546cu: goto label_22546c;
        case 0x2254b4u: goto label_2254b4;
        case 0x2254d0u: goto label_2254d0;
        case 0x2254e8u: goto label_2254e8;
        case 0x2254f4u: goto label_2254f4;
        case 0x225524u: goto label_225524;
        case 0x225564u: goto label_225564;
        case 0x225580u: goto label_225580;
        case 0x225598u: goto label_225598;
        case 0x2255a4u: goto label_2255a4;
        case 0x2256c4u: goto label_2256c4;
        case 0x2256e8u: goto label_2256e8;
        case 0x22571cu: goto label_22571c;
        default: break;
    }

    ctx->pc = 0x2252d0u;

    // 0x2252d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2252d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2252d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2252d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2252d8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2252d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2252dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2252dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2252e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2252e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2252e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2252e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2252e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2252e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2252ec: 0x10830092  beq         $a0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x2252ECu;
    {
        const bool branch_taken_0x2252ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2252ec) {
            ctx->pc = 0x225538u;
            goto label_225538;
        }
    }
    ctx->pc = 0x2252F4u;
    // 0x2252f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2252f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2252f8: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2252F8u;
    {
        const bool branch_taken_0x2252f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2252f8) {
            ctx->pc = 0x225488u;
            goto label_225488;
        }
    }
    ctx->pc = 0x225300u;
    // 0x225300: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225300u;
    {
        const bool branch_taken_0x225300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x225300) {
            ctx->pc = 0x225310u;
            goto label_225310;
        }
    }
    ctx->pc = 0x225308u;
    // 0x225308: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x225308u;
    {
        const bool branch_taken_0x225308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225308) {
            ctx->pc = 0x2255A4u;
            goto label_2255a4;
        }
    }
    ctx->pc = 0x225310u;
label_225310:
    // 0x225310: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225314: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x225314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x225318: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x225318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22531c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x22531cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x225320: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225324: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225328: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22532c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22532cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x225330: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x225330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x225334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225338: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22533c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225340: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x225340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x225344: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x225344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x225348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22534c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225350: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225354: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x225354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x225358: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x225358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22535c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22535cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225360: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225364: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225368: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x225368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22536c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x22536cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x225370: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x225374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225378: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22537c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225380: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x225380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x225384: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x225384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x225388: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x225388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22538c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22538cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225390: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225394: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225398: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x225398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x22539c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2253a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2253a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2253a4: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x2253a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x2253a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2253a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2253ac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2253acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2253b0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2253B0u;
    {
        const bool branch_taken_0x2253b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2253b0) {
            ctx->pc = 0x225444u;
            goto label_225444;
        }
    }
    ctx->pc = 0x2253B8u;
    // 0x2253b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2253b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2253bc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2253bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2253c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2253c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2253c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2253c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2253c8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2253c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2253cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2253ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2253d0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2253d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2253d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2253d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2253d8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2253d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2253dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2253dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2253e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2253e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2253e4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2253e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2253e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2253e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2253ec: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2253ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2253f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2253f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2253f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2253f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2253f8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2253f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2253fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2253fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225400: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x225400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225404: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225408: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x225408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x22540c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225410: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x225410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225414: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x225414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x225418: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22541c: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x22541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225420: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x225420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225424: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x225424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x225428: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22542c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22542cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225430: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x225430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x225434: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x225434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225438: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x225438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22543c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22543cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x225440: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x225440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_225444:
    // 0x225444: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225448: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22544c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22544cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x225450: 0x24067804  addiu       $a2, $zero, 0x7804
    ctx->pc = 0x225450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30724));
    // 0x225454: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225458: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x225458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22545c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22545Cu;
    SET_GPR_U32(ctx, 31, 0x225464u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22545Cu, 0x225464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225464u;
label_225464:
    // 0x225464: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225464u;
    SET_GPR_U32(ctx, 31, 0x22546Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225464u, 0x22546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22546Cu;
label_22546c:
    // 0x22546c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22546cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225470: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x225470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x225474: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x225474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x225478: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x225478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22547c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22547cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x225480: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225484: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x225484u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_225488:
    // 0x225488: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22548c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x22548cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225490: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225494: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x225494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225498: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x225498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22549c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2254a0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2254a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2254a4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2254a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2254a8: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x2254a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2254ac: 0xc05c848  jal         func_172120
    ctx->pc = 0x2254ACu;
    SET_GPR_U32(ctx, 31, 0x2254B4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2254ACu, 0x2254B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2254B4u;
label_2254b4:
    // 0x2254b4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2254b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2254b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2254b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2254bc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2254bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2254c0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2254c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2254c4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2254c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2254c8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2254C8u;
    SET_GPR_U32(ctx, 31, 0x2254D0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2254C8u, 0x2254D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2254D0u;
label_2254d0:
    // 0x2254d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2254d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2254d4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2254d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2254d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2254d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2254dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2254dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2254e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2254E0u;
    SET_GPR_U32(ctx, 31, 0x2254E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2254E0u, 0x2254E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2254E8u;
label_2254e8:
    // 0x2254e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2254e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2254ec: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2254ECu;
    SET_GPR_U32(ctx, 31, 0x2254F4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2254ECu, 0x2254F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2254F4u;
label_2254f4:
    // 0x2254f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2254f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2254f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2254f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2254fc: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2254FCu;
    {
        const bool branch_taken_0x2254fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2254fc) {
            ctx->pc = 0x2255A4u;
            goto label_2255a4;
        }
    }
    ctx->pc = 0x225504u;
    // 0x225504: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225508: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22550c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22550cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x225510: 0x24067805  addiu       $a2, $zero, 0x7805
    ctx->pc = 0x225510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30725));
    // 0x225514: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225518: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x225518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22551c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22551Cu;
    SET_GPR_U32(ctx, 31, 0x225524u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22551Cu, 0x225524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225524u;
label_225524:
    // 0x225524: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x225524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225528: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22552c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22552cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x225530: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x225530u;
    {
        const bool branch_taken_0x225530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225530) {
            ctx->pc = 0x2255A4u;
            goto label_2255a4;
        }
    }
    ctx->pc = 0x225538u;
label_225538:
    // 0x225538: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22553c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x22553cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225540: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225544: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x225544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225548: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x225548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22554c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x225550: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x225550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x225554: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x225554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x225558: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x225558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22555c: 0xc05c848  jal         func_172120
    ctx->pc = 0x22555Cu;
    SET_GPR_U32(ctx, 31, 0x225564u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22555Cu, 0x225564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225564u;
label_225564:
    // 0x225564: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x225564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x225568: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22556c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225570: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x225570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225574: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x225574u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x225578: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x225578u;
    SET_GPR_U32(ctx, 31, 0x225580u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x225578u, 0x225580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225580u;
label_225580:
    // 0x225580: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225584: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x225584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x225588: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22558c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22558cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x225590: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x225590u;
    SET_GPR_U32(ctx, 31, 0x225598u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x225590u, 0x225598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225598u;
label_225598:
    // 0x225598: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22559c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22559Cu;
    SET_GPR_U32(ctx, 31, 0x2255A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22559Cu, 0x2255A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2255A4u;
label_2255a4:
    // 0x2255a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2255a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2255a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2255a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2255ac: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2255acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2255b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2255b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2255b4: 0x0  nop
    ctx->pc = 0x2255b4u;
    // NOP
    // 0x2255b8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2255b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2255bc: 0x0  nop
    ctx->pc = 0x2255bcu;
    // NOP
    // 0x2255c0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x2255C0u;
    {
        const bool branch_taken_0x2255c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2255c0) {
            ctx->pc = 0x2256A4u;
            goto label_2256a4;
        }
    }
    ctx->pc = 0x2255C8u;
    // 0x2255c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2255c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2255cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2255ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2255d0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2255d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2255d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2255d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2255d8: 0x0  nop
    ctx->pc = 0x2255d8u;
    // NOP
    // 0x2255dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2255dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2255e0: 0x0  nop
    ctx->pc = 0x2255e0u;
    // NOP
    // 0x2255e4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2255E4u;
    {
        const bool branch_taken_0x2255e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2255e4) {
            ctx->pc = 0x22564Cu;
            goto label_22564c;
        }
    }
    ctx->pc = 0x2255ECu;
    // 0x2255ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2255ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2255f0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2255f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2255f4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2255f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2255f8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x2255f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x2255fc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2255fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x225600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225604: 0x0  nop
    ctx->pc = 0x225604u;
    // NOP
    // 0x225608: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x225608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22560c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22560cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x225610: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225614: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225618: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x225618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22561c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22561cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225620: 0x0  nop
    ctx->pc = 0x225620u;
    // NOP
    // 0x225624: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225628: 0x0  nop
    ctx->pc = 0x225628u;
    // NOP
    // 0x22562c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22562Cu;
    {
        const bool branch_taken_0x22562c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22562c) {
            ctx->pc = 0x2256A4u;
            goto label_2256a4;
        }
    }
    ctx->pc = 0x225634u;
    // 0x225634: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225638: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22563c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225640: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x225640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x225644: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x225644u;
    {
        const bool branch_taken_0x225644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225644) {
            ctx->pc = 0x2256A4u;
            goto label_2256a4;
        }
    }
    ctx->pc = 0x22564Cu;
label_22564c:
    // 0x22564c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22564cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225650: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x225650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225654: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x225654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225658: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x225658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22565c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22565cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x225660: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225664: 0x0  nop
    ctx->pc = 0x225664u;
    // NOP
    // 0x225668: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x225668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22566c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22566cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x225670: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225674: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225678: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x225678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22567c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22567cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225680: 0x0  nop
    ctx->pc = 0x225680u;
    // NOP
    // 0x225684: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x225684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225688: 0x0  nop
    ctx->pc = 0x225688u;
    // NOP
    // 0x22568c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22568Cu;
    {
        const bool branch_taken_0x22568c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22568c) {
            ctx->pc = 0x2256A4u;
            goto label_2256a4;
        }
    }
    ctx->pc = 0x225694u;
    // 0x225694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225698: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22569c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22569cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2256a0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2256a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2256a4:
    // 0x2256a4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2256a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2256a8: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x2256a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x2256ac: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2256acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2256b0: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x2256b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2256b4: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2256B4u;
    {
        const bool branch_taken_0x2256b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2256b4) {
            ctx->pc = 0x22571Cu;
            goto label_22571c;
        }
    }
    ctx->pc = 0x2256BCu;
    // 0x2256bc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2256BCu;
    SET_GPR_U32(ctx, 31, 0x2256C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2256BCu, 0x2256C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256C4u;
label_2256c4:
    // 0x2256c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2256c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2256c8: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x2256c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x2256cc: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2256ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2256d0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2256d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2256d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2256d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2256d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2256d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2256dc: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2256dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2256e0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2256E0u;
    SET_GPR_U32(ctx, 31, 0x2256E8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2256E0u, 0x2256E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256E8u;
label_2256e8:
    // 0x2256e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2256e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2256ec: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2256ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2256f0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2256F0u;
    {
        const bool branch_taken_0x2256f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2256f0) {
            ctx->pc = 0x22571Cu;
            goto label_22571c;
        }
    }
    ctx->pc = 0x2256F8u;
    // 0x2256f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2256f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2256fc: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x2256fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x225700: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x225700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x225704: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x225704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x225708: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x225708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x22570c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22570cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x225710: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x225710u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x225714: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x225714u;
    SET_GPR_U32(ctx, 31, 0x22571Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x225714u, 0x22571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22571Cu;
label_22571c:
    // 0x22571c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x22571cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225720: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x225720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x225724: 0x3e00008  jr          $ra
    ctx->pc = 0x225724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22572Cu;
}
