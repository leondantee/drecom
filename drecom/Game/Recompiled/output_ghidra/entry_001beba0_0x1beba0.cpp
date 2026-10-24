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

// Function: entry_001beba0
// Address: 0x1beba0 - 0x1bec28
void entry_001beba0_0x1beba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001beba0_0x1beba0");
#endif

    switch (ctx->pc) {
        case 0x1bebb0u: goto label_1bebb0;
        case 0x1bebbcu: goto label_1bebbc;
        case 0x1bebd0u: goto label_1bebd0;
        case 0x1bebdcu: goto label_1bebdc;
        case 0x1bebe4u: goto label_1bebe4;
        default: break;
    }

    ctx->pc = 0x1beba0u;

    // 0x1beba0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1beba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beba4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1beba4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1beba8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BEBA8u;
    SET_GPR_U32(ctx, 31, 0x1BEBB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BEBA8u, 0x1BEBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBB0u;
label_1bebb0:
    // 0x1bebb0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1bebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bebb4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BEBB4u;
    SET_GPR_U32(ctx, 31, 0x1BEBBCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BEBB4u, 0x1BEBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBBCu;
label_1bebbc:
    // 0x1bebbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bebbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bebc0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1bebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bebc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bebc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bebc8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BEBC8u;
    SET_GPR_U32(ctx, 31, 0x1BEBD0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BEBC8u, 0x1BEBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBD0u;
label_1bebd0:
    // 0x1bebd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bebd4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BEBD4u;
    SET_GPR_U32(ctx, 31, 0x1BEBDCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BEBD4u, 0x1BEBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBDCu;
label_1bebdc:
    // 0x1bebdc: 0xc06d390  jal         func_1B4E40
    ctx->pc = 0x1BEBDCu;
    SET_GPR_U32(ctx, 31, 0x1BEBE4u);
    ctx->pc = 0x1B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E40u, 0x1BEBDCu, 0x1BEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBE4u;
label_1bebe4:
    // 0x1bebe4: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1BEBE4u;
    {
        const bool branch_taken_0x1bebe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bebe4) {
            ctx->pc = 0x1BECF0u;
            return;
        }
    }
    ctx->pc = 0x1BEBECu;
    // 0x1bebec: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1bebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bebf0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1bebf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1bebf4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BEBF4u;
    {
        const bool branch_taken_0x1bebf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bebf4) {
            ctx->pc = 0x1BEC28u;
            return;
        }
    }
    ctx->pc = 0x1BEBFCu;
    // 0x1bebfc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bec04: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1bec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1bec08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bec0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEC0Cu;
    {
        const bool branch_taken_0x1bec0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bec0c) {
            ctx->pc = 0x1BEC28u;
            return;
        }
    }
    ctx->pc = 0x1BEC14u;
    // 0x1bec14: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1bec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bec18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bec1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1bec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1bec20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bec20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bec24: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bec24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1bec28u;
}
