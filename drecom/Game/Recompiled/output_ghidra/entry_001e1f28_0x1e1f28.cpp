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

// Function: entry_001e1f28
// Address: 0x1e1f28 - 0x1e1fc8
void entry_001e1f28_0x1e1f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1f28_0x1e1f28");
#endif

    switch (ctx->pc) {
        case 0x1e1f54u: goto label_1e1f54;
        default: break;
    }

    ctx->pc = 0x1e1f28u;

    // 0x1e1f28: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e1f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1f2c: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x1e1f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1e1f30: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e1f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1f34: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e1f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x1e1f38: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e1f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1f3c: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x1e1f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x1e1f40: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e1f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e1f44: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1e1f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e1f48: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e1f48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e1f4c: 0xc067618  jal         func_19D860
    ctx->pc = 0x1E1F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E1F54u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x1E1F4Cu, 0x1E1F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1F54u;
label_1e1f54:
    // 0x1e1f54: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1f58: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e1f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e1f5c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1E1F5Cu;
    {
        const bool branch_taken_0x1e1f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1f5c) {
            ctx->pc = 0x1E2028u;
            return;
        }
    }
    ctx->pc = 0x1E1F64u;
    // 0x1e1f64: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x1e1f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1f68: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e1f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1f6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e1f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e1f70: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e1f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e1f74: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x1e1f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1f78: 0x3c023bc4  lui         $v0, 0x3BC4
    ctx->pc = 0x1e1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15300 << 16));
    // 0x1e1f7c: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1e1f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x1e1f80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f84: 0x0  nop
    ctx->pc = 0x1e1f84u;
    // NOP
    // 0x1e1f88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e1f88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e1f8c: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x1e1f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x1e1f90: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e1f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1f94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f98: 0x0  nop
    ctx->pc = 0x1e1f98u;
    // NOP
    // 0x1e1f9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e1f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1fa0: 0x0  nop
    ctx->pc = 0x1e1fa0u;
    // NOP
    // 0x1e1fa4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1FA4u;
    {
        const bool branch_taken_0x1e1fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1fa4) {
            ctx->pc = 0x1E1FC8u;
            return;
        }
    }
    ctx->pc = 0x1E1FACu;
    // 0x1e1fac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1fb0: 0x0  nop
    ctx->pc = 0x1e1fb0u;
    // NOP
    // 0x1e1fb4: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e1fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e1fb8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1fbc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e1fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e1fc0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e1fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e1fc4: 0x0  nop
    ctx->pc = 0x1e1fc4u;
    // NOP
    ctx->pc = 0x1e1fc8u;
}
