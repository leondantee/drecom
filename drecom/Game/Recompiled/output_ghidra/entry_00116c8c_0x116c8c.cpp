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

// Function: entry_00116c8c
// Address: 0x116c8c - 0x116cb8
void entry_00116c8c_0x116c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116c8c_0x116c8c");
#endif

    ctx->pc = 0x116c8cu;

    // 0x116c8c: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x116C8Cu;
    {
        const bool branch_taken_0x116c8c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x116c8c) {
            ctx->pc = 0x116CB8u;
            return;
        }
    }
    ctx->pc = 0x116C94u;
    // 0x116c94: 0x1600001f  bnez        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x116C94u;
    {
        const bool branch_taken_0x116c94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x116C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C94u;
        // 0x116c98: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c94) {
            ctx->pc = 0x116D14u;
            return;
        }
    }
    ctx->pc = 0x116C9Cu;
    // 0x116c9c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x116C9Cu;
    {
        const bool branch_taken_0x116c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x116c9c) {
            ctx->pc = 0x116D14u;
            return;
        }
    }
    ctx->pc = 0x116CA4u;
    // 0x116ca4: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x116ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x116ca8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x116ca8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x116cac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x116cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x116cb0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x116CB0u;
    {
        const bool branch_taken_0x116cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116cb0) {
            ctx->pc = 0x116D14u;
            return;
        }
    }
    ctx->pc = 0x116CB8u;
}
