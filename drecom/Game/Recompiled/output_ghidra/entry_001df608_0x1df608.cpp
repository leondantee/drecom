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

// Function: entry_001df608
// Address: 0x1df608 - 0x1df690
void entry_001df608_0x1df608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df608_0x1df608");
#endif

    ctx->pc = 0x1df608u;

    // 0x1df608: 0x2ec30002  sltiu       $v1, $s6, 0x2
    ctx->pc = 0x1df608u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df60c: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1DF60Cu;
    {
        const bool branch_taken_0x1df60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df60c) {
            ctx->pc = 0x1DF548u;
            return;
        }
    }
    ctx->pc = 0x1DF614u;
    // 0x1df614: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1df614u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1df618: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1df618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df61c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df620: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1df620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1df624: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x1df624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x1df628: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df62c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df62cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df630: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1DF630u;
    {
        const bool branch_taken_0x1df630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df630) {
            ctx->pc = 0x1DF53Cu;
            return;
        }
    }
    ctx->pc = 0x1DF638u;
    // 0x1df638: 0x27de0090  addiu       $fp, $fp, 0x90
    ctx->pc = 0x1df638u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1df63c: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1df63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1df640: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df644: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1df644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1df648: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1df648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df64c: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1df64cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1df650: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1df650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1df654: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df654u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df658: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1DF658u;
    {
        const bool branch_taken_0x1df658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df658) {
            ctx->pc = 0x1DF53Cu;
            return;
        }
    }
    ctx->pc = 0x1DF660u;
    // 0x1df660: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1df660u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df664: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1df664u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df668: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1df668u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df66c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1df66cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df670: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1df670u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df674: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1df674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1df678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df67c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df67cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df684: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1df684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1df688: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF690u;
}
