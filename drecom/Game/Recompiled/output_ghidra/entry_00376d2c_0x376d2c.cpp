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

// Function: entry_00376d2c
// Address: 0x376d2c - 0x376da0
void entry_00376d2c_0x376d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00376d2c_0x376d2c");
#endif

    switch (ctx->pc) {
        case 0x376d3cu: goto label_376d3c;
        case 0x376d48u: goto label_376d48;
        case 0x376d58u: goto label_376d58;
        case 0x376d64u: goto label_376d64;
        default: break;
    }

    ctx->pc = 0x376d2cu;

    // 0x376d2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x376d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376d30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376d34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376D34u;
    SET_GPR_U32(ctx, 31, 0x376D3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376D34u, 0x376D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D3Cu;
label_376d3c:
    // 0x376d3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x376d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d40: 0xc05cd10  jal         func_173440
    ctx->pc = 0x376D40u;
    SET_GPR_U32(ctx, 31, 0x376D48u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x376D40u, 0x376D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D48u;
label_376d48:
    // 0x376d48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x376d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376d4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376d50: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x376D50u;
    SET_GPR_U32(ctx, 31, 0x376D58u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x376D50u, 0x376D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D58u;
label_376d58:
    // 0x376d58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x376d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d5c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376D5Cu;
    SET_GPR_U32(ctx, 31, 0x376D64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376D5Cu, 0x376D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D64u;
label_376d64:
    // 0x376d64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d68: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x376d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x376d6c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x376D6Cu;
    {
        const bool branch_taken_0x376d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376d6c) {
            ctx->pc = 0x376DA0u;
            return;
        }
    }
    ctx->pc = 0x376D74u;
    // 0x376d74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x376d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376d78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x376d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x376d80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d84: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x376d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x376d88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x376d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x376d90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x376d94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x376d98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x376d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x376d9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x376d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x376da0u;
}
