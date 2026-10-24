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

// Function: Event_exec_prog
// Address: 0x377a00 - 0x377ab4
void Event_exec_prog_0x377a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_exec_prog_0x377a00");
#endif

    switch (ctx->pc) {
        case 0x377a6cu: goto label_377a6c;
        default: break;
    }

    ctx->pc = 0x377a00u;

    // 0x377a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x377a04: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x377a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x377a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377a10: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x377a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x377a14: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x377a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x377a18: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377a1c: 0x8c23032c  lw          $v1, 0x32C($at)
    ctx->pc = 0x377a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A032Cu));
    // 0x377a20: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x377A20u;
    {
        const bool branch_taken_0x377a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377a20) {
            ctx->pc = 0x377A9Cu;
            goto label_377a9c;
        }
    }
    ctx->pc = 0x377A28u;
    // 0x377a28: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377a2c: 0x8c30032c  lw          $s0, 0x32C($at)
    ctx->pc = 0x377a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x9A032Cu));
    // 0x377a30: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x377a30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x377a34: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x377a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377a38: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377a3c: 0x94230394  lhu         $v1, 0x394($at)
    ctx->pc = 0x377a3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x9A0394u));
    // 0x377a40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x377a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377a44: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x377A44u;
    {
        const bool branch_taken_0x377a44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377a44) {
            ctx->pc = 0x377A9Cu;
            goto label_377a9c;
        }
    }
    ctx->pc = 0x377A4Cu;
    // 0x377a4c: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x377a4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x377a50: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x377a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x377a54: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x377a54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x377a58: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x377a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x377a5c: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x377a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x377a60: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x377a60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x377a64: 0xc0a11f4  jal         func_2847D0
    ctx->pc = 0x377A64u;
    SET_GPR_U32(ctx, 31, 0x377A6Cu);
    ctx->pc = 0x2847D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2847D0u, 0x377A64u, 0x377A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377A6Cu;
label_377a6c:
    // 0x377a6c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x377a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x377a70: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x377a70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x377a74: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x377a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377a78: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x377a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x377a7c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x377A7Cu;
    {
        const bool branch_taken_0x377a7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377a7c) {
            ctx->pc = 0x377A94u;
            goto label_377a94;
        }
    }
    ctx->pc = 0x377A84u;
    // 0x377a84: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377a88: 0xac20032c  sw          $zero, 0x32C($at)
    ctx->pc = 0x377a88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A032Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A032Cu, _value); } while (0);
    // 0x377a8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x377A8Cu;
    {
        const bool branch_taken_0x377a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377a8c) {
            ctx->pc = 0x377A9Cu;
            goto label_377a9c;
        }
    }
    ctx->pc = 0x377A94u;
label_377a94:
    // 0x377a94: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377a98: 0xac30032c  sw          $s0, 0x32C($at)
    ctx->pc = 0x377a98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x9A032Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A032Cu, _value); } while (0);
label_377a9c:
    // 0x377a9c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x377a9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377aa8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x377aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x377aac: 0x3e00008  jr          $ra
    ctx->pc = 0x377AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377AB4u;
}
