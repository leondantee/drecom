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

// Function: entry_0030386c
// Address: 0x30386c - 0x3038f4
void entry_0030386c_0x30386c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030386c_0x30386c");
#endif

    switch (ctx->pc) {
        case 0x30388cu: goto label_30388c;
        case 0x303898u: goto label_303898;
        case 0x3038a8u: goto label_3038a8;
        case 0x3038b4u: goto label_3038b4;
        default: break;
    }

    ctx->pc = 0x30386cu;

    // 0x30386c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303870: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x303870u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x303874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x303878: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x303878u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30387c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30387cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303880: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x303880u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x303884: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x303884u;
    SET_GPR_U32(ctx, 31, 0x30388Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x303884u, 0x30388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30388Cu;
label_30388c:
    // 0x30388c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30388cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303890: 0xc05cd10  jal         func_173440
    ctx->pc = 0x303890u;
    SET_GPR_U32(ctx, 31, 0x303898u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x303890u, 0x303898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303898u;
label_303898:
    // 0x303898: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30389c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30389cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3038a0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3038A0u;
    SET_GPR_U32(ctx, 31, 0x3038A8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3038A0u, 0x3038A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3038A8u;
label_3038a8:
    // 0x3038a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3038a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038ac: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3038ACu;
    SET_GPR_U32(ctx, 31, 0x3038B4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3038ACu, 0x3038B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3038B4u;
label_3038b4:
    // 0x3038b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3038b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3038b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3038bc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3038BCu;
    {
        const bool branch_taken_0x3038bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3038bc) {
            ctx->pc = 0x3038F4u;
            return;
        }
    }
    ctx->pc = 0x3038C4u;
    // 0x3038c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3038c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3038c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3038c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3038ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3038d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3038d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3038d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3038d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038d8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3038d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3038dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3038dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038e0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3038e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3038e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3038e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3038e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3038ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3038ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3038f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3038f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3038f4u;
}
