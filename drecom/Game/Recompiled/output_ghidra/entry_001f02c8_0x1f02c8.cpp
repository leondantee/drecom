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

// Function: entry_001f02c8
// Address: 0x1f02c8 - 0x1f02d8
void entry_001f02c8_0x1f02c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f02c8_0x1f02c8");
#endif

    ctx->pc = 0x1f02c8u;

    // 0x1f02c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f02c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f02cc: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f02ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f02d0: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x1f02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f02d4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f02d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x1f02d8u;
}
