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

// Function: entry_00203dcc
// Address: 0x203dcc - 0x203e10
void entry_00203dcc_0x203dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203dcc_0x203dcc");
#endif

    switch (ctx->pc) {
        case 0x203e08u: goto label_203e08;
        default: break;
    }

    ctx->pc = 0x203dccu;

    // 0x203dcc: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x203dccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x203dd0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x203dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x203dd4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x203dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x203dd8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x203DD8u;
    {
        const bool branch_taken_0x203dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203dd8) {
            ctx->pc = 0x203E24u;
            return;
        }
    }
    ctx->pc = 0x203DE0u;
    // 0x203de0: 0x93a20028  lbu         $v0, 0x28($sp)
    ctx->pc = 0x203de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x203de4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x203de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x203de8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x203de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x203dec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x203DECu;
    {
        const bool branch_taken_0x203dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203dec) {
            ctx->pc = 0x203E10u;
            return;
        }
    }
    ctx->pc = 0x203DF4u;
    // 0x203df4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x203df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203df8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x203df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x203dfc: 0x344501c7  ori         $a1, $v0, 0x1C7
    ctx->pc = 0x203dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x203e00: 0xc05a400  jal         func_169000
    ctx->pc = 0x203E00u;
    SET_GPR_U32(ctx, 31, 0x203E08u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x203E00u, 0x203E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203E08u;
label_203e08:
    // 0x203e08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x203E08u;
    {
        const bool branch_taken_0x203e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203e08) {
            ctx->pc = 0x203E24u;
            return;
        }
    }
    ctx->pc = 0x203E10u;
}
