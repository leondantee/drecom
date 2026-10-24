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

// Function: entry_002d95a4
// Address: 0x2d95a4 - 0x2d9678
void entry_002d95a4_0x2d95a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d95a4_0x2d95a4");
#endif

    switch (ctx->pc) {
        case 0x2d95d0u: goto label_2d95d0;
        case 0x2d95dcu: goto label_2d95dc;
        case 0x2d95e8u: goto label_2d95e8;
        case 0x2d9608u: goto label_2d9608;
        case 0x2d9614u: goto label_2d9614;
        case 0x2d9638u: goto label_2d9638;
        case 0x2d9644u: goto label_2d9644;
        case 0x2d9670u: goto label_2d9670;
        default: break;
    }

    ctx->pc = 0x2d95a4u;

label_2d95a4:
    // 0x2d95a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d95a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d95a8:
    // 0x2d95a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d95ac:
    // 0x2d95ac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2d95acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2d95b0:
    // 0x2d95b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d95b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d95b4:
    // 0x2d95b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d95b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d95b8:
    // 0x2d95b8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d95b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2d95bc:
    // 0x2d95bc: 0x24428a00  addiu       $v0, $v0, -0x7600
    ctx->pc = 0x2d95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
label_2d95c0:
    // 0x2d95c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d95c4:
    // 0x2d95c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d95c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d95c8:
    // 0x2d95c8: 0x40f809  jalr        $v0
label_2d95cc:
    if (ctx->pc == 0x2D95CCu) {
        ctx->pc = 0x2D95D0u;
        goto label_2d95d0;
    }
    ctx->pc = 0x2D95C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D95D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D95C8u, 0x2D95D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D95D0u;
label_2d95d0:
    // 0x2d95d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d95d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d95d4:
    // 0x2d95d4: 0xc0b6b94  jal         func_2DAE50
label_2d95d8:
    if (ctx->pc == 0x2D95D8u) {
        ctx->pc = 0x2D95DCu;
        goto label_2d95dc;
    }
    ctx->pc = 0x2D95D4u;
    SET_GPR_U32(ctx, 31, 0x2D95DCu);
    ctx->pc = 0x2DAE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAE50u, 0x2D95D4u, 0x2D95DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95DCu;
label_2d95dc:
    // 0x2d95dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d95dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d95e0:
    // 0x2d95e0: 0xc0b8978  jal         func_2E25E0
label_2d95e4:
    if (ctx->pc == 0x2D95E4u) {
        ctx->pc = 0x2D95E8u;
        goto label_2d95e8;
    }
    ctx->pc = 0x2D95E0u;
    SET_GPR_U32(ctx, 31, 0x2D95E8u);
    ctx->pc = 0x2E25E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E25E0u, 0x2D95E0u, 0x2D95E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95E8u;
label_2d95e8:
    // 0x2d95e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d95e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d95ec:
    // 0x2d95ec: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2d95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2d95f0:
    // 0x2d95f0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2d95f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2d95f4:
    // 0x2d95f4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_2d95f8:
    if (ctx->pc == 0x2D95F8u) {
        ctx->pc = 0x2D95FCu;
        goto label_2d95fc;
    }
    ctx->pc = 0x2D95F4u;
    {
        const bool branch_taken_0x2d95f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d95f4) {
            ctx->pc = 0x2D96B8u;
            return;
        }
    }
    ctx->pc = 0x2D95FCu;
label_2d95fc:
    // 0x2d95fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d95fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9600:
    // 0x2d9600: 0xc0b679c  jal         func_2D9E70
label_2d9604:
    if (ctx->pc == 0x2D9604u) {
        ctx->pc = 0x2D9608u;
        goto label_2d9608;
    }
    ctx->pc = 0x2D9600u;
    SET_GPR_U32(ctx, 31, 0x2D9608u);
    ctx->pc = 0x2D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9E70u, 0x2D9600u, 0x2D9608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9608u;
label_2d9608:
    // 0x2d9608: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d9608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d960c:
    // 0x2d960c: 0xc0b6a3c  jal         func_2DA8F0
label_2d9610:
    if (ctx->pc == 0x2D9610u) {
        ctx->pc = 0x2D9614u;
        goto label_2d9614;
    }
    ctx->pc = 0x2D960Cu;
    SET_GPR_U32(ctx, 31, 0x2D9614u);
    ctx->pc = 0x2DA8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8F0u, 0x2D960Cu, 0x2D9614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9614u;
label_2d9614:
    // 0x2d9614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d9614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9618:
    // 0x2d9618: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2d9618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2d961c:
    // 0x2d961c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2d961cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2d9620:
    // 0x2d9620: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d9620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2d9624:
    // 0x2d9624: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_2d9628:
    if (ctx->pc == 0x2D9628u) {
        ctx->pc = 0x2D962Cu;
        goto label_2d962c;
    }
    ctx->pc = 0x2D9624u;
    {
        const bool branch_taken_0x2d9624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9624) {
            ctx->pc = 0x2D9678u;
            return;
        }
    }
    ctx->pc = 0x2D962Cu;
label_2d962c:
    // 0x2d962c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d962cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9630:
    // 0x2d9630: 0xc0b69c0  jal         func_2DA700
label_2d9634:
    if (ctx->pc == 0x2D9634u) {
        ctx->pc = 0x2D9638u;
        goto label_2d9638;
    }
    ctx->pc = 0x2D9630u;
    SET_GPR_U32(ctx, 31, 0x2D9638u);
    ctx->pc = 0x2DA700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA700u, 0x2D9630u, 0x2D9638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9638u;
label_2d9638:
    // 0x2d9638: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d9638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d963c:
    // 0x2d963c: 0xc0b6b28  jal         func_2DACA0
label_2d9640:
    if (ctx->pc == 0x2D9640u) {
        ctx->pc = 0x2D9644u;
        goto label_2d9644;
    }
    ctx->pc = 0x2D963Cu;
    SET_GPR_U32(ctx, 31, 0x2D9644u);
    ctx->pc = 0x2DACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DACA0u, 0x2D963Cu, 0x2D9644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9644u;
label_2d9644:
    // 0x2d9644: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2d9644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_2d9648:
    // 0x2d9648: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d9648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d964c:
    // 0x2d964c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2d964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_2d9650:
    // 0x2d9650: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d9650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2d9654:
    // 0x2d9654: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2d9654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_2d9658:
    // 0x2d9658: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2d9658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2d965c:
    // 0x2d965c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2d965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_2d9660:
    // 0x2d9660: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2d9660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2d9664:
    // 0x2d9664: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d9664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9668:
    // 0x2d9668: 0xc0c91ec  jal         func_3247B0
label_2d966c:
    if (ctx->pc == 0x2D966Cu) {
        ctx->pc = 0x2D9670u;
        goto label_2d9670;
    }
    ctx->pc = 0x2D9668u;
    SET_GPR_U32(ctx, 31, 0x2D9670u);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x2D9668u, 0x2D9670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9670u;
label_2d9670:
    // 0x2d9670: 0x10000011  b           . + 4 + (0x11 << 2)
label_2d9674:
    if (ctx->pc == 0x2D9674u) {
        ctx->pc = 0x2D9678u;
        goto label_fallthrough_0x2d9670;
    }
    ctx->pc = 0x2D9670u;
    {
        const bool branch_taken_0x2d9670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9670) {
            ctx->pc = 0x2D96B8u;
            return;
        }
    }
label_fallthrough_0x2d9670:
    ctx->pc = 0x2D9678u;
}
