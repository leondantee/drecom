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

// Function: entry_0012cc78
// Address: 0x12cc78 - 0x12cd0c
void entry_0012cc78_0x12cc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cc78_0x12cc78");
#endif

    switch (ctx->pc) {
        case 0x12ccbcu: goto label_12ccbc;
        default: break;
    }

    ctx->pc = 0x12cc78u;

    // 0x12cc78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cc7c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x12cc7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x12cc80: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x12cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x12cc84: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x12cc84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x12cc88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cc8c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x12cc8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x12cc90: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12cc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12cc94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12cc94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12cc98: 0x1c600021  bgtz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x12CC98u;
    {
        const bool branch_taken_0x12cc98 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x12cc98) {
            ctx->pc = 0x12CD20u;
            return;
        }
    }
    ctx->pc = 0x12CCA0u;
    // 0x12cca0: 0xa6001278  sh          $zero, 0x1278($s0)
    ctx->pc = 0x12cca0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x12cca4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cca8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x12cca8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x12ccac: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12ccacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12ccb0: 0x84268dc0  lh          $a2, -0x7240($at)
    ctx->pc = 0x12ccb0u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x388DC0u));
    // 0x12ccb4: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x12CCB4u;
    SET_GPR_U32(ctx, 31, 0x12CCBCu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12CCB4u, 0x12CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CCBCu;
label_12ccbc:
    // 0x12ccbc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ccc0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x12ccc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x12ccc4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12ccc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12ccc8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12ccc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12cccc: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12CCCCu;
    {
        const bool branch_taken_0x12cccc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12cccc) {
            ctx->pc = 0x12CD0Cu;
            return;
        }
    }
    ctx->pc = 0x12CCD4u;
    // 0x12ccd4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12ccd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ccdc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12ccdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12cce0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cce4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cce8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12cce8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ccec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ccf0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12ccf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ccf4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ccf8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12ccf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ccfc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cd00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12cd04: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x12CD04u;
    {
        const bool branch_taken_0x12cd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd04) {
            ctx->pc = 0x12D2CCu;
            return;
        }
    }
    ctx->pc = 0x12CD0Cu;
}
