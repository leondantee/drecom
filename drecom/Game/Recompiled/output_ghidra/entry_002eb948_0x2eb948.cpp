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

// Function: entry_002eb948
// Address: 0x2eb948 - 0x2eb970
void entry_002eb948_0x2eb948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eb948_0x2eb948");
#endif

    ctx->pc = 0x2eb948u;

    // 0x2eb948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2eb948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2eb94c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2eb94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eb950: 0x3c033ed6  lui         $v1, 0x3ED6
    ctx->pc = 0x2eb950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16086 << 16));
    // 0x2eb954: 0x346375b1  ori         $v1, $v1, 0x75B1
    ctx->pc = 0x2eb954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30129);
    // 0x2eb958: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb95c: 0x0  nop
    ctx->pc = 0x2eb95cu;
    // NOP
    // 0x2eb960: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eb960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eb964: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2eb964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2eb968: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2eb968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2eb96c: 0x0  nop
    ctx->pc = 0x2eb96cu;
    // NOP
    ctx->pc = 0x2eb970u;
}
