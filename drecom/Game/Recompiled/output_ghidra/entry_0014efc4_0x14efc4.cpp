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

// Function: entry_0014efc4
// Address: 0x14efc4 - 0x14eff4
void entry_0014efc4_0x14efc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014efc4_0x14efc4");
#endif

    switch (ctx->pc) {
        case 0x14efecu: goto label_14efec;
        default: break;
    }

    ctx->pc = 0x14efc4u;

    // 0x14efc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14efc8: 0x84631416  lh          $v1, 0x1416($v1)
    ctx->pc = 0x14efc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5142)));
    // 0x14efcc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x14efccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x14efd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14efd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14efd4: 0x2863003c  slti        $v1, $v1, 0x3C
    ctx->pc = 0x14efd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x14efd8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14EFD8u;
    {
        const bool branch_taken_0x14efd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14efd8) {
            ctx->pc = 0x14F01Cu;
            return;
        }
    }
    ctx->pc = 0x14EFE0u;
    // 0x14efe0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14efe4: 0xc0bd128  jal         func_2F44A0
    ctx->pc = 0x14EFE4u;
    SET_GPR_U32(ctx, 31, 0x14EFECu);
    ctx->pc = 0x2F44A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F44A0u, 0x14EFE4u, 0x14EFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EFECu;
label_14efec:
    // 0x14efec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14EFECu;
    {
        const bool branch_taken_0x14efec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14efec) {
            ctx->pc = 0x14F01Cu;
            return;
        }
    }
    ctx->pc = 0x14EFF4u;
}
