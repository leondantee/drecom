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

// Function: entry_00145468
// Address: 0x145468 - 0x145478
void entry_00145468_0x145468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145468_0x145468");
#endif

    ctx->pc = 0x145468u;

    // 0x145468: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14546c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x14546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145470: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145474: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x145474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x145478u;
}
