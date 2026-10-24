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

// Function: entry_00188ca0
// Address: 0x188ca0 - 0x188cfc
void entry_00188ca0_0x188ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188ca0_0x188ca0");
#endif

    switch (ctx->pc) {
        case 0x188cb0u: goto label_188cb0;
        case 0x188cc4u: goto label_188cc4;
        case 0x188cd8u: goto label_188cd8;
        default: break;
    }

    ctx->pc = 0x188ca0u;

    // 0x188ca0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x188ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188ca4: 0x26a50120  addiu       $a1, $s5, 0x120
    ctx->pc = 0x188ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
    // 0x188ca8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x188CA8u;
    SET_GPR_U32(ctx, 31, 0x188CB0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x188CB0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188CB0u) { return; }
    ctx->pc = 0x188CB0u;
label_188cb0:
    // 0x188cb0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x188cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188cb4: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x188cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x188cb8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x188cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188cbc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x188CBCu;
    SET_GPR_U32(ctx, 31, 0x188CC4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x188CC4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188CC4u) { return; }
    ctx->pc = 0x188CC4u;
label_188cc4:
    // 0x188cc4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x188cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188cc8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x188cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188ccc: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x188cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188cd0: 0xc040c60  jal         func_103180
    ctx->pc = 0x188CD0u;
    SET_GPR_U32(ctx, 31, 0x188CD8u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x188CD8u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188CD8u) { return; }
    ctx->pc = 0x188CD8u;
label_188cd8:
    // 0x188cd8: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x188cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188cdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188ce0: 0x0  nop
    ctx->pc = 0x188ce0u;
    // NOP
    // 0x188ce4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188ce8: 0x0  nop
    ctx->pc = 0x188ce8u;
    // NOP
    // 0x188cec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188CECu;
    {
        const bool branch_taken_0x188cec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188cec) {
            ctx->pc = 0x188CFCu;
            return;
        }
    }
    ctx->pc = 0x188CF4u;
    // 0x188cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188cf8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x188cf8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x188cfcu;
}
