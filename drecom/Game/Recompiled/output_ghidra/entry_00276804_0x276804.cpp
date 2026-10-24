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

// Function: entry_00276804
// Address: 0x276804 - 0x27681c
void entry_00276804_0x276804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276804_0x276804");
#endif

    ctx->pc = 0x276804u;

    // 0x276804: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x276804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x276808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27680c: 0x0  nop
    ctx->pc = 0x27680cu;
    // NOP
    // 0x276810: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x276814: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x276814u;
    {
        const bool branch_taken_0x276814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276814) {
            ctx->pc = 0x276848u;
            return;
        }
    }
    ctx->pc = 0x27681Cu;
}
