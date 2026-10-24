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

// Function: caseD_7
// Address: 0x14b570 - 0x14b624
void caseD_7_0x14b570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x14b570");
#endif

    switch (ctx->pc) {
        case 0x14b580u: goto label_14b580;
        case 0x14b58cu: goto label_14b58c;
        case 0x14b5a0u: goto label_14b5a0;
        case 0x14b5acu: goto label_14b5ac;
        case 0x14b5bcu: goto label_14b5bc;
        case 0x14b5d4u: goto label_14b5d4;
        case 0x14b5fcu: goto label_14b5fc;
        default: break;
    }

    ctx->pc = 0x14b570u;

    // 0x14b570: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b574: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b574u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14b578: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14B578u;
    SET_GPR_U32(ctx, 31, 0x14B580u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14B578u, 0x14B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B580u;
label_14b580:
    // 0x14b580: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b584: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14B584u;
    SET_GPR_U32(ctx, 31, 0x14B58Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14B584u, 0x14B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B58Cu;
label_14b58c:
    // 0x14b58c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14b58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14b590: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b594: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b594u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14b598: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14B598u;
    SET_GPR_U32(ctx, 31, 0x14B5A0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14B598u, 0x14B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5A0u;
label_14b5a0:
    // 0x14b5a0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14b5a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14b5a4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14B5A4u;
    SET_GPR_U32(ctx, 31, 0x14B5ACu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14B5A4u, 0x14B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5ACu;
label_14b5ac:
    // 0x14b5ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b5b0: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14b5b4: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x14B5B4u;
    SET_GPR_U32(ctx, 31, 0x14B5BCu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x14B5B4u, 0x14B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5BCu;
label_14b5bc:
    // 0x14b5bc: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14B5BCu;
    {
        const bool branch_taken_0x14b5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b5bc) {
            ctx->pc = 0x14B670u;
            return;
        }
    }
    ctx->pc = 0x14B5C4u;
    // 0x14b5c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b5c8: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14b5cc: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x14B5CCu;
    SET_GPR_U32(ctx, 31, 0x14B5D4u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x14B5CCu, 0x14B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5D4u;
label_14b5d4:
    // 0x14b5d4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x14B5D4u;
    {
        const bool branch_taken_0x14b5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b5d4) {
            ctx->pc = 0x14B670u;
            return;
        }
    }
    ctx->pc = 0x14B5DCu;
    // 0x14b5dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b5e0: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x14b5e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
    // 0x14b5e4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14b5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14b5e8: 0x28610030  slti        $at, $v1, 0x30
    ctx->pc = 0x14b5e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x14b5ec: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14B5ECu;
    {
        const bool branch_taken_0x14b5ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b5ec) {
            ctx->pc = 0x14B624u;
            return;
        }
    }
    ctx->pc = 0x14B5F4u;
    // 0x14b5f4: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x14B5F4u;
    SET_GPR_U32(ctx, 31, 0x14B5FCu);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14B5F4u, 0x14B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5FCu;
label_14b5fc:
    // 0x14b5fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B5FCu;
    {
        const bool branch_taken_0x14b5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b5fc) {
            ctx->pc = 0x14B624u;
            return;
        }
    }
    ctx->pc = 0x14B604u;
    // 0x14b604: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14b608: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b60c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14b610: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b618: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14b618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14b61c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14B61Cu;
    {
        const bool branch_taken_0x14b61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b61c) {
            ctx->pc = 0x14B670u;
            return;
        }
    }
    ctx->pc = 0x14B624u;
}
