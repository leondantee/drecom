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

// Function: entry_00198dec
// Address: 0x198dec - 0x198e14
void entry_00198dec_0x198dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198dec_0x198dec");
#endif

    ctx->pc = 0x198decu;

    // 0x198dec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198df0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x198df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x198df4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x198df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x198df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198dfc: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x198DFCu;
    {
        const bool branch_taken_0x198dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x198dfc) {
            ctx->pc = 0x198E6Cu;
            return;
        }
    }
    ctx->pc = 0x198E04u;
    // 0x198e04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198E04u;
    {
        const bool branch_taken_0x198e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e04) {
            ctx->pc = 0x198E14u;
            return;
        }
    }
    ctx->pc = 0x198E0Cu;
    // 0x198e0c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x198E0Cu;
    {
        const bool branch_taken_0x198e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e0c) {
            ctx->pc = 0x1990B0u;
            return;
        }
    }
    ctx->pc = 0x198E14u;
}
