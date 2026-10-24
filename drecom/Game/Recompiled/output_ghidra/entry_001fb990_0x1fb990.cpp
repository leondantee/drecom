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

// Function: entry_001fb990
// Address: 0x1fb990 - 0x1fb9bc
void entry_001fb990_0x1fb990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb990_0x1fb990");
#endif

    ctx->pc = 0x1fb990u;

    // 0x1fb990: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb994: 0x90620346  lbu         $v0, 0x346($v1)
    ctx->pc = 0x1fb994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fb998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb99c: 0xa0620346  sb          $v0, 0x346($v1)
    ctx->pc = 0x1fb99cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb9a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb9a4: 0x90620345  lbu         $v0, 0x345($v1)
    ctx->pc = 0x1fb9a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fb9a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb9ac: 0xa0620345  sb          $v0, 0x345($v1)
    ctx->pc = 0x1fb9acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb9b0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fb9b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb9b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB9B4u;
    {
        const bool branch_taken_0x1fb9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9b4) {
            ctx->pc = 0x1FB9F8u;
            return;
        }
    }
    ctx->pc = 0x1FB9BCu;
}
