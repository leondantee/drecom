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

// Function: entry_001b0348
// Address: 0x1b0348 - 0x1b03ac
void entry_001b0348_0x1b0348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0348_0x1b0348");
#endif

    ctx->pc = 0x1b0348u;

    // 0x1b0348: 0x8fa404a8  lw          $a0, 0x4A8($sp)
    ctx->pc = 0x1b0348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b034c: 0x8fb604c8  lw          $s6, 0x4C8($sp)
    ctx->pc = 0x1b034cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1b0350: 0x8ec3005c  lw          $v1, 0x5C($s6)
    ctx->pc = 0x1b0350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x1b0354: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1b0354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0358: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b035c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b035cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0360: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1B0360u;
    {
        const bool branch_taken_0x1b0360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0360) {
            ctx->pc = 0x1B025Cu;
            return;
        }
    }
    ctx->pc = 0x1B0368u;
    // 0x1b0368: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1b0368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b036c: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1b036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1b0370: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1b0370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b0374: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b0374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b0378: 0xaee40a68  sw          $a0, 0xA68($s7)
    ctx->pc = 0x1b0378u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 4));
    // 0x1b037c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b037cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0380: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b0380u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0384: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b0384u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0388: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b0388u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b038c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b038cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0390: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b039c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b039cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b03a0: 0x27bd04d0  addiu       $sp, $sp, 0x4D0
    ctx->pc = 0x1b03a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x1b03a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B03A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B03A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B03ACu;
}
