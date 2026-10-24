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

// Function: entry_00296fbc
// Address: 0x296fbc - 0x296fe8
void entry_00296fbc_0x296fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296fbc_0x296fbc");
#endif

    ctx->pc = 0x296fbcu;

    // 0x296fbc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296fc0: 0x8ca469b4  lw          $a0, 0x69B4($a1)
    ctx->pc = 0x296fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27060)));
    // 0x296fc4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296fc8: 0xaca369b4  sw          $v1, 0x69B4($a1)
    ctx->pc = 0x296fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27060), GPR_U32(ctx, 3));
    // 0x296fcc: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x296fccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x296fd0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x296fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296fd4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296fd8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296fdc: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296fe0: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296fe4: 0x0  nop
    ctx->pc = 0x296fe4u;
    // NOP
    ctx->pc = 0x296fe8u;
}
