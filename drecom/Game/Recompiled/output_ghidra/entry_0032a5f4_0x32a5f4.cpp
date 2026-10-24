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

// Function: entry_0032a5f4
// Address: 0x32a5f4 - 0x32a600
void entry_0032a5f4_0x32a5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a5f4_0x32a5f4");
#endif

    ctx->pc = 0x32a5f4u;

    // 0x32a5f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32a5f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a5f8: 0x0  nop
    ctx->pc = 0x32a5f8u;
    // NOP
    // 0x32a5fc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x32a5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->pc = 0x32a600u;
}
