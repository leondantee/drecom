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

// Function: Devil_switch_check
// Address: 0x27ba70 - 0x27badc
void Devil_switch_check_0x27ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Devil_switch_check_0x27ba70");
#endif

    switch (ctx->pc) {
        case 0x27bac8u: goto label_27bac8;
        default: break;
    }

    ctx->pc = 0x27ba70u;

    // 0x27ba70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27ba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27ba74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27ba74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27ba78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ba78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27ba7c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ba7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27ba80: 0x8c30f9e4  lw          $s0, -0x61C($at)
    ctx->pc = 0x27ba80u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x27ba84: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x27ba84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27ba88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x27ba88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27ba8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ba90: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x27BA90u;
    {
        const bool branch_taken_0x27ba90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27ba90) {
            ctx->pc = 0x27BAC8u;
            goto label_27bac8;
        }
    }
    ctx->pc = 0x27BA98u;
    // 0x27ba98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27ba9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ba9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27baa0: 0xa022de11  sb          $v0, -0x21EF($at)
    ctx->pc = 0x27baa0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDE11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDE11u, _value); } while (0);
    // 0x27baa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27baa8: 0xae021290  sw          $v0, 0x1290($s0)
    ctx->pc = 0x27baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4752), GPR_U32(ctx, 2));
    // 0x27baac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27baacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bab0: 0xa0201b48  sb          $zero, 0x1B48($at)
    ctx->pc = 0x27bab0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621B48u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B48u, _value); } while (0);
    // 0x27bab4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27bab8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27babc: 0x2445bbe0  addiu       $a1, $v0, -0x4420
    ctx->pc = 0x27babcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949856));
    // 0x27bac0: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27BAC0u;
    SET_GPR_U32(ctx, 31, 0x27BAC8u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27BAC0u, 0x27BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BAC8u;
label_27bac8:
    // 0x27bac8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27bac8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bacc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27baccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bad0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27bad4: 0x3e00008  jr          $ra
    ctx->pc = 0x27BAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BADCu;
}
