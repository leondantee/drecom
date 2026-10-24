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

// Function: entry_00315108
// Address: 0x315108 - 0x315130
void entry_00315108_0x315108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00315108_0x315108");
#endif

    ctx->pc = 0x315108u;

    // 0x315108: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x315108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31510c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x31510cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x315110: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x315110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
    // 0x315114: 0x3463d845  ori         $v1, $v1, 0xD845
    ctx->pc = 0x315114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x315118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31511c: 0x0  nop
    ctx->pc = 0x31511cu;
    // NOP
    // 0x315120: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x315120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x315124: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x315124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x315128: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x315128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x31512c: 0x0  nop
    ctx->pc = 0x31512cu;
    // NOP
    ctx->pc = 0x315130u;
}
