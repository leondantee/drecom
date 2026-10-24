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

// Function: caseD_9
// Address: 0x1c7978 - 0x1c7a08
void caseD_9_0x1c7978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1c7978");
#endif

    switch (ctx->pc) {
        case 0x1c799cu: goto label_1c799c;
        case 0x1c79acu: goto label_1c79ac;
        case 0x1c79c8u: goto label_1c79c8;
        case 0x1c79d4u: goto label_1c79d4;
        default: break;
    }

    ctx->pc = 0x1c7978u;

    // 0x1c7978: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c797c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c797cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c7980: 0x3c058040  lui         $a1, 0x8040
    ctx->pc = 0x1c7980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32832 << 16));
    // 0x1c7984: 0x658025  or          $s0, $v1, $a1
    ctx->pc = 0x1c7984u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c7988: 0xac900008  sw          $s0, 0x8($a0)
    ctx->pc = 0x1c7988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
    // 0x1c798c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7990: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7990u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7994: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C7994u;
    SET_GPR_U32(ctx, 31, 0x1C799Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C7994u, 0x1C799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C799Cu;
label_1c799c:
    // 0x1c799c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c799cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c79a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c79a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c79a4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C79A4u;
    SET_GPR_U32(ctx, 31, 0x1C79ACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C79A4u, 0x1C79ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79ACu;
label_1c79ac:
    // 0x1c79ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c79acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c79b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c79b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c79b4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c79b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c79b8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c79b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c79bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c79bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c79c0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C79C0u;
    SET_GPR_U32(ctx, 31, 0x1C79C8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C79C0u, 0x1C79C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79C8u;
label_1c79c8:
    // 0x1c79c8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c79c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c79cc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C79CCu;
    SET_GPR_U32(ctx, 31, 0x1C79D4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C79CCu, 0x1C79D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79D4u;
label_1c79d4:
    // 0x1c79d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c79d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c79d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c79d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c79dc: 0x906609e7  lbu         $a2, 0x9E7($v1)
    ctx->pc = 0x1c79dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1c79e0: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C79E0u;
    {
        const bool branch_taken_0x1c79e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c79e0) {
            ctx->pc = 0x1C7A08u;
            return;
        }
    }
    ctx->pc = 0x1C79E8u;
    // 0x1c79e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c79ec: 0x8c8509f8  lw          $a1, 0x9F8($a0)
    ctx->pc = 0x1c79ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2552)));
    // 0x1c79f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c79f4: 0x8c6609fc  lw          $a2, 0x9FC($v1)
    ctx->pc = 0x1c79f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2556)));
    // 0x1c79f8: 0x24c4ff00  addiu       $a0, $a2, -0x100
    ctx->pc = 0x1c79f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967040));
    // 0x1c79fc: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x1c79fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c7a00: 0x10200258  beqz        $at, . + 4 + (0x258 << 2)
    ctx->pc = 0x1C7A00u;
    {
        const bool branch_taken_0x1c7a00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a00) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C7A08u;
}
