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

// Function: entry_0011218c
// Address: 0x11218c - 0x1121a0
void entry_0011218c_0x11218c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011218c_0x11218c");
#endif

    ctx->pc = 0x11218cu;

    // 0x11218c: 0x3c01c016  lui         $at, 0xC016
    ctx->pc = 0x11218cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49174 << 16));
    // 0x112190: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x112190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x112194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112198: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x112198u;
    {
        const bool branch_taken_0x112198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112198u;
        // 0x11219c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112198) {
            ctx->pc = 0x11230Cu;
            return;
        }
    }
    ctx->pc = 0x1121A0u;
}
