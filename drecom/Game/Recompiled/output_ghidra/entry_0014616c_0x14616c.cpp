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

// Function: entry_0014616c
// Address: 0x14616c - 0x146190
void entry_0014616c_0x14616c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014616c_0x14616c");
#endif

    ctx->pc = 0x14616cu;

    // 0x14616c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146170: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x146170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x146174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146178: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14617c: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x14617cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x146180: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146184: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x146184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146188: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14618c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x14618cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x146190u;
}
