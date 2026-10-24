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

// Function: entry_001a9ce4
// Address: 0x1a9ce4 - 0x1a9d54
void entry_001a9ce4_0x1a9ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9ce4_0x1a9ce4");
#endif

    switch (ctx->pc) {
        case 0x1a9d04u: goto label_1a9d04;
        default: break;
    }

    ctx->pc = 0x1a9ce4u;

    // 0x1a9ce4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9ce8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9cec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a9cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a9cf0: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x1a9cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1a9cf4: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x1a9cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1a9cf8: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x1a9cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x1a9cfc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1A9CFCu;
    SET_GPR_U32(ctx, 31, 0x1A9D04u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1A9CFCu, 0x1A9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D04u;
label_1a9d04:
    // 0x1a9d04: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1a9d04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a9d08: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1A9D08u;
    {
        const bool branch_taken_0x1a9d08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9d08) {
            ctx->pc = 0x1A9E18u;
            return;
        }
    }
    ctx->pc = 0x1A9D10u;
    // 0x1a9d10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d14: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a9d14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9d18: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1a9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a9d1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a9d20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a9d24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d28: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a9d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9d2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a9d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a9d30: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1a9d30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a9d34: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9D34u;
    {
        const bool branch_taken_0x1a9d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9d34) {
            ctx->pc = 0x1A9D54u;
            return;
        }
    }
    ctx->pc = 0x1A9D3Cu;
    // 0x1a9d3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a9d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d40: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x1a9d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1a9d44: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1a9d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1a9d48: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x1a9d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    // 0x1a9d4c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1A9D4Cu;
    {
        const bool branch_taken_0x1a9d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9d4c) {
            ctx->pc = 0x1A9E18u;
            return;
        }
    }
    ctx->pc = 0x1A9D54u;
}
