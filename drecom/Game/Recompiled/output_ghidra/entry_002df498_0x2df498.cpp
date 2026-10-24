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

// Function: entry_002df498
// Address: 0x2df498 - 0x2df520
void entry_002df498_0x2df498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df498_0x2df498");
#endif

    switch (ctx->pc) {
        case 0x2df4a8u: goto label_2df4a8;
        case 0x2df4b4u: goto label_2df4b4;
        case 0x2df4c4u: goto label_2df4c4;
        case 0x2df4d0u: goto label_2df4d0;
        default: break;
    }

    ctx->pc = 0x2df498u;

    // 0x2df498: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df49c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df49cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df4a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DF4A0u;
    SET_GPR_U32(ctx, 31, 0x2DF4A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DF4A0u, 0x2DF4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF4A8u;
label_2df4a8:
    // 0x2df4a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df4ac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DF4ACu;
    SET_GPR_U32(ctx, 31, 0x2DF4B4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DF4ACu, 0x2DF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF4B4u;
label_2df4b4:
    // 0x2df4b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df4b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df4b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df4bc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DF4BCu;
    SET_GPR_U32(ctx, 31, 0x2DF4C4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DF4BCu, 0x2DF4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF4C4u;
label_2df4c4:
    // 0x2df4c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df4c8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DF4C8u;
    SET_GPR_U32(ctx, 31, 0x2DF4D0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DF4C8u, 0x2DF4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF4D0u;
label_2df4d0:
    // 0x2df4d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df4d4: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2df4d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2df4d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2df4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2df4dc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2df4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2df4e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DF4E0u;
    {
        const bool branch_taken_0x2df4e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df4e0) {
            ctx->pc = 0x2DF520u;
            return;
        }
    }
    ctx->pc = 0x2DF4E8u;
    // 0x2df4e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df4ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df4f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df4f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2df4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df4f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df4fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df500: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df504: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df508: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df50c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df50cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df510: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df514: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df518: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DF518u;
    {
        const bool branch_taken_0x2df518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df518) {
            ctx->pc = 0x2DF570u;
            return;
        }
    }
    ctx->pc = 0x2DF520u;
}
