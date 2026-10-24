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

// Function: entry_00172560
// Address: 0x172560 - 0x17256c
void entry_00172560_0x172560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172560_0x172560");
#endif

    ctx->pc = 0x172560u;

    // 0x172560: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x172560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172564: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172564u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x172568: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x172568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x17256cu;
}
