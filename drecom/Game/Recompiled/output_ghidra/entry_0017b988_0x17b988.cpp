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

// Function: entry_0017b988
// Address: 0x17b988 - 0x17b998
void entry_0017b988_0x17b988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b988_0x17b988");
#endif

    ctx->pc = 0x17b988u;

    // 0x17b988: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b98c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17b98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17b990: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x17B990u;
    {
        const bool branch_taken_0x17b990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b990) {
            ctx->pc = 0x17BCC8u;
            return;
        }
    }
    ctx->pc = 0x17B998u;
}
