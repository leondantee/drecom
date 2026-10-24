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

// Function: entry_002f1d90
// Address: 0x2f1d90 - 0x2f1db4
void entry_002f1d90_0x2f1d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f1d90_0x2f1d90");
#endif

    ctx->pc = 0x2f1d90u;

    // 0x2f1d90: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x2f1d90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2f1d94: 0x1460fefc  bnez        $v1, . + 4 + (-0x104 << 2)
    ctx->pc = 0x2F1D94u;
    {
        const bool branch_taken_0x2f1d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1d94) {
            ctx->pc = 0x2F1988u;
            return;
        }
    }
    ctx->pc = 0x2F1D9Cu;
    // 0x2f1d9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f1d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1da0: 0x0  nop
    ctx->pc = 0x2f1da0u;
    // NOP
    // 0x2f1da4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f1da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f1da8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2f1da8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1dac: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x2F1DACu;
    {
        const bool branch_taken_0x2f1dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1dac) {
            ctx->pc = 0x2F2140u;
            return;
        }
    }
    ctx->pc = 0x2F1DB4u;
}
