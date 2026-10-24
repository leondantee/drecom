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

// Function: entry_00241220
// Address: 0x241220 - 0x241258
void entry_00241220_0x241220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241220_0x241220");
#endif

    ctx->pc = 0x241220u;

    // 0x241220: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x241220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241224: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x241224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x241228: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x241228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x24122c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x24122cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x241230: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241234: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x241234u;
    {
        const bool branch_taken_0x241234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x241234) {
            ctx->pc = 0x2412B8u;
            return;
        }
    }
    ctx->pc = 0x24123Cu;
    // 0x24123c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24123cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241240: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x241240u;
    {
        const bool branch_taken_0x241240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x241240) {
            ctx->pc = 0x241290u;
            return;
        }
    }
    ctx->pc = 0x241248u;
    // 0x241248: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x241248u;
    {
        const bool branch_taken_0x241248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x241248) {
            ctx->pc = 0x241258u;
            return;
        }
    }
    ctx->pc = 0x241250u;
    // 0x241250: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x241250u;
    {
        const bool branch_taken_0x241250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241250) {
            ctx->pc = 0x2412B8u;
            return;
        }
    }
    ctx->pc = 0x241258u;
}
