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

// Function: entry_001b1490
// Address: 0x1b1490 - 0x1b1500
void entry_001b1490_0x1b1490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1490_0x1b1490");
#endif

    ctx->pc = 0x1b1490u;

    // 0x1b1490: 0x72601e28  paddub      $v1, $s3, $zero
    ctx->pc = 0x1b1490u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b1494: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x1b1494u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b1498: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B1498u;
    {
        const bool branch_taken_0x1b1498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1498) {
            ctx->pc = 0x1B1468u;
            return;
        }
    }
    ctx->pc = 0x1B14A0u;
    // 0x1b14a0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1b14a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1b14a4: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b14a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1b14a8: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1b14a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1b14ac: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1b14acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b14b0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b14b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b14b4: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x1b14b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x1b14b8: 0x92e30001  lbu         $v1, 0x1($s7)
    ctx->pc = 0x1b14b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x1b14bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b14bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b14c0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b14c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b14c4: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1B14C4u;
    {
        const bool branch_taken_0x1b14c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b14c4) {
            ctx->pc = 0x1B1420u;
            return;
        }
    }
    ctx->pc = 0x1B14CCu;
    // 0x1b14cc: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b14ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b14d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b14d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b14d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b14d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b14d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b14d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b14dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b14dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b14e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b14e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b14e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b14e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b14e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b14e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b14ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b14ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b14f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b14f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b14f4: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1b14f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b14f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B14F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B14F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1500u;
}
