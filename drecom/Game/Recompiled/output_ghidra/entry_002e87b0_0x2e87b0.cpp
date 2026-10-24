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

// Function: entry_002e87b0
// Address: 0x2e87b0 - 0x2e87d4
void entry_002e87b0_0x2e87b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e87b0_0x2e87b0");
#endif

    ctx->pc = 0x2e87b0u;

    // 0x2e87b0: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x2e87b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e87b4: 0x1460ff21  bnez        $v1, . + 4 + (-0xDF << 2)
    ctx->pc = 0x2E87B4u;
    {
        const bool branch_taken_0x2e87b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e87b4) {
            ctx->pc = 0x2E843Cu;
            return;
        }
    }
    ctx->pc = 0x2E87BCu;
    // 0x2e87bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e87bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e87c0: 0x0  nop
    ctx->pc = 0x2e87c0u;
    // NOP
    // 0x2e87c4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e87c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e87c8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e87c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e87cc: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x2E87CCu;
    {
        const bool branch_taken_0x2e87cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e87cc) {
            ctx->pc = 0x2E8B78u;
            return;
        }
    }
    ctx->pc = 0x2E87D4u;
}
