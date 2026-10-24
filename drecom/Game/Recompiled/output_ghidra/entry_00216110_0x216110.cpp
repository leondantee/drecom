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

// Function: entry_00216110
// Address: 0x216110 - 0x216138
void entry_00216110_0x216110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216110_0x216110");
#endif

    ctx->pc = 0x216110u;

    // 0x216110: 0x42000038  ei
    ctx->pc = 0x216110u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x216114: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x216114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x216118: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x216118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x21611c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x21611cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x216120: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x216120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x216124: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x216124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x216128: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x216128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x21612c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x21612Cu;
    {
        const bool branch_taken_0x21612c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21612c) {
            ctx->pc = 0x216130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21612Cu;
            // 0x216130: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216168u;
            return;
        }
    }
    ctx->pc = 0x216134u;
    // 0x216134: 0x0  nop
    ctx->pc = 0x216134u;
    // NOP
    ctx->pc = 0x216138u;
}
