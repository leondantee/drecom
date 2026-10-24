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

// Function: Event_exec_light
// Address: 0x377c70 - 0x377d04
void Event_exec_light_0x377c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_exec_light_0x377c70");
#endif

    switch (ctx->pc) {
        case 0x377cc0u: goto label_377cc0;
        default: break;
    }

    ctx->pc = 0x377c70u;

    // 0x377c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x377c74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x377c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x377c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377c7c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377c80: 0x8c230330  lw          $v1, 0x330($at)
    ctx->pc = 0x377c80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0330u));
    // 0x377c84: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x377C84u;
    {
        const bool branch_taken_0x377c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377c84) {
            ctx->pc = 0x377CF0u;
            goto label_377cf0;
        }
    }
    ctx->pc = 0x377C8Cu;
    // 0x377c8c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377c90: 0x8c300330  lw          $s0, 0x330($at)
    ctx->pc = 0x377c90u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x9A0330u));
    // 0x377c94: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x377c94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x377c98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x377c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377c9c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377ca0: 0x94230394  lhu         $v1, 0x394($at)
    ctx->pc = 0x377ca0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x9A0394u));
    // 0x377ca4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x377ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377ca8: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x377CA8u;
    {
        const bool branch_taken_0x377ca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377ca8) {
            ctx->pc = 0x377CF0u;
            goto label_377cf0;
        }
    }
    ctx->pc = 0x377CB0u;
    // 0x377cb0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x377cb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x377cb4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x377cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x377cb8: 0xc05db9c  jal         func_176E70
    ctx->pc = 0x377CB8u;
    SET_GPR_U32(ctx, 31, 0x377CC0u);
    ctx->pc = 0x176E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E70u, 0x377CB8u, 0x377CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377CC0u;
label_377cc0:
    // 0x377cc0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x377cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x377cc4: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x377cc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x377cc8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x377cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377ccc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x377cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x377cd0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x377CD0u;
    {
        const bool branch_taken_0x377cd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377cd0) {
            ctx->pc = 0x377CE8u;
            goto label_377ce8;
        }
    }
    ctx->pc = 0x377CD8u;
    // 0x377cd8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377cdc: 0xac200330  sw          $zero, 0x330($at)
    ctx->pc = 0x377cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0330u, _value); } while (0);
    // 0x377ce0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x377CE0u;
    {
        const bool branch_taken_0x377ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377ce0) {
            ctx->pc = 0x377CF0u;
            goto label_377cf0;
        }
    }
    ctx->pc = 0x377CE8u;
label_377ce8:
    // 0x377ce8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377cec: 0xac300330  sw          $s0, 0x330($at)
    ctx->pc = 0x377cecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x9A0330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0330u, _value); } while (0);
label_377cf0:
    // 0x377cf0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x377cf0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377cf8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x377cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x377cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x377CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377D04u;
}
