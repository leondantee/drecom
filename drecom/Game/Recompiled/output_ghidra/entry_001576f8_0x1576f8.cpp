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

// Function: entry_001576f8
// Address: 0x1576f8 - 0x157738
void entry_001576f8_0x1576f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001576f8_0x1576f8");
#endif

    ctx->pc = 0x1576f8u;

    // 0x1576f8: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1576f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1576fc: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x1576FCu;
    {
        const bool branch_taken_0x1576fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1576fc) {
            ctx->pc = 0x157598u;
            return;
        }
    }
    ctx->pc = 0x157704u;
    // 0x157704: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157708: 0x90224f12  lbu         $v0, 0x4F12($at)
    ctx->pc = 0x157708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F4F12u));
    // 0x15770c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15770cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x157710: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x157710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157714: 0x10620117  beq         $v1, $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x157714u;
    {
        const bool branch_taken_0x157714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157714) {
            ctx->pc = 0x157B74u;
            return;
        }
    }
    ctx->pc = 0x15771Cu;
    // 0x15771c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157720: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x157720u;
    {
        const bool branch_taken_0x157720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157720) {
            ctx->pc = 0x15790Cu;
            return;
        }
    }
    ctx->pc = 0x157728u;
    // 0x157728: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x157728u;
    {
        const bool branch_taken_0x157728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157728) {
            ctx->pc = 0x157738u;
            return;
        }
    }
    ctx->pc = 0x157730u;
    // 0x157730: 0x10000273  b           . + 4 + (0x273 << 2)
    ctx->pc = 0x157730u;
    {
        const bool branch_taken_0x157730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157730) {
            ctx->pc = 0x158100u;
            return;
        }
    }
    ctx->pc = 0x157738u;
}
