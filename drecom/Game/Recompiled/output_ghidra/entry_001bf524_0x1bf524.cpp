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

// Function: entry_001bf524
// Address: 0x1bf524 - 0x1bf578
void entry_001bf524_0x1bf524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf524_0x1bf524");
#endif

    switch (ctx->pc) {
        case 0x1bf558u: goto label_1bf558;
        case 0x1bf570u: goto label_1bf570;
        default: break;
    }

    ctx->pc = 0x1bf524u;

    // 0x1bf524: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf528: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1bf528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1bf52c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BF52Cu;
    {
        const bool branch_taken_0x1bf52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf52c) {
            ctx->pc = 0x1BF578u;
            return;
        }
    }
    ctx->pc = 0x1BF534u;
    // 0x1bf534: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x1bf534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1bf538: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf53c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf540: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf544: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1bf544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1bf548: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf54c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf550: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BF550u;
    SET_GPR_U32(ctx, 31, 0x1BF558u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BF550u, 0x1BF558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF558u;
label_1bf558:
    // 0x1bf558: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf55c: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bf55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf560: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1bf560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1bf564: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1bf564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bf568: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BF568u;
    SET_GPR_U32(ctx, 31, 0x1BF570u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BF568u, 0x1BF570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF570u;
label_1bf570:
    // 0x1bf570: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BF570u;
    {
        const bool branch_taken_0x1bf570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf570) {
            ctx->pc = 0x1BF5B4u;
            return;
        }
    }
    ctx->pc = 0x1BF578u;
}
