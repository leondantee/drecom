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

// Function: entry_0022c8bc
// Address: 0x22c8bc - 0x22c8d0
void entry_0022c8bc_0x22c8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c8bc_0x22c8bc");
#endif

    ctx->pc = 0x22c8bcu;

    // 0x22c8bc: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x22c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x22c8c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c8c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c8c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c8cc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22c8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x22c8d0u;
}
