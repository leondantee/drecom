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

// Function: Em10_parts_bomb
// Address: 0x1392b0 - 0x139358
void Em10_parts_bomb_0x1392b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_parts_bomb_0x1392b0");
#endif

    switch (ctx->pc) {
        case 0x13931cu: goto label_13931c;
        case 0x139330u: goto label_139330;
        case 0x139344u: goto label_139344;
        default: break;
    }

    ctx->pc = 0x1392b0u;

    // 0x1392b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1392b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1392b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1392b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1392b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1392b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1392bc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1392bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1392c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1392c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1392c4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x1392c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1392c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1392c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1392cc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1392ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1392d0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1392d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1392d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1392d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1392d8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1392D8u;
    {
        const bool branch_taken_0x1392d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1392d8) {
            ctx->pc = 0x139344u;
            goto label_139344;
        }
    }
    ctx->pc = 0x1392E0u;
    // 0x1392e0: 0x9203009b  lbu         $v1, 0x9B($s0)
    ctx->pc = 0x1392e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 155)));
    // 0x1392e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1392e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1392e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1392e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1392ec: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1392ECu;
    {
        const bool branch_taken_0x1392ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1392ec) {
            ctx->pc = 0x139338u;
            goto label_139338;
        }
    }
    ctx->pc = 0x1392F4u;
    // 0x1392f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1392f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1392f8: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1392F8u;
    {
        const bool branch_taken_0x1392f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1392f8) {
            ctx->pc = 0x139324u;
            goto label_139324;
        }
    }
    ctx->pc = 0x139300u;
    // 0x139300: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139300u;
    {
        const bool branch_taken_0x139300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x139300) {
            ctx->pc = 0x139310u;
            goto label_139310;
        }
    }
    ctx->pc = 0x139308u;
    // 0x139308: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x139308u;
    {
        const bool branch_taken_0x139308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139308) {
            ctx->pc = 0x139344u;
            goto label_139344;
        }
    }
    ctx->pc = 0x139310u;
label_139310:
    // 0x139310: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x139310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139314: 0xc04de08  jal         func_137820
    ctx->pc = 0x139314u;
    SET_GPR_U32(ctx, 31, 0x13931Cu);
    ctx->pc = 0x137820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137820u, 0x139314u, 0x13931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13931Cu;
label_13931c:
    // 0x13931c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13931Cu;
    {
        const bool branch_taken_0x13931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13931c) {
            ctx->pc = 0x139344u;
            goto label_139344;
        }
    }
    ctx->pc = 0x139324u;
label_139324:
    // 0x139324: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x139324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139328: 0xc04e06c  jal         func_1381B0
    ctx->pc = 0x139328u;
    SET_GPR_U32(ctx, 31, 0x139330u);
    ctx->pc = 0x1381B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1381B0u, 0x139328u, 0x139330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139330u;
label_139330:
    // 0x139330: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139330u;
    {
        const bool branch_taken_0x139330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139330) {
            ctx->pc = 0x139344u;
            goto label_139344;
        }
    }
    ctx->pc = 0x139338u;
label_139338:
    // 0x139338: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x139338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13933c: 0xc04e290  jal         func_138A40
    ctx->pc = 0x13933Cu;
    SET_GPR_U32(ctx, 31, 0x139344u);
    ctx->pc = 0x138A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138A40u, 0x13933Cu, 0x139344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139344u;
label_139344:
    // 0x139344: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x139344u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13934c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13934cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x139350: 0x3e00008  jr          $ra
    ctx->pc = 0x139350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139358u;
}
