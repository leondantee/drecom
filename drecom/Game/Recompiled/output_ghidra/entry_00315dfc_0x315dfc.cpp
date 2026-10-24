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

// Function: entry_00315dfc
// Address: 0x315dfc - 0x315e40
void entry_00315dfc_0x315dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00315dfc_0x315dfc");
#endif

    ctx->pc = 0x315dfcu;

    // 0x315dfc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x315dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x315e00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315e04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315e08: 0x8c64128c  lw          $a0, 0x128C($v1)
    ctx->pc = 0x315e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x315e0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x315e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315e10: 0x108300ee  beq         $a0, $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x315E10u;
    {
        const bool branch_taken_0x315e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x315e10) {
            ctx->pc = 0x3161CCu;
            return;
        }
    }
    ctx->pc = 0x315E18u;
    // 0x315e18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x315e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x315e1c: 0x1083008a  beq         $a0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x315E1Cu;
    {
        const bool branch_taken_0x315e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x315e1c) {
            ctx->pc = 0x316048u;
            return;
        }
    }
    ctx->pc = 0x315E24u;
    // 0x315e24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x315e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315e28: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x315E28u;
    {
        const bool branch_taken_0x315e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x315e28) {
            ctx->pc = 0x315EF0u;
            return;
        }
    }
    ctx->pc = 0x315E30u;
    // 0x315e30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x315E30u;
    {
        const bool branch_taken_0x315e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x315e30) {
            ctx->pc = 0x315E40u;
            return;
        }
    }
    ctx->pc = 0x315E38u;
    // 0x315e38: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x315E38u;
    {
        const bool branch_taken_0x315e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315e38) {
            ctx->pc = 0x3161E0u;
            return;
        }
    }
    ctx->pc = 0x315E40u;
}
