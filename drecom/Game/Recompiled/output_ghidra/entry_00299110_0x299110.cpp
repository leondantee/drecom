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

// Function: entry_00299110
// Address: 0x299110 - 0x29912c
void entry_00299110_0x299110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299110_0x299110");
#endif

    ctx->pc = 0x299110u;

    // 0x299110: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x299110u;
    {
        const bool branch_taken_0x299110 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x299110) {
            ctx->pc = 0x29912Cu;
            return;
        }
    }
    ctx->pc = 0x299118u;
    // 0x299118: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x299118u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29911c: 0x0  nop
    ctx->pc = 0x29911cu;
    // NOP
    // 0x299120: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x299120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x299124: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299124u;
    {
        const bool branch_taken_0x299124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299124) {
            ctx->pc = 0x299148u;
            return;
        }
    }
    ctx->pc = 0x29912Cu;
}
