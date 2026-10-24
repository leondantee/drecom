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

// Function: entry_00326414
// Address: 0x326414 - 0x32644c
void entry_00326414_0x326414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326414_0x326414");
#endif

    ctx->pc = 0x326414u;

    // 0x326414: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x326414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326418: 0x94630118  lhu         $v1, 0x118($v1)
    ctx->pc = 0x326418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x32641c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32641cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x326420: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x326420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x326424: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x326424u;
    {
        const bool branch_taken_0x326424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326424) {
            ctx->pc = 0x32644Cu;
            return;
        }
    }
    ctx->pc = 0x32642Cu;
    // 0x32642c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x32642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326430: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x326430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326434: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x326434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326438: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x326438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x32643c: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x32643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x326440: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x326440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x326444: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x326444u;
    SET_GPR_U32(ctx, 31, 0x32644Cu);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x326444u, 0x32644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32644Cu;
}
