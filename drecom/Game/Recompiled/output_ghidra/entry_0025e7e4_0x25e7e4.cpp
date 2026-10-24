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

// Function: entry_0025e7e4
// Address: 0x25e7e4 - 0x25e80c
void entry_0025e7e4_0x25e7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e7e4_0x25e7e4");
#endif

    ctx->pc = 0x25e7e4u;

    // 0x25e7e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e7e8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x25e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e7ec: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x25e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x25e7f0: 0x244209dc  addiu       $v0, $v0, 0x9DC
    ctx->pc = 0x25e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
    // 0x25e7f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25e7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e7f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25e7fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e800: 0x906209da  lbu         $v0, 0x9DA($v1)
    ctx->pc = 0x25e800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
    // 0x25e804: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x25e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x25e808: 0xa06209da  sb          $v0, 0x9DA($v1)
    ctx->pc = 0x25e808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2522), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x25e80cu;
}
