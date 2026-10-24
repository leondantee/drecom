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

// Function: entry_00156674
// Address: 0x156674 - 0x156690
void entry_00156674_0x156674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156674_0x156674");
#endif

    ctx->pc = 0x156674u;

    // 0x156674: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x156674u;
    {
        const bool branch_taken_0x156674 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x156674) {
            ctx->pc = 0x156690u;
            return;
        }
    }
    ctx->pc = 0x15667Cu;
    // 0x15667c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x15667cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156680: 0x0  nop
    ctx->pc = 0x156680u;
    // NOP
    // 0x156684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x156684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x156688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x156688u;
    {
        const bool branch_taken_0x156688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156688) {
            ctx->pc = 0x1566ACu;
            return;
        }
    }
    ctx->pc = 0x156690u;
}
