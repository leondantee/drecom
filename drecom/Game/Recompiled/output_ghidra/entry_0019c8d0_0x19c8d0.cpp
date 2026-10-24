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

// Function: entry_0019c8d0
// Address: 0x19c8d0 - 0x19c928
void entry_0019c8d0_0x19c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c8d0_0x19c8d0");
#endif

    switch (ctx->pc) {
        case 0x19c914u: goto label_19c914;
        default: break;
    }

    ctx->pc = 0x19c8d0u;

    // 0x19c8d0: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x19c8d0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c8d4: 0x92030083  lbu         $v1, 0x83($s0)
    ctx->pc = 0x19c8d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x19c8d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19c8dc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x19c8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x19c8e0: 0x3a9c2  srl         $s5, $v1, 7
    ctx->pc = 0x19c8e0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x19c8e4: 0x92030082  lbu         $v1, 0x82($s0)
    ctx->pc = 0x19c8e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x19c8e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19c8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19c8ec: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19C8ECu;
    {
        const bool branch_taken_0x19c8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c8ec) {
            ctx->pc = 0x19C928u;
            return;
        }
    }
    ctx->pc = 0x19C8F4u;
    // 0x19c8f4: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x19C8F4u;
    {
        const bool branch_taken_0x19c8f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8f4) {
            ctx->pc = 0x19C960u;
            return;
        }
    }
    ctx->pc = 0x19C8FCu;
    // 0x19c8fc: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x19c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x19c900: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x19c900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x19c904: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x19c904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x19c908: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19c908u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19c90c: 0xc0568c4  jal         func_15A310
    ctx->pc = 0x19C90Cu;
    SET_GPR_U32(ctx, 31, 0x19C914u);
    ctx->pc = 0x15A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A310u, 0x19C90Cu, 0x19C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C914u;
label_19c914:
    // 0x19c914: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19C914u;
    {
        const bool branch_taken_0x19c914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c914) {
            ctx->pc = 0x19C960u;
            return;
        }
    }
    ctx->pc = 0x19C91Cu;
    // 0x19c91c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x19c91cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c920: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19C920u;
    {
        const bool branch_taken_0x19c920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c920) {
            ctx->pc = 0x19C960u;
            return;
        }
    }
    ctx->pc = 0x19C928u;
}
