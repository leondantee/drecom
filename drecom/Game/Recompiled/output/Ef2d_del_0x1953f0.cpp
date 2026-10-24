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

// Function: Ef2d_del
// Address: 0x1953f0 - 0x1954ec
void Ef2d_del_0x1953f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ef2d_del_0x1953f0");
#endif

    switch (ctx->pc) {
        case 0x195420u: goto label_195420;
        default: break;
    }

    ctx->pc = 0x1953f0u;

    // 0x1953f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1953f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1953f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1953f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1953f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1953f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1953fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1953fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x195400: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x195400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x195404: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x195404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x195408: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x195408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x19540c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x19540cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x195410: 0x2471a630  addiu       $s1, $v1, -0x59D0
    ctx->pc = 0x195410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944304));
    // 0x195414: 0x8e300038  lw          $s0, 0x38($s1)
    ctx->pc = 0x195414u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A668u));
    // 0x195418: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x195418u;
    {
        const bool branch_taken_0x195418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195418) {
            ctx->pc = 0x1954D0u;
            goto label_1954d0;
        }
    }
    ctx->pc = 0x195420u;
label_195420:
    // 0x195420: 0x8e040120  lw          $a0, 0x120($s0)
    ctx->pc = 0x195420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x195424: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x195424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195428: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195428u;
    {
        const bool branch_taken_0x195428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195428) {
            ctx->pc = 0x195440u;
            goto label_195440;
        }
    }
    ctx->pc = 0x195430u;
    // 0x195430: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x195430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195434: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195438: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x195438u;
    {
        const bool branch_taken_0x195438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195438) {
            ctx->pc = 0x1954C8u;
            goto label_1954c8;
        }
    }
    ctx->pc = 0x195440u;
label_195440:
    // 0x195440: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x195440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x195444: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x195444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195448: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195448u;
    {
        const bool branch_taken_0x195448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195448) {
            ctx->pc = 0x195460u;
            goto label_195460;
        }
    }
    ctx->pc = 0x195450u;
    // 0x195450: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x195450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195454: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195458: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x195458u;
    {
        const bool branch_taken_0x195458 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195458) {
            ctx->pc = 0x1954C8u;
            goto label_1954c8;
        }
    }
    ctx->pc = 0x195460u;
label_195460:
    // 0x195460: 0x9203011c  lbu         $v1, 0x11C($s0)
    ctx->pc = 0x195460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x195464: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x195464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195468: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19546c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19546Cu;
    {
        const bool branch_taken_0x19546c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19546c) {
            ctx->pc = 0x195488u;
            goto label_195488;
        }
    }
    ctx->pc = 0x195474u;
    // 0x195474: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x195474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195478: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19547c: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19547Cu;
    {
        const bool branch_taken_0x19547c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19547c) {
            ctx->pc = 0x1954C8u;
            goto label_1954c8;
        }
    }
    ctx->pc = 0x195484u;
    // 0x195484: 0x0  nop
    ctx->pc = 0x195484u;
    // NOP
label_195488:
    // 0x195488: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x195488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x19548c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19548cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195490: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195490u;
    {
        const bool branch_taken_0x195490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195490) {
            ctx->pc = 0x1954A8u;
            goto label_1954a8;
        }
    }
    ctx->pc = 0x195498u;
    // 0x195498: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x195498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19549c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x19549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1954a0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1954A0u;
    {
        const bool branch_taken_0x1954a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1954a0) {
            ctx->pc = 0x1954C8u;
            goto label_1954c8;
        }
    }
    ctx->pc = 0x1954A8u;
label_1954a8:
    // 0x1954a8: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x1954a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1954ac: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1954acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1954b0: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x1954b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x1954b4: 0x8e04020c  lw          $a0, 0x20C($s0)
    ctx->pc = 0x1954b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1954b8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1954b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1954bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1954bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1954c0: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x1954c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x1954c4: 0x0  nop
    ctx->pc = 0x1954c4u;
    // NOP
label_1954c8:
    // 0x1954c8: 0x8e100218  lw          $s0, 0x218($s0)
    ctx->pc = 0x1954c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x1954cc: 0x0  nop
    ctx->pc = 0x1954ccu;
    // NOP
label_1954d0:
    // 0x1954d0: 0x1600ffd3  bnez        $s0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1954D0u;
    {
        const bool branch_taken_0x1954d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1954d0) {
            ctx->pc = 0x195420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195420;
        }
    }
    ctx->pc = 0x1954D8u;
    // 0x1954d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1954d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1954dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1954dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1954e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1954e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1954e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1954E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1954ECu;
}
