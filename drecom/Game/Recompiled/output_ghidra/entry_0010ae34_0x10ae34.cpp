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

// Function: entry_0010ae34
// Address: 0x10ae34 - 0x10aea0
void entry_0010ae34_0x10ae34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ae34_0x10ae34");
#endif

    switch (ctx->pc) {
        case 0x10ae50u: goto label_10ae50;
        default: break;
    }

    ctx->pc = 0x10ae34u;

    // 0x10ae34: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10ae34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10ae38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ae3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ae3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ae40: 0x8e223bf4  lw          $v0, 0x3BF4($s1)
    ctx->pc = 0x10ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383BF4u));
    // 0x10ae44: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x10ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x10ae48: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10AE48u;
    SET_GPR_U32(ctx, 31, 0x10AE50u);
    ctx->pc = 0x10AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE48u;
    // 0x10ae4c: 0xac6000d4  sw          $zero, 0xD4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10AE48u, 0x10AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE50u;
label_10ae50:
    // 0x10ae50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ae50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae54: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x10ae54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x10ae58: 0x30a4000f  andi        $a0, $a1, 0xF
    ctx->pc = 0x10ae58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x10ae5c: 0x51902  srl         $v1, $a1, 4
    ctx->pc = 0x10ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x10ae60: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x10ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x10ae64: 0x54502  srl         $t0, $a1, 20
    ctx->pc = 0x10ae64u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 20));
    // 0x10ae68: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10ae68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10ae6c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x10ae6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x10ae70: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10ae74: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x10ae74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x10ae78: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10ae78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x10ae7c: 0xad243d34  sw          $a0, 0x3D34($t1)
    ctx->pc = 0x10ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 15668), GPR_U32(ctx, 4));
    // 0x10ae80: 0xaca33d30  sw          $v1, 0x3D30($a1)
    ctx->pc = 0x10ae80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x383D30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D30u, _value); } while (0);
    // 0x10ae84: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x10ae84u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x10ae88: 0xacc83d20  sw          $t0, 0x3D20($a2)
    ctx->pc = 0x10ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 15648), GPR_U32(ctx, 8));
    // 0x10ae8c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AE8Cu;
    {
        const bool branch_taken_0x10ae8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE8Cu;
        // 0x10ae90: 0xace23d24  sw          $v0, 0x3D24($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 15652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae8c) {
            ctx->pc = 0x10AEA0u;
            return;
        }
    }
    ctx->pc = 0x10AE94u;
    // 0x10ae94: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10ae98: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x10AE98u;
    SET_GPR_U32(ctx, 31, 0x10AEA0u);
    ctx->pc = 0x10AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE98u;
    // 0x10ae9c: 0x2484c978  addiu       $a0, $a0, -0x3688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x10AE98u, 0x10AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEA0u;
}
