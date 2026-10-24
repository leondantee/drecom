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

// Function: entry_001820ac
// Address: 0x1820ac - 0x1820bc
void entry_001820ac_0x1820ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001820ac_0x1820ac");
#endif

    ctx->pc = 0x1820acu;

    // 0x1820ac: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1820acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1820b0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1820b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1820b4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1820B4u;
    {
        const bool branch_taken_0x1820b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1820b4) {
            ctx->pc = 0x18218Cu;
            return;
        }
    }
    ctx->pc = 0x1820BCu;
}
