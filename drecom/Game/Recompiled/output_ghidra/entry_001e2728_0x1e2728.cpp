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

// Function: entry_001e2728
// Address: 0x1e2728 - 0x1e27b0
void entry_001e2728_0x1e2728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2728_0x1e2728");
#endif

    switch (ctx->pc) {
        case 0x1e2754u: goto label_1e2754;
        default: break;
    }

    ctx->pc = 0x1e2728u;

    // 0x1e2728: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e272c: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x1e272cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1e2730: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2734: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e2734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x1e2738: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e273c: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x1e273cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x1e2740: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e2740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e2744: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1e2744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e2748: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e2748u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e274c: 0xc067618  jal         func_19D860
    ctx->pc = 0x1E274Cu;
    SET_GPR_U32(ctx, 31, 0x1E2754u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x1E274Cu, 0x1E2754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2754u;
label_1e2754:
    // 0x1e2754: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2758: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e2758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e275c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E275Cu;
    {
        const bool branch_taken_0x1e275c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e275c) {
            ctx->pc = 0x1E27B0u;
            return;
        }
    }
    ctx->pc = 0x1E2764u;
    // 0x1e2764: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e2764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2768: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1e2768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1e276c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e276cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1e2770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2774: 0x0  nop
    ctx->pc = 0x1e2774u;
    // NOP
    // 0x1e2778: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e2778u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e277c: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e277cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e2780: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e2780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2784: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e2784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2788: 0x0  nop
    ctx->pc = 0x1e2788u;
    // NOP
    // 0x1e278c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e278cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2790: 0x0  nop
    ctx->pc = 0x1e2790u;
    // NOP
    // 0x1e2794: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2794u;
    {
        const bool branch_taken_0x1e2794 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2794) {
            ctx->pc = 0x1E27B0u;
            return;
        }
    }
    ctx->pc = 0x1E279Cu;
    // 0x1e279c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e27a0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e27a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e27a4: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e27a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e27a8: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e27a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e27ac: 0x0  nop
    ctx->pc = 0x1e27acu;
    // NOP
    ctx->pc = 0x1e27b0u;
}
