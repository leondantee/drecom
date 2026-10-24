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

// Function: entry_002eb970
// Address: 0x2eb970 - 0x2eb994
void entry_002eb970_0x2eb970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eb970_0x2eb970");
#endif

    ctx->pc = 0x2eb970u;

    // 0x2eb970: 0x2a23000f  slti        $v1, $s1, 0xF
    ctx->pc = 0x2eb970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2eb974: 0x1460ff44  bnez        $v1, . + 4 + (-0xBC << 2)
    ctx->pc = 0x2EB974u;
    {
        const bool branch_taken_0x2eb974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb974) {
            ctx->pc = 0x2EB688u;
            return;
        }
    }
    ctx->pc = 0x2EB97Cu;
    // 0x2eb97c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eb97cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb980: 0x0  nop
    ctx->pc = 0x2eb980u;
    // NOP
    // 0x2eb984: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2eb984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2eb988: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2eb988u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eb98c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2EB98Cu;
    {
        const bool branch_taken_0x2eb98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb98c) {
            ctx->pc = 0x2EBC40u;
            return;
        }
    }
    ctx->pc = 0x2EB994u;
}
