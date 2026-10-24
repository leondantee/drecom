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

// Function: entry_0017bcc0
// Address: 0x17bcc0 - 0x17bcc8
void entry_0017bcc0_0x17bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bcc0_0x17bcc0");
#endif

    ctx->pc = 0x17bcc0u;

    // 0x17bcc0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17bcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bcc4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17bcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x17bcc8u;
}
