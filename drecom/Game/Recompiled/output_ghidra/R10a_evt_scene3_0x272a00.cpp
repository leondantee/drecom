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

// Function: R10a_evt_scene3
// Address: 0x272a00 - 0x272ab0
void R10a_evt_scene3_0x272a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_evt_scene3_0x272a00");
#endif

    switch (ctx->pc) {
        case 0x272a4cu: goto label_272a4c;
        case 0x272a60u: goto label_272a60;
        case 0x272a68u: goto label_272a68;
        case 0x272a70u: goto label_272a70;
        case 0x272a7cu: goto label_272a7c;
        case 0x272a98u: goto label_272a98;
        default: break;
    }

    ctx->pc = 0x272a00u;

    // 0x272a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x272a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x272a04: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x272a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x272a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x272a10: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x272a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x272a14: 0x2450fe00  addiu       $s0, $v0, -0x200
    ctx->pc = 0x272a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x272a18: 0xae001bf0  sw          $zero, 0x1BF0($s0)
    ctx->pc = 0x272a18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6219F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6219F0u, _value); } while (0);
    // 0x272a1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x272a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x272a20: 0x8c31bb4c  lw          $s1, -0x44B4($at)
    ctx->pc = 0x272a20u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x272a24: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x272a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x272a28: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x272a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x272a2c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x272a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x272a30: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x272a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x272a34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x272a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x272a38: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x272a38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x272a3c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x272a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x272a40: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x272a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x272a44: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272A44u;
    SET_GPR_U32(ctx, 31, 0x272A4Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272A44u, 0x272A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A4Cu;
label_272a4c:
    // 0x272a4c: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x272a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x272a50: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x272a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x272a54: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x272a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x272a58: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272A58u;
    SET_GPR_U32(ctx, 31, 0x272A60u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272A58u, 0x272A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A60u;
label_272a60:
    // 0x272a60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x272A60u;
    {
        const bool branch_taken_0x272a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272a60) {
            ctx->pc = 0x272A80u;
            goto label_272a80;
        }
    }
    ctx->pc = 0x272A68u;
label_272a68:
    // 0x272a68: 0xc09cde0  jal         func_273780
    ctx->pc = 0x272A68u;
    SET_GPR_U32(ctx, 31, 0x272A70u);
    ctx->pc = 0x273780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273780u, 0x272A68u, 0x272A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A70u;
label_272a70:
    // 0x272a70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272a74: 0xc084964  jal         func_212590
    ctx->pc = 0x272A74u;
    SET_GPR_U32(ctx, 31, 0x272A7Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x272A74u, 0x272A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A7Cu;
label_272a7c:
    // 0x272a7c: 0x0  nop
    ctx->pc = 0x272a7cu;
    // NOP
label_272a80:
    // 0x272a80: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272a84: 0x2c420046  sltiu       $v0, $v0, 0x46
    ctx->pc = 0x272a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x272a88: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x272A88u;
    {
        const bool branch_taken_0x272a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272a88) {
            ctx->pc = 0x272A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272a68;
        }
    }
    ctx->pc = 0x272A90u;
    // 0x272a90: 0xc084934  jal         func_2124D0
    ctx->pc = 0x272A90u;
    SET_GPR_U32(ctx, 31, 0x272A98u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x272A90u, 0x272A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A98u;
label_272a98:
    // 0x272a98: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x272a98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272aa4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x272aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x272aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x272AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272AB0u;
}
