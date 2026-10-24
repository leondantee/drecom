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

// Function: entry_00185f88
// Address: 0x185f88 - 0x185f94
void entry_00185f88_0x185f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185f88_0x185f88");
#endif

    ctx->pc = 0x185f88u;

    // 0x185f88: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f8c: 0xc4200330  lwc1        $f0, 0x330($at)
    ctx->pc = 0x185f8cu;
    { uint32_t bits = FAST_READ32(0x480330u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f90: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x185f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->pc = 0x185f94u;
}
