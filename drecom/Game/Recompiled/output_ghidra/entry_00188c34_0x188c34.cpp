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

// Function: entry_00188c34
// Address: 0x188c34 - 0x188ca0
void entry_00188c34_0x188c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188c34_0x188c34");
#endif

    switch (ctx->pc) {
        case 0x188c44u: goto label_188c44;
        case 0x188c68u: goto label_188c68;
        case 0x188c7cu: goto label_188c7c;
        default: break;
    }

    ctx->pc = 0x188c34u;

    // 0x188c34: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x188c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188c38: 0x26a50120  addiu       $a1, $s5, 0x120
    ctx->pc = 0x188c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
    // 0x188c3c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x188C3Cu;
    SET_GPR_U32(ctx, 31, 0x188C44u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x188C44u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188C44u) { return; }
    ctx->pc = 0x188C44u;
label_188c44:
    // 0x188c44: 0xc6a111e4  lwc1        $f1, 0x11E4($s5)
    ctx->pc = 0x188c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188c48: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x188c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188c4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x188c50: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x188c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x188c54: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x188c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188c58: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x188c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x188c5c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x188c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188c60: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x188C60u;
    SET_GPR_U32(ctx, 31, 0x188C68u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x188C68u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188C68u) { return; }
    ctx->pc = 0x188C68u;
label_188c68:
    // 0x188c68: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x188c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188c6c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x188c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188c70: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x188c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188c74: 0xc040c60  jal         func_103180
    ctx->pc = 0x188C74u;
    SET_GPR_U32(ctx, 31, 0x188C7Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x188C7Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188C7Cu) { return; }
    ctx->pc = 0x188C7Cu;
label_188c7c:
    // 0x188c7c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x188c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188c80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188c84: 0x0  nop
    ctx->pc = 0x188c84u;
    // NOP
    // 0x188c88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188c8c: 0x0  nop
    ctx->pc = 0x188c8cu;
    // NOP
    // 0x188c90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188C90u;
    {
        const bool branch_taken_0x188c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188c90) {
            ctx->pc = 0x188CA0u;
            return;
        }
    }
    ctx->pc = 0x188C98u;
    // 0x188c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188c9c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x188c9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x188ca0u;
}
