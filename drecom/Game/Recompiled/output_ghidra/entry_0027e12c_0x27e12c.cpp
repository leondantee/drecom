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

// Function: entry_0027e12c
// Address: 0x27e12c - 0x27e150
void entry_0027e12c_0x27e12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e12c_0x27e12c");
#endif

    ctx->pc = 0x27e12cu;

    // 0x27e12c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x27e130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e134: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E134u;
    {
        const bool branch_taken_0x27e134 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x27e134) {
            ctx->pc = 0x27E150u;
            return;
        }
    }
    ctx->pc = 0x27E13Cu;
    // 0x27e13c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x27e13cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e140: 0x0  nop
    ctx->pc = 0x27e140u;
    // NOP
    // 0x27e144: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e148: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27E148u;
    {
        const bool branch_taken_0x27e148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e148) {
            ctx->pc = 0x27E16Cu;
            return;
        }
    }
    ctx->pc = 0x27E150u;
}
