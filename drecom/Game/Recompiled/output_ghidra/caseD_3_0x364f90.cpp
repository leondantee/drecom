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

// Function: caseD_3
// Address: 0x364f90 - 0x36500c
void caseD_3_0x364f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x364f90");
#endif

    switch (ctx->pc) {
        case 0x364fa0u: goto label_364fa0;
        case 0x364facu: goto label_364fac;
        case 0x364fbcu: goto label_364fbc;
        case 0x364fc8u: goto label_364fc8;
        default: break;
    }

    ctx->pc = 0x364f90u;

    // 0x364f90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364f94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364f94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x364f98: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x364F98u;
    SET_GPR_U32(ctx, 31, 0x364FA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x364F98u, 0x364FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FA0u;
label_364fa0:
    // 0x364fa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364fa4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x364FA4u;
    SET_GPR_U32(ctx, 31, 0x364FACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x364FA4u, 0x364FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FACu;
label_364fac:
    // 0x364fac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364fb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364fb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x364fb4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x364FB4u;
    SET_GPR_U32(ctx, 31, 0x364FBCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x364FB4u, 0x364FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FBCu;
label_364fbc:
    // 0x364fbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364fc0: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x364FC0u;
    SET_GPR_U32(ctx, 31, 0x364FC8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x364FC0u, 0x364FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FC8u;
label_364fc8:
    // 0x364fc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364fcc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x364fccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x364fd0: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x364FD0u;
    {
        const bool branch_taken_0x364fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364fd0) {
            ctx->pc = 0x365144u;
            return;
        }
    }
    ctx->pc = 0x364FD8u;
    // 0x364fd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364fdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364fe0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x364fe4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364fe8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x364fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x364fec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364ff0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x364ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364ff4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364ff8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364ffc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365000: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x365004: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x365004u;
    {
        const bool branch_taken_0x365004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365004) {
            ctx->pc = 0x365144u;
            return;
        }
    }
    ctx->pc = 0x36500Cu;
}
