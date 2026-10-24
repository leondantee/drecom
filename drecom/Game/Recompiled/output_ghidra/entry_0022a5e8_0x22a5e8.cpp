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

// Function: entry_0022a5e8
// Address: 0x22a5e8 - 0x22a5fc
void entry_0022a5e8_0x22a5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a5e8_0x22a5e8");
#endif

    ctx->pc = 0x22a5e8u;

    // 0x22a5e8: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x22a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x22a5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a5f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a5f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22a5f8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x22a5fcu;
}
