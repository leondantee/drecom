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

// Function: entry_001656e8
// Address: 0x1656e8 - 0x165724
void entry_001656e8_0x1656e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001656e8_0x1656e8");
#endif

    ctx->pc = 0x1656e8u;

    // 0x1656e8: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1656e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1656ec: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1656ECu;
    {
        const bool branch_taken_0x1656ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1656ec) {
            ctx->pc = 0x165668u;
            return;
        }
    }
    ctx->pc = 0x1656F4u;
    // 0x1656f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1656f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1656f8: 0xae020238  sw          $v0, 0x238($s0)
    ctx->pc = 0x1656f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
    // 0x1656fc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1656fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x165700: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x165700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x165704: 0xae02023c  sw          $v0, 0x23C($s0)
    ctx->pc = 0x165704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
    // 0x165708: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x165708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x16570c: 0xfe020240  sd          $v0, 0x240($s0)
    ctx->pc = 0x16570cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 576), GPR_U64(ctx, 2));
    // 0x165710: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x165710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x165714: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x165714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x165718: 0x26050238  addiu       $a1, $s0, 0x238
    ctx->pc = 0x165718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
    // 0x16571c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x16571Cu;
    SET_GPR_U32(ctx, 31, 0x165724u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x16571Cu, 0x165724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165724u;
}
