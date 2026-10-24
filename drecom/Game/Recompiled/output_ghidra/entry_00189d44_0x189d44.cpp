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

// Function: entry_00189d44
// Address: 0x189d44 - 0x189dd4
void entry_00189d44_0x189d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189d44_0x189d44");
#endif

    switch (ctx->pc) {
        case 0x189d50u: goto label_189d50;
        case 0x189d64u: goto label_189d64;
        case 0x189d78u: goto label_189d78;
        case 0x189d8cu: goto label_189d8c;
        default: break;
    }

    ctx->pc = 0x189d44u;

    // 0x189d44: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x189d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189d48: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x189D48u;
    SET_GPR_U32(ctx, 31, 0x189D50u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x189D50u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x189D50u) { return; }
    ctx->pc = 0x189D50u;
label_189d50:
    // 0x189d50: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189d54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x189d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x189d58: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x189d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x189d5c: 0xc040c44  jal         func_103110
    ctx->pc = 0x189D5Cu;
    SET_GPR_U32(ctx, 31, 0x189D64u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x189D64u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x189D64u) { return; }
    ctx->pc = 0x189D64u;
label_189d64:
    // 0x189d64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x189d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189d68: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x189d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189d6c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x189d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x189d70: 0xc040c00  jal         func_103000
    ctx->pc = 0x189D70u;
    SET_GPR_U32(ctx, 31, 0x189D78u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x189D78u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x189D78u) { return; }
    ctx->pc = 0x189D78u;
label_189d78:
    // 0x189d78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x189d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x189d7c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x189d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189d80: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x189d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x189d84: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x189D84u;
    SET_GPR_U32(ctx, 31, 0x189D8Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x189D8Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x189D8Cu) { return; }
    ctx->pc = 0x189D8Cu;
label_189d8c:
    // 0x189d8c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x189d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189d90: 0xc46100d0  lwc1        $f1, 0xD0($v1)
    ctx->pc = 0x189d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189d94: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x189d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189d98: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x189d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189d9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x189d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x189da0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x189da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x189da4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x189da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189da8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189dac: 0x0  nop
    ctx->pc = 0x189dacu;
    // NOP
    // 0x189db0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189db4: 0x0  nop
    ctx->pc = 0x189db4u;
    // NOP
    // 0x189db8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189DB8u;
    {
        const bool branch_taken_0x189db8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189db8) {
            ctx->pc = 0x189DD4u;
            return;
        }
    }
    ctx->pc = 0x189DC0u;
    // 0x189dc0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x189dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189dc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x189dc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x189dc8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x189dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x189dcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189DCCu;
    {
        const bool branch_taken_0x189dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189dcc) {
            ctx->pc = 0x189DDCu;
            return;
        }
    }
    ctx->pc = 0x189DD4u;
}
