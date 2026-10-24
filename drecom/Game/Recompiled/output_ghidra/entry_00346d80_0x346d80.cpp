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

// Function: entry_00346d80
// Address: 0x346d80 - 0x346e00
void entry_00346d80_0x346d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00346d80_0x346d80");
#endif

    switch (ctx->pc) {
        case 0x346d9cu: goto label_346d9c;
        case 0x346dacu: goto label_346dac;
        case 0x346db8u: goto label_346db8;
        default: break;
    }

    ctx->pc = 0x346d80u;

    // 0x346d80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x346d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x346d84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x346d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346d88: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x346d88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x346d8c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x346d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346d90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x346d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x346d94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x346D94u;
    SET_GPR_U32(ctx, 31, 0x346D9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x346D94u, 0x346D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D9Cu;
label_346d9c:
    // 0x346d9c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x346d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346da0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x346da0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346da4: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x346DA4u;
    SET_GPR_U32(ctx, 31, 0x346DACu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x346DA4u, 0x346DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DACu;
label_346dac:
    // 0x346dac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x346dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346db0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x346DB0u;
    SET_GPR_U32(ctx, 31, 0x346DB8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x346DB0u, 0x346DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DB8u;
label_346db8:
    // 0x346db8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x346db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346dbc: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x346dbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x346dc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x346dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x346dc4: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x346dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x346dc8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346dcc: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x346dccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x346dd0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x346dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x346dd4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x346dd4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x346dd8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x346dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x346ddc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x346DDCu;
    {
        const bool branch_taken_0x346ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x346ddc) {
            ctx->pc = 0x346E00u;
            return;
        }
    }
    ctx->pc = 0x346DE4u;
    // 0x346de4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x346de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346de8: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x346de8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x346dec: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x346decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x346df0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x346df0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x346df4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x346df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x346df8: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x346DF8u;
    {
        const bool branch_taken_0x346df8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x346df8) {
            ctx->pc = 0x346ED0u;
            return;
        }
    }
    ctx->pc = 0x346E00u;
}
