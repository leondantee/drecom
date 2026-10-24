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

// Function: Ectrl_05
// Address: 0x24f0c0 - 0x24f194
void Ectrl_05_0x24f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_05_0x24f0c0");
#endif

    switch (ctx->pc) {
        case 0x24f0c0u: goto label_24f0c0;
        case 0x24f0c4u: goto label_24f0c4;
        case 0x24f0c8u: goto label_24f0c8;
        case 0x24f0ccu: goto label_24f0cc;
        case 0x24f0d0u: goto label_24f0d0;
        case 0x24f0d4u: goto label_24f0d4;
        case 0x24f0d8u: goto label_24f0d8;
        case 0x24f0dcu: goto label_24f0dc;
        case 0x24f0e0u: goto label_24f0e0;
        case 0x24f0e4u: goto label_24f0e4;
        case 0x24f0e8u: goto label_24f0e8;
        case 0x24f0ecu: goto label_24f0ec;
        case 0x24f0f0u: goto label_24f0f0;
        case 0x24f0f4u: goto label_24f0f4;
        case 0x24f0f8u: goto label_24f0f8;
        case 0x24f0fcu: goto label_24f0fc;
        case 0x24f100u: goto label_24f100;
        case 0x24f104u: goto label_24f104;
        case 0x24f108u: goto label_24f108;
        case 0x24f10cu: goto label_24f10c;
        case 0x24f110u: goto label_24f110;
        case 0x24f114u: goto label_24f114;
        case 0x24f118u: goto label_24f118;
        case 0x24f11cu: goto label_24f11c;
        case 0x24f120u: goto label_24f120;
        case 0x24f124u: goto label_24f124;
        case 0x24f128u: goto label_24f128;
        case 0x24f12cu: goto label_24f12c;
        case 0x24f130u: goto label_24f130;
        case 0x24f134u: goto label_24f134;
        case 0x24f138u: goto label_24f138;
        case 0x24f13cu: goto label_24f13c;
        case 0x24f140u: goto label_24f140;
        case 0x24f144u: goto label_24f144;
        case 0x24f148u: goto label_24f148;
        case 0x24f14cu: goto label_24f14c;
        case 0x24f150u: goto label_24f150;
        case 0x24f154u: goto label_24f154;
        case 0x24f158u: goto label_24f158;
        case 0x24f15cu: goto label_24f15c;
        case 0x24f160u: goto label_24f160;
        case 0x24f164u: goto label_24f164;
        case 0x24f168u: goto label_24f168;
        case 0x24f16cu: goto label_24f16c;
        case 0x24f170u: goto label_24f170;
        case 0x24f174u: goto label_24f174;
        case 0x24f178u: goto label_24f178;
        case 0x24f17cu: goto label_24f17c;
        case 0x24f180u: goto label_24f180;
        case 0x24f184u: goto label_24f184;
        case 0x24f188u: goto label_24f188;
        case 0x24f18cu: goto label_24f18c;
        case 0x24f190u: goto label_24f190;
        default: break;
    }

    ctx->pc = 0x24f0c0u;

label_24f0c0:
    // 0x24f0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24f0c4:
    // 0x24f0c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x24f0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_24f0c8:
    // 0x24f0c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x24f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_24f0cc:
    // 0x24f0cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24f0d0:
    // 0x24f0d0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x24f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24f0d4:
    // 0x24f0d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24f0d8:
    // 0x24f0d8: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_24f0dc:
    if (ctx->pc == 0x24F0DCu) {
        ctx->pc = 0x24F0E0u;
        goto label_24f0e0;
    }
    ctx->pc = 0x24F0D8u;
    {
        const bool branch_taken_0x24f0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24f0d8) {
            ctx->pc = 0x24F15Cu;
            goto label_24f15c;
        }
    }
    ctx->pc = 0x24F0E0u;
label_24f0e0:
    // 0x24f0e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24f0e4:
    // 0x24f0e4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_24f0e8:
    if (ctx->pc == 0x24F0E8u) {
        ctx->pc = 0x24F0ECu;
        goto label_24f0ec;
    }
    ctx->pc = 0x24F0E4u;
    {
        const bool branch_taken_0x24f0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24f0e4) {
            ctx->pc = 0x24F12Cu;
            goto label_24f12c;
        }
    }
    ctx->pc = 0x24F0ECu;
