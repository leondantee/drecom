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

// Function: entry_0027c0e0
// Address: 0x27c0e0 - 0x27c0f8
void entry_0027c0e0_0x27c0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c0e0_0x27c0e0");
#endif

    ctx->pc = 0x27c0e0u;

    // 0x27c0e0: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x27c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x27c0e4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x27c0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x27c0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c0ec: 0x0  nop
    ctx->pc = 0x27c0ecu;
    // NOP
    // 0x27c0f0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27c0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x27c0f4: 0x0  nop
    ctx->pc = 0x27c0f4u;
    // NOP
    ctx->pc = 0x27c0f8u;
}
