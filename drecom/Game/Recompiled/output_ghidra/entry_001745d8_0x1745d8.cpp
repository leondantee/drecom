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

// Function: entry_001745d8
// Address: 0x1745d8 - 0x174638
void entry_001745d8_0x1745d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001745d8_0x1745d8");
#endif

    ctx->pc = 0x1745d8u;

    // 0x1745d8: 0x2ec30002  sltiu       $v1, $s6, 0x2
    ctx->pc = 0x1745d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1745dc: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1745DCu;
    {
        const bool branch_taken_0x1745dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1745dc) {
            ctx->pc = 0x17451Cu;
            return;
        }
    }
    ctx->pc = 0x1745E4u;
    // 0x1745e4: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1745e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1745e8: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1745e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1745ec: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1745ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1745f0: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1745f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1745f4: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x1745f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x1745f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1745f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1745fc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1745fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x174600: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x174600u;
    {
        const bool branch_taken_0x174600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174600) {
            ctx->pc = 0x174510u;
            return;
        }
    }
    ctx->pc = 0x174608u;
    // 0x174608: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x174608u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17460c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17460cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x174610: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x174610u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174614: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x174614u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174618: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174618u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17461c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17461cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174620: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17462c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x17462cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x174630: 0x3e00008  jr          $ra
    ctx->pc = 0x174630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174638u;
}
