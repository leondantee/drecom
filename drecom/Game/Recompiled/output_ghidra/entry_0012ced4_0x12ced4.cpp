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

// Function: entry_0012ced4
// Address: 0x12ced4 - 0x12cf68
void entry_0012ced4_0x12ced4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ced4_0x12ced4");
#endif

    switch (ctx->pc) {
        case 0x12cf18u: goto label_12cf18;
        default: break;
    }

    ctx->pc = 0x12ced4u;

    // 0x12ced4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12ced4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12ced8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x12ced8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x12cedc: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x12cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x12cee0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x12cee0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x12cee4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cee8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x12cee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x12ceec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12ceecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12cef0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12cef0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12cef4: 0x1c600021  bgtz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x12CEF4u;
    {
        const bool branch_taken_0x12cef4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x12cef4) {
            ctx->pc = 0x12CF7Cu;
            return;
        }
    }
    ctx->pc = 0x12CEFCu;
    // 0x12cefc: 0xa6001278  sh          $zero, 0x1278($s0)
    ctx->pc = 0x12cefcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x12cf00: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cf04: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x12cf04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x12cf08: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12cf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12cf0c: 0x84268dc0  lh          $a2, -0x7240($at)
    ctx->pc = 0x12cf0cu;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x388DC0u));
    // 0x12cf10: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x12CF10u;
    SET_GPR_U32(ctx, 31, 0x12CF18u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12CF10u, 0x12CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF18u;
label_12cf18:
    // 0x12cf18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cf1c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x12cf1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x12cf20: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12cf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12cf24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12cf24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12cf28: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12CF28u;
    {
        const bool branch_taken_0x12cf28 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12cf28) {
            ctx->pc = 0x12CF68u;
            return;
        }
    }
    ctx->pc = 0x12CF30u;
    // 0x12cf30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12cf34: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x12cf34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cf38: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x12cf38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x12cf3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cf40: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x12cf40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cf44: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x12cf44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x12cf48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cf4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12cf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cf50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cf54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12cf54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cf58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cf5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12cf60: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x12CF60u;
    {
        const bool branch_taken_0x12cf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cf60) {
            ctx->pc = 0x12D2CCu;
            return;
        }
    }
    ctx->pc = 0x12CF68u;
}
