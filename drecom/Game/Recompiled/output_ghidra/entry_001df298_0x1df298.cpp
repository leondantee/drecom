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

// Function: entry_001df298
// Address: 0x1df298 - 0x1df320
void entry_001df298_0x1df298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df298_0x1df298");
#endif

    ctx->pc = 0x1df298u;

    // 0x1df298: 0x2ec30002  sltiu       $v1, $s6, 0x2
    ctx->pc = 0x1df298u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df29c: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1DF29Cu;
    {
        const bool branch_taken_0x1df29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df29c) {
            ctx->pc = 0x1DF18Cu;
            return;
        }
    }
    ctx->pc = 0x1DF2A4u;
    // 0x1df2a4: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1df2a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1df2a8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1df2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df2ac: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df2b0: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1df2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1df2b4: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x1df2b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x1df2b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df2bc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df2bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df2c0: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1DF2C0u;
    {
        const bool branch_taken_0x1df2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df2c0) {
            ctx->pc = 0x1DF180u;
            return;
        }
    }
    ctx->pc = 0x1DF2C8u;
    // 0x1df2c8: 0x27de0090  addiu       $fp, $fp, 0x90
    ctx->pc = 0x1df2c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1df2cc: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1df2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1df2d0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df2d4: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1df2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1df2d8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1df2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1df2dc: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1df2dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1df2e0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1df2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1df2e4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df2e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df2e8: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
    ctx->pc = 0x1DF2E8u;
    {
        const bool branch_taken_0x1df2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df2e8) {
            ctx->pc = 0x1DF180u;
            return;
        }
    }
    ctx->pc = 0x1DF2F0u;
    // 0x1df2f0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1df2f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df2f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1df2f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df2f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1df2f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df2fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1df2fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df300: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1df300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df304: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1df304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df308: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1df308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df30c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df314: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1df314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1df318: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF320u;
}
