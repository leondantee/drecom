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

// Function: entry_002ed4a0
// Address: 0x2ed4a0 - 0x2ed4c8
void entry_002ed4a0_0x2ed4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed4a0_0x2ed4a0");
#endif

    ctx->pc = 0x2ed4a0u;

    // 0x2ed4a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ed4a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ed4a4: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2ed4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed4a8: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x2ed4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x2ed4ac: 0x3463098f  ori         $v1, $v1, 0x98F
    ctx->pc = 0x2ed4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x2ed4b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed4b4: 0x0  nop
    ctx->pc = 0x2ed4b4u;
    // NOP
    // 0x2ed4b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ed4b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ed4bc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2ed4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2ed4c0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2ed4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2ed4c4: 0x0  nop
    ctx->pc = 0x2ed4c4u;
    // NOP
    ctx->pc = 0x2ed4c8u;
}
