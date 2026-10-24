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

// Function: entry_002e8788
// Address: 0x2e8788 - 0x2e87b0
void entry_002e8788_0x2e8788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e8788_0x2e8788");
#endif

    ctx->pc = 0x2e8788u;

    // 0x2e8788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e8788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e878c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e8790: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x2e8790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x2e8794: 0x3463098f  ori         $v1, $v1, 0x98F
    ctx->pc = 0x2e8794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x2e8798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e879c: 0x0  nop
    ctx->pc = 0x2e879cu;
    // NOP
    // 0x2e87a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e87a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e87a4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e87a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e87a8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2e87a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2e87ac: 0x0  nop
    ctx->pc = 0x2e87acu;
    // NOP
    ctx->pc = 0x2e87b0u;
}
