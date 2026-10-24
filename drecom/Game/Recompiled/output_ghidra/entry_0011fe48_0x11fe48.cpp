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

// Function: entry_0011fe48
// Address: 0x11fe48 - 0x11fe60
void entry_0011fe48_0x11fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fe48_0x11fe48");
#endif

    ctx->pc = 0x11fe48u;

    // 0x11fe48: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11fe4c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11fe50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11fe50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11fe54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11fe58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11FE58u;
    {
        const bool branch_taken_0x11fe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE58u;
        // 0x11fe5c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe58) {
            ctx->pc = 0x11FE78u;
            return;
        }
    }
    ctx->pc = 0x11FE60u;
}
