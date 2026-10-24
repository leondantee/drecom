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

// Function: entry_002f1530
// Address: 0x2f1530 - 0x2f1558
void entry_002f1530_0x2f1530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f1530_0x2f1530");
#endif

    ctx->pc = 0x2f1530u;

    // 0x2f1530: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f1530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f1534: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2f1534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f1538: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x2f1538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x2f153c: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2f153cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2f1540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f1540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1544: 0x0  nop
    ctx->pc = 0x2f1544u;
    // NOP
    // 0x2f1548: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f1548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f154c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f154cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f1550: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2f1550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2f1554: 0x0  nop
    ctx->pc = 0x2f1554u;
    // NOP
    ctx->pc = 0x2f1558u;
}
