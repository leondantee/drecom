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

// Function: entry_001bf374
// Address: 0x1bf374 - 0x1bf3ec
void entry_001bf374_0x1bf374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf374_0x1bf374");
#endif

    switch (ctx->pc) {
        case 0x1bf384u: goto label_1bf384;
        case 0x1bf390u: goto label_1bf390;
        case 0x1bf3a4u: goto label_1bf3a4;
        case 0x1bf3b0u: goto label_1bf3b0;
        default: break;
    }

    ctx->pc = 0x1bf374u;

    // 0x1bf374: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf378: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf37c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BF37Cu;
    SET_GPR_U32(ctx, 31, 0x1BF384u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BF37Cu, 0x1BF384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF384u;
label_1bf384:
    // 0x1bf384: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf388: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BF388u;
    SET_GPR_U32(ctx, 31, 0x1BF390u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BF388u, 0x1BF390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF390u;
label_1bf390:
    // 0x1bf390: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bf390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf394: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf398: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf398u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf39c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BF39Cu;
    SET_GPR_U32(ctx, 31, 0x1BF3A4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BF39Cu, 0x1BF3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3A4u;
label_1bf3a4:
    // 0x1bf3a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bf3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf3a8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BF3A8u;
    SET_GPR_U32(ctx, 31, 0x1BF3B0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BF3A8u, 0x1BF3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3B0u;
label_1bf3b0:
    // 0x1bf3b0: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1bf3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bf3b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1bf3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1bf3b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BF3B8u;
    {
        const bool branch_taken_0x1bf3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf3b8) {
            ctx->pc = 0x1BF3ECu;
            return;
        }
    }
    ctx->pc = 0x1BF3C0u;
    // 0x1bf3c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf3c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bf3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bf3c8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1bf3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1bf3cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bf3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bf3d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF3D0u;
    {
        const bool branch_taken_0x1bf3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf3d0) {
            ctx->pc = 0x1BF3ECu;
            return;
        }
    }
    ctx->pc = 0x1BF3D8u;
    // 0x1bf3d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf3dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bf3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bf3e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1bf3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf3e4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bf3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bf3e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bf3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1bf3ecu;
}
