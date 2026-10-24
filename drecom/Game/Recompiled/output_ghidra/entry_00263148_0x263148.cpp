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

// Function: entry_00263148
// Address: 0x263148 - 0x263164
void entry_00263148_0x263148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263148_0x263148");
#endif

    ctx->pc = 0x263148u;

    // 0x263148: 0x7200006  bltz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x263148u;
    {
        const bool branch_taken_0x263148 = (GPR_S32(ctx, 25) < 0);
        if (branch_taken_0x263148) {
            ctx->pc = 0x263164u;
            return;
        }
    }
    ctx->pc = 0x263150u;
    // 0x263150: 0x44990000  mtc1        $t9, $f0
    ctx->pc = 0x263150u;
    { uint32_t bits = GPR_U32(ctx, 25); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263154: 0x0  nop
    ctx->pc = 0x263154u;
    // NOP
    // 0x263158: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x263158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26315c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26315Cu;
    {
        const bool branch_taken_0x26315c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26315c) {
            ctx->pc = 0x263180u;
            return;
        }
    }
    ctx->pc = 0x263164u;
}
