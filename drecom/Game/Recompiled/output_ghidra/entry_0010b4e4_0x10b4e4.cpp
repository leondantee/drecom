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

// Function: entry_0010b4e4
// Address: 0x10b4e4 - 0x10b55c
void entry_0010b4e4_0x10b4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b4e4_0x10b4e4");
#endif

    switch (ctx->pc) {
        case 0x10b508u: goto label_10b508;
        default: break;
    }

    ctx->pc = 0x10b4e4u;

    // 0x10b4e4: 0x112502  srl         $a0, $s1, 20
    ctx->pc = 0x10b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 20));
    // 0x10b4e8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10b4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10b4ec: 0x1114c2  srl         $v0, $s1, 19
    ctx->pc = 0x10b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 19));
    // 0x10b4f0: 0xae043d44  sw          $a0, 0x3D44($s0)
    ctx->pc = 0x10b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15684), GPR_U32(ctx, 4));
    // 0x10b4f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10b4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10b4f8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10b4fc: 0xac623d48  sw          $v0, 0x3D48($v1)
    ctx->pc = 0x10b4fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383D48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D48u, _value); } while (0);
    // 0x10b500: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B500u;
    SET_GPR_U32(ctx, 31, 0x10B508u);
    ctx->pc = 0x10B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B500u;
    // 0x10b504: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B500u, 0x10B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B508u;
label_10b508:
    // 0x10b508: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10b508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b50c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10b50cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x10b510: 0x3222001f  andi        $v0, $s1, 0x1F
    ctx->pc = 0x10b510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x10b514: 0x111942  srl         $v1, $s1, 5
    ctx->pc = 0x10b514u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x10b518: 0x1121c2  srl         $a0, $s1, 7
    ctx->pc = 0x10b518u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
    // 0x10b51c: 0x8e083d44  lw          $t0, 0x3D44($s0)
    ctx->pc = 0x10b51cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15684)));
    // 0x10b520: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x10b520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x10b524: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x10b524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x10b528: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10b528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10b52c: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x10b52cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x10b530: 0xacc23d58  sw          $v0, 0x3D58($a2)
    ctx->pc = 0x10b530u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 15704), GPR_U32(ctx, 2));
    // 0x10b534: 0x118202  srl         $s0, $s1, 8
    ctx->pc = 0x10b534u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x10b538: 0xaca33d54  sw          $v1, 0x3D54($a1)
    ctx->pc = 0x10b538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 15700), GPR_U32(ctx, 3));
    // 0x10b53c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x10b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x10b540: 0x11020006  beq         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B540u;
    {
        const bool branch_taken_0x10b540 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B540u;
        // 0x10b544: 0xace43d50  sw          $a0, 0x3D50($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 15696), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b540) {
            ctx->pc = 0x10B55Cu;
            return;
        }
    }
    ctx->pc = 0x10B548u;
    // 0x10b548: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x10b548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x10b54c: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B54Cu;
    {
        const bool branch_taken_0x10b54c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B54Cu;
        // 0x10b550: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b54c) {
            ctx->pc = 0x10B55Cu;
            return;
        }
    }
    ctx->pc = 0x10B554u;
    // 0x10b554: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x10B554u;
    SET_GPR_U32(ctx, 31, 0x10B55Cu);
    ctx->pc = 0x10B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B554u;
    // 0x10b558: 0x2484c9b8  addiu       $a0, $a0, -0x3648 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x10B554u, 0x10B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B55Cu;
}
