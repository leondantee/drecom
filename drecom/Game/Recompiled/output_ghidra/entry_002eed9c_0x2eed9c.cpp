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

// Function: entry_002eed9c
// Address: 0x2eed9c - 0x2eedb4
void entry_002eed9c_0x2eed9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eed9c_0x2eed9c");
#endif

    ctx->pc = 0x2eed9cu;

    // 0x2eed9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eed9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeda0: 0x0  nop
    ctx->pc = 0x2eeda0u;
    // NOP
    // 0x2eeda4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2eeda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2eeda8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2eeda8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eedac: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x2EEDACu;
    {
        const bool branch_taken_0x2eedac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eedac) {
            ctx->pc = 0x2EF240u;
            return;
        }
    }
    ctx->pc = 0x2EEDB4u;
}
