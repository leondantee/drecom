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

// Function: entry_0012e35c
// Address: 0x12e35c - 0x12e3d8
void entry_0012e35c_0x12e35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e35c_0x12e35c");
#endif

    switch (ctx->pc) {
        case 0x12e36cu: goto label_12e36c;
        case 0x12e378u: goto label_12e378;
        case 0x12e388u: goto label_12e388;
        case 0x12e394u: goto label_12e394;
        default: break;
    }

    ctx->pc = 0x12e35cu;

    // 0x12e35c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e360: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12e360u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e364: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12E364u;
    SET_GPR_U32(ctx, 31, 0x12E36Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12E364u, 0x12E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E36Cu;
label_12e36c:
    // 0x12e36c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e370: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12E370u;
    SET_GPR_U32(ctx, 31, 0x12E378u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12E370u, 0x12E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E378u;
label_12e378:
    // 0x12e378: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e37c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12e37cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e380: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12E380u;
    SET_GPR_U32(ctx, 31, 0x12E388u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12E380u, 0x12E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E388u;
label_12e388:
    // 0x12e388: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e38c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12E38Cu;
    SET_GPR_U32(ctx, 31, 0x12E394u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12E38Cu, 0x12E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E394u;
label_12e394:
    // 0x12e394: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e398: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12e398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12e39c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x12E39Cu;
    {
        const bool branch_taken_0x12e39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e39c) {
            ctx->pc = 0x12E3D8u;
            return;
        }
    }
    ctx->pc = 0x12E3A4u;
    // 0x12e3a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e3a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e3ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12e3acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e3b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12e3b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e3b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12e3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e3bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e3c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12e3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e3c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e3c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12e3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e3cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e3d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12e3d4: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12e3d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12e3d8u;
}
