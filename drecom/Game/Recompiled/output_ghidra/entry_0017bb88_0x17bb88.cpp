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

// Function: entry_0017bb88
// Address: 0x17bb88 - 0x17bb98
void entry_0017bb88_0x17bb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bb88_0x17bb88");
#endif

    ctx->pc = 0x17bb88u;

    // 0x17bb88: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17bb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bb8c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17bb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17bb90: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x17BB90u;
    {
        const bool branch_taken_0x17bb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bb90) {
            ctx->pc = 0x17BCC8u;
            return;
        }
    }
    ctx->pc = 0x17BB98u;
}
