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

// Function: entry_002953a0
// Address: 0x2953a0 - 0x2953d8
void entry_002953a0_0x2953a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002953a0_0x2953a0");
#endif

    ctx->pc = 0x2953a0u;

    // 0x2953a0: 0x8fa301ac  lw          $v1, 0x1AC($sp)
    ctx->pc = 0x2953a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2953a4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2953a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2953a8: 0x8c226880  lw          $v0, 0x6880($at)
    ctx->pc = 0x2953a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x396880u));
    // 0x2953ac: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2953acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2953b0: 0x1440fecd  bnez        $v0, . + 4 + (-0x133 << 2)
    ctx->pc = 0x2953B0u;
    {
        const bool branch_taken_0x2953b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2953b0) {
            ctx->pc = 0x294EE8u;
            return;
        }
    }
    ctx->pc = 0x2953B8u;
    // 0x2953b8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2953b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2953bc: 0x8c226570  lw          $v0, 0x6570($at)
    ctx->pc = 0x2953bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x396570u));
    // 0x2953c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2953C0u;
    {
        const bool branch_taken_0x2953c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2953c0) {
            ctx->pc = 0x2953D8u;
            return;
        }
    }
    ctx->pc = 0x2953C8u;
    // 0x2953c8: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x2953c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2953cc: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x2953ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2953d0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2953D0u;
    SET_GPR_U32(ctx, 31, 0x2953D8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2953D0u, 0x2953D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953D8u;
}
