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

// Function: entry_0015662c
// Address: 0x15662c - 0x156648
void entry_0015662c_0x15662c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015662c_0x15662c");
#endif

    ctx->pc = 0x15662cu;

    // 0x15662c: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15662Cu;
    {
        const bool branch_taken_0x15662c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x15662c) {
            ctx->pc = 0x156648u;
            return;
        }
    }
    ctx->pc = 0x156634u;
    // 0x156634: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x156634u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156638: 0x0  nop
    ctx->pc = 0x156638u;
    // NOP
    // 0x15663c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15663cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x156640: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x156640u;
    {
        const bool branch_taken_0x156640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156640) {
            ctx->pc = 0x156664u;
            return;
        }
    }
    ctx->pc = 0x156648u;
}
