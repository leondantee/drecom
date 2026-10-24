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

// Function: entry_0030e8a0
// Address: 0x30e8a0 - 0x30e8c4
void entry_0030e8a0_0x30e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e8a0_0x30e8a0");
#endif

    ctx->pc = 0x30e8a0u;

    // 0x30e8a0: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e8a4: 0x8c851338  lw          $a1, 0x1338($a0)
    ctx->pc = 0x30e8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30e8a8: 0x2403fe01  addiu       $v1, $zero, -0x1FF
    ctx->pc = 0x30e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966785));
    // 0x30e8ac: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x30e8acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x30e8b0: 0xac851338  sw          $a1, 0x1338($a0)
    ctx->pc = 0x30e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 5));
    // 0x30e8b4: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e8b8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30e8b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x30e8bc: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x30e8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30e8c0: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x30e8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x30e8c4u;
}
