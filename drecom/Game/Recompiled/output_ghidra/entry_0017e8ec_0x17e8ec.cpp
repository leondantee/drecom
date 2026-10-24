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

// Function: entry_0017e8ec
// Address: 0x17e8ec - 0x17e904
void entry_0017e8ec_0x17e8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e8ec_0x17e8ec");
#endif

    ctx->pc = 0x17e8ecu;

    // 0x17e8ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17e8ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e8f0: 0x0  nop
    ctx->pc = 0x17e8f0u;
    // NOP
    // 0x17e8f4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17e8f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17e8f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17e8fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17E8FCu;
    {
        const bool branch_taken_0x17e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e8fc) {
            ctx->pc = 0x17E928u;
            return;
        }
    }
    ctx->pc = 0x17E904u;
}
