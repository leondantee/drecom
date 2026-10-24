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

// Function: entry_00172844
// Address: 0x172844 - 0x172850
void entry_00172844_0x172844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172844_0x172844");
#endif

    ctx->pc = 0x172844u;

    // 0x172844: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172848: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172848u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17284c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x17284cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->pc = 0x172850u;
}
