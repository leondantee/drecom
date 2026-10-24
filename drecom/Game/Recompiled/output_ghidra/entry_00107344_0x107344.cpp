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

// Function: entry_00107344
// Address: 0x107344 - 0x10736c
void entry_00107344_0x107344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107344_0x107344");
#endif

    switch (ctx->pc) {
        case 0x107360u: goto label_107360;
        default: break;
    }

    ctx->pc = 0x107344u;

    // 0x107344: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x107344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x107348: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x107348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10734c: 0x26843a70  addiu       $a0, $s4, 0x3A70
    ctx->pc = 0x10734cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 14960));
    // 0x107350: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x107350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x107354: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x107354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107358: 0xc041b70  jal         func_106DC0
    ctx->pc = 0x107358u;
    SET_GPR_U32(ctx, 31, 0x107360u);
    ctx->pc = 0x10735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107358u;
    // 0x10735c: 0xae633c24  sw          $v1, 0x3C24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 15396), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DC0u, 0x107358u, 0x107360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107360u;
label_107360:
    // 0x107360: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x107360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x107364: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107368: 0xae424498  sw          $v0, 0x4498($s2)
    ctx->pc = 0x107368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17560), GPR_U32(ctx, 2));
    ctx->pc = 0x10736cu;
}
