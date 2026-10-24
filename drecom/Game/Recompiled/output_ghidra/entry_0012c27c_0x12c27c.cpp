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

// Function: entry_0012c27c
// Address: 0x12c27c - 0x12c30c
void entry_0012c27c_0x12c27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c27c_0x12c27c");
#endif

    switch (ctx->pc) {
        case 0x12c2c0u: goto label_12c2c0;
        default: break;
    }

    ctx->pc = 0x12c27cu;

    // 0x12c27c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c280: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x12c280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x12c284: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x12c284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x12c288: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x12c288u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x12c28c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c290: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x12c290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x12c294: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12c294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12c298: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12c298u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12c29c: 0x1c600020  bgtz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x12C29Cu;
    {
        const bool branch_taken_0x12c29c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x12c29c) {
            ctx->pc = 0x12C320u;
            return;
        }
    }
    ctx->pc = 0x12C2A4u;
    // 0x12c2a4: 0xa6001278  sh          $zero, 0x1278($s0)
    ctx->pc = 0x12c2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c2a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c2ac: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x12c2acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x12c2b0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12c2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12c2b4: 0x84268dc0  lh          $a2, -0x7240($at)
    ctx->pc = 0x12c2b4u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x388DC0u));
    // 0x12c2b8: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x12C2B8u;
    SET_GPR_U32(ctx, 31, 0x12C2C0u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12C2B8u, 0x12C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2C0u;
label_12c2c0:
    // 0x12c2c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c2c4: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x12c2c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x12c2c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12c2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12c2cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12c2ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12c2d0: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x12C2D0u;
    {
        const bool branch_taken_0x12c2d0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12c2d0) {
            ctx->pc = 0x12C30Cu;
            return;
        }
    }
    ctx->pc = 0x12C2D8u;
    // 0x12c2d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12c2dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c2e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12c2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12c2e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c2e8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x12c2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c2ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c2f0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12c2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c2f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c2f8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12c2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c2fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c300: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12c300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12c304: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x12C304u;
    {
        const bool branch_taken_0x12c304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c304) {
            ctx->pc = 0x12C744u;
            return;
        }
    }
    ctx->pc = 0x12C30Cu;
}
