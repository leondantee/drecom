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

// Function: entry_0021b5b0
// Address: 0x21b5b0 - 0x21b5d8
void entry_0021b5b0_0x21b5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b5b0_0x21b5b0");
#endif

    ctx->pc = 0x21b5b0u;

    // 0x21b5b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21b5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b5b4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x21b5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b5b8: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x21b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x21b5bc: 0x3463098f  ori         $v1, $v1, 0x98F
    ctx->pc = 0x21b5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x21b5c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b5c4: 0x0  nop
    ctx->pc = 0x21b5c4u;
    // NOP
    // 0x21b5c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21b5c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21b5cc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21b5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21b5d0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x21b5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x21b5d4: 0x0  nop
    ctx->pc = 0x21b5d4u;
    // NOP
    ctx->pc = 0x21b5d8u;
}
