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

// Function: Sce_kill
// Address: 0x212400 - 0x2124cc
void Sce_kill_0x212400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_kill_0x212400");
#endif

    switch (ctx->pc) {
        case 0x21248cu: goto label_21248c;
        case 0x2124acu: goto label_2124ac;
        case 0x2124bcu: goto label_2124bc;
        default: break;
    }

    ctx->pc = 0x212400u;

    // 0x212400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212404: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x212404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x212408: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x212408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x21240c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x21240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212410: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x212410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x212414: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x212414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x212418: 0x246396e0  addiu       $v1, $v1, -0x6920
    ctx->pc = 0x212418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940384));
    // 0x21241c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x21241cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212420: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x212420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x212424: 0x8c2396d0  lw          $v1, -0x6930($at)
    ctx->pc = 0x212424u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6196D0u));
    // 0x212428: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x212428u;
    {
        const bool branch_taken_0x212428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x212428) {
            ctx->pc = 0x2124B4u;
            goto label_2124b4;
        }
    }
    ctx->pc = 0x212430u;
    // 0x212430: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x212430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212434: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x212434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x212438: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x212438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x21243c: 0x246396e0  addiu       $v1, $v1, -0x6920
    ctx->pc = 0x21243cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940384));
    // 0x212440: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x212440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212444: 0x94630008  lhu         $v1, 0x8($v1)
    ctx->pc = 0x212444u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x212448: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x212448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x21244c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x21244Cu;
    {
        const bool branch_taken_0x21244c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21244c) {
            ctx->pc = 0x2124BCu;
            goto label_2124bc;
        }
    }
    ctx->pc = 0x212454u;
    // 0x212454: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x212454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212458: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x212458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21245c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x21245cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x212460: 0x244296e0  addiu       $v0, $v0, -0x6920
    ctx->pc = 0x212460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940384));
    // 0x212464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212468: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x212468u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x21246c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x21246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212470: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x212470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x212474: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x212474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x212478: 0x244296e0  addiu       $v0, $v0, -0x6920
    ctx->pc = 0x212478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940384));
    // 0x21247c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212480: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x212480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212484: 0xc084a1c  jal         func_212870
    ctx->pc = 0x212484u;
    SET_GPR_U32(ctx, 31, 0x21248Cu);
    ctx->pc = 0x212870u;
    {
        ctx->pc = 0x21248Cu;
        ps2_syscalls::TerminateThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21248Cu) { return; }
    ctx->pc = 0x21248Cu;
label_21248c:
    // 0x21248c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x21248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212490: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x212490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x212494: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x212494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x212498: 0x244296e0  addiu       $v0, $v0, -0x6920
    ctx->pc = 0x212498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940384));
    // 0x21249c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2124a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2124a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2124a4: 0xc084a0c  jal         func_212830
    ctx->pc = 0x2124A4u;
    SET_GPR_U32(ctx, 31, 0x2124ACu);
    ctx->pc = 0x212830u;
    {
        ctx->pc = 0x2124ACu;
        ps2_syscalls::DeleteThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2124ACu) { return; }
    ctx->pc = 0x2124ACu;
label_2124ac:
    // 0x2124ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2124ACu;
    {
        const bool branch_taken_0x2124ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2124ac) {
            ctx->pc = 0x2124BCu;
            goto label_2124bc;
        }
    }
    ctx->pc = 0x2124B4u;
label_2124b4:
    // 0x2124b4: 0xc084934  jal         func_2124D0
    ctx->pc = 0x2124B4u;
    SET_GPR_U32(ctx, 31, 0x2124BCu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2124B4u, 0x2124BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2124BCu;
label_2124bc:
    // 0x2124bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2124bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2124c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2124c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2124c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2124C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2124C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2124CCu;
}
