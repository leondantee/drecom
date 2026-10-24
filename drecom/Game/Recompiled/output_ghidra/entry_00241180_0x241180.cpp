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

// Function: entry_00241180
// Address: 0x241180 - 0x2411b8
void entry_00241180_0x241180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241180_0x241180");
#endif

    ctx->pc = 0x241180u;

    // 0x241180: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x241180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241184: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x241184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x241188: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x241188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x24118c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x24118cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x241190: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241194: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x241194u;
    {
        const bool branch_taken_0x241194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x241194) {
            ctx->pc = 0x2412B8u;
            return;
        }
    }
    ctx->pc = 0x24119Cu;
    // 0x24119c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2411a0: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2411A0u;
    {
        const bool branch_taken_0x2411a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2411a0) {
            ctx->pc = 0x2411F0u;
            return;
        }
    }
    ctx->pc = 0x2411A8u;
    // 0x2411a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2411A8u;
    {
        const bool branch_taken_0x2411a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2411a8) {
            ctx->pc = 0x2411B8u;
            return;
        }
    }
    ctx->pc = 0x2411B0u;
    // 0x2411b0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2411B0u;
    {
        const bool branch_taken_0x2411b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2411b0) {
            ctx->pc = 0x2412B8u;
            return;
        }
    }
    ctx->pc = 0x2411B8u;
}
