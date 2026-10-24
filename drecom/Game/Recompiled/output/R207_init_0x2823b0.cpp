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

// Function: R207_init
// Address: 0x2823b0 - 0x282498
void R207_init_0x2823b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R207_init_0x2823b0");
#endif

    switch (ctx->pc) {
        case 0x2823c8u: goto label_2823c8;
        case 0x2823dcu: goto label_2823dc;
        case 0x282428u: goto label_282428;
        default: break;
    }

    ctx->pc = 0x2823b0u;

    // 0x2823b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2823b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2823b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2823b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2823b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2823b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2823bc: 0x244437a0  addiu       $a0, $v0, 0x37A0
    ctx->pc = 0x2823bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14240));
    // 0x2823c0: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x2823C0u;
    SET_GPR_U32(ctx, 31, 0x2823C8u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x2823C0u, 0x2823C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2823C8u;
label_2823c8:
    // 0x2823c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2823c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2823cc: 0x8c24f9e0  lw          $a0, -0x620($at)
    ctx->pc = 0x2823ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x2823d0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2823d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2823d4: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x2823D4u;
    SET_GPR_U32(ctx, 31, 0x2823DCu);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x2823D4u, 0x2823DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2823DCu;
label_2823dc:
    // 0x2823dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2823dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2823e0: 0x8c23f9e0  lw          $v1, -0x620($at)
    ctx->pc = 0x2823e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x2823e4: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x2823e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2823e8: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x2823e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x2823ec: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x2823ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2823f0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2823f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2823f4: 0x8c23f9e0  lw          $v1, -0x620($at)
    ctx->pc = 0x2823f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x2823f8: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x2823f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2823fc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2823fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x282400: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x282400u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x282404: 0x24037fe0  addiu       $v1, $zero, 0x7FE0
    ctx->pc = 0x282404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32736));
    // 0x282408: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28240c: 0x8c22f9e0  lw          $v0, -0x620($at)
    ctx->pc = 0x28240cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x282410: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x282410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x282414: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282418: 0x8c24f9e4  lw          $a0, -0x61C($at)
    ctx->pc = 0x282418u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x28241c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x28241cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x282420: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x282420u;
    SET_GPR_U32(ctx, 31, 0x282428u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x282420u, 0x282428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282428u;
label_282428:
    // 0x282428: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28242c: 0x8c24f9e4  lw          $a0, -0x61C($at)
    ctx->pc = 0x28242cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x282430: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x282430u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x282434: 0x34630021  ori         $v1, $v1, 0x21
    ctx->pc = 0x282434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33);
    // 0x282438: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x282438u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x28243c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28243cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282440: 0x8c24f9e4  lw          $a0, -0x61C($at)
    ctx->pc = 0x282440u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x282444: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x282444u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x282448: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x282448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x28244c: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x28244cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x282450: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282454: 0x8c24f9e4  lw          $a0, -0x61C($at)
    ctx->pc = 0x282454u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x282458: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x282458u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28245c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x28245cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x282460: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x282460u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x282464: 0x24047fc0  addiu       $a0, $zero, 0x7FC0
    ctx->pc = 0x282464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32704));
    // 0x282468: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28246c: 0x8c23f9e4  lw          $v1, -0x61C($at)
    ctx->pc = 0x28246cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x282470: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x282470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x282474: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282478: 0x8c24f9e4  lw          $a0, -0x61C($at)
    ctx->pc = 0x282478u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x28247c: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x28247cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x282480: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x282480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x282484: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x282484u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x282488: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x282488u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28248c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28248cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x282490: 0x3e00008  jr          $ra
    ctx->pc = 0x282490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282498u;
}
