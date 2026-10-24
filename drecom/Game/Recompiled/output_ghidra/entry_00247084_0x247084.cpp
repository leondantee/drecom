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

// Function: entry_00247084
// Address: 0x247084 - 0x247094
void entry_00247084_0x247084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247084_0x247084");
#endif

    ctx->pc = 0x247084u;

    // 0x247084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247088: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24708c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247090: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x247094u;
}
