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

// Function: entry_0026eecc
// Address: 0x26eecc - 0x26ef0c
void entry_0026eecc_0x26eecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026eecc_0x26eecc");
#endif

    ctx->pc = 0x26eeccu;

    // 0x26eecc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x26eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26eed0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eed4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x26eed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x26eed8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26eed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eedc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eee0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x26eee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x26eee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26eee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eee8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eeec: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x26eeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x26eef0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26eef4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eef8: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x26eef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    // 0x26eefc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef00: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26ef00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26ef04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26ef08: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26ef08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x26ef0cu;
}
