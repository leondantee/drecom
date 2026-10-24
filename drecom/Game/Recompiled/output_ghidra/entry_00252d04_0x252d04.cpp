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

// Function: entry_00252d04
// Address: 0x252d04 - 0x252d50
void entry_00252d04_0x252d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252d04_0x252d04");
#endif

    switch (ctx->pc) {
        case 0x252d2cu: goto label_252d2c;
        default: break;
    }

    ctx->pc = 0x252d04u;

    // 0x252d04: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252d08: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x252d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x252d0c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x252d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x252d10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x252d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252d14: 0x146200ac  bne         $v1, $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x252D14u;
    {
        const bool branch_taken_0x252d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x252d14) {
            ctx->pc = 0x252FC8u;
            return;
        }
    }
    ctx->pc = 0x252D1Cu;
    // 0x252d1c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x252d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252d20: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x252d20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x252d24: 0xc094db8  jal         func_2536E0
    ctx->pc = 0x252D24u;
    SET_GPR_U32(ctx, 31, 0x252D2Cu);
    ctx->pc = 0x2536E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536E0u, 0x252D24u, 0x252D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D2Cu;
label_252d2c:
    // 0x252d2c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252D2Cu;
    {
        const bool branch_taken_0x252d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252d2c) {
            ctx->pc = 0x252D50u;
            return;
        }
    }
    ctx->pc = 0x252D34u;
    // 0x252d34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252d38: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252d3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252d40: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252d44: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252d48: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x252D48u;
    {
        const bool branch_taken_0x252d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252d48) {
            ctx->pc = 0x2533CCu;
            return;
        }
    }
    ctx->pc = 0x252D50u;
}
