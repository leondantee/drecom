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

// Function: entry_002ea2b8
// Address: 0x2ea2b8 - 0x2ea2e0
void entry_002ea2b8_0x2ea2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea2b8_0x2ea2b8");
#endif

    ctx->pc = 0x2ea2b8u;

    // 0x2ea2b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ea2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ea2bc: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2ea2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea2c0: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x2ea2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x2ea2c4: 0x3463098f  ori         $v1, $v1, 0x98F
    ctx->pc = 0x2ea2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x2ea2c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea2c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea2cc: 0x0  nop
    ctx->pc = 0x2ea2ccu;
    // NOP
    // 0x2ea2d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ea2d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ea2d4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ea2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ea2d8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2ea2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2ea2dc: 0x0  nop
    ctx->pc = 0x2ea2dcu;
    // NOP
    ctx->pc = 0x2ea2e0u;
}
