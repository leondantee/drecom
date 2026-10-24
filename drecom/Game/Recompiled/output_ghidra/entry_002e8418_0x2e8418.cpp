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

// Function: entry_002e8418
// Address: 0x2e8418 - 0x2e843c
void entry_002e8418_0x2e8418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e8418_0x2e8418");
#endif

    ctx->pc = 0x2e8418u;

    // 0x2e8418: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x2e8418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2e841c: 0x1460ff0d  bnez        $v1, . + 4 + (-0xF3 << 2)
    ctx->pc = 0x2E841Cu;
    {
        const bool branch_taken_0x2e841c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e841c) {
            ctx->pc = 0x2E8054u;
            return;
        }
    }
    ctx->pc = 0x2E8424u;
    // 0x2e8424: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e8424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8428: 0x0  nop
    ctx->pc = 0x2e8428u;
    // NOP
    // 0x2e842c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e842cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e8430: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e8430u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e8434: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2E8434u;
    {
        const bool branch_taken_0x2e8434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8434) {
            ctx->pc = 0x2E87B0u;
            return;
        }
    }
    ctx->pc = 0x2E843Cu;
}
