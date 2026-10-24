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

// Function: entry_001d50d4
// Address: 0x1d50d4 - 0x1d50ec
void entry_001d50d4_0x1d50d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d50d4_0x1d50d4");
#endif

    ctx->pc = 0x1d50d4u;

    // 0x1d50d4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d50d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d50d8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d50d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1d50dc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d50dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d50e0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1d50e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1d50e4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1D50E4u;
    {
        const bool branch_taken_0x1d50e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d50e4) {
            ctx->pc = 0x1D5250u;
            return;
        }
    }
    ctx->pc = 0x1D50ECu;
}
