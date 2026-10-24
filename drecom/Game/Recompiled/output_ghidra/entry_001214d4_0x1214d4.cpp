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

// Function: entry_001214d4
// Address: 0x1214d4 - 0x12154c
void entry_001214d4_0x1214d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001214d4_0x1214d4");
#endif

    switch (ctx->pc) {
        case 0x1214fcu: goto label_1214fc;
        default: break;
    }

    ctx->pc = 0x1214d4u;

    // 0x1214d4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1214d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1214d8: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1214d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1214dc: 0x3a43c  dsll32      $s4, $v1, 16
    ctx->pc = 0x1214dcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1214e0: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x1214e0u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x1214e4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1214e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1214e8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1214e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1214ec: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1214ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1214f0: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x1214f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x1214f4: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x1214F4u;
    SET_GPR_U32(ctx, 31, 0x1214FCu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x1214F4u, 0x1214FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1214FCu;
label_1214fc:
    // 0x1214fc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1214fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121500: 0xa200009e  sb          $zero, 0x9E($s0)
    ctx->pc = 0x121500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 158), (uint8_t)GPR_U32(ctx, 0));
    // 0x121504: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121508: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x121508u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12150c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x12150cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x121510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121514: 0x14a30025  bne         $a1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x121514u;
    {
        const bool branch_taken_0x121514 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x121514) {
            ctx->pc = 0x1215ACu;
            return;
        }
    }
    ctx->pc = 0x12151Cu;
    // 0x12151c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121520: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x121520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x121524: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x121524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x121528: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12152c: 0x10c40007  beq         $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12152Cu;
    {
        const bool branch_taken_0x12152c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x12152c) {
            ctx->pc = 0x12154Cu;
            return;
        }
    }
    ctx->pc = 0x121534u;
    // 0x121534: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121538: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x121538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x12153c: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x12153cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x121540: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x121540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x121544: 0x14c50019  bne         $a2, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x121544u;
    {
        const bool branch_taken_0x121544 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x121544) {
            ctx->pc = 0x1215ACu;
            return;
        }
    }
    ctx->pc = 0x12154Cu;
}
