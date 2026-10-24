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

// Function: entry_0029d388
// Address: 0x29d388 - 0x29d39c
void entry_0029d388_0x29d388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d388_0x29d388");
#endif

    ctx->pc = 0x29d388u;

    // 0x29d388: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29d388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29d38c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x29d38cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d390: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d394: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d398: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x29d398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    ctx->pc = 0x29d39cu;
}
