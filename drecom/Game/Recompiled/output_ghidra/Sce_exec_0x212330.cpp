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

// Function: Sce_exec
// Address: 0x212330 - 0x2123f4
void Sce_exec_0x212330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_exec_0x212330");
#endif

    switch (ctx->pc) {
        case 0x212368u: goto label_212368;
        default: break;
    }

    ctx->pc = 0x212330u;

    // 0x212330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212334: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x212338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x212338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21233c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x21233cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x212340: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x212340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x212344: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x212344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212348: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x212348u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x21234c: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x21234Cu;
    {
        const bool branch_taken_0x21234c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21234c) {
            ctx->pc = 0x212394u;
            goto label_212394;
        }
    }
    ctx->pc = 0x212354u;
    // 0x212354: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x212354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x212358: 0x247096e0  addiu       $s0, $v1, -0x6920
    ctx->pc = 0x212358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940384));
    // 0x21235c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21235cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212360: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x212360u;
    {
        const bool branch_taken_0x212360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212360) {
            ctx->pc = 0x212380u;
            goto label_212380;
        }
    }
    ctx->pc = 0x212368u;
label_212368:
    // 0x212368: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x212368u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21236c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x21236cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x212370: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x212370u;
    {
        const bool branch_taken_0x212370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x212370) {
            ctx->pc = 0x2123ACu;
            goto label_2123ac;
        }
    }
    ctx->pc = 0x212378u;
    // 0x212378: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x212378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x21237c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21237cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_212380:
    // 0x212380: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x212380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x212384: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x212384u;
    {
        const bool branch_taken_0x212384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x212384) {
            ctx->pc = 0x212368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212368;
        }
    }
    ctx->pc = 0x21238Cu;
    // 0x21238c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21238Cu;
    {
        const bool branch_taken_0x21238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21238c) {
            ctx->pc = 0x2123E0u;
            goto label_2123e0;
        }
    }
    ctx->pc = 0x212394u;
label_212394:
    // 0x212394: 0x8fb10020  lw          $s1, 0x20($sp)
    ctx->pc = 0x212394u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212398: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x212398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21239c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x21239cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2123a0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2123a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2123a4: 0x246396e0  addiu       $v1, $v1, -0x6920
    ctx->pc = 0x2123a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940384));
    // 0x2123a8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2123a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2123ac:
    // 0x2123ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2123acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2123b0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2123b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2123b4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2123b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2123b8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2123b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2123bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2123bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2123c0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2123c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2123c4: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x2123c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2123c8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x2123c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x2123cc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2123ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2123d0: 0x2463ac70  addiu       $v1, $v1, -0x5390
    ctx->pc = 0x2123d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945904));
    // 0x2123d4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2123d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2123d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2123d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2123dc: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x2123dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
label_2123e0:
    // 0x2123e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2123e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2123e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2123e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2123e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2123e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2123ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2123ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2123ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2123F4u;
}
