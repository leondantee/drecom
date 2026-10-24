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

// Function: entry_00120d60
// Address: 0x120d60 - 0x120d88
void entry_00120d60_0x120d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120d60_0x120d60");
#endif

    switch (ctx->pc) {
        case 0x120d84u: goto label_120d84;
        default: break;
    }

    ctx->pc = 0x120d60u;

    // 0x120d60: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120d64: 0x906511f0  lbu         $a1, 0x11F0($v1)
    ctx->pc = 0x120d64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4592)));
    // 0x120d68: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x120d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x120d6c: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x120d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x120d70: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x120D70u;
    {
        const bool branch_taken_0x120d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x120d70) {
            ctx->pc = 0x120D88u;
            return;
        }
    }
    ctx->pc = 0x120D78u;
    // 0x120d78: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120d7c: 0xc048130  jal         func_1204C0
    ctx->pc = 0x120D7Cu;
    SET_GPR_U32(ctx, 31, 0x120D84u);
    ctx->pc = 0x1204C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1204C0u, 0x120D7Cu, 0x120D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D84u;
label_120d84:
    // 0x120d84: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x120d84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x120d88u;
}
