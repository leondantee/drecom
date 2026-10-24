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

// Function: entry_00303108
// Address: 0x303108 - 0x30312c
void entry_00303108_0x303108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303108_0x303108");
#endif

    ctx->pc = 0x303108u;

    // 0x303108: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x303108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x30310c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30310Cu;
    {
        const bool branch_taken_0x30310c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30310c) {
            ctx->pc = 0x30312Cu;
            return;
        }
    }
    ctx->pc = 0x303114u;
    // 0x303114: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x303114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x303118: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303118u;
    {
        const bool branch_taken_0x303118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303118) {
            ctx->pc = 0x30312Cu;
            return;
        }
    }
    ctx->pc = 0x303120u;
    // 0x303120: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x303120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x303124: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x303124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303128: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x303128u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x30312cu;
}
