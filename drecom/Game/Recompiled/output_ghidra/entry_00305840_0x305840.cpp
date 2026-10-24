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

// Function: entry_00305840
// Address: 0x305840 - 0x3058b8
void entry_00305840_0x305840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305840_0x305840");
#endif

    switch (ctx->pc) {
        case 0x305850u: goto label_305850;
        case 0x30585cu: goto label_30585c;
        case 0x30586cu: goto label_30586c;
        case 0x305878u: goto label_305878;
        default: break;
    }

    ctx->pc = 0x305840u;

    // 0x305840: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305844: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305844u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305848: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x305848u;
    SET_GPR_U32(ctx, 31, 0x305850u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x305848u, 0x305850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305850u;
label_305850:
    // 0x305850: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305854: 0xc05cd10  jal         func_173440
    ctx->pc = 0x305854u;
    SET_GPR_U32(ctx, 31, 0x30585Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x305854u, 0x30585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30585Cu;
label_30585c:
    // 0x30585c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30585cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305860: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305860u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305864: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x305864u;
    SET_GPR_U32(ctx, 31, 0x30586Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x305864u, 0x30586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30586Cu;
label_30586c:
    // 0x30586c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30586cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305870: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305870u;
    SET_GPR_U32(ctx, 31, 0x305878u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305870u, 0x305878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305878u;
label_305878:
    // 0x305878: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30587c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30587cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305880: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305880u;
    {
        const bool branch_taken_0x305880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305880) {
            ctx->pc = 0x3058B8u;
            return;
        }
    }
    ctx->pc = 0x305888u;
    // 0x305888: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30588c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x30588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305890: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x305890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x305894: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305898: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30589c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30589cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3058a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3058a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3058a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3058a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3058a8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3058a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3058ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3058acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3058b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3058b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3058b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3058b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3058b8u;
}
