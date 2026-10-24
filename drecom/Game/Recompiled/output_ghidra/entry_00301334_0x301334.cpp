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

// Function: entry_00301334
// Address: 0x301334 - 0x301348
void entry_00301334_0x301334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301334_0x301334");
#endif

    ctx->pc = 0x301334u;

    // 0x301334: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x301334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301338: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x301338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x30133c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x30133cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301340: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x301340u;
    {
        const bool branch_taken_0x301340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301340) {
            ctx->pc = 0x3018C8u;
            return;
        }
    }
    ctx->pc = 0x301348u;
}
