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

// Function: entry_0029cbac
// Address: 0x29cbac - 0x29cbc8
void entry_0029cbac_0x29cbac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029cbac_0x29cbac");
#endif

    ctx->pc = 0x29cbacu;

    // 0x29cbac: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29CBACu;
    {
        const bool branch_taken_0x29cbac = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x29cbac) {
            ctx->pc = 0x29CBC8u;
            return;
        }
    }
    ctx->pc = 0x29CBB4u;
    // 0x29cbb4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x29cbb4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cbb8: 0x0  nop
    ctx->pc = 0x29cbb8u;
    // NOP
    // 0x29cbbc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x29cbbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x29cbc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29CBC0u;
    {
        const bool branch_taken_0x29cbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cbc0) {
            ctx->pc = 0x29CBE4u;
            return;
        }
    }
    ctx->pc = 0x29CBC8u;
}
