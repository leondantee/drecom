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

// Function: entry_001f06e0
// Address: 0x1f06e0 - 0x1f06f0
void entry_001f06e0_0x1f06e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f06e0_0x1f06e0");
#endif

    ctx->pc = 0x1f06e0u;

    // 0x1f06e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f06e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f06e4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f06e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f06e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f06ec: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f06ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x1f06f0u;
}
