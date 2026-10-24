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

// Function: entry_00185ff0
// Address: 0x185ff0 - 0x185ffc
void entry_00185ff0_0x185ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185ff0_0x185ff0");
#endif

    ctx->pc = 0x185ff0u;

    // 0x185ff0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185ff4: 0xc4200330  lwc1        $f0, 0x330($at)
    ctx->pc = 0x185ff4u;
    { uint32_t bits = FAST_READ32(0x480330u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185ff8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x185ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->pc = 0x185ffcu;
}
