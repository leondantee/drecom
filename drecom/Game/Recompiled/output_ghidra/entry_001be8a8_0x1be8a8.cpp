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

// Function: entry_001be8a8
// Address: 0x1be8a8 - 0x1be944
void entry_001be8a8_0x1be8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be8a8_0x1be8a8");
#endif

    switch (ctx->pc) {
        case 0x1be8c8u: goto label_1be8c8;
        case 0x1be8d4u: goto label_1be8d4;
        case 0x1be8e8u: goto label_1be8e8;
        case 0x1be8f4u: goto label_1be8f4;
        case 0x1be8fcu: goto label_1be8fc;
        case 0x1be918u: goto label_1be918;
        default: break;
    }

    ctx->pc = 0x1be8a8u;

    // 0x1be8a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be8ac: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1be8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be8b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be8b4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1be8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1be8b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1be8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be8bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1be8bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be8c0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BE8C0u;
    SET_GPR_U32(ctx, 31, 0x1BE8C8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BE8C0u, 0x1BE8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8C8u;
label_1be8c8:
    // 0x1be8c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1be8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be8cc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BE8CCu;
    SET_GPR_U32(ctx, 31, 0x1BE8D4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BE8CCu, 0x1BE8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8D4u;
label_1be8d4:
    // 0x1be8d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1be8d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be8d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1be8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be8dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1be8dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be8e0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BE8E0u;
    SET_GPR_U32(ctx, 31, 0x1BE8E8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BE8E0u, 0x1BE8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8E8u;
label_1be8e8:
    // 0x1be8e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1be8e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be8ec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BE8ECu;
    SET_GPR_U32(ctx, 31, 0x1BE8F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BE8ECu, 0x1BE8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8F4u;
label_1be8f4:
    // 0x1be8f4: 0xc06d390  jal         func_1B4E40
    ctx->pc = 0x1BE8F4u;
    SET_GPR_U32(ctx, 31, 0x1BE8FCu);
    ctx->pc = 0x1B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E40u, 0x1BE8F4u, 0x1BE8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8FCu;
label_1be8fc:
    // 0x1be8fc: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1BE8FCu;
    {
        const bool branch_taken_0x1be8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be8fc) {
            ctx->pc = 0x1BE9BCu;
            return;
        }
    }
    ctx->pc = 0x1BE904u;
    // 0x1be904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be908: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1be908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be90c: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1be90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1be910: 0xc058c14  jal         func_163050
    ctx->pc = 0x1BE910u;
    SET_GPR_U32(ctx, 31, 0x1BE918u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1BE910u, 0x1BE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE918u;
label_1be918:
    // 0x1be918: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BE918u;
    {
        const bool branch_taken_0x1be918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be918) {
            ctx->pc = 0x1BE9A4u;
            return;
        }
    }
    ctx->pc = 0x1BE920u;
    // 0x1be920: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1be920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1be924: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1be924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1be928: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE928u;
    {
        const bool branch_taken_0x1be928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be928) {
            ctx->pc = 0x1BE944u;
            return;
        }
    }
    ctx->pc = 0x1BE930u;
    // 0x1be930: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1be930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be934: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1be934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1be938: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1be938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1be93c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1be93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1be940: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1be940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1be944u;
}
