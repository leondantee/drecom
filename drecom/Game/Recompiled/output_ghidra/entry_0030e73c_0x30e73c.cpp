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

// Function: entry_0030e73c
// Address: 0x30e73c - 0x30e764
void entry_0030e73c_0x30e73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e73c_0x30e73c");
#endif

    ctx->pc = 0x30e73cu;

    // 0x30e73c: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e740: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30e740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x30e744: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30e744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30e748: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e74c: 0x1064005d  beq         $v1, $a0, . + 4 + (0x5D << 2)
    ctx->pc = 0x30E74Cu;
    {
        const bool branch_taken_0x30e74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x30e74c) {
            ctx->pc = 0x30E8C4u;
            return;
        }
    }
    ctx->pc = 0x30E754u;
    // 0x30e754: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E754u;
    {
        const bool branch_taken_0x30e754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e754) {
            ctx->pc = 0x30E764u;
            return;
        }
    }
    ctx->pc = 0x30E75Cu;
    // 0x30e75c: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x30E75Cu;
    {
        const bool branch_taken_0x30e75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e75c) {
            ctx->pc = 0x30EB88u;
            return;
        }
    }
    ctx->pc = 0x30E764u;
}
