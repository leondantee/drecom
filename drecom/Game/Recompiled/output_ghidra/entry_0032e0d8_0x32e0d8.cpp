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

// Function: entry_0032e0d8
// Address: 0x32e0d8 - 0x32e110
void entry_0032e0d8_0x32e0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e0d8_0x32e0d8");
#endif

    ctx->pc = 0x32e0d8u;

    // 0x32e0d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e0dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32e0e0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32e0e4: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x32e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x32e0e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32e0ec: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x32e0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x32e0f0: 0x92422830  lbu         $v0, 0x2830($s2)
    ctx->pc = 0x32e0f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10288)));
    // 0x32e0f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E0F4u;
    {
        const bool branch_taken_0x32e0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e0f4) {
            ctx->pc = 0x32E110u;
            return;
        }
    }
    ctx->pc = 0x32E0FCu;
    // 0x32e0fc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32e100: 0x24441a14  addiu       $a0, $v0, 0x1A14
    ctx->pc = 0x32e100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32e104: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32e104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32e108: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32E108u;
    SET_GPR_U32(ctx, 31, 0x32E110u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32E108u, 0x32E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E110u;
}
