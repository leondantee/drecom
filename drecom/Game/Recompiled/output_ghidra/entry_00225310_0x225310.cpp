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

// Function: entry_00225310
// Address: 0x225310 - 0x225444
void entry_00225310_0x225310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225310_0x225310");
#endif

    ctx->pc = 0x225310u;

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
            return;
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
    ctx->pc = 0x225444u;
}
