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

// Function: entry_001c4bb0
// Address: 0x1c4bb0 - 0x1c4c38
void entry_001c4bb0_0x1c4bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4bb0_0x1c4bb0");
#endif

    switch (ctx->pc) {
        case 0x1c4bc0u: goto label_1c4bc0;
        case 0x1c4bccu: goto label_1c4bcc;
        case 0x1c4be0u: goto label_1c4be0;
        case 0x1c4becu: goto label_1c4bec;
        case 0x1c4bf4u: goto label_1c4bf4;
        default: break;
    }

    ctx->pc = 0x1c4bb0u;

    // 0x1c4bb0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c4bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4bb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c4bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c4bb8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C4BB8u;
    SET_GPR_U32(ctx, 31, 0x1C4BC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C4BB8u, 0x1C4BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BC0u;
label_1c4bc0:
    // 0x1c4bc0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c4bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4bc4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C4BC4u;
    SET_GPR_U32(ctx, 31, 0x1C4BCCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C4BC4u, 0x1C4BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BCCu;
label_1c4bcc:
    // 0x1c4bcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c4bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c4bd0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c4bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4bd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c4bd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c4bd8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C4BD8u;
    SET_GPR_U32(ctx, 31, 0x1C4BE0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C4BD8u, 0x1C4BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BE0u;
label_1c4be0:
    // 0x1c4be0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c4be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4be4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C4BE4u;
    SET_GPR_U32(ctx, 31, 0x1C4BECu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C4BE4u, 0x1C4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BECu;
label_1c4bec:
    // 0x1c4bec: 0xc06d390  jal         func_1B4E40
    ctx->pc = 0x1C4BECu;
    SET_GPR_U32(ctx, 31, 0x1C4BF4u);
    ctx->pc = 0x1B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E40u, 0x1C4BECu, 0x1C4BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BF4u;
label_1c4bf4:
    // 0x1c4bf4: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C4BF4u;
    {
        const bool branch_taken_0x1c4bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4bf4) {
            ctx->pc = 0x1C4CECu;
            return;
        }
    }
    ctx->pc = 0x1C4BFCu;
    // 0x1c4bfc: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1c4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c4c00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c4c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c4c04: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C4C04u;
    {
        const bool branch_taken_0x1c4c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c04) {
            ctx->pc = 0x1C4C38u;
            return;
        }
    }
    ctx->pc = 0x1C4C0Cu;
    // 0x1c4c0c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c10: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4c14: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c4c18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c4c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c4c1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4C1Cu;
    {
        const bool branch_taken_0x1c4c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c1c) {
            ctx->pc = 0x1C4C38u;
            return;
        }
    }
    ctx->pc = 0x1C4C24u;
    // 0x1c4c24: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c4c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c4c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c4c2c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c4c30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c4c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c4c34: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c4c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c4c38u;
}
