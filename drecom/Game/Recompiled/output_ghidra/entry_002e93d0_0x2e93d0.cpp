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

// Function: entry_002e93d0
// Address: 0x2e93d0 - 0x2e93f4
void entry_002e93d0_0x2e93d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e93d0_0x2e93d0");
#endif

    ctx->pc = 0x2e93d0u;

    // 0x2e93d0: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x2e93d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e93d4: 0x1460ff33  bnez        $v1, . + 4 + (-0xCD << 2)
    ctx->pc = 0x2E93D4u;
    {
        const bool branch_taken_0x2e93d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e93d4) {
            ctx->pc = 0x2E90A4u;
            return;
        }
    }
    ctx->pc = 0x2E93DCu;
    // 0x2e93dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e93dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e93e0: 0x0  nop
    ctx->pc = 0x2e93e0u;
    // NOP
    // 0x2e93e4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e93e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e93e8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e93e8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e93ec: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2E93ECu;
    {
        const bool branch_taken_0x2e93ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e93ec) {
            ctx->pc = 0x2E9768u;
            return;
        }
    }
    ctx->pc = 0x2E93F4u;
}
