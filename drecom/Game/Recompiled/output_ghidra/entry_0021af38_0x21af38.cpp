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

// Function: entry_0021af38
// Address: 0x21af38 - 0x21af5c
void entry_0021af38_0x21af38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021af38_0x21af38");
#endif

    ctx->pc = 0x21af38u;

    // 0x21af38: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x21af38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x21af3c: 0x1460ff67  bnez        $v1, . + 4 + (-0x99 << 2)
    ctx->pc = 0x21AF3Cu;
    {
        const bool branch_taken_0x21af3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21af3c) {
            ctx->pc = 0x21ACDCu;
            return;
        }
    }
    ctx->pc = 0x21AF44u;
    // 0x21af44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21af44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21af48: 0x0  nop
    ctx->pc = 0x21af48u;
    // NOP
    // 0x21af4c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21af4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21af50: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21af50u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21af54: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x21AF54u;
    {
        const bool branch_taken_0x21af54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21af54) {
            ctx->pc = 0x21B2E0u;
            return;
        }
    }
    ctx->pc = 0x21AF5Cu;
}
