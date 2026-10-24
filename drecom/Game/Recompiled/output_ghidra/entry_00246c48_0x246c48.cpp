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

// Function: entry_00246c48
// Address: 0x246c48 - 0x246c58
void entry_00246c48_0x246c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246c48_0x246c48");
#endif

    ctx->pc = 0x246c48u;

    // 0x246c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246c4c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246c50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246c54: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x246c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x246c58u;
}
