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

// Function: entry_001ef908
// Address: 0x1ef908 - 0x1ef918
void entry_001ef908_0x1ef908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef908_0x1ef908");
#endif

    ctx->pc = 0x1ef908u;

    // 0x1ef908: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef90c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef910: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef914: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ef914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x1ef918u;
}
