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

// Function: entry_00157580
// Address: 0x157580 - 0x157598
void entry_00157580_0x157580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157580_0x157580");
#endif

    ctx->pc = 0x157580u;

    // 0x157580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157584: 0x0  nop
    ctx->pc = 0x157584u;
    // NOP
    // 0x157588: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x157588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x15758c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x15758cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x157590: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x157590u;
    {
        const bool branch_taken_0x157590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157590) {
            ctx->pc = 0x1576F8u;
            return;
        }
    }
    ctx->pc = 0x157598u;
}
