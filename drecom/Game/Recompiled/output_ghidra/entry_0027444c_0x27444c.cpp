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

// Function: entry_0027444c
// Address: 0x27444c - 0x274460
void entry_0027444c_0x27444c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027444c_0x27444c");
#endif

    ctx->pc = 0x27444cu;

    // 0x27444c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x27444cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x274450: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274454: 0x0  nop
    ctx->pc = 0x274454u;
    // NOP
    // 0x274458: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x274458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x27445c: 0x0  nop
    ctx->pc = 0x27445cu;
    // NOP
    ctx->pc = 0x274460u;
}
