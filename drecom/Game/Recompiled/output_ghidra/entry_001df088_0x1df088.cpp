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

// Function: entry_001df088
// Address: 0x1df088 - 0x1df110
void entry_001df088_0x1df088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df088_0x1df088");
#endif

    ctx->pc = 0x1df088u;

    // 0x1df088: 0x2ec30002  sltiu       $v1, $s6, 0x2
    ctx->pc = 0x1df088u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df08c: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1DF08Cu;
    {
        const bool branch_taken_0x1df08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df08c) {
            ctx->pc = 0x1DEFC8u;
            return;
        }
    }
    ctx->pc = 0x1DF094u;
    // 0x1df094: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1df094u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1df098: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1df098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df09c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df0a0: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1df0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1df0a4: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x1df0a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x1df0a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df0ac: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df0acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df0b0: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1DF0B0u;
    {
        const bool branch_taken_0x1df0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df0b0) {
            ctx->pc = 0x1DEFBCu;
            return;
        }
    }
    ctx->pc = 0x1DF0B8u;
    // 0x1df0b8: 0x27de0090  addiu       $fp, $fp, 0x90
    ctx->pc = 0x1df0b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1df0bc: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1df0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1df0c0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df0c4: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1df0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1df0c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1df0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df0cc: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1df0ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1df0d0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1df0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1df0d4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df0d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df0d8: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1DF0D8u;
    {
        const bool branch_taken_0x1df0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df0d8) {
            ctx->pc = 0x1DEFBCu;
            return;
        }
    }
    ctx->pc = 0x1DF0E0u;
    // 0x1df0e0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1df0e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df0e4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1df0e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df0e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1df0e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df0ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1df0ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df0f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1df0f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df0f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1df0f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df0f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1df0f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df0fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df104: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1df104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1df108: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF110u;
}
