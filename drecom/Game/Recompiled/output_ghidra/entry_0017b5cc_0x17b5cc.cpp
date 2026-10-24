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

// Function: entry_0017b5cc
// Address: 0x17b5cc - 0x17b5e8
void entry_0017b5cc_0x17b5cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b5cc_0x17b5cc");
#endif

    ctx->pc = 0x17b5ccu;

    // 0x17b5cc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B5CCu;
    {
        const bool branch_taken_0x17b5cc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x17b5cc) {
            ctx->pc = 0x17B5E8u;
            return;
        }
    }
    ctx->pc = 0x17B5D4u;
    // 0x17b5d4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x17b5d4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b5d8: 0x0  nop
    ctx->pc = 0x17b5d8u;
    // NOP
    // 0x17b5dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17b5dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17b5e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17B5E0u;
    {
        const bool branch_taken_0x17b5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b5e0) {
            ctx->pc = 0x17B604u;
            return;
        }
    }
    ctx->pc = 0x17B5E8u;
}
