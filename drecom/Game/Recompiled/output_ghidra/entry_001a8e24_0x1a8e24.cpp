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

// Function: entry_001a8e24
// Address: 0x1a8e24 - 0x1a8ec8
void entry_001a8e24_0x1a8e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8e24_0x1a8e24");
#endif

    switch (ctx->pc) {
        case 0x1a8e88u: goto label_1a8e88;
        default: break;
    }

    ctx->pc = 0x1a8e24u;

    // 0x1a8e24: 0x86860308  lh          $a2, 0x308($s4)
    ctx->pc = 0x1a8e24u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 776)));
    // 0x1a8e28: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x1a8e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1a8e2c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1a8e2cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1a8e30: 0x92840306  lbu         $a0, 0x306($s4)
    ctx->pc = 0x1a8e30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 774)));
    // 0x1a8e34: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1a8e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a8e38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8e3c: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x1a8e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1a8e40: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x1a8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1a8e44: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a8e48: 0xac830070  sw          $v1, 0x70($a0)
    ctx->pc = 0x1a8e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
    // 0x1a8e4c: 0x93a300a0  lbu         $v1, 0xA0($sp)
    ctx->pc = 0x1a8e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a8e50: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A8E50u;
    {
        const bool branch_taken_0x1a8e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8e50) {
            ctx->pc = 0x1A8EE4u;
            return;
        }
    }
    ctx->pc = 0x1A8E58u;
    // 0x1a8e58: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1a8e58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8e5c: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1a8e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a8e60: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1a8e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1a8e64: 0x34630808  ori         $v1, $v1, 0x808
    ctx->pc = 0x1a8e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2056);
    // 0x1a8e68: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a8e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8e6c: 0x3c031c08  lui         $v1, 0x1C08
    ctx->pc = 0x1a8e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7176 << 16));
    // 0x1a8e70: 0x34632b13  ori         $v1, $v1, 0x2B13
    ctx->pc = 0x1a8e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11027);
    // 0x1a8e74: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a8e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a8e78: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1a8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1a8e7c: 0x2465f140  addiu       $a1, $v1, -0xEC0
    ctx->pc = 0x1a8e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x1a8e80: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A8E80u;
    SET_GPR_U32(ctx, 31, 0x1A8E88u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A8E80u, 0x1A8E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E88u;
label_1a8e88:
    // 0x1a8e88: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a8e88u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a8e8c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a8e90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8e94: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1a8e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x1a8e98: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x1a8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1a8e9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8ea0: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1a8ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1a8ea4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1a8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a8ea8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8eac: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1a8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x1a8eb0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1a8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a8eb4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8EB4u;
    {
        const bool branch_taken_0x1a8eb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a8eb4) {
            ctx->pc = 0x1A8EC8u;
            return;
        }
    }
    ctx->pc = 0x1A8EBCu;
    // 0x1a8ebc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a8ebcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8EC0u;
    {
        const bool branch_taken_0x1a8ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ec0) {
            ctx->pc = 0x1A8ECCu;
            return;
        }
    }
    ctx->pc = 0x1A8EC8u;
}
