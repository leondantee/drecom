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

// Function: entry_00261e80
// Address: 0x261e80 - 0x261ea4
void entry_00261e80_0x261e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00261e80_0x261e80");
#endif

    ctx->pc = 0x261e80u;

    // 0x261e80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x261e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x261e84: 0x8c22fdf8  lw          $v0, -0x208($at)
    ctx->pc = 0x261e84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x261e88: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261E88u;
    {
        const bool branch_taken_0x261e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261e88) {
            ctx->pc = 0x261EA4u;
            return;
        }
    }
    ctx->pc = 0x261E90u;
    // 0x261e90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x261e90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261e94: 0x0  nop
    ctx->pc = 0x261e94u;
    // NOP
    // 0x261e98: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x261e9c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x261E9Cu;
    {
        const bool branch_taken_0x261e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261e9c) {
            ctx->pc = 0x261EE4u;
            return;
        }
    }
    ctx->pc = 0x261EA4u;
}
