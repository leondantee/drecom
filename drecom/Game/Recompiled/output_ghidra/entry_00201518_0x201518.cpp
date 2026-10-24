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

// Function: entry_00201518
// Address: 0x201518 - 0x201534
void entry_00201518_0x201518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201518_0x201518");
#endif

    ctx->pc = 0x201518u;

    // 0x201518: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x201518u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x20151c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x20151Cu;
    {
        const bool branch_taken_0x20151c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20151c) {
            ctx->pc = 0x2014FCu;
            return;
        }
    }
    ctx->pc = 0x201524u;
    // 0x201524: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x201524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x201528: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x201528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20152c: 0x0  nop
    ctx->pc = 0x20152cu;
    // NOP
    // 0x201530: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x201530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->pc = 0x201534u;
}
