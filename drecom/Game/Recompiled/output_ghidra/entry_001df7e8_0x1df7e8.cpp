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

// Function: entry_001df7e8
// Address: 0x1df7e8 - 0x1df870
void entry_001df7e8_0x1df7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df7e8_0x1df7e8");
#endif

    ctx->pc = 0x1df7e8u;

    // 0x1df7e8: 0x2ec30002  sltiu       $v1, $s6, 0x2
    ctx->pc = 0x1df7e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df7ec: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1DF7ECu;
    {
        const bool branch_taken_0x1df7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df7ec) {
            ctx->pc = 0x1DF70Cu;
            return;
        }
    }
    ctx->pc = 0x1DF7F4u;
    // 0x1df7f4: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1df7f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1df7f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1df7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df7fc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df800: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1df800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1df804: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x1df804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x1df808: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df80c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df80cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df810: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1DF810u;
    {
        const bool branch_taken_0x1df810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df810) {
            ctx->pc = 0x1DF700u;
            return;
        }
    }
    ctx->pc = 0x1DF818u;
    // 0x1df818: 0x27de0090  addiu       $fp, $fp, 0x90
    ctx->pc = 0x1df818u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1df81c: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1df81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1df820: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df824: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1df824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1df828: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1df828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1df82c: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1df82cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1df830: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1df830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1df834: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df834u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df838: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x1DF838u;
    {
        const bool branch_taken_0x1df838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df838) {
            ctx->pc = 0x1DF700u;
            return;
        }
    }
    ctx->pc = 0x1DF840u;
    // 0x1df840: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1df840u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df844: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1df844u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df848: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1df848u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df84c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1df84cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df850: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1df850u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df854: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1df854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df858: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1df858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df85c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df85cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df864: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1df864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1df868: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF870u;
}
