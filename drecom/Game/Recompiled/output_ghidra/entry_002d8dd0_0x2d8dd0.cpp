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

// Function: entry_002d8dd0
// Address: 0x2d8dd0 - 0x2d8e1c
void entry_002d8dd0_0x2d8dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8dd0_0x2d8dd0");
#endif

    switch (ctx->pc) {
        case 0x2d8ddcu: goto label_2d8ddc;
        default: break;
    }

    ctx->pc = 0x2d8dd0u;

    // 0x2d8dd0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8dd4: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8DD4u;
    SET_GPR_U32(ctx, 31, 0x2D8DDCu);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8DD4u, 0x2D8DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DDCu;
label_2d8ddc:
    // 0x2d8ddc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8ddcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8de0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8de4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8de8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8dec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8df0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8df4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8df4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8df8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8dfc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8e00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8e04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8e04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8e08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8e0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8e10: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8e10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8e14: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2D8E14u;
    {
        const bool branch_taken_0x2d8e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8e14) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8E1Cu;
}
