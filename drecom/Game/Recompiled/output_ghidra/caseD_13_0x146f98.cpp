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

// Function: caseD_13
// Address: 0x146f98 - 0x14701c
void caseD_13_0x146f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x146f98");
#endif

    switch (ctx->pc) {
        case 0x146fa8u: goto label_146fa8;
        case 0x146fbcu: goto label_146fbc;
        case 0x146fd0u: goto label_146fd0;
        case 0x146fe0u: goto label_146fe0;
        case 0x147004u: goto label_147004;
        default: break;
    }

    ctx->pc = 0x146f98u;

    // 0x146f98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146f9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146f9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146fa0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x146FA0u;
    SET_GPR_U32(ctx, 31, 0x146FA8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146FA0u, 0x146FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FA8u;
label_146fa8:
    // 0x146fa8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x146fa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146fac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146fb0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146fb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146fb4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x146FB4u;
    SET_GPR_U32(ctx, 31, 0x146FBCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146FB4u, 0x146FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FBCu;
label_146fbc:
    // 0x146fbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x146fc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146fc4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x146fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x146fc8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x146FC8u;
    SET_GPR_U32(ctx, 31, 0x146FD0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146FC8u, 0x146FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FD0u;
label_146fd0:
    // 0x146fd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146fd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146fd4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146fd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146fd8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x146FD8u;
    SET_GPR_U32(ctx, 31, 0x146FE0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146FD8u, 0x146FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FE0u;
label_146fe0:
    // 0x146fe0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146fe0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146fe4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146fe8: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x146fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x146fec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x146fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x146ff0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x146ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x146ff4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x146FF4u;
    {
        const bool branch_taken_0x146ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146ff4) {
            ctx->pc = 0x14701Cu;
            return;
        }
    }
    ctx->pc = 0x146FFCu;
    // 0x146ffc: 0xc0585dc  jal         func_161770
    ctx->pc = 0x146FFCu;
    SET_GPR_U32(ctx, 31, 0x147004u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x146FFCu, 0x147004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147004u;
label_147004:
    // 0x147004: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x147004u;
    {
        const bool branch_taken_0x147004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147004) {
            ctx->pc = 0x14701Cu;
            return;
        }
    }
    ctx->pc = 0x14700Cu;
    // 0x14700c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14700cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147010: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x147010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x147014: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x147014u;
    {
        const bool branch_taken_0x147014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147014) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x14701Cu;
}
