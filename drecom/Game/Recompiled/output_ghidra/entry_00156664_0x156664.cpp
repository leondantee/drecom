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

// Function: entry_00156664
// Address: 0x156664 - 0x156674
void entry_00156664_0x156664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156664_0x156664");
#endif

    ctx->pc = 0x156664u;

    // 0x156664: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x156664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x156668: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x156668u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15666c: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x15666Cu;
    {
        const bool branch_taken_0x15666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15666c) {
            ctx->pc = 0x156F00u;
            return;
        }
    }
    ctx->pc = 0x156674u;
}
