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

// Function: entry_00218148
// Address: 0x218148 - 0x21816c
void entry_00218148_0x218148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00218148_0x218148");
#endif

    ctx->pc = 0x218148u;

    // 0x218148: 0x2e23000c  sltiu       $v1, $s1, 0xC
    ctx->pc = 0x218148u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x21814c: 0x1460ff21  bnez        $v1, . + 4 + (-0xDF << 2)
    ctx->pc = 0x21814Cu;
    {
        const bool branch_taken_0x21814c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21814c) {
            ctx->pc = 0x217DD4u;
            return;
        }
    }
    ctx->pc = 0x218154u;
    // 0x218154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x218154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218158: 0x0  nop
    ctx->pc = 0x218158u;
    // NOP
    // 0x21815c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x21815cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x218160: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x218160u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218164: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x218164u;
    {
        const bool branch_taken_0x218164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218164) {
            ctx->pc = 0x218518u;
            return;
        }
    }
    ctx->pc = 0x21816Cu;
}
