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

// Function: Event_exec_s_flg
// Address: 0x377ac0 - 0x377b50
void Event_exec_s_flg_0x377ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_exec_s_flg_0x377ac0");
#endif

    switch (ctx->pc) {
        case 0x377b0cu: goto label_377b0c;
        default: break;
    }

    ctx->pc = 0x377ac0u;

    // 0x377ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x377ac4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x377ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x377ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377acc: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377ad0: 0x8c2302e8  lw          $v1, 0x2E8($at)
    ctx->pc = 0x377ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A02E8u));
    // 0x377ad4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x377AD4u;
    {
        const bool branch_taken_0x377ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377ad4) {
            ctx->pc = 0x377B3Cu;
            goto label_377b3c;
        }
    }
    ctx->pc = 0x377ADCu;
    // 0x377adc: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377ae0: 0x8c3002e8  lw          $s0, 0x2E8($at)
    ctx->pc = 0x377ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x9A02E8u));
    // 0x377ae4: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x377ae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x377ae8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x377ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377aec: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377af0: 0x94230394  lhu         $v1, 0x394($at)
    ctx->pc = 0x377af0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x9A0394u));
    // 0x377af4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x377af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377af8: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x377AF8u;
    {
        const bool branch_taken_0x377af8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377af8) {
            ctx->pc = 0x377B3Cu;
            goto label_377b3c;
        }
    }
    ctx->pc = 0x377B00u;
    // 0x377b00: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x377b00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x377b04: 0xc0de070  jal         func_3781C0
    ctx->pc = 0x377B04u;
    SET_GPR_U32(ctx, 31, 0x377B0Cu);
    ctx->pc = 0x3781C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3781C0u, 0x377B04u, 0x377B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377B0Cu;
label_377b0c:
    // 0x377b0c: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x377b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x377b10: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x377b10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x377b14: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x377b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377b18: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x377b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x377b1c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x377B1Cu;
    {
        const bool branch_taken_0x377b1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377b1c) {
            ctx->pc = 0x377B34u;
            goto label_377b34;
        }
    }
    ctx->pc = 0x377B24u;
    // 0x377b24: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377b28: 0xac2002e8  sw          $zero, 0x2E8($at)
    ctx->pc = 0x377b28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A02E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A02E8u, _value); } while (0);
    // 0x377b2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x377B2Cu;
    {
        const bool branch_taken_0x377b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377b2c) {
            ctx->pc = 0x377B3Cu;
            goto label_377b3c;
        }
    }
    ctx->pc = 0x377B34u;
label_377b34:
    // 0x377b34: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377b38: 0xac3002e8  sw          $s0, 0x2E8($at)
    ctx->pc = 0x377b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x9A02E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A02E8u, _value); } while (0);
label_377b3c:
    // 0x377b3c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x377b3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377b44: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x377b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x377b48: 0x3e00008  jr          $ra
    ctx->pc = 0x377B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377B50u;
}
