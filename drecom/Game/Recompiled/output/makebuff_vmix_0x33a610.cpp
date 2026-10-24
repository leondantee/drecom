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

// Function: makebuff_vmix
// Address: 0x33a610 - 0x33a730
void makebuff_vmix_0x33a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("makebuff_vmix_0x33a610");
#endif

    switch (ctx->pc) {
        case 0x33a660u: goto label_33a660;
        case 0x33a6b8u: goto label_33a6b8;
        default: break;
    }

    ctx->pc = 0x33a610u;

    // 0x33a610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33a614: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33a614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33a618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33a61c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33a620: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x33a620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x33a624: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a628: 0x8c225440  lw          $v0, 0x5440($at)
    ctx->pc = 0x33a628u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895440u));
    // 0x33a62c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x33a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x33a630: 0x28420200  slti        $v0, $v0, 0x200
    ctx->pc = 0x33a630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x33a634: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A634u;
    {
        const bool branch_taken_0x33a634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a634) {
            ctx->pc = 0x33A648u;
            goto label_33a648;
        }
    }
    ctx->pc = 0x33A63Cu;
    // 0x33a63c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a640: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x33A640u;
    {
        const bool branch_taken_0x33a640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a640) {
            ctx->pc = 0x33A718u;
            goto label_33a718;
        }
    }
    ctx->pc = 0x33A648u;
label_33a648:
    // 0x33a648: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33a648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33a64c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x33a64cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a650: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x33a650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33a654: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x33a654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33a658: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x33A658u;
    {
        const bool branch_taken_0x33a658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a658) {
            ctx->pc = 0x33A698u;
            goto label_33a698;
        }
    }
    ctx->pc = 0x33A660u;
label_33a660:
    // 0x33a660: 0x2121006  srlv        $v0, $s2, $s0
    ctx->pc = 0x33a660u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
    // 0x33a664: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a668: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33a668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a66c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a670: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a670u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a674: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a678: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a67c: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a67cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a680: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a684: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a68c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a68cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33a690: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x33a690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x33a694: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x33a694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_33a698:
    // 0x33a698: 0x1e20fff1  bgtz        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x33A698u;
    {
        const bool branch_taken_0x33a698 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x33a698) {
            ctx->pc = 0x33A660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a660;
        }
    }
    ctx->pc = 0x33A6A0u;
    // 0x33a6a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33a6a4: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x33a6a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33a6a8: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x33a6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33a6ac: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x33a6acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33a6b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x33A6B0u;
    {
        const bool branch_taken_0x33a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a6b0) {
            ctx->pc = 0x33A6F0u;
            goto label_33a6f0;
        }
    }
    ctx->pc = 0x33A6B8u;
label_33a6b8:
    // 0x33a6b8: 0x2121006  srlv        $v0, $s2, $s0
    ctx->pc = 0x33a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
    // 0x33a6bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a6c0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33a6c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a6c4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a6c8: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a6cc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a6d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a6d4: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a6d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a6d8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a6dc: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a6e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a6e4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33a6e8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x33a6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x33a6ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x33a6ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_33a6f0:
    // 0x33a6f0: 0x1e20fff1  bgtz        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x33A6F0u;
    {
        const bool branch_taken_0x33a6f0 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x33a6f0) {
            ctx->pc = 0x33A6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a6b8;
        }
    }
    ctx->pc = 0x33A6F8u;
    // 0x33a6f8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x33a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33a6fc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a700: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a700u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a704: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a708: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a70c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a710: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a710u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33a714: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33a714u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33a718:
    // 0x33a718: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33a718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a71c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a724: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x33a724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33a728: 0x3e00008  jr          $ra
    ctx->pc = 0x33A728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A730u;
}
