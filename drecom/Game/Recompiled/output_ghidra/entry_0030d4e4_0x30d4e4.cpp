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

// Function: entry_0030d4e4
// Address: 0x30d4e4 - 0x30d5b0
void entry_0030d4e4_0x30d4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d4e4_0x30d4e4");
#endif

    switch (ctx->pc) {
        case 0x30d504u: goto label_30d504;
        case 0x30d510u: goto label_30d510;
        case 0x30d520u: goto label_30d520;
        case 0x30d52cu: goto label_30d52c;
        default: break;
    }

    ctx->pc = 0x30d4e4u;

    // 0x30d4e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d4e8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30d4e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30d4ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d4f0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30d4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30d4f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d4f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d4f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d4fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30D4FCu;
    SET_GPR_U32(ctx, 31, 0x30D504u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30D4FCu, 0x30D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D504u;
label_30d504:
    // 0x30d504: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d508: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30D508u;
    SET_GPR_U32(ctx, 31, 0x30D510u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30D508u, 0x30D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D510u;
label_30d510:
    // 0x30d510: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d514: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d518: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30D518u;
    SET_GPR_U32(ctx, 31, 0x30D520u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30D518u, 0x30D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D520u;
label_30d520:
    // 0x30d520: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d524: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30D524u;
    SET_GPR_U32(ctx, 31, 0x30D52Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30D524u, 0x30D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D52Cu;
label_30d52c:
    // 0x30d52c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d530: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30d530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30d534: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x30D534u;
    {
        const bool branch_taken_0x30d534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d534) {
            ctx->pc = 0x30D608u;
            return;
        }
    }
    ctx->pc = 0x30D53Cu;
    // 0x30d53c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d540: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d544: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d544u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d548: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d54c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d550: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d554: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d558: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d55c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d560: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d564: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d568: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30d56c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30d56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d570: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d574: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x30d574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d578: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d57c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x30d57cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x30d580: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x30d580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30d584: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30d584u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30d588: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d58c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x30D58Cu;
    {
        const bool branch_taken_0x30d58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d58c) {
            ctx->pc = 0x30D5F0u;
            return;
        }
    }
    ctx->pc = 0x30D594u;
    // 0x30d594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d598: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30D598u;
    {
        const bool branch_taken_0x30d598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d598) {
            ctx->pc = 0x30D5D0u;
            return;
        }
    }
    ctx->pc = 0x30D5A0u;
    // 0x30d5a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D5A0u;
    {
        const bool branch_taken_0x30d5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d5a0) {
            ctx->pc = 0x30D5B0u;
            return;
        }
    }
    ctx->pc = 0x30D5A8u;
    // 0x30d5a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x30D5A8u;
    {
        const bool branch_taken_0x30d5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d5a8) {
            ctx->pc = 0x30D608u;
            return;
        }
    }
    ctx->pc = 0x30D5B0u;
}
