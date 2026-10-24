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

// Function: entry_0023e31c
// Address: 0x23e31c - 0x23e32c
void entry_0023e31c_0x23e31c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e31c_0x23e31c");
#endif

    ctx->pc = 0x23e31cu;

    // 0x23e31c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e320: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e324: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e328: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23e328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x23e32cu;
}
