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

// Function: entry_00188bd8
// Address: 0x188bd8 - 0x188c34
void entry_00188bd8_0x188bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188bd8_0x188bd8");
#endif

    switch (ctx->pc) {
        case 0x188be8u: goto label_188be8;
        case 0x188bfcu: goto label_188bfc;
        case 0x188c10u: goto label_188c10;
        default: break;
    }

    ctx->pc = 0x188bd8u;

    // 0x188bd8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x188bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x188bdc: 0x26850120  addiu       $a1, $s4, 0x120
    ctx->pc = 0x188bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
    // 0x188be0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x188BE0u;
    SET_GPR_U32(ctx, 31, 0x188BE8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x188BE8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188BE8u) { return; }
    ctx->pc = 0x188BE8u;
label_188be8:
    // 0x188be8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x188be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x188bec: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x188becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x188bf0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x188bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x188bf4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x188BF4u;
    SET_GPR_U32(ctx, 31, 0x188BFCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x188BFCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188BFCu) { return; }
    ctx->pc = 0x188BFCu;
label_188bfc:
    // 0x188bfc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x188bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x188c00: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x188c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x188c04: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x188c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188c08: 0xc040c60  jal         func_103180
    ctx->pc = 0x188C08u;
    SET_GPR_U32(ctx, 31, 0x188C10u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x188C10u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188C10u) { return; }
    ctx->pc = 0x188C10u;
label_188c10:
    // 0x188c10: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x188c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188c14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188c18: 0x0  nop
    ctx->pc = 0x188c18u;
    // NOP
    // 0x188c1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188c20: 0x0  nop
    ctx->pc = 0x188c20u;
    // NOP
    // 0x188c24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188C24u;
    {
        const bool branch_taken_0x188c24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188c24) {
            ctx->pc = 0x188C34u;
            return;
        }
    }
    ctx->pc = 0x188C2Cu;
    // 0x188c2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188c30: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x188c30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x188c34u;
}
