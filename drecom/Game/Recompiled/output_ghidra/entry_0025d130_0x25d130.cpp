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

// Function: entry_0025d130
// Address: 0x25d130 - 0x25d164
void entry_0025d130_0x25d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d130_0x25d130");
#endif

    ctx->pc = 0x25d130u;

    // 0x25d130: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25d130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25d134: 0x94640050  lhu         $a0, 0x50($v1)
    ctx->pc = 0x25d134u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25d138: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x25d138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x25d13c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x25d13cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25d140: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x25D140u;
    {
        const bool branch_taken_0x25d140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d140) {
            ctx->pc = 0x25D070u;
            return;
        }
    }
    ctx->pc = 0x25D148u;
    // 0x25d148: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25d148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25d14c: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x25d14cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x25d150: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D150u;
    {
        const bool branch_taken_0x25d150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d150) {
            ctx->pc = 0x25D164u;
            return;
        }
    }
    ctx->pc = 0x25D158u;
    // 0x25d158: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25d158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25d15c: 0xc098970  jal         func_2625C0
    ctx->pc = 0x25D15Cu;
    SET_GPR_U32(ctx, 31, 0x25D164u);
    ctx->pc = 0x2625C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625C0u, 0x25D15Cu, 0x25D164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D164u;
}
