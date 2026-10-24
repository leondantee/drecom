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

// Function: entry_0013bbe0
// Address: 0x13bbe0 - 0x13bc18
void entry_0013bbe0_0x13bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bbe0_0x13bbe0");
#endif

    ctx->pc = 0x13bbe0u;

    // 0x13bbe0: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x13bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bbe4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x13bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x13bbe8: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x13bbec: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x13bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bbf0: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x13bbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13bbf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bbf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bbf8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x13bbf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13bbfc: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BBFCu;
    {
        const bool branch_taken_0x13bbfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bbfc) {
            ctx->pc = 0x13BC40u;
            return;
        }
    }
    ctx->pc = 0x13BC04u;
    // 0x13bc04: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x13bc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13bc08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bc08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bc0c: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x13bc10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13BC10u;
    {
        const bool branch_taken_0x13bc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc10) {
            ctx->pc = 0x13BC40u;
            return;
        }
    }
    ctx->pc = 0x13BC18u;
}
