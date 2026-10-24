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

// Function: entry_00307dc0
// Address: 0x307dc0 - 0x307dec
void entry_00307dc0_0x307dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307dc0_0x307dc0");
#endif

    ctx->pc = 0x307dc0u;

    // 0x307dc0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307dc4: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307dc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307dc8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x307dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307dcc: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x307dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x307dd0: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x307DD0u;
    {
        const bool branch_taken_0x307dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x307dd0) {
            ctx->pc = 0x307DECu;
            return;
        }
    }
    ctx->pc = 0x307DD8u;
    // 0x307dd8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x307dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x307ddc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307DDCu;
    {
        const bool branch_taken_0x307ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x307ddc) {
            ctx->pc = 0x307DECu;
            return;
        }
    }
    ctx->pc = 0x307DE4u;
    // 0x307de4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x307DE4u;
    {
        const bool branch_taken_0x307de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307de4) {
            ctx->pc = 0x307E78u;
            return;
        }
    }
    ctx->pc = 0x307DECu;
}
