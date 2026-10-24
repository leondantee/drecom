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

// Function: entry_00257de0
// Address: 0x257de0 - 0x257e08
void entry_00257de0_0x257de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257de0_0x257de0");
#endif

    ctx->pc = 0x257de0u;

    // 0x257de0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x257de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x257de4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x257de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257de8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x257de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257dec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257decu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x257df0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x257df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x257df4: 0xc6000d80  lwc1        $f0, 0xD80($s0)
    ctx->pc = 0x257df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257df8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x257df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x257dfc: 0xc6000d80  lwc1        $f0, 0xD80($s0)
    ctx->pc = 0x257dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257e00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x257e00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x257e04: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x257e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->pc = 0x257e08u;
}
