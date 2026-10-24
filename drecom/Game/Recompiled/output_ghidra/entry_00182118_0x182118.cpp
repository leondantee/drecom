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

// Function: entry_00182118
// Address: 0x182118 - 0x182128
void entry_00182118_0x182118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182118_0x182118");
#endif

    ctx->pc = 0x182118u;

    // 0x182118: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x182118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18211c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x18211cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x182120: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x182120u;
    {
        const bool branch_taken_0x182120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182120) {
            ctx->pc = 0x18218Cu;
            return;
        }
    }
    ctx->pc = 0x182128u;
}
