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

// Function: entry_002e4aa8
// Address: 0x2e4aa8 - 0x2e4af0
void entry_002e4aa8_0x2e4aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4aa8_0x2e4aa8");
#endif

    ctx->pc = 0x2e4aa8u;

    // 0x2e4aa8: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x2e4aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4aac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e4ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4ab4: 0x0  nop
    ctx->pc = 0x2e4ab4u;
    // NOP
    // 0x2e4ab8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4abc: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x2e4abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x2e4ac0: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x2e4ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4ac4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2e4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2e4ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4acc: 0x0  nop
    ctx->pc = 0x2e4accu;
    // NOP
    // 0x2e4ad0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e4ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4ad4: 0x0  nop
    ctx->pc = 0x2e4ad4u;
    // NOP
    // 0x2e4ad8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4AD8u;
    {
        const bool branch_taken_0x2e4ad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4ad8) {
            ctx->pc = 0x2E4AF0u;
            return;
        }
    }
    ctx->pc = 0x2E4AE0u;
    // 0x2e4ae0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2e4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2e4ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4ae8: 0x0  nop
    ctx->pc = 0x2e4ae8u;
    // NOP
    // 0x2e4aec: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x2e4aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    ctx->pc = 0x2e4af0u;
}
