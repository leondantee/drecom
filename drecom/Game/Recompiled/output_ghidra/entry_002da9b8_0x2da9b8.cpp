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

// Function: entry_002da9b8
// Address: 0x2da9b8 - 0x2da9cc
void entry_002da9b8_0x2da9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da9b8_0x2da9b8");
#endif

    ctx->pc = 0x2da9b8u;

    // 0x2da9b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da9b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da9bc: 0x0  nop
    ctx->pc = 0x2da9bcu;
    // NOP
    // 0x2da9c0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2da9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2da9c4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2DA9C4u;
    {
        const bool branch_taken_0x2da9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da9c4) {
            ctx->pc = 0x2DAA50u;
            return;
        }
    }
    ctx->pc = 0x2DA9CCu;
}
