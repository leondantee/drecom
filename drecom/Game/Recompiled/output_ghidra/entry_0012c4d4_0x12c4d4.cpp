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

// Function: entry_0012c4d4
// Address: 0x12c4d4 - 0x12c564
void entry_0012c4d4_0x12c4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c4d4_0x12c4d4");
#endif

    switch (ctx->pc) {
        case 0x12c518u: goto label_12c518;
        default: break;
    }

    ctx->pc = 0x12c4d4u;

    // 0x12c4d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c4d8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x12c4d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x12c4dc: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x12c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x12c4e0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x12c4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x12c4e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c4e8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x12c4e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x12c4ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12c4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12c4f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12c4f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12c4f4: 0x1c600020  bgtz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x12C4F4u;
    {
        const bool branch_taken_0x12c4f4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x12c4f4) {
            ctx->pc = 0x12C578u;
            return;
        }
    }
    ctx->pc = 0x12C4FCu;
    // 0x12c4fc: 0xa6001278  sh          $zero, 0x1278($s0)
    ctx->pc = 0x12c4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c500: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c504: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x12c504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x12c508: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12c508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12c50c: 0x84268dc0  lh          $a2, -0x7240($at)
    ctx->pc = 0x12c50cu;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x388DC0u));
    // 0x12c510: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x12C510u;
    SET_GPR_U32(ctx, 31, 0x12C518u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12C510u, 0x12C518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C518u;
label_12c518:
    // 0x12c518: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c51c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x12c51cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x12c520: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12c520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12c524: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12c524u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12c528: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x12C528u;
    {
        const bool branch_taken_0x12c528 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12c528) {
            ctx->pc = 0x12C564u;
            return;
        }
    }
    ctx->pc = 0x12C530u;
    // 0x12c530: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12c530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12c534: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c538: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12c538u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12c53c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c540: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x12c540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c544: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x12c544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c548: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x12c548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c54c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c550: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12c550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c554: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x12c554u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c558: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x12c558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x12c55c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x12C55Cu;
    {
        const bool branch_taken_0x12c55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c55c) {
            ctx->pc = 0x12C744u;
            return;
        }
    }
    ctx->pc = 0x12C564u;
}
