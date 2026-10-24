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

// Function: entry_00148794
// Address: 0x148794 - 0x1487c4
void entry_00148794_0x148794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148794_0x148794");
#endif

    ctx->pc = 0x148794u;

    // 0x148794: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x148794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x148798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14879c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1487a0: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1487a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1487a4: 0x3c02c296  lui         $v0, 0xC296
    ctx->pc = 0x1487a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49814 << 16));
    // 0x1487a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1487a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1487ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1487acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1487b0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1487b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1487b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1487b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1487b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1487b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1487bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1487bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1487c0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1487c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1487c4u;
}
