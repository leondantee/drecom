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

// Function: entry_0023bb34
// Address: 0x23bb34 - 0x23bb44
void entry_0023bb34_0x23bb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023bb34_0x23bb34");
#endif

    ctx->pc = 0x23bb34u;

    // 0x23bb34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bb34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bb38: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23bb40: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23bb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x23bb44u;
}
