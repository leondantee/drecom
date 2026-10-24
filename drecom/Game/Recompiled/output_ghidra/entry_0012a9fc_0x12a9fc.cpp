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

// Function: entry_0012a9fc
// Address: 0x12a9fc - 0x12aa24
void entry_0012a9fc_0x12a9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a9fc_0x12a9fc");
#endif

    ctx->pc = 0x12a9fcu;

    // 0x12a9fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aa00: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12aa00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12aa04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12aa04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12aa08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aa0c: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x12AA0Cu;
    {
        const bool branch_taken_0x12aa0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12aa0c) {
            ctx->pc = 0x12AB14u;
            return;
        }
    }
    ctx->pc = 0x12AA14u;
    // 0x12aa14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AA14u;
    {
        const bool branch_taken_0x12aa14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa14) {
            ctx->pc = 0x12AA24u;
            return;
        }
    }
    ctx->pc = 0x12AA1Cu;
    // 0x12aa1c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x12AA1Cu;
    {
        const bool branch_taken_0x12aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa1c) {
            ctx->pc = 0x12ACD8u;
            return;
        }
    }
    ctx->pc = 0x12AA24u;
}
