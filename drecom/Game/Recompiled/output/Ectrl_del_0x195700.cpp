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

// Function: Ectrl_del
// Address: 0x195700 - 0x1957fc
void Ectrl_del_0x195700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_del_0x195700");
#endif

    switch (ctx->pc) {
        case 0x195730u: goto label_195730;
        default: break;
    }

    ctx->pc = 0x195700u;

    // 0x195700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195704: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19570c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19570cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x195710: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x195710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x195714: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x195714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x195718: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x195718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x19571c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x19571cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x195720: 0x2471a630  addiu       $s1, $v1, -0x59D0
    ctx->pc = 0x195720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944304));
    // 0x195724: 0x8e300078  lw          $s0, 0x78($s1)
    ctx->pc = 0x195724u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A6A8u));
    // 0x195728: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x195728u;
    {
        const bool branch_taken_0x195728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195728) {
            ctx->pc = 0x1957E0u;
            goto label_1957e0;
        }
    }
    ctx->pc = 0x195730u;
label_195730:
    // 0x195730: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x195730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195734: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x195734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195738: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195738u;
    {
        const bool branch_taken_0x195738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195738) {
            ctx->pc = 0x195750u;
            goto label_195750;
        }
    }
    ctx->pc = 0x195740u;
    // 0x195740: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x195740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195744: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195748: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x195748u;
    {
        const bool branch_taken_0x195748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195748) {
            ctx->pc = 0x1957D8u;
            goto label_1957d8;
        }
    }
    ctx->pc = 0x195750u;
label_195750:
    // 0x195750: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x195750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x195754: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x195754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195758: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195758u;
    {
        const bool branch_taken_0x195758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195758) {
            ctx->pc = 0x195770u;
            goto label_195770;
        }
    }
    ctx->pc = 0x195760u;
    // 0x195760: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x195760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195764: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195768: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x195768u;
    {
        const bool branch_taken_0x195768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195768) {
            ctx->pc = 0x1957D8u;
            goto label_1957d8;
        }
    }
    ctx->pc = 0x195770u;
label_195770:
    // 0x195770: 0x920300e2  lbu         $v1, 0xE2($s0)
    ctx->pc = 0x195770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
    // 0x195774: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x195774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195778: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19577c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19577Cu;
    {
        const bool branch_taken_0x19577c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19577c) {
            ctx->pc = 0x195798u;
            goto label_195798;
        }
    }
    ctx->pc = 0x195784u;
    // 0x195784: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x195784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195788: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19578c: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19578Cu;
    {
        const bool branch_taken_0x19578c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19578c) {
            ctx->pc = 0x1957D8u;
            goto label_1957d8;
        }
    }
    ctx->pc = 0x195794u;
    // 0x195794: 0x0  nop
    ctx->pc = 0x195794u;
    // NOP
label_195798:
    // 0x195798: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x195798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x19579c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1957a0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1957A0u;
    {
        const bool branch_taken_0x1957a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1957a0) {
            ctx->pc = 0x1957B8u;
            goto label_1957b8;
        }
    }
    ctx->pc = 0x1957A8u;
    // 0x1957a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1957a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1957ac: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1957acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1957b0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1957B0u;
    {
        const bool branch_taken_0x1957b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1957b0) {
            ctx->pc = 0x1957D8u;
            goto label_1957d8;
        }
    }
    ctx->pc = 0x1957B8u;
label_1957b8:
    // 0x1957b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1957b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1957bc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1957bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1957c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1957c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1957c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1957c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1957c8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1957c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1957cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1957ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1957d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1957d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1957d4: 0x0  nop
    ctx->pc = 0x1957d4u;
    // NOP
label_1957d8:
    // 0x1957d8: 0x8e1000e8  lw          $s0, 0xE8($s0)
    ctx->pc = 0x1957d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1957dc: 0x0  nop
    ctx->pc = 0x1957dcu;
    // NOP
label_1957e0:
    // 0x1957e0: 0x1600ffd3  bnez        $s0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1957E0u;
    {
        const bool branch_taken_0x1957e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1957e0) {
            ctx->pc = 0x195730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195730;
        }
    }
    ctx->pc = 0x1957E8u;
    // 0x1957e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1957e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1957ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1957ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1957f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1957f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1957f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1957F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1957F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1957FCu;
}
