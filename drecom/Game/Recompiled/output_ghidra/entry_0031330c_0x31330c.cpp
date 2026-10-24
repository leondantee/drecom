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

// Function: entry_0031330c
// Address: 0x31330c - 0x313328
void entry_0031330c_0x31330c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031330c_0x31330c");
#endif

    ctx->pc = 0x31330cu;

    // 0x31330c: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x31330cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x313310: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x313310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x313314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313318: 0x0  nop
    ctx->pc = 0x313318u;
    // NOP
    // 0x31331c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x31331cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x313320: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x313320u;
    {
        const bool branch_taken_0x313320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313320) {
            ctx->pc = 0x3133ACu;
            return;
        }
    }
    ctx->pc = 0x313328u;
}
