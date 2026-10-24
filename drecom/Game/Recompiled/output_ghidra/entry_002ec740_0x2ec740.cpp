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

// Function: entry_002ec740
// Address: 0x2ec740 - 0x2ec764
void entry_002ec740_0x2ec740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ec740_0x2ec740");
#endif

    ctx->pc = 0x2ec740u;

    // 0x2ec740: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x2ec740u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ec744: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x2EC744u;
    {
        const bool branch_taken_0x2ec744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec744) {
            ctx->pc = 0x2EC3C4u;
            return;
        }
    }
    ctx->pc = 0x2EC74Cu;
    // 0x2ec74c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ec74cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec750: 0x0  nop
    ctx->pc = 0x2ec750u;
    // NOP
    // 0x2ec754: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ec754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ec758: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ec758u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec75c: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x2EC75Cu;
    {
        const bool branch_taken_0x2ec75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec75c) {
            ctx->pc = 0x2ECA70u;
            return;
        }
    }
    ctx->pc = 0x2EC764u;
}
