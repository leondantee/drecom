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

// Function: entry_003565c0
// Address: 0x3565c0 - 0x3565d8
void entry_003565c0_0x3565c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003565c0_0x3565c0");
#endif

    ctx->pc = 0x3565c0u;

    // 0x3565c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3565c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3565c4: 0x0  nop
    ctx->pc = 0x3565c4u;
    // NOP
    // 0x3565c8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3565c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3565cc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x3565ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3565d0: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x3565D0u;
    {
        const bool branch_taken_0x3565d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3565d0) {
            ctx->pc = 0x356A30u;
            return;
        }
    }
    ctx->pc = 0x3565D8u;
}
