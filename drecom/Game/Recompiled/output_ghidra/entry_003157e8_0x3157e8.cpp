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

// Function: entry_003157e8
// Address: 0x3157e8 - 0x31580c
void entry_003157e8_0x3157e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003157e8_0x3157e8");
#endif

    ctx->pc = 0x3157e8u;

    // 0x3157e8: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x3157e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3157ec: 0x1460ff61  bnez        $v1, . + 4 + (-0x9F << 2)
    ctx->pc = 0x3157ECu;
    {
        const bool branch_taken_0x3157ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3157ec) {
            ctx->pc = 0x315574u;
            return;
        }
    }
    ctx->pc = 0x3157F4u;
    // 0x3157f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3157f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3157f8: 0x0  nop
    ctx->pc = 0x3157f8u;
    // NOP
    // 0x3157fc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3157fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x315800: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x315800u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x315804: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x315804u;
    {
        const bool branch_taken_0x315804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315804) {
            ctx->pc = 0x315B88u;
            return;
        }
    }
    ctx->pc = 0x31580Cu;
}
