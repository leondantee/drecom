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

// Function: entry_00252e40
// Address: 0x252e40 - 0x252e50
void entry_00252e40_0x252e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252e40_0x252e40");
#endif

    ctx->pc = 0x252e40u;

    // 0x252e40: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x252e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e44: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x252e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252e48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252e4c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x252e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->pc = 0x252e50u;
}
