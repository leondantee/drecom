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

// Function: Event_exec_msg
// Address: 0x377d10 - 0x377db4
void Event_exec_msg_0x377d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_exec_msg_0x377d10");
#endif

    switch (ctx->pc) {
        case 0x377d70u: goto label_377d70;
        default: break;
    }

    ctx->pc = 0x377d10u;

    // 0x377d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x377d14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x377d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x377d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377d1c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377d20: 0x8c23034c  lw          $v1, 0x34C($at)
    ctx->pc = 0x377d20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A034Cu));
    // 0x377d24: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x377D24u;
    {
        const bool branch_taken_0x377d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377d24) {
            ctx->pc = 0x377DA0u;
            goto label_377da0;
        }
    }
    ctx->pc = 0x377D2Cu;
    // 0x377d2c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377d30: 0x8c30034c  lw          $s0, 0x34C($at)
    ctx->pc = 0x377d30u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x9A034Cu));
    // 0x377d34: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x377d34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x377d38: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x377d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377d3c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377d40: 0x94230394  lhu         $v1, 0x394($at)
    ctx->pc = 0x377d40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x9A0394u));
    // 0x377d44: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x377d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377d48: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x377D48u;
    {
        const bool branch_taken_0x377d48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377d48) {
            ctx->pc = 0x377DA0u;
            goto label_377da0;
        }
    }
    ctx->pc = 0x377D50u;
    // 0x377d50: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x377d50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x377d54: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x377d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x377d58: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x377d58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x377d5c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x377d5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x377d60: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x377d60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x377d64: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x377d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x377d68: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x377D68u;
    SET_GPR_U32(ctx, 31, 0x377D70u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x377D68u, 0x377D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D70u;
label_377d70:
    // 0x377d70: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x377d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x377d74: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x377d74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x377d78: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x377d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377d7c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x377d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x377d80: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x377D80u;
    {
        const bool branch_taken_0x377d80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377d80) {
            ctx->pc = 0x377D98u;
            goto label_377d98;
        }
    }
    ctx->pc = 0x377D88u;
    // 0x377d88: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377d8c: 0xac20034c  sw          $zero, 0x34C($at)
    ctx->pc = 0x377d8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A034Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A034Cu, _value); } while (0);
    // 0x377d90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x377D90u;
    {
        const bool branch_taken_0x377d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377d90) {
            ctx->pc = 0x377DA0u;
            goto label_377da0;
        }
    }
    ctx->pc = 0x377D98u;
label_377d98:
    // 0x377d98: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377d9c: 0xac30034c  sw          $s0, 0x34C($at)
    ctx->pc = 0x377d9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x9A034Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A034Cu, _value); } while (0);
label_377da0:
    // 0x377da0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x377da0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377da8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x377da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x377dac: 0x3e00008  jr          $ra
    ctx->pc = 0x377DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377DB4u;
}
