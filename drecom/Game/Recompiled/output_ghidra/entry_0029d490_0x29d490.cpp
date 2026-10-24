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

// Function: entry_0029d490
// Address: 0x29d490 - 0x29d4a8
void entry_0029d490_0x29d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d490_0x29d490");
#endif

    ctx->pc = 0x29d490u;

    // 0x29d490: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d494: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d498: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d49c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x29d49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x29d4a0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x29D4A0u;
    {
        const bool branch_taken_0x29d4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d4a0) {
            ctx->pc = 0x29D568u;
            return;
        }
    }
    ctx->pc = 0x29D4A8u;
}
