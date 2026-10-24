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

// Function: entry_001ee2b4
// Address: 0x1ee2b4 - 0x1ee35c
void entry_001ee2b4_0x1ee2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee2b4_0x1ee2b4");
#endif

    ctx->pc = 0x1ee2b4u;

    // 0x1ee2b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee2b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee2bc: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x1ee2bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x1ee2c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ee2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ee2c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ee2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ee2c8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EE2C8u;
    {
        const bool branch_taken_0x1ee2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee2c8) {
            ctx->pc = 0x1EE35Cu;
            return;
        }
    }
    ctx->pc = 0x1EE2D0u;
    // 0x1ee2d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee2d4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee2d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ee2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ee2dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee2e0: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1ee2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee2e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee2e8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1ee2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1ee2ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee2f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee2f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ee2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ee2f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee2fc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1ee2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee300: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee304: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ee304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ee308: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee30c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee310: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x1ee310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
    // 0x1ee314: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ee314u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee318: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1ee318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee31c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee31cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee320: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ee320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ee324: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ee324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee328: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x1ee328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1ee32c: 0x3c073fc0  lui         $a3, 0x3FC0
    ctx->pc = 0x1ee32cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16320 << 16));
    // 0x1ee330: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1ee330u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee334: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x1ee334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee338: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee33c: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x1ee33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x1ee340: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x1ee340u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee344: 0x25021330  addiu       $v0, $t0, 0x1330
    ctx->pc = 0x1ee344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x1ee348: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ee348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ee34c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ee34cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee350: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ee350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee354: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee358: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ee358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x1ee35cu;
}
