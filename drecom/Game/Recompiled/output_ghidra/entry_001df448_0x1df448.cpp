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

// Function: entry_001df448
// Address: 0x1df448 - 0x1df4d0
void entry_001df448_0x1df448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df448_0x1df448");
#endif

    ctx->pc = 0x1df448u;

    // 0x1df448: 0x2ec30002  sltiu       $v1, $s6, 0x2
    ctx->pc = 0x1df448u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df44c: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1DF44Cu;
    {
        const bool branch_taken_0x1df44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df44c) {
            ctx->pc = 0x1DF398u;
            return;
        }
    }
    ctx->pc = 0x1DF454u;
    // 0x1df454: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1df454u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1df458: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1df458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df45c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df460: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1df460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1df464: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x1df464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x1df468: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df46c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df46cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df470: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1DF470u;
    {
        const bool branch_taken_0x1df470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df470) {
            ctx->pc = 0x1DF38Cu;
            return;
        }
    }
    ctx->pc = 0x1DF478u;
    // 0x1df478: 0x27de0090  addiu       $fp, $fp, 0x90
    ctx->pc = 0x1df478u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1df47c: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1df47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1df480: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df484: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1df484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1df488: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1df488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df48c: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1df48cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1df490: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1df490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1df494: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df494u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df498: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1DF498u;
    {
        const bool branch_taken_0x1df498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df498) {
            ctx->pc = 0x1DF38Cu;
            return;
        }
    }
    ctx->pc = 0x1DF4A0u;
    // 0x1df4a0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1df4a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df4a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1df4a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df4a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1df4a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df4ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1df4acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df4b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1df4b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df4b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1df4b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df4b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1df4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df4bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df4c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df4c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1df4c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1df4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF4D0u;
}
