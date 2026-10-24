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

// Function: entry_002eebf8
// Address: 0x2eebf8 - 0x2eec20
void entry_002eebf8_0x2eebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eebf8_0x2eebf8");
#endif

    ctx->pc = 0x2eebf8u;

    // 0x2eebf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2eebf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2eebfc: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2eebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eec00: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2eec00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2eec04: 0x34420e56  ori         $v0, $v0, 0xE56
    ctx->pc = 0x2eec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3670);
    // 0x2eec08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eec08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eec0c: 0x0  nop
    ctx->pc = 0x2eec0cu;
    // NOP
    // 0x2eec10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eec10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eec14: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2eec14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2eec18: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2eec18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2eec1c: 0x0  nop
    ctx->pc = 0x2eec1cu;
    // NOP
    ctx->pc = 0x2eec20u;
}
