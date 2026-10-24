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

// Function: entry_00369564
// Address: 0x369564 - 0x3695c4
void entry_00369564_0x369564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369564_0x369564");
#endif

    switch (ctx->pc) {
        case 0x3695a4u: goto label_3695a4;
        case 0x3695bcu: goto label_3695bc;
        default: break;
    }

    ctx->pc = 0x369564u;

    // 0x369564: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x369564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369568: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x369568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x36956c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x369570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369574: 0x0  nop
    ctx->pc = 0x369574u;
    // NOP
    // 0x369578: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x369578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36957c: 0x0  nop
    ctx->pc = 0x36957cu;
    // NOP
    // 0x369580: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x369580u;
    {
        const bool branch_taken_0x369580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369580) {
            ctx->pc = 0x3695C4u;
            return;
        }
    }
    ctx->pc = 0x369588u;
    // 0x369588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36958c: 0x0  nop
    ctx->pc = 0x36958cu;
    // NOP
    // 0x369590: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x369590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x369594: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369598: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x369598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36959c: 0xc040c24  jal         func_103090
    ctx->pc = 0x36959Cu;
    SET_GPR_U32(ctx, 31, 0x3695A4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x3695A4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3695A4u) { return; }
    ctx->pc = 0x3695A4u;
label_3695a4:
    // 0x3695a4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3695a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3695a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3695a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3695ac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3695acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3695b0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3695b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3695b4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x3695B4u;
    SET_GPR_U32(ctx, 31, 0x3695BCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x3695BCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3695BCu) { return; }
    ctx->pc = 0x3695BCu;
label_3695bc:
    // 0x3695bc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3695BCu;
    {
        const bool branch_taken_0x3695bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3695bc) {
            ctx->pc = 0x369624u;
            return;
        }
    }
    ctx->pc = 0x3695C4u;
}
