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

// Function: entry_001dcca8
// Address: 0x1dcca8 - 0x1dccb0
void entry_001dcca8_0x1dcca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcca8_0x1dcca8");
#endif

    ctx->pc = 0x1dcca8u;

    // 0x1dcca8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1dcca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dccac: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1dccacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    ctx->pc = 0x1dccb0u;
}
