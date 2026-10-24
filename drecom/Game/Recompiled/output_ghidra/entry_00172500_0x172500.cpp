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

// Function: entry_00172500
// Address: 0x172500 - 0x17250c
void entry_00172500_0x172500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172500_0x172500");
#endif

    ctx->pc = 0x172500u;

    // 0x172500: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x172500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172504: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172504u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x172508: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x172508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->pc = 0x17250cu;
}
