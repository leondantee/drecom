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

// Function: entry_002eb310
// Address: 0x2eb310 - 0x2eb338
void entry_002eb310_0x2eb310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eb310_0x2eb310");
#endif

    ctx->pc = 0x2eb310u;

    // 0x2eb310: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2eb310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2eb314: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2eb314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eb318: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x2eb318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x2eb31c: 0x3463098f  ori         $v1, $v1, 0x98F
    ctx->pc = 0x2eb31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x2eb320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb324: 0x0  nop
    ctx->pc = 0x2eb324u;
    // NOP
    // 0x2eb328: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eb328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eb32c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2eb32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2eb330: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2eb330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2eb334: 0x0  nop
    ctx->pc = 0x2eb334u;
    // NOP
    ctx->pc = 0x2eb338u;
}
