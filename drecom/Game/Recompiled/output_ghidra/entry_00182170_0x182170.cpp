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

// Function: entry_00182170
// Address: 0x182170 - 0x182184
void entry_00182170_0x182170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182170_0x182170");
#endif

    ctx->pc = 0x182170u;

    // 0x182170: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x182170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182174: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182178: 0xc421f1f8  lwc1        $f1, -0xE08($at)
    ctx->pc = 0x182178u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18217c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18217cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x182180: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x182180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x182184u;
}
