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

// Function: entry_001ee9e0
// Address: 0x1ee9e0 - 0x1eea88
void entry_001ee9e0_0x1ee9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee9e0_0x1ee9e0");
#endif

    ctx->pc = 0x1ee9e0u;

    // 0x1ee9e0: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x1ee9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee9e4: 0x25021330  addiu       $v0, $t0, 0x1330
    ctx->pc = 0x1ee9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x1ee9e8: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x1ee9e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x1ee9ec: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1ee9ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ee9f0: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x1ee9f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1ee9f4: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EE9F4u;
    {
        const bool branch_taken_0x1ee9f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee9f4) {
            ctx->pc = 0x1EEA88u;
            return;
        }
    }
    ctx->pc = 0x1EE9FCu;
    // 0x1ee9fc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1ee9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea00: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x1eea00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x1eea04: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x1eea04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x1eea08: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1eea08u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eea0c: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x1eea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eea10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eea14: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x1eea14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x1eea18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eea20: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1eea20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1eea24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1eea24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eea28: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1eea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eea2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eea30: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1eea30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1eea34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea38: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1eea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eea3c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1eea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1eea40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eea40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eea44: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1eea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eea48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eea4c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1eea4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1eea50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eea50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea54: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1eea54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eea58: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1eea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1eea5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eea5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eea60: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1eea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eea64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eea68: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1eea68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1eea6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1eea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eea74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1eea74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1eea78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eea78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eea7c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1eea7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eea80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eea84: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1eea84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    ctx->pc = 0x1eea88u;
}
