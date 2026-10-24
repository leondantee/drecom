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

// Function: entry_00276218
// Address: 0x276218 - 0x276228
void entry_00276218_0x276218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276218_0x276218");
#endif

    ctx->pc = 0x276218u;

    // 0x276218: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x276218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x27621c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27621cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276220: 0x0  nop
    ctx->pc = 0x276220u;
    // NOP
    // 0x276224: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x276224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->pc = 0x276228u;
}
