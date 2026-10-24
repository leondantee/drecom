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

// Function: entry_001c91d8
// Address: 0x1c91d8 - 0x1c91f8
void entry_001c91d8_0x1c91d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c91d8_0x1c91d8");
#endif

    ctx->pc = 0x1c91d8u;

    // 0x1c91d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c91dc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c91dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c91e0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c91e4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1c91e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1c91e8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c91e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c91ec: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c91ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c91f0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c91f4: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1c91f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c91f8u;
}
