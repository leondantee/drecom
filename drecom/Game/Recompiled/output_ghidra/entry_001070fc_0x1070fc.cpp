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

// Function: entry_001070fc
// Address: 0x1070fc - 0x10712c
void entry_001070fc_0x1070fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001070fc_0x1070fc");
#endif

    switch (ctx->pc) {
        case 0x107114u: goto label_107114;
        default: break;
    }

    ctx->pc = 0x1070fcu;

    // 0x1070fc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1070fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x107100: 0x26043a70  addiu       $a0, $s0, 0x3A70
    ctx->pc = 0x107100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14960));
    // 0x107104: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x107104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x107108: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x107108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10710c: 0xc041b70  jal         func_106DC0
    ctx->pc = 0x10710Cu;
    SET_GPR_U32(ctx, 31, 0x107114u);
    ctx->pc = 0x107110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10710Cu;
    // 0x107110: 0xae833c24  sw          $v1, 0x3C24($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 15396), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DC0u, 0x10710Cu, 0x107114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107114u;
label_107114:
    // 0x107114: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x107114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x107118: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107118u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10711c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x10711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x107120: 0xae63449c  sw          $v1, 0x449C($s3)
    ctx->pc = 0x107120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 17564), GPR_U32(ctx, 3));
    // 0x107124: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107124u;
    {
        const bool branch_taken_0x107124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107124u;
        // 0x107128: 0xae424498  sw          $v0, 0x4498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107124) {
            ctx->pc = 0x107130u;
            return;
        }
    }
    ctx->pc = 0x10712Cu;
}
