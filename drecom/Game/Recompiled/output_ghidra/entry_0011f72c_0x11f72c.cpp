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

// Function: entry_0011f72c
// Address: 0x11f72c - 0x11f750
void entry_0011f72c_0x11f72c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f72c_0x11f72c");
#endif

    ctx->pc = 0x11f72cu;

    // 0x11f72c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x11f72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x11f730: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x11f730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x11f734: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x11f734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x11f738: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x11f738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11f73c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x11f73cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11f740: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11F740u;
    {
        const bool branch_taken_0x11f740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F740u;
        // 0x11f744: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f740) {
            ctx->pc = 0x11F78Cu;
            return;
        }
    }
    ctx->pc = 0x11F748u;
    // 0x11f748: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x11f748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x11f74c: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x11f74cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    ctx->pc = 0x11f750u;
}
