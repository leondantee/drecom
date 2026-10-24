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

// Function: entry_002184f0
// Address: 0x2184f0 - 0x218518
void entry_002184f0_0x2184f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002184f0_0x2184f0");
#endif

    ctx->pc = 0x2184f0u;

    // 0x2184f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2184f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2184f4: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2184f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2184f8: 0x3c033ee5  lui         $v1, 0x3EE5
    ctx->pc = 0x2184f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16101 << 16));
    // 0x2184fc: 0x3463c73e  ori         $v1, $v1, 0xC73E
    ctx->pc = 0x2184fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51006);
    // 0x218500: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218500u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218504: 0x0  nop
    ctx->pc = 0x218504u;
    // NOP
    // 0x218508: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x218508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21850c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x21850cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x218510: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x218510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x218514: 0x0  nop
    ctx->pc = 0x218514u;
    // NOP
    ctx->pc = 0x218518u;
}
