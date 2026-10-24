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

// Function: Em06_R0_damage
// Address: 0x19b130 - 0x19b190
void Em06_R0_damage_0x19b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R0_damage_0x19b130");
#endif

    switch (ctx->pc) {
        case 0x19b130u: goto label_19b130;
        case 0x19b134u: goto label_19b134;
        case 0x19b138u: goto label_19b138;
        case 0x19b13cu: goto label_19b13c;
        case 0x19b140u: goto label_19b140;
        case 0x19b144u: goto label_19b144;
        case 0x19b148u: goto label_19b148;
        case 0x19b14cu: goto label_19b14c;
        case 0x19b150u: goto label_19b150;
        case 0x19b154u: goto label_19b154;
        case 0x19b158u: goto label_19b158;
        case 0x19b15cu: goto label_19b15c;
        case 0x19b160u: goto label_19b160;
        case 0x19b164u: goto label_19b164;
        case 0x19b168u: goto label_19b168;
        case 0x19b16cu: goto label_19b16c;
        case 0x19b170u: goto label_19b170;
        case 0x19b174u: goto label_19b174;
        case 0x19b178u: goto label_19b178;
        case 0x19b17cu: goto label_19b17c;
        case 0x19b180u: goto label_19b180;
        case 0x19b184u: goto label_19b184;
        case 0x19b188u: goto label_19b188;
        case 0x19b18cu: goto label_19b18c;
        default: break;
    }

    ctx->pc = 0x19b130u;

label_19b130:
    // 0x19b130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19b134:
    // 0x19b134: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19b134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_19b138:
    // 0x19b138: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x19b138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_19b13c:
    // 0x19b13c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_19b140:
    // 0x19b140: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_19b144:
    // 0x19b144: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x19b144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_19b148:
    // 0x19b148: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19b14c:
    // 0x19b14c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19b150:
    // 0x19b150: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19b150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_19b154:
    // 0x19b154: 0x244273d0  addiu       $v0, $v0, 0x73D0
    ctx->pc = 0x19b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29648));
label_19b158:
    // 0x19b158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19b15c:
    // 0x19b15c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19b160:
    // 0x19b160: 0x40f809  jalr        $v0
label_19b164:
    if (ctx->pc == 0x19B164u) {
        ctx->pc = 0x19B168u;
        goto label_19b168;
    }
    ctx->pc = 0x19B160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19B168u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B160u, 0x19B168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B168u;
label_19b168:
    // 0x19b168: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_19b16c:
    // 0x19b16c: 0xc05d1b8  jal         func_1746E0
label_19b170:
    if (ctx->pc == 0x19B170u) {
        ctx->pc = 0x19B174u;
        goto label_19b174;
    }
    ctx->pc = 0x19B16Cu;
    SET_GPR_U32(ctx, 31, 0x19B174u);
    ctx->pc = 0x1746E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1746E0u, 0x19B16Cu, 0x19B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B174u;
label_19b174:
    // 0x19b174: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_19b178:
    // 0x19b178: 0xc065a18  jal         func_196860
label_19b17c:
    if (ctx->pc == 0x19B17Cu) {
        ctx->pc = 0x19B180u;
        goto label_19b180;
    }
    ctx->pc = 0x19B178u;
    SET_GPR_U32(ctx, 31, 0x19B180u);
    ctx->pc = 0x196860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196860u, 0x19B178u, 0x19B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B180u;
label_19b180:
    // 0x19b180: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19b180u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19b184:
    // 0x19b184: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19b184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19b188:
    // 0x19b188: 0x3e00008  jr          $ra
label_19b18c:
    if (ctx->pc == 0x19B18Cu) {
        ctx->pc = 0x19B190u;
        goto label_fallthrough_0x19b188;
    }
    ctx->pc = 0x19B188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19b188:
    ctx->pc = 0x19B190u;
}
