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

// Function: entry_002eb5c8
// Address: 0x2eb5c8 - 0x2eb5f0
void entry_002eb5c8_0x2eb5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eb5c8_0x2eb5c8");
#endif

    ctx->pc = 0x2eb5c8u;

    // 0x2eb5c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2eb5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2eb5cc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2eb5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eb5d0: 0x3c033ea0  lui         $v1, 0x3EA0
    ctx->pc = 0x2eb5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16032 << 16));
    // 0x2eb5d4: 0x3463d845  ori         $v1, $v1, 0xD845
    ctx->pc = 0x2eb5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x2eb5d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb5d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb5dc: 0x0  nop
    ctx->pc = 0x2eb5dcu;
    // NOP
    // 0x2eb5e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eb5e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eb5e4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2eb5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2eb5e8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2eb5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2eb5ec: 0x0  nop
    ctx->pc = 0x2eb5ecu;
    // NOP
    ctx->pc = 0x2eb5f0u;
}
