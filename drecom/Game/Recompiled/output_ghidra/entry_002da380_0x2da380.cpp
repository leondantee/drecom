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

// Function: entry_002da380
// Address: 0x2da380 - 0x2da398
void entry_002da380_0x2da380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da380_0x2da380");
#endif

    ctx->pc = 0x2da380u;

    // 0x2da380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da384: 0x0  nop
    ctx->pc = 0x2da384u;
    // NOP
    // 0x2da388: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da38c: 0xa20000d8  sb          $zero, 0xD8($s0)
    ctx->pc = 0x2da38cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da390: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2DA390u;
    {
        const bool branch_taken_0x2da390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da390) {
            ctx->pc = 0x2DA470u;
            return;
        }
    }
    ctx->pc = 0x2DA398u;
}
