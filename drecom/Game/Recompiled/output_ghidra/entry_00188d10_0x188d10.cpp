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

// Function: entry_00188d10
// Address: 0x188d10 - 0x188e1c
void entry_00188d10_0x188d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d10_0x188d10");
#endif

    ctx->pc = 0x188d10u;

    // 0x188d10: 0x3c023ee0  lui         $v0, 0x3EE0
    ctx->pc = 0x188d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16096 << 16));
    // 0x188d14: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188d18: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x188d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188d1c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188d24: 0x0  nop
    ctx->pc = 0x188d24u;
    // NOP
    // 0x188d28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188d28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188d2c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x188d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x188d30: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x188d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x188d34: 0x3c023ee0  lui         $v0, 0x3EE0
    ctx->pc = 0x188d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16096 << 16));
    // 0x188d38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188d3c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x188d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188d40: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188d48: 0x0  nop
    ctx->pc = 0x188d48u;
    // NOP
    // 0x188d4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188d4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188d50: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x188d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x188d54: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x188d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x188d58: 0x3c023ee0  lui         $v0, 0x3EE0
    ctx->pc = 0x188d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16096 << 16));
    // 0x188d5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188d60: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x188d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188d64: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188d68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188d6c: 0x0  nop
    ctx->pc = 0x188d6cu;
    // NOP
    // 0x188d70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188d74: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x188d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x188d78: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x188d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x188d7c: 0x3c023ee0  lui         $v0, 0x3EE0
    ctx->pc = 0x188d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16096 << 16));
    // 0x188d80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188d84: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x188d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188d88: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188d90: 0x0  nop
    ctx->pc = 0x188d90u;
    // NOP
    // 0x188d94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188d94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188d98: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x188d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x188d9c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x188d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x188da0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x188da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188da4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188dac: 0x0  nop
    ctx->pc = 0x188dacu;
    // NOP
    // 0x188db0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188db0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188db4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x188db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x188db8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x188db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188dbc: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188dc4: 0x0  nop
    ctx->pc = 0x188dc4u;
    // NOP
    // 0x188dc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188dc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188dcc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x188dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x188dd0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x188dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188dd4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188ddc: 0x0  nop
    ctx->pc = 0x188ddcu;
    // NOP
    // 0x188de0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188de0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188de4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x188de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x188de8: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x188de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188dec: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188df4: 0x0  nop
    ctx->pc = 0x188df4u;
    // NOP
    // 0x188df8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188dfc: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x188dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x188e00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188e04: 0x0  nop
    ctx->pc = 0x188e04u;
    // NOP
    // 0x188e08: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x188e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x188e0c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x188e0cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x188e10: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x188e10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x188e14: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x188E14u;
    {
        const bool branch_taken_0x188e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188e14) {
            ctx->pc = 0x188F18u;
            return;
        }
    }
    ctx->pc = 0x188E1Cu;
}
