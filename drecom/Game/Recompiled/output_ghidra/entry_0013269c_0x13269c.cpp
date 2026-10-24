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

// Function: entry_0013269c
// Address: 0x13269c - 0x1326bc
void entry_0013269c_0x13269c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013269c_0x13269c");
#endif

    ctx->pc = 0x13269cu;

    // 0x13269c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x13269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1326a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1326a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1326a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1326a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1326a8: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1326a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1326ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1326acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1326b0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1326b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1326b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1326b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1326b8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1326b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1326bcu;
}
