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

// Function: entry_002da2c4
// Address: 0x2da2c4 - 0x2da2dc
void entry_002da2c4_0x2da2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da2c4_0x2da2c4");
#endif

    ctx->pc = 0x2da2c4u;

    // 0x2da2c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da2c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da2c8: 0x0  nop
    ctx->pc = 0x2da2c8u;
    // NOP
    // 0x2da2cc: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da2d0: 0xa20000d8  sb          $zero, 0xD8($s0)
    ctx->pc = 0x2da2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da2d4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2DA2D4u;
    {
        const bool branch_taken_0x2da2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da2d4) {
            ctx->pc = 0x2DA470u;
            return;
        }
    }
    ctx->pc = 0x2DA2DCu;
}
