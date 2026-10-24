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

// Function: entry_00189dd4
// Address: 0x189dd4 - 0x189ddc
void entry_00189dd4_0x189dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189dd4_0x189dd4");
#endif

    ctx->pc = 0x189dd4u;

    // 0x189dd4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x189dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189dd8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x189dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->pc = 0x189ddcu;
}
