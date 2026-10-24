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

// Function: entry_001ded48
// Address: 0x1ded48 - 0x1dedc8
void entry_001ded48_0x1ded48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ded48_0x1ded48");
#endif

    ctx->pc = 0x1ded48u;

    // 0x1ded48: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1ded48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1ded4c: 0x269400c0  addiu       $s4, $s4, 0xC0
    ctx->pc = 0x1ded4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x1ded50: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1ded50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1ded54: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1ded54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1ded58: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x1ded58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x1ded5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ded5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ded60: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x1ded60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ded64: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
    ctx->pc = 0x1DED64u;
    {
        const bool branch_taken_0x1ded64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ded64) {
            ctx->pc = 0x1DEBB8u;
            return;
        }
    }
    ctx->pc = 0x1DED6Cu;
    // 0x1ded6c: 0x26b50090  addiu       $s5, $s5, 0x90
    ctx->pc = 0x1ded6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x1ded70: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x1ded70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x1ded74: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1ded74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1ded78: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1ded78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ded7c: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1ded7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1ded80: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1ded80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1ded84: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1ded84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1ded88: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1ded88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ded8c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1ded8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ded90: 0x1460ff36  bnez        $v1, . + 4 + (-0xCA << 2)
    ctx->pc = 0x1DED90u;
    {
        const bool branch_taken_0x1ded90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ded90) {
            ctx->pc = 0x1DEA6Cu;
            return;
        }
    }
    ctx->pc = 0x1DED98u;
    // 0x1ded98: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ded98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ded9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ded9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1deda0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1deda0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1deda4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1deda4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1deda8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1deda8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dedac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dedacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dedb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dedb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dedb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dedb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dedb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dedb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dedbc: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1dedbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dedc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEDC8u;
}
