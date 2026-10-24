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

// Function: entry_00189f78
// Address: 0x189f78 - 0x189f84
void entry_00189f78_0x189f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189f78_0x189f78");
#endif

    ctx->pc = 0x189f78u;

    // 0x189f78: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x189f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189f7c: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x189f7cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x189f80: 0xe7a200ec  swc1        $f2, 0xEC($sp)
    ctx->pc = 0x189f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    ctx->pc = 0x189f84u;
}
