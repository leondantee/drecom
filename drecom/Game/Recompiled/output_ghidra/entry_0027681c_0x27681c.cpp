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

// Function: entry_0027681c
// Address: 0x27681c - 0x276834
void entry_0027681c_0x27681c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027681c_0x27681c");
#endif

    ctx->pc = 0x27681cu;

    // 0x27681c: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x27681cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
    // 0x276820: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276824: 0x0  nop
    ctx->pc = 0x276824u;
    // NOP
    // 0x276828: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x27682c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27682Cu;
    {
        const bool branch_taken_0x27682c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27682c) {
            ctx->pc = 0x276848u;
            return;
        }
    }
    ctx->pc = 0x276834u;
}
