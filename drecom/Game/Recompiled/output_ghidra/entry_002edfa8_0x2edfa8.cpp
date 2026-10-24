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

// Function: entry_002edfa8
// Address: 0x2edfa8 - 0x2edfc4
void entry_002edfa8_0x2edfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002edfa8_0x2edfa8");
#endif

    ctx->pc = 0x2edfa8u;

    // 0x2edfa8: 0x93a200b8  lbu         $v0, 0xB8($sp)
    ctx->pc = 0x2edfa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2edfac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2edfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2edfb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDFB0u;
    {
        const bool branch_taken_0x2edfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edfb0) {
            ctx->pc = 0x2EDFC4u;
            return;
        }
    }
    ctx->pc = 0x2EDFB8u;
    // 0x2edfb8: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x2edfb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2edfbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EDFBCu;
    {
        const bool branch_taken_0x2edfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edfbc) {
            ctx->pc = 0x2EDFC8u;
            return;
        }
    }
    ctx->pc = 0x2EDFC4u;
}
