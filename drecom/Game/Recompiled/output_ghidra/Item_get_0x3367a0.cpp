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

// Function: Item_get
// Address: 0x3367a0 - 0x336824
void Item_get_0x3367a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_get_0x3367a0");
#endif

    switch (ctx->pc) {
        case 0x3367f0u: goto label_3367f0;
        case 0x336800u: goto label_336800;
        case 0x336810u: goto label_336810;
        default: break;
    }

    ctx->pc = 0x3367a0u;

    // 0x3367a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3367a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3367a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3367a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3367a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3367a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3367ac: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3367acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3367b0: 0x24706150  addiu       $s0, $v1, 0x6150
    ctx->pc = 0x3367b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x3367b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3367b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3367b8: 0xa2036608  sb          $v1, 0x6608($s0)
    ctx->pc = 0x3367b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x62C758u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x62C758u, _value); } while (0);
    // 0x3367bc: 0x8e045dc8  lw          $a0, 0x5DC8($s0)
    ctx->pc = 0x3367bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x62BF18u));
    // 0x3367c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3367c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3367c4: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3367C4u;
    {
        const bool branch_taken_0x3367c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3367c4) {
            ctx->pc = 0x336808u;
            goto label_336808;
        }
    }
    ctx->pc = 0x3367CCu;
    // 0x3367cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3367ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3367d0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3367D0u;
    {
        const bool branch_taken_0x3367d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3367d0) {
            ctx->pc = 0x3367F8u;
            goto label_3367f8;
        }
    }
    ctx->pc = 0x3367D8u;
    // 0x3367d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3367D8u;
    {
        const bool branch_taken_0x3367d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3367d8) {
            ctx->pc = 0x3367E8u;
            goto label_3367e8;
        }
    }
    ctx->pc = 0x3367E0u;
    // 0x3367e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3367E0u;
    {
        const bool branch_taken_0x3367e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3367e0) {
            ctx->pc = 0x336810u;
            goto label_336810;
        }
    }
    ctx->pc = 0x3367E8u;
label_3367e8:
    // 0x3367e8: 0xc0cda0c  jal         func_336830
    ctx->pc = 0x3367E8u;
    SET_GPR_U32(ctx, 31, 0x3367F0u);
    ctx->pc = 0x336830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336830u, 0x3367E8u, 0x3367F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3367F0u;
label_3367f0:
    // 0x3367f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3367F0u;
    {
        const bool branch_taken_0x3367f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3367f0) {
            ctx->pc = 0x336810u;
            goto label_336810;
        }
    }
    ctx->pc = 0x3367F8u;
label_3367f8:
    // 0x3367f8: 0xc0cdb50  jal         func_336D40
    ctx->pc = 0x3367F8u;
    SET_GPR_U32(ctx, 31, 0x336800u);
    ctx->pc = 0x336D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D40u, 0x3367F8u, 0x336800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336800u;
label_336800:
    // 0x336800: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x336800u;
    {
        const bool branch_taken_0x336800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336800) {
            ctx->pc = 0x336810u;
            goto label_336810;
        }
    }
    ctx->pc = 0x336808u;
label_336808:
    // 0x336808: 0xc0cdd94  jal         func_337650
    ctx->pc = 0x336808u;
    SET_GPR_U32(ctx, 31, 0x336810u);
    ctx->pc = 0x337650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337650u, 0x336808u, 0x336810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336810u;
label_336810:
    // 0x336810: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x336810u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336818: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x336818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33681c: 0x3e00008  jr          $ra
    ctx->pc = 0x33681Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33681Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336824u;
}
