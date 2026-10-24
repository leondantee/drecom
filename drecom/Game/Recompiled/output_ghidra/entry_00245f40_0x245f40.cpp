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

// Function: entry_00245f40
// Address: 0x245f40 - 0x245f70
void entry_00245f40_0x245f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245f40_0x245f40");
#endif

    ctx->pc = 0x245f40u;

    // 0x245f40: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x245f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245f44: 0x90a709e7  lbu         $a3, 0x9E7($a1)
    ctx->pc = 0x245f44u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x245f48: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x245F48u;
    {
        const bool branch_taken_0x245f48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f48) {
            ctx->pc = 0x245F70u;
            return;
        }
    }
    ctx->pc = 0x245F50u;
    // 0x245f50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245f54: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245f58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x245f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x245f5c: 0x24067821  addiu       $a2, $zero, 0x7821
    ctx->pc = 0x245f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30753));
    // 0x245f60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245f64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x245f68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x245F68u;
    SET_GPR_U32(ctx, 31, 0x245F70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x245F68u, 0x245F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F70u;
}
