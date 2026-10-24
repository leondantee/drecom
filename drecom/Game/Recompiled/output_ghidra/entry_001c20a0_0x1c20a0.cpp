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

// Function: entry_001c20a0
// Address: 0x1c20a0 - 0x1c2128
void entry_001c20a0_0x1c20a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c20a0_0x1c20a0");
#endif

    switch (ctx->pc) {
        case 0x1c20b0u: goto label_1c20b0;
        case 0x1c20bcu: goto label_1c20bc;
        case 0x1c20d0u: goto label_1c20d0;
        case 0x1c20dcu: goto label_1c20dc;
        case 0x1c20e4u: goto label_1c20e4;
        default: break;
    }

    ctx->pc = 0x1c20a0u;

    // 0x1c20a0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c20a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c20a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c20a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c20a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C20A8u;
    SET_GPR_U32(ctx, 31, 0x1C20B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C20A8u, 0x1C20B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20B0u;
label_1c20b0:
    // 0x1c20b0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c20b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c20b4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C20B4u;
    SET_GPR_U32(ctx, 31, 0x1C20BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C20B4u, 0x1C20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20BCu;
label_1c20bc:
    // 0x1c20bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c20bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c20c0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c20c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c20c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c20c8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C20C8u;
    SET_GPR_U32(ctx, 31, 0x1C20D0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C20C8u, 0x1C20D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20D0u;
label_1c20d0:
    // 0x1c20d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c20d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c20d4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C20D4u;
    SET_GPR_U32(ctx, 31, 0x1C20DCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C20D4u, 0x1C20DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20DCu;
label_1c20dc:
    // 0x1c20dc: 0xc06d390  jal         func_1B4E40
    ctx->pc = 0x1C20DCu;
    SET_GPR_U32(ctx, 31, 0x1C20E4u);
    ctx->pc = 0x1B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E40u, 0x1C20DCu, 0x1C20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20E4u;
label_1c20e4:
    // 0x1c20e4: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C20E4u;
    {
        const bool branch_taken_0x1c20e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c20e4) {
            ctx->pc = 0x1C21DCu;
            return;
        }
    }
    ctx->pc = 0x1C20ECu;
    // 0x1c20ec: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c20f0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c20f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c20f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C20F4u;
    {
        const bool branch_taken_0x1c20f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c20f4) {
            ctx->pc = 0x1C2128u;
            return;
        }
    }
    ctx->pc = 0x1C20FCu;
    // 0x1c20fc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2100: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c2100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c2104: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c2104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c2108: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c2108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c210c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C210Cu;
    {
        const bool branch_taken_0x1c210c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c210c) {
            ctx->pc = 0x1C2128u;
            return;
        }
    }
    ctx->pc = 0x1C2114u;
    // 0x1c2114: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c2114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2118: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c2118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c211c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c211cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2120: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c2120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c2124: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c2124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c2128u;
}
