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

// Function: entry_0011dfd8
// Address: 0x11dfd8 - 0x11dff8
void entry_0011dfd8_0x11dfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dfd8_0x11dfd8");
#endif

    ctx->pc = 0x11dfd8u;

    // 0x11dfd8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11dfd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11dfdc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DFDCu;
    {
        const bool branch_taken_0x11dfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFDCu;
        // 0x11dfe0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfdc) {
            ctx->pc = 0x11DFF8u;
            return;
        }
    }
    ctx->pc = 0x11DFE4u;
    // 0x11dfe4: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x11dfe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11dfe8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11dfec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11DFECu;
    {
        const bool branch_taken_0x11dfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFECu;
        // 0x11dff0: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfec) {
            ctx->pc = 0x11E010u;
            return;
        }
    }
    ctx->pc = 0x11DFF4u;
    // 0x11dff4: 0x0  nop
    ctx->pc = 0x11dff4u;
    // NOP
    ctx->pc = 0x11dff8u;
}
