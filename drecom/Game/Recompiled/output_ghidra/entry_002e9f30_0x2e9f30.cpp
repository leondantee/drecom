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

// Function: entry_002e9f30
// Address: 0x2e9f30 - 0x2e9f54
void entry_002e9f30_0x2e9f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e9f30_0x2e9f30");
#endif

    ctx->pc = 0x2e9f30u;

    // 0x2e9f30: 0x2a24000c  slti        $a0, $s1, 0xC
    ctx->pc = 0x2e9f30u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2e9f34: 0x1480ff0b  bnez        $a0, . + 4 + (-0xF5 << 2)
    ctx->pc = 0x2E9F34u;
    {
        const bool branch_taken_0x2e9f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f34) {
            ctx->pc = 0x2E9B64u;
            return;
        }
    }
    ctx->pc = 0x2E9F3Cu;
    // 0x2e9f3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9f40: 0x0  nop
    ctx->pc = 0x2e9f40u;
    // NOP
    // 0x2e9f44: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e9f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2e9f48: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e9f48u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e9f4c: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x2E9F4Cu;
    {
        const bool branch_taken_0x2e9f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f4c) {
            ctx->pc = 0x2EA2E0u;
            return;
        }
    }
    ctx->pc = 0x2E9F54u;
}
