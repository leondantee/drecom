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

// Function: entry_003118f8
// Address: 0x3118f8 - 0x311908
void entry_003118f8_0x3118f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003118f8_0x3118f8");
#endif

    ctx->pc = 0x3118f8u;

    // 0x3118f8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3118f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3118fc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3118fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311900: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x311900u;
    {
        const bool branch_taken_0x311900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311900) {
            ctx->pc = 0x311958u;
            return;
        }
    }
    ctx->pc = 0x311908u;
}
