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

// Function: entry_0026d888
// Address: 0x26d888 - 0x26d8f4
void entry_0026d888_0x26d888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d888_0x26d888");
#endif

    ctx->pc = 0x26d888u;

    // 0x26d888: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d88c: 0xc4811b54  lwc1        $f1, 0x1B54($a0)
    ctx->pc = 0x26d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d890: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x26d890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x26d894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26d894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d898: 0x0  nop
    ctx->pc = 0x26d898u;
    // NOP
    // 0x26d89c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26d89cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26d8a0: 0xe4801b54  swc1        $f0, 0x1B54($a0)
    ctx->pc = 0x26d8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6996), bits); }
    // 0x26d8a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d8a8: 0xc4811b58  lwc1        $f1, 0x1B58($a0)
    ctx->pc = 0x26d8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d8ac: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x26d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x26d8b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26d8b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d8b4: 0x0  nop
    ctx->pc = 0x26d8b4u;
    // NOP
    // 0x26d8b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26d8b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26d8bc: 0xe4801b58  swc1        $f0, 0x1B58($a0)
    ctx->pc = 0x26d8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7000), bits); }
    // 0x26d8c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d8c4: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x26d8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d8c8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x26d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x26d8cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26d8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d8d0: 0x0  nop
    ctx->pc = 0x26d8d0u;
    // NOP
    // 0x26d8d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26d8d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d8d8: 0x0  nop
    ctx->pc = 0x26d8d8u;
    // NOP
    // 0x26d8dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26D8DCu;
    {
        const bool branch_taken_0x26d8dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d8dc) {
            ctx->pc = 0x26D8F4u;
            return;
        }
    }
    ctx->pc = 0x26D8E4u;
    // 0x26d8e4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x26d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x26d8e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26d8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d8ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d8f0: 0xe4601b58  swc1        $f0, 0x1B58($v1)
    ctx->pc = 0x26d8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7000), bits); }
    ctx->pc = 0x26d8f4u;
}
