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

// Function: Cockpit_init
// Address: 0x328e50 - 0x328f58
void Cockpit_init_0x328e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cockpit_init_0x328e50");
#endif

    switch (ctx->pc) {
        case 0x328e8cu: goto label_328e8c;
        case 0x328ef0u: goto label_328ef0;
        case 0x328f08u: goto label_328f08;
        case 0x328f20u: goto label_328f20;
        case 0x328f38u: goto label_328f38;
        default: break;
    }

    ctx->pc = 0x328e50u;

    // 0x328e50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x328e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x328e54: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x328e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x328e58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x328e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x328e5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x328e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x328e60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x328e64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328e68: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x328e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x328e6c: 0x2450c2f0  addiu       $s0, $v0, -0x3D10
    ctx->pc = 0x328e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951664));
    // 0x328e70: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x328e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x328e74: 0x2452dbc0  addiu       $s2, $v0, -0x2440
    ctx->pc = 0x328e74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x328e78: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x328e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x328e7c: 0x24536150  addiu       $s3, $v0, 0x6150
    ctx->pc = 0x328e7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x328e80: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x328e80u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x328e84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x328E84u;
    {
        const bool branch_taken_0x328e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328e84) {
            ctx->pc = 0x328EA0u;
            goto label_328ea0;
        }
    }
    ctx->pc = 0x328E8Cu;
label_328e8c:
    // 0x328e8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x328e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x328e90: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x328e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x328e94: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x328e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x328e98: 0xac432834  sw          $v1, 0x2834($v0)
    ctx->pc = 0x328e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10292), GPR_U32(ctx, 3));
    // 0x328e9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x328e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_328ea0:
    // 0x328ea0: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x328ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x328ea4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x328EA4u;
    {
        const bool branch_taken_0x328ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328ea4) {
            ctx->pc = 0x328E8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328e8c;
        }
    }
    ctx->pc = 0x328EACu;
    // 0x328eac: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x328eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x328eb0: 0x2442ec10  addiu       $v0, $v0, -0x13F0
    ctx->pc = 0x328eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962192));
    // 0x328eb4: 0xae0228b4  sw          $v0, 0x28B4($s0)
    ctx->pc = 0x328eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10420), GPR_U32(ctx, 2));
    // 0x328eb8: 0x8e0328b4  lw          $v1, 0x28B4($s0)
    ctx->pc = 0x328eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10420)));
    // 0x328ebc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x328ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x328ec0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x328ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x328ec4: 0xae022834  sw          $v0, 0x2834($s0)
    ctx->pc = 0x328ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10292), GPR_U32(ctx, 2));
    // 0x328ec8: 0x24021500  addiu       $v0, $zero, 0x1500
    ctx->pc = 0x328ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5376));
    // 0x328ecc: 0xa6022838  sh          $v0, 0x2838($s0)
    ctx->pc = 0x328eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10296), (uint16_t)GPR_U32(ctx, 2));
    // 0x328ed0: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x328ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x328ed4: 0xa602283a  sh          $v0, 0x283A($s0)
    ctx->pc = 0x328ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10298), (uint16_t)GPR_U32(ctx, 2));
    // 0x328ed8: 0x24040091  addiu       $a0, $zero, 0x91
    ctx->pc = 0x328ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x328edc: 0x26052834  addiu       $a1, $s0, 0x2834
    ctx->pc = 0x328edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10292));
    // 0x328ee0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x328ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x328ee4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x328ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328ee8: 0xc0cb930  jal         func_32E4C0
    ctx->pc = 0x328EE8u;
    SET_GPR_U32(ctx, 31, 0x328EF0u);
    ctx->pc = 0x32E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E4C0u, 0x328EE8u, 0x328EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328EF0u;
label_328ef0:
    // 0x328ef0: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x328ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x328ef4: 0x26052834  addiu       $a1, $s0, 0x2834
    ctx->pc = 0x328ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10292));
    // 0x328ef8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x328ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x328efc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x328efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328f00: 0xc0cb930  jal         func_32E4C0
    ctx->pc = 0x328F00u;
    SET_GPR_U32(ctx, 31, 0x328F08u);
    ctx->pc = 0x32E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E4C0u, 0x328F00u, 0x328F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F08u;
label_328f08:
    // 0x328f08: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x328f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x328f0c: 0x26052834  addiu       $a1, $s0, 0x2834
    ctx->pc = 0x328f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10292));
    // 0x328f10: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x328f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x328f14: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x328f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328f18: 0xc0cb930  jal         func_32E4C0
    ctx->pc = 0x328F18u;
    SET_GPR_U32(ctx, 31, 0x328F20u);
    ctx->pc = 0x32E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E4C0u, 0x328F18u, 0x328F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F20u;
label_328f20:
    // 0x328f20: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x328f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x328f24: 0x26052834  addiu       $a1, $s0, 0x2834
    ctx->pc = 0x328f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10292));
    // 0x328f28: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x328f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x328f2c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x328f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328f30: 0xc0cb930  jal         func_32E4C0
    ctx->pc = 0x328F30u;
    SET_GPR_U32(ctx, 31, 0x328F38u);
    ctx->pc = 0x32E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E4C0u, 0x328F30u, 0x328F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F38u;
label_328f38:
    // 0x328f38: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x328f38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x328f3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x328f3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328f40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x328f40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328f4c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x328f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x328f50: 0x3e00008  jr          $ra
    ctx->pc = 0x328F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328F58u;
}
