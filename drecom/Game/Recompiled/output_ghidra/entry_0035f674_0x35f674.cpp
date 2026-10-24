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

// Function: entry_0035f674
// Address: 0x35f674 - 0x35f69c
void entry_0035f674_0x35f674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f674_0x35f674");
#endif

    ctx->pc = 0x35f674u;

    // 0x35f674: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f678: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x35f678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x35f67c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x35f67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35f680: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35f680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f684: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35F684u;
    {
        const bool branch_taken_0x35f684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f684) {
            ctx->pc = 0x35F6D8u;
            return;
        }
    }
    ctx->pc = 0x35F68Cu;
    // 0x35f68c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35F68Cu;
    {
        const bool branch_taken_0x35f68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f68c) {
            ctx->pc = 0x35F69Cu;
            return;
        }
    }
    ctx->pc = 0x35F694u;
    // 0x35f694: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x35F694u;
    {
        const bool branch_taken_0x35f694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f694) {
            ctx->pc = 0x35F73Cu;
            return;
        }
    }
    ctx->pc = 0x35F69Cu;
}
