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

// Function: entry_002ea2e0
// Address: 0x2ea2e0 - 0x2ea304
void entry_002ea2e0_0x2ea2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea2e0_0x2ea2e0");
#endif

    ctx->pc = 0x2ea2e0u;

    // 0x2ea2e0: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x2ea2e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ea2e4: 0x1460ff1b  bnez        $v1, . + 4 + (-0xE5 << 2)
    ctx->pc = 0x2EA2E4u;
    {
        const bool branch_taken_0x2ea2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea2e4) {
            ctx->pc = 0x2E9F54u;
            return;
        }
    }
    ctx->pc = 0x2EA2ECu;
    // 0x2ea2ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ea2ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea2f0: 0x0  nop
    ctx->pc = 0x2ea2f0u;
    // NOP
    // 0x2ea2f4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ea2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ea2f8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ea2f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea2fc: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x2EA2FCu;
    {
        const bool branch_taken_0x2ea2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea2fc) {
            ctx->pc = 0x2EA6A0u;
            return;
        }
    }
    ctx->pc = 0x2EA304u;
}
