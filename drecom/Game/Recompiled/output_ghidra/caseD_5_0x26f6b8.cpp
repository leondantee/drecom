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

// Function: caseD_5
// Address: 0x26f6b8 - 0x26f71c
void caseD_5_0x26f6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x26f6b8");
#endif

    switch (ctx->pc) {
        case 0x26f6c8u: goto label_26f6c8;
        case 0x26f6d4u: goto label_26f6d4;
        case 0x26f6e8u: goto label_26f6e8;
        case 0x26f6f4u: goto label_26f6f4;
        default: break;
    }

    ctx->pc = 0x26f6b8u;

    // 0x26f6b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f6bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f6bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f6c0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26F6C0u;
    SET_GPR_U32(ctx, 31, 0x26F6C8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26F6C0u, 0x26F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6C8u;
label_26f6c8:
    // 0x26f6c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f6cc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x26F6CCu;
    SET_GPR_U32(ctx, 31, 0x26F6D4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26F6CCu, 0x26F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6D4u;
label_26f6d4:
    // 0x26f6d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f6d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f6dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f6dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f6e0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x26F6E0u;
    SET_GPR_U32(ctx, 31, 0x26F6E8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x26F6E0u, 0x26F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6E8u;
label_26f6e8:
    // 0x26f6e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f6e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f6ec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26F6ECu;
    SET_GPR_U32(ctx, 31, 0x26F6F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26F6ECu, 0x26F6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6F4u;
label_26f6f4:
    // 0x26f6f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f6f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26f6f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26f6fc: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x26F6FCu;
    {
        const bool branch_taken_0x26f6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f6fc) {
            ctx->pc = 0x26F824u;
            return;
        }
    }
    ctx->pc = 0x26F704u;
    // 0x26f704: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f708: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26f708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26f70c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f710: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26f710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x26f714: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x26F714u;
    {
        const bool branch_taken_0x26f714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f714) {
            ctx->pc = 0x26F824u;
            return;
        }
    }
    ctx->pc = 0x26F71Cu;
}
