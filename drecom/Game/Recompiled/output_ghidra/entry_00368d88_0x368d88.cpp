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

// Function: entry_00368d88
// Address: 0x368d88 - 0x368e3c
void entry_00368d88_0x368d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00368d88_0x368d88");
#endif

    switch (ctx->pc) {
        case 0x368df0u: goto label_368df0;
        case 0x368e0cu: goto label_368e0c;
        default: break;
    }

    ctx->pc = 0x368d88u;

    // 0x368d88: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x368d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368d8c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368d90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x368d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368d94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x368d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x368d98: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x368d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x368d9c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368da0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x368da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368da4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x368da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368da8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x368da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x368dac: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x368dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x368db0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x368db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x368db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x368db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368db8: 0x0  nop
    ctx->pc = 0x368db8u;
    // NOP
    // 0x368dbc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x368dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x368dc0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x368dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x368dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x368dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368dc8: 0x0  nop
    ctx->pc = 0x368dc8u;
    // NOP
    // 0x368dcc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x368dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x368dd0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x368dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x368dd4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x368dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x368dd8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x368dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x368ddc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x368ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368de0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x368de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x368de4: 0x34480007  ori         $t0, $v0, 0x7
    ctx->pc = 0x368de4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x368de8: 0xc05a2d4  jal         func_168B50
    ctx->pc = 0x368DE8u;
    SET_GPR_U32(ctx, 31, 0x368DF0u);
    ctx->pc = 0x168B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B50u, 0x368DE8u, 0x368DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368DF0u;
label_368df0:
    // 0x368df0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x368df0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x368df4: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x368DF4u;
    {
        const bool branch_taken_0x368df4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x368df4) {
            ctx->pc = 0x368E3Cu;
            return;
        }
    }
    ctx->pc = 0x368DFCu;
    // 0x368dfc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x368dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x368e00: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x368e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x368e04: 0xc040c9e  jal         func_103278
    ctx->pc = 0x368E04u;
    SET_GPR_U32(ctx, 31, 0x368E0Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x368E0Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x368E0Cu) { return; }
    ctx->pc = 0x368E0Cu;
label_368e0c:
    // 0x368e0c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x368e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368e10: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x368e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x368e14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x368e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x368e18: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x368e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368e1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x368e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x368e20: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x368e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x368e24: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x368e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368e28: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x368e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x368e2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x368e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x368e30: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x368e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368e34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x368e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x368e38: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x368e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x368e3cu;
}
