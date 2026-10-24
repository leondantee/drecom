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

// Function: entry_0017b494
// Address: 0x17b494 - 0x17b4a8
void entry_0017b494_0x17b494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b494_0x17b494");
#endif

    ctx->pc = 0x17b494u;

    // 0x17b494: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x17b494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x17b498: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B498u;
    {
        const bool branch_taken_0x17b498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b498) {
            ctx->pc = 0x17B4A8u;
            return;
        }
    }
    ctx->pc = 0x17B4A0u;
    // 0x17b4a0: 0xc62001b0  lwc1        $f0, 0x1B0($s1)
    ctx->pc = 0x17b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b4a4: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x17b4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    ctx->pc = 0x17b4a8u;
}
