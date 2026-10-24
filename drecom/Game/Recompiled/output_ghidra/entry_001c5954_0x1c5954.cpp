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

// Function: entry_001c5954
// Address: 0x1c5954 - 0x1c59cc
void entry_001c5954_0x1c5954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5954_0x1c5954");
#endif

    switch (ctx->pc) {
        case 0x1c5964u: goto label_1c5964;
        case 0x1c5970u: goto label_1c5970;
        case 0x1c5984u: goto label_1c5984;
        case 0x1c5990u: goto label_1c5990;
        default: break;
    }

    ctx->pc = 0x1c5954u;

    // 0x1c5954: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5958: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5958u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c595c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C595Cu;
    SET_GPR_U32(ctx, 31, 0x1C5964u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C595Cu, 0x1C5964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5964u;
label_1c5964:
    // 0x1c5964: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5968: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C5968u;
    SET_GPR_U32(ctx, 31, 0x1C5970u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C5968u, 0x1C5970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5970u;
label_1c5970:
    // 0x1c5970: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5974: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5978: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5978u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c597c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C597Cu;
    SET_GPR_U32(ctx, 31, 0x1C5984u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C597Cu, 0x1C5984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5984u;
label_1c5984:
    // 0x1c5984: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c5984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5988: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C5988u;
    SET_GPR_U32(ctx, 31, 0x1C5990u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C5988u, 0x1C5990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5990u;
label_1c5990:
    // 0x1c5990: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1c5990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c5994: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c5994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c5998: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5998u;
    {
        const bool branch_taken_0x1c5998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5998) {
            ctx->pc = 0x1C59CCu;
            return;
        }
    }
    ctx->pc = 0x1C59A0u;
    // 0x1c59a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c59a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c59a8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c59ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c59acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c59b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C59B0u;
    {
        const bool branch_taken_0x1c59b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c59b0) {
            ctx->pc = 0x1C59CCu;
            return;
        }
    }
    ctx->pc = 0x1C59B8u;
    // 0x1c59b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c59b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c59bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c59bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c59c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c59c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c59c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c59c8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c59ccu;
}
