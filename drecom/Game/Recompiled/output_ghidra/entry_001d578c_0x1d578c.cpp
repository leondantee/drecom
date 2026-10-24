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

// Function: entry_001d578c
// Address: 0x1d578c - 0x1d57a0
void entry_001d578c_0x1d578c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d578c_0x1d578c");
#endif

    ctx->pc = 0x1d578cu;

    // 0x1d578c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1d578cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d5790: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x1d5790u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d5794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5798: 0x0  nop
    ctx->pc = 0x1d5798u;
    // NOP
    // 0x1d579c: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x1d579cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    ctx->pc = 0x1d57a0u;
}