label_24f0ec:
    // 0x24f0ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_24f0f0:
    if (ctx->pc == 0x24F0F0u) {
        ctx->pc = 0x24F0F4u;
        goto label_24f0f4;
    }
    ctx->pc = 0x24F0ECu;
    {
        const bool branch_taken_0x24f0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f0ec) {
            ctx->pc = 0x24F0FCu;
            goto label_24f0fc;
        }
    }
    ctx->pc = 0x24F0F4u;
label_24f0f4:
    // 0x24f0f4: 0x10000019  b           . + 4 + (0x19 << 2)
label_24f0f8:
    if (ctx->pc == 0x24F0F8u) {
        ctx->pc = 0x24F0FCu;
        goto label_24f0fc;
    }
    ctx->pc = 0x24F0F4u;
    {
        const bool branch_taken_0x24f0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f0f4) {
            ctx->pc = 0x24F15Cu;
            goto label_24f15c;
        }
    }
    ctx->pc = 0x24F0FCu;
label_24f0fc:
    // 0x24f0fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24f100:
    // 0x24f100: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24f104:
    // 0x24f104: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24f108:
    // 0x24f108: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24f108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24f10c:
    // 0x24f10c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24f110:
    // 0x24f110: 0x2442b6a8  addiu       $v0, $v0, -0x4958
    ctx->pc = 0x24f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948520));
label_24f114:
    // 0x24f114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24f114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24f118:
    // 0x24f118: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24f11c:
    // 0x24f11c: 0x40f809  jalr        $v0
label_24f120:
    if (ctx->pc == 0x24F120u) {
        ctx->pc = 0x24F124u;
        goto label_24f124;
    }
    ctx->pc = 0x24F11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F124u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F11Cu, 0x24F124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F124u;
label_24f124:
    // 0x24f124: 0x10000017  b           . + 4 + (0x17 << 2)
label_24f128:
    if (ctx->pc == 0x24F128u) {
        ctx->pc = 0x24F12Cu;
        goto label_24f12c;
    }
    ctx->pc = 0x24F124u;
    {
        const bool branch_taken_0x24f124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f124) {
            ctx->pc = 0x24F184u;
            goto label_24f184;
        }
    }
    ctx->pc = 0x24F12Cu;
label_24f12c:
    // 0x24f12c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24f12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24f130:
    // 0x24f130: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24f130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24f134:
    // 0x24f134: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24f138:
    // 0x24f138: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24f138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24f13c:
    // 0x24f13c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24f140:
    // 0x24f140: 0x2442b6b0  addiu       $v0, $v0, -0x4950
    ctx->pc = 0x24f140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
label_24f144:
    // 0x24f144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24f148:
    // 0x24f148: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24f14c:
    // 0x24f14c: 0x40f809  jalr        $v0
label_24f150:
    if (ctx->pc == 0x24F150u) {
        ctx->pc = 0x24F154u;
        goto label_24f154;
    }
    ctx->pc = 0x24F14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F154u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F14Cu, 0x24F154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F154u;
label_24f154:
    // 0x24f154: 0x1000000b  b           . + 4 + (0xB << 2)
label_24f158:
    if (ctx->pc == 0x24F158u) {
        ctx->pc = 0x24F15Cu;
        goto label_24f15c;
    }
    ctx->pc = 0x24F154u;
    {
        const bool branch_taken_0x24f154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f154) {
            ctx->pc = 0x24F184u;
            goto label_24f184;
        }
    }
    ctx->pc = 0x24F15Cu;
label_24f15c:
    // 0x24f15c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24f160:
    // 0x24f160: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24f160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24f164:
    // 0x24f164: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24f164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24f168:
    // 0x24f168: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24f168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24f16c:
    // 0x24f16c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24f170:
    // 0x24f170: 0x2442b6b8  addiu       $v0, $v0, -0x4948
    ctx->pc = 0x24f170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948536));
label_24f174:
    // 0x24f174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24f178:
    // 0x24f178: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24f17c:
    // 0x24f17c: 0x40f809  jalr        $v0
label_24f180:
    if (ctx->pc == 0x24F180u) {
        ctx->pc = 0x24F184u;
        goto label_24f184;
    }
    ctx->pc = 0x24F17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F184u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F17Cu, 0x24F184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F184u;
label_24f184:
    // 0x24f184: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x24f184u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24f188:
    // 0x24f188: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24f188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24f18c:
    // 0x24f18c: 0x3e00008  jr          $ra
label_24f190:
    if (ctx->pc == 0x24F190u) {
        ctx->pc = 0x24F194u;
        goto label_fallthrough_0x24f18c;
    }
    ctx->pc = 0x24F18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24f18c:
    ctx->pc = 0x24F194u;
}
