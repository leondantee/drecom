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

// Function: entry_002631d4
// Address: 0x2631d4 - 0x2631f0
void entry_002631d4_0x2631d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002631d4_0x2631d4");
#endif

    ctx->pc = 0x2631d4u;

    // 0x2631d4: 0x7200006  bltz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x2631D4u;
    {
        const bool branch_taken_0x2631d4 = (GPR_S32(ctx, 25) < 0);
        if (branch_taken_0x2631d4) {
            ctx->pc = 0x2631F0u;
            return;
        }
    }
    ctx->pc = 0x2631DCu;
    // 0x2631dc: 0x44990000  mtc1        $t9, $f0
    ctx->pc = 0x2631dcu;
    { uint32_t bits = GPR_U32(ctx, 25); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2631e0: 0x0  nop
    ctx->pc = 0x2631e0u;
    // NOP
    // 0x2631e4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2631e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2631e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2631E8u;
    {
        const bool branch_taken_0x2631e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2631e8) {
            ctx->pc = 0x26320Cu;
            return;
        }
    }
    ctx->pc = 0x2631F0u;
}
