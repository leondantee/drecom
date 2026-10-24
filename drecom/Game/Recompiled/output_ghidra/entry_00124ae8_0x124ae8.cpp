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

// Function: entry_00124ae8
// Address: 0x124ae8 - 0x124b28
void entry_00124ae8_0x124ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124ae8_0x124ae8");
#endif

    switch (ctx->pc) {
        case 0x124b20u: goto label_124b20;
        default: break;
    }

    ctx->pc = 0x124ae8u;

    // 0x124ae8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124aec: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x124aecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x124af0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x124af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x124af4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x124af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x124af8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x124AF8u;
    {
        const bool branch_taken_0x124af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124af8) {
            ctx->pc = 0x124B28u;
            return;
        }
    }
    ctx->pc = 0x124B00u;
    // 0x124b00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b08: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x124b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124b0c: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x124b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x124b10: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x124b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124b14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124b18: 0xc0965d0  jal         func_259740
    ctx->pc = 0x124B18u;
    SET_GPR_U32(ctx, 31, 0x124B20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x124B18u, 0x124B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B20u;
label_124b20:
    // 0x124b20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x124B20u;
    {
        const bool branch_taken_0x124b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124b20) {
            ctx->pc = 0x124B48u;
            return;
        }
    }
    ctx->pc = 0x124B28u;
}
