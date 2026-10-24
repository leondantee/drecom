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

// Function: entry_00329e8c
// Address: 0x329e8c - 0x329e98
void entry_00329e8c_0x329e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329e8c_0x329e8c");
#endif

    ctx->pc = 0x329e8cu;

    // 0x329e8c: 0xc6002824  lwc1        $f0, 0x2824($s0)
    ctx->pc = 0x329e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329e90: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x329e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x329e94: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x329e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->pc = 0x329e98u;
}
