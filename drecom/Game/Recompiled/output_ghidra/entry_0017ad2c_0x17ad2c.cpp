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

// Function: entry_0017ad2c
// Address: 0x17ad2c - 0x17add4
void entry_0017ad2c_0x17ad2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ad2c_0x17ad2c");
#endif

    switch (ctx->pc) {
        case 0x17ad40u: goto label_17ad40;
        case 0x17ad54u: goto label_17ad54;
        default: break;
    }

    ctx->pc = 0x17ad2cu;

    // 0x17ad2c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17ad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17ad30: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17ad30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17ad34: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x17ad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ad38: 0xc040c60  jal         func_103180
    ctx->pc = 0x17AD38u;
    SET_GPR_U32(ctx, 31, 0x17AD40u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x17AD40u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AD40u) { return; }
    ctx->pc = 0x17AD40u;
label_17ad40:
    // 0x17ad40: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17ad44: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17ad44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17ad48: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x17ad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ad4c: 0xc040c60  jal         func_103180
    ctx->pc = 0x17AD4Cu;
    SET_GPR_U32(ctx, 31, 0x17AD54u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x17AD54u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AD54u) { return; }
    ctx->pc = 0x17AD54u;
label_17ad54:
    // 0x17ad54: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x17ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ad58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ad58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ad5c: 0x0  nop
    ctx->pc = 0x17ad5cu;
    // NOP
    // 0x17ad60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ad60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ad64: 0x0  nop
    ctx->pc = 0x17ad64u;
    // NOP
    // 0x17ad68: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x17AD68u;
    {
        const bool branch_taken_0x17ad68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ad68) {
            ctx->pc = 0x17ADD4u;
            return;
        }
    }
    ctx->pc = 0x17AD70u;
    // 0x17ad70: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x17ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ad74: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x17ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x17ad78: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x17ad78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x17ad7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ad7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ad80: 0x0  nop
    ctx->pc = 0x17ad80u;
    // NOP
    // 0x17ad84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17ad84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ad88: 0x0  nop
    ctx->pc = 0x17ad88u;
    // NOP
    // 0x17ad8c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x17AD8Cu;
    {
        const bool branch_taken_0x17ad8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ad8c) {
            ctx->pc = 0x17ADD4u;
            return;
        }
    }
    ctx->pc = 0x17AD94u;
    // 0x17ad94: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x17ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ad98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ad98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ad9c: 0x0  nop
    ctx->pc = 0x17ad9cu;
    // NOP
    // 0x17ada0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ada0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ada4: 0x0  nop
    ctx->pc = 0x17ada4u;
    // NOP
    // 0x17ada8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x17ADA8u;
    {
        const bool branch_taken_0x17ada8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ada8) {
            ctx->pc = 0x17ADD4u;
            return;
        }
    }
    ctx->pc = 0x17ADB0u;
    // 0x17adb0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x17adb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17adb4: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x17adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x17adb8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x17adb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x17adbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17adbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17adc0: 0x0  nop
    ctx->pc = 0x17adc0u;
    // NOP
    // 0x17adc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17adc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17adc8: 0x0  nop
    ctx->pc = 0x17adc8u;
    // NOP
    // 0x17adcc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x17ADCCu;
    {
        const bool branch_taken_0x17adcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17adcc) {
            ctx->pc = 0x17ADE0u;
            return;
        }
    }
    ctx->pc = 0x17ADD4u;
}
