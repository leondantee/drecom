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

// Function: entry_00220380
// Address: 0x220380 - 0x2203a8
void entry_00220380_0x220380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220380_0x220380");
#endif

    ctx->pc = 0x220380u;

    // 0x220380: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x220380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x220384: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x220384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220388: 0x3c023f65  lui         $v0, 0x3F65
    ctx->pc = 0x220388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16229 << 16));
    // 0x22038c: 0x3442c73e  ori         $v0, $v0, 0xC73E
    ctx->pc = 0x22038cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51006);
    // 0x220390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220394: 0x0  nop
    ctx->pc = 0x220394u;
    // NOP
    // 0x220398: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x220398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22039c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x22039cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2203a0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2203a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2203a4: 0x0  nop
    ctx->pc = 0x2203a4u;
    // NOP
    ctx->pc = 0x2203a8u;
}
