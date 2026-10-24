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

// Function: entry_002a0de4
// Address: 0x2a0de4 - 0x2a0e7c
void entry_002a0de4_0x2a0de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a0de4_0x2a0de4");
#endif

    ctx->pc = 0x2a0de4u;

    // 0x2a0de4: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x2a0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x2a0de8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a0de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0dec: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a0decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0df0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0df0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0df4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0df8: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2a0df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2a0dfc: 0x3c05c248  lui         $a1, 0xC248
    ctx->pc = 0x2a0dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49736 << 16));
    // 0x2a0e00: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2a0e00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0e04: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a0e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0e08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0e0c: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2a0e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e10: 0xe4c00188  swc1        $f0, 0x188($a2)
    ctx->pc = 0x2a0e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 392), bits); }
    // 0x2a0e14: 0x3c074352  lui         $a3, 0x4352
    ctx->pc = 0x2a0e14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17234 << 16));
    // 0x2a0e18: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a0e18u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0e1c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e20: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2a0e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2a0e24: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e28: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x2a0e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0e2c: 0x3c06451c  lui         $a2, 0x451C
    ctx->pc = 0x2a0e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17692 << 16));
    // 0x2a0e30: 0x34c54000  ori         $a1, $a2, 0x4000
    ctx->pc = 0x2a0e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x2a0e34: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a0e34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0e38: 0x0  nop
    ctx->pc = 0x2a0e38u;
    // NOP
    // 0x2a0e3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a0e3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0e40: 0x0  nop
    ctx->pc = 0x2a0e40u;
    // NOP
    // 0x2a0e44: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2A0E44u;
    {
        const bool branch_taken_0x2a0e44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0e44) {
            ctx->pc = 0x2A0E7Cu;
            return;
        }
    }
    ctx->pc = 0x2A0E4Cu;
    // 0x2a0e4c: 0x3c0742c8  lui         $a3, 0x42C8
    ctx->pc = 0x2a0e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0e50: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a0e50u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0e54: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a0e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0e58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0e5c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e60: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2a0e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2a0e64: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x2a0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0e68: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a0e68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0e6c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a0e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0e70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0e74: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e78: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a0e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    ctx->pc = 0x2a0e7cu;
}
