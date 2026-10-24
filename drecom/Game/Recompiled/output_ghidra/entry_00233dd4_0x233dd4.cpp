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

// Function: entry_00233dd4
// Address: 0x233dd4 - 0x233e08
void entry_00233dd4_0x233dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233dd4_0x233dd4");
#endif

    ctx->pc = 0x233dd4u;

    // 0x233dd4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x233dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233dd8: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x233dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x233ddc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x233ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x233de0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x233de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233de4: 0x10830247  beq         $a0, $v1, . + 4 + (0x247 << 2)
    ctx->pc = 0x233DE4u;
    {
        const bool branch_taken_0x233de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x233de4) {
            ctx->pc = 0x234704u;
            return;
        }
    }
    ctx->pc = 0x233DECu;
    // 0x233dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233df0: 0x10830088  beq         $a0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x233DF0u;
    {
        const bool branch_taken_0x233df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x233df0) {
            ctx->pc = 0x234014u;
            return;
        }
    }
    ctx->pc = 0x233DF8u;
    // 0x233df8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233DF8u;
    {
        const bool branch_taken_0x233df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233df8) {
            ctx->pc = 0x233E08u;
            return;
        }
    }
    ctx->pc = 0x233E00u;
    // 0x233e00: 0x10000337  b           . + 4 + (0x337 << 2)
    ctx->pc = 0x233E00u;
    {
        const bool branch_taken_0x233e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233e00) {
            ctx->pc = 0x234AE0u;
            return;
        }
    }
    ctx->pc = 0x233E08u;
}
