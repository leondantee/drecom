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

// Function: entry_0026dd34
// Address: 0x26dd34 - 0x26dd48
void entry_0026dd34_0x26dd34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026dd34_0x26dd34");
#endif

    ctx->pc = 0x26dd34u;

    // 0x26dd34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26dd34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dd38: 0x0  nop
    ctx->pc = 0x26dd38u;
    // NOP
    // 0x26dd3c: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
    // 0x26dd40: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26DD40u;
    {
        const bool branch_taken_0x26dd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd40) {
            ctx->pc = 0x26DD94u;
            return;
        }
    }
    ctx->pc = 0x26DD48u;
}
