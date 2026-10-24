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
// Address: 0x14bca0 - 0x14bd54
void caseD_7_0x14bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x14bca0");
#endif

    switch (ctx->pc) {
        case 0x14bcb0u: goto label_14bcb0;
        case 0x14bcbcu: goto label_14bcbc;
        case 0x14bcd0u: goto label_14bcd0;
        case 0x14bcdcu: goto label_14bcdc;
        case 0x14bcecu: goto label_14bcec;
        case 0x14bd04u: goto label_14bd04;
        case 0x14bd2cu: goto label_14bd2c;
        default: break;
    }

    ctx->pc = 0x14bca0u;

    // 0x14bca0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bca4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14bca4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14bca8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14BCA8u;
    SET_GPR_U32(ctx, 31, 0x14BCB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14BCA8u, 0x14BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCB0u;
label_14bcb0:
    // 0x14bcb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bcb4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14BCB4u;
    SET_GPR_U32(ctx, 31, 0x14BCBCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14BCB4u, 0x14BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCBCu;
label_14bcbc:
    // 0x14bcbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14bcbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14bcc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bcc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14bcc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14bcc8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14BCC8u;
    SET_GPR_U32(ctx, 31, 0x14BCD0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14BCC8u, 0x14BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCD0u;
label_14bcd0:
    // 0x14bcd0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14bcd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14bcd4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14BCD4u;
    SET_GPR_U32(ctx, 31, 0x14BCDCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14BCD4u, 0x14BCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCDCu;
label_14bcdc:
    // 0x14bcdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bce0: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14bce4: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x14BCE4u;
    SET_GPR_U32(ctx, 31, 0x14BCECu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x14BCE4u, 0x14BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCECu;
label_14bcec:
    // 0x14bcec: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14BCECu;
    {
        const bool branch_taken_0x14bcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bcec) {
            ctx->pc = 0x14BDA0u;
            return;
        }
    }
    ctx->pc = 0x14BCF4u;
    // 0x14bcf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bcf8: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14bcfc: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x14BCFCu;
    SET_GPR_U32(ctx, 31, 0x14BD04u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x14BCFCu, 0x14BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD04u;
label_14bd04:
    // 0x14bd04: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x14BD04u;
    {
        const bool branch_taken_0x14bd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bd04) {
            ctx->pc = 0x14BDA0u;
            return;
        }
    }
    ctx->pc = 0x14BD0Cu;
    // 0x14bd0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bd10: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x14bd10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
    // 0x14bd14: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14bd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14bd18: 0x28610030  slti        $at, $v1, 0x30
    ctx->pc = 0x14bd18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x14bd1c: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14BD1Cu;
    {
        const bool branch_taken_0x14bd1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bd1c) {
            ctx->pc = 0x14BD54u;
            return;
        }
    }
    ctx->pc = 0x14BD24u;
    // 0x14bd24: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x14BD24u;
    SET_GPR_U32(ctx, 31, 0x14BD2Cu);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14BD24u, 0x14BD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD2Cu;
label_14bd2c:
    // 0x14bd2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14BD2Cu;
    {
        const bool branch_taken_0x14bd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bd2c) {
            ctx->pc = 0x14BD54u;
            return;
        }
    }
    ctx->pc = 0x14BD34u;
    // 0x14bd34: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14bd38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bd3c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14bd40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bd44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bd48: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14bd48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14bd4c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14BD4Cu;
    {
        const bool branch_taken_0x14bd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bd4c) {
            ctx->pc = 0x14BDA0u;
            return;
        }
    }
    ctx->pc = 0x14BD54u;
}
