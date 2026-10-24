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

// Function: entry_0025d2d4
// Address: 0x25d2d4 - 0x25d2fc
void entry_0025d2d4_0x25d2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d2d4_0x25d2d4");
#endif

    ctx->pc = 0x25d2d4u;

    // 0x25d2d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d2d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d2dc: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x25d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x25d2e0: 0x244209dc  addiu       $v0, $v0, 0x9DC
    ctx->pc = 0x25d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
    // 0x25d2e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25d2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d2e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d2ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d2f0: 0x906209da  lbu         $v0, 0x9DA($v1)
    ctx->pc = 0x25d2f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
    // 0x25d2f4: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x25d2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x25d2f8: 0xa06209da  sb          $v0, 0x9DA($v1)
    ctx->pc = 0x25d2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2522), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x25d2fcu;
}
