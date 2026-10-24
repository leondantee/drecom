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

// Function: entry_0017eea4
// Address: 0x17eea4 - 0x17eeb4
void entry_0017eea4_0x17eea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eea4_0x17eea4");
#endif

    ctx->pc = 0x17eea4u;

    // 0x17eea4: 0x0  nop
    ctx->pc = 0x17eea4u;
    // NOP
    // 0x17eea8: 0x0  nop
    ctx->pc = 0x17eea8u;
    // NOP
    // 0x17eeac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17eeacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17eeb0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x17eeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x17eeb4u;
}
