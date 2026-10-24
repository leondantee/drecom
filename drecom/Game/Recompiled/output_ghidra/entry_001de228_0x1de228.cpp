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

// Function: entry_001de228
// Address: 0x1de228 - 0x1de230
void entry_001de228_0x1de228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de228_0x1de228");
#endif

    ctx->pc = 0x1de228u;

    // 0x1de228: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1de228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de22c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1de22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    ctx->pc = 0x1de230u;
}
