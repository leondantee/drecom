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

// Function: caseD_0
// Address: 0x12b2e0 - 0x12b324
void caseD_0_0x12b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x12b2e0");
#endif

    switch (ctx->pc) {
        case 0x12b31cu: goto label_12b31c;
        default: break;
    }

    ctx->pc = 0x12b2e0u;

    // 0x12b2e0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b2e4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12b2e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12b2e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12b2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12b2ec: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x12b2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x12b2f0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12b2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12b2f4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12B2F4u;
    {
        const bool branch_taken_0x12b2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12b2f4) {
            ctx->pc = 0x12B324u;
            return;
        }
    }
    ctx->pc = 0x12B2FCu;
    // 0x12b2fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b300: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b304: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12b308: 0x24063c05  addiu       $a2, $zero, 0x3C05
    ctx->pc = 0x12b308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15365));
    // 0x12b30c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b310: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12b314: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12B314u;
    SET_GPR_U32(ctx, 31, 0x12B31Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B314u, 0x12B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B31Cu;
label_12b31c:
    // 0x12b31c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12B31Cu;
    {
        const bool branch_taken_0x12b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b31c) {
            ctx->pc = 0x12B344u;
            return;
        }
    }
    ctx->pc = 0x12B324u;
}
