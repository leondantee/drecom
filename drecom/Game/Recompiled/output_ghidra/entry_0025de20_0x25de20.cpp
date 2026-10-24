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

// Function: entry_0025de20
// Address: 0x25de20 - 0x25de80
void entry_0025de20_0x25de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025de20_0x25de20");
#endif

    ctx->pc = 0x25de20u;

    // 0x25de20: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x25de20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25de24: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x25de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de28: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x25de28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25de2c: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x25de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25de30: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x25de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25de34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25de38: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25de38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25de3c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x25de3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x25de40: 0xc6210108  lwc1        $f1, 0x108($s1)
    ctx->pc = 0x25de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25de44: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x25de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de48: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x25de48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25de4c: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x25de4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25de50: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x25de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25de54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25de58: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25de58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25de5c: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25de5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25de60: 0xc621010c  lwc1        $f1, 0x10C($s1)
    ctx->pc = 0x25de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25de64: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x25de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de68: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x25de68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25de6c: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x25de6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25de70: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x25de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25de74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25de78: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25de78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25de7c: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25de7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    ctx->pc = 0x25de80u;
}
