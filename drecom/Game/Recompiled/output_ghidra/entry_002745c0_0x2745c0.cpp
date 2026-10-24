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

// Function: entry_002745c0
// Address: 0x2745c0 - 0x2745d0
void entry_002745c0_0x2745c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002745c0_0x2745c0");
#endif

    ctx->pc = 0x2745c0u;

    // 0x2745c0: 0x3c16bf80  lui         $s6, 0xBF80
    ctx->pc = 0x2745c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)49024 << 16));
    // 0x2745c4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2745c4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2745c8: 0x0  nop
    ctx->pc = 0x2745c8u;
    // NOP
    // 0x2745cc: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2745ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->pc = 0x2745d0u;
}
