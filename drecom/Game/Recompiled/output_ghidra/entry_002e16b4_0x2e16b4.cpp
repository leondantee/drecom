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

// Function: entry_002e16b4
// Address: 0x2e16b4 - 0x2e16c4
void entry_002e16b4_0x2e16b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e16b4_0x2e16b4");
#endif

    ctx->pc = 0x2e16b4u;

    // 0x2e16b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e16b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e16b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e16b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e16bc: 0x0  nop
    ctx->pc = 0x2e16bcu;
    // NOP
    // 0x2e16c0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e16c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->pc = 0x2e16c4u;
}
