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

// Function: entry_002da2dc
// Address: 0x2da2dc - 0x2da2f4
void entry_002da2dc_0x2da2dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da2dc_0x2da2dc");
#endif

    ctx->pc = 0x2da2dcu;

    // 0x2da2dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da2dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da2e0: 0x0  nop
    ctx->pc = 0x2da2e0u;
    // NOP
    // 0x2da2e4: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da2e8: 0xa20000d8  sb          $zero, 0xD8($s0)
    ctx->pc = 0x2da2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da2ec: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2DA2ECu;
    {
        const bool branch_taken_0x2da2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da2ec) {
            ctx->pc = 0x2DA470u;
            return;
        }
    }
    ctx->pc = 0x2DA2F4u;
}
