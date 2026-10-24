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

// Function: entry_002fee78
// Address: 0x2fee78 - 0x2fee88
void entry_002fee78_0x2fee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fee78_0x2fee78");
#endif

    ctx->pc = 0x2fee78u;

    // 0x2fee78: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2fee78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2fee7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fee7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee80: 0x0  nop
    ctx->pc = 0x2fee80u;
    // NOP
    // 0x2fee84: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2fee84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    ctx->pc = 0x2fee88u;
}
