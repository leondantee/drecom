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

// Function: entry_001457a8
// Address: 0x1457a8 - 0x1457cc
void entry_001457a8_0x1457a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001457a8_0x1457a8");
#endif

    ctx->pc = 0x1457a8u;

    // 0x1457a8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1457a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1457ac: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1457acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x1457b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1457b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1457b4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1457b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1457b8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1457b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1457bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1457bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1457c0: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1457c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1457c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1457c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1457c8: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1457c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x1457ccu;
}
