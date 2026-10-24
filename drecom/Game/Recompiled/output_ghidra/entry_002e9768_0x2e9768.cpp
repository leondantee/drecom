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

// Function: entry_002e9768
// Address: 0x2e9768 - 0x2e978c
void entry_002e9768_0x2e9768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e9768_0x2e9768");
#endif

    ctx->pc = 0x2e9768u;

    // 0x2e9768: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x2e9768u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e976c: 0x1460ff21  bnez        $v1, . + 4 + (-0xDF << 2)
    ctx->pc = 0x2E976Cu;
    {
        const bool branch_taken_0x2e976c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e976c) {
            ctx->pc = 0x2E93F4u;
            return;
        }
    }
    ctx->pc = 0x2E9774u;
    // 0x2e9774: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9778: 0x0  nop
    ctx->pc = 0x2e9778u;
    // NOP
    // 0x2e977c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e977cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e9780: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e9780u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e9784: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x2E9784u;
    {
        const bool branch_taken_0x2e9784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9784) {
            ctx->pc = 0x2E9A98u;
            return;
        }
    }
    ctx->pc = 0x2E978Cu;
}
