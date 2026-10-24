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

// Function: entry_0023da24
// Address: 0x23da24 - 0x23daf4
void entry_0023da24_0x23da24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023da24_0x23da24");
#endif

    switch (ctx->pc) {
        case 0x23da30u: goto label_23da30;
        case 0x23da48u: goto label_23da48;
        case 0x23da60u: goto label_23da60;
        case 0x23daa8u: goto label_23daa8;
        default: break;
    }

    ctx->pc = 0x23da24u;

    // 0x23da24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23da24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23da28: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x23DA28u;
    SET_GPR_U32(ctx, 31, 0x23DA30u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x23DA30u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23DA30u) { return; }
    ctx->pc = 0x23DA30u;
label_23da30:
    // 0x23da30: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23da34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23da34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23da38: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23da38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23da3c: 0xc44c00d0  lwc1        $f12, 0xD0($v0)
    ctx->pc = 0x23da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23da40: 0xc040d0e  jal         func_103438
    ctx->pc = 0x23DA40u;
    SET_GPR_U32(ctx, 31, 0x23DA48u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x23DA48u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23DA48u) { return; }
    ctx->pc = 0x23DA48u;
label_23da48:
    // 0x23da48: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23da4c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23da50: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23da50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23da54: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23da54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23da58: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x23DA58u;
    SET_GPR_U32(ctx, 31, 0x23DA60u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x23DA60u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23DA60u) { return; }
    ctx->pc = 0x23DA60u;
label_23da60:
    // 0x23da60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23da60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23da64: 0x0  nop
    ctx->pc = 0x23da64u;
    // NOP
    // 0x23da68: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x23da68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23da6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23da6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23da70: 0x0  nop
    ctx->pc = 0x23da70u;
    // NOP
    // 0x23da74: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23da74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x23da78: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23da7c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23da7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23da80: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x23da80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x23da84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23da84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23da88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23da88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23da8c: 0x0  nop
    ctx->pc = 0x23da8cu;
    // NOP
    // 0x23da90: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x23da90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x23da94: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x23da94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23da98: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23da98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23da9c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x23da9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23daa0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x23DAA0u;
    SET_GPR_U32(ctx, 31, 0x23DAA8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x23DAA8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23DAA8u) { return; }
    ctx->pc = 0x23DAA8u;
label_23daa8:
    // 0x23daa8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23daac: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x23daacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dab0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x23dab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dab4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23dab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23dab8: 0xe4800120  swc1        $f0, 0x120($a0)
    ctx->pc = 0x23dab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x23dabc: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23dabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23dac0: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x23dac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dac4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x23dac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dac8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23dac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23dacc: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x23daccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x23dad0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23dad4: 0xc4610128  lwc1        $f1, 0x128($v1)
    ctx->pc = 0x23dad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dad8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x23dad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dadc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23dadcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23dae0: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x23dae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x23dae4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x23dae4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23dae8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x23dae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x23daec: 0x3e00008  jr          $ra
    ctx->pc = 0x23DAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DAF4u;
}
