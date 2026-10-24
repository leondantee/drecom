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

// Function: entry_0017abdc
// Address: 0x17abdc - 0x17ac84
void entry_0017abdc_0x17abdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017abdc_0x17abdc");
#endif

    switch (ctx->pc) {
        case 0x17abf0u: goto label_17abf0;
        case 0x17ac04u: goto label_17ac04;
        default: break;
    }

    ctx->pc = 0x17abdcu;

    // 0x17abdc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x17abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17abe0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x17abe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17abe4: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x17abe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17abe8: 0xc040c60  jal         func_103180
    ctx->pc = 0x17ABE8u;
    SET_GPR_U32(ctx, 31, 0x17ABF0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x17ABF0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17ABF0u) { return; }
    ctx->pc = 0x17ABF0u;
label_17abf0:
    // 0x17abf0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17abf4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x17abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17abf8: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x17abf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17abfc: 0xc040c60  jal         func_103180
    ctx->pc = 0x17ABFCu;
    SET_GPR_U32(ctx, 31, 0x17AC04u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x17AC04u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17AC04u) { return; }
    ctx->pc = 0x17AC04u;
label_17ac04:
    // 0x17ac04: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x17ac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ac08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ac08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ac0c: 0x0  nop
    ctx->pc = 0x17ac0cu;
    // NOP
    // 0x17ac10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ac10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ac14: 0x0  nop
    ctx->pc = 0x17ac14u;
    // NOP
    // 0x17ac18: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x17AC18u;
    {
        const bool branch_taken_0x17ac18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ac18) {
            ctx->pc = 0x17AC84u;
            return;
        }
    }
    ctx->pc = 0x17AC20u;
    // 0x17ac20: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x17ac20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ac24: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x17ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x17ac28: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x17ac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x17ac2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ac2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ac30: 0x0  nop
    ctx->pc = 0x17ac30u;
    // NOP
    // 0x17ac34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17ac34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ac38: 0x0  nop
    ctx->pc = 0x17ac38u;
    // NOP
    // 0x17ac3c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x17AC3Cu;
    {
        const bool branch_taken_0x17ac3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ac3c) {
            ctx->pc = 0x17AC84u;
            return;
        }
    }
    ctx->pc = 0x17AC44u;
    // 0x17ac44: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x17ac44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ac48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ac48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ac4c: 0x0  nop
    ctx->pc = 0x17ac4cu;
    // NOP
    // 0x17ac50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ac50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ac54: 0x0  nop
    ctx->pc = 0x17ac54u;
    // NOP
    // 0x17ac58: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x17AC58u;
    {
        const bool branch_taken_0x17ac58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ac58) {
            ctx->pc = 0x17AC84u;
            return;
        }
    }
    ctx->pc = 0x17AC60u;
    // 0x17ac60: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x17ac60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ac64: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x17ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x17ac68: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x17ac68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x17ac6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ac6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ac70: 0x0  nop
    ctx->pc = 0x17ac70u;
    // NOP
    // 0x17ac74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17ac74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ac78: 0x0  nop
    ctx->pc = 0x17ac78u;
    // NOP
    // 0x17ac7c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x17AC7Cu;
    {
        const bool branch_taken_0x17ac7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ac7c) {
            ctx->pc = 0x17AC90u;
            return;
        }
    }
    ctx->pc = 0x17AC84u;
}
