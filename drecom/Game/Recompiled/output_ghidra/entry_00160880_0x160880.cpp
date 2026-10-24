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

// Function: entry_00160880
// Address: 0x160880 - 0x1608b0
void entry_00160880_0x160880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160880_0x160880");
#endif

    ctx->pc = 0x160880u;

    // 0x160880: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x160880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160884: 0xe6001b30  swc1        $f0, 0x1B30($s0)
    ctx->pc = 0x160884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6960), bits); }
    // 0x160888: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x160888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16088c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x16088cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x160890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160894: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160898: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x160898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16089c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16089cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1608a0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1608a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1608a4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1608a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1608a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1608a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1608ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1608acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1608b0u;
}
