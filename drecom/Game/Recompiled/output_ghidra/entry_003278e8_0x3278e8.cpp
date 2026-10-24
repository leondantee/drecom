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

// Function: entry_003278e8
// Address: 0x3278e8 - 0x32791c
void entry_003278e8_0x3278e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003278e8_0x3278e8");
#endif

    ctx->pc = 0x3278e8u;

    // 0x3278e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3278e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3278ec: 0x90630abc  lbu         $v1, 0xABC($v1)
    ctx->pc = 0x3278ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2748)));
    // 0x3278f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3278f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3278f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3278f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3278f8: 0x108300e6  beq         $a0, $v1, . + 4 + (0xE6 << 2)
    ctx->pc = 0x3278F8u;
    {
        const bool branch_taken_0x3278f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3278f8) {
            ctx->pc = 0x327C94u;
            return;
        }
    }
    ctx->pc = 0x327900u;
    // 0x327900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x327900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327904: 0x10830098  beq         $a0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x327904u;
    {
        const bool branch_taken_0x327904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x327904) {
            ctx->pc = 0x327B68u;
            return;
        }
    }
    ctx->pc = 0x32790Cu;
    // 0x32790c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32790Cu;
    {
        const bool branch_taken_0x32790c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32790c) {
            ctx->pc = 0x32791Cu;
            return;
        }
    }
    ctx->pc = 0x327914u;
    // 0x327914: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x327914u;
    {
        const bool branch_taken_0x327914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327914) {
            ctx->pc = 0x327EB4u;
            return;
        }
    }
    ctx->pc = 0x32791Cu;
}
