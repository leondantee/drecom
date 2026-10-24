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

// Function: entry_00213fec
// Address: 0x213fec - 0x214000
void entry_00213fec_0x213fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213fec_0x213fec");
#endif

    ctx->pc = 0x213fecu;

    // 0x213fec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x213fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x213ff0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x213FF0u;
    {
        const bool branch_taken_0x213ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213ff0) {
            ctx->pc = 0x213FE0u;
            return;
        }
    }
    ctx->pc = 0x213FF8u;
    // 0x213ff8: 0x42000038  ei
    ctx->pc = 0x213ff8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x213ffc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x213ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214000u;
}
