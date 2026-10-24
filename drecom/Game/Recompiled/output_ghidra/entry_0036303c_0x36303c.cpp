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

// Function: entry_0036303c
// Address: 0x36303c - 0x363088
void entry_0036303c_0x36303c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036303c_0x36303c");
#endif

    ctx->pc = 0x36303cu;

    // 0x36303c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x36303cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363040: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x363040u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x363044: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x363044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x363048: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x363048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36304c: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x36304Cu;
    {
        const bool branch_taken_0x36304c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36304c) {
            ctx->pc = 0x363144u;
            return;
        }
    }
    ctx->pc = 0x363054u;
    // 0x363054: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x363054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363058: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x363058u;
    {
        const bool branch_taken_0x363058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363058) {
            ctx->pc = 0x363088u;
            return;
        }
    }
    ctx->pc = 0x363060u;
    // 0x363060: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x363060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363064: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x363064u;
    {
        const bool branch_taken_0x363064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363064) {
            ctx->pc = 0x363088u;
            return;
        }
    }
    ctx->pc = 0x36306Cu;
    // 0x36306c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36306cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363070: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x363070u;
    {
        const bool branch_taken_0x363070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363070) {
            ctx->pc = 0x363088u;
            return;
        }
    }
    ctx->pc = 0x363078u;
    // 0x363078: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363078u;
    {
        const bool branch_taken_0x363078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x363078) {
            ctx->pc = 0x363088u;
            return;
        }
    }
    ctx->pc = 0x363080u;
    // 0x363080: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x363080u;
    {
        const bool branch_taken_0x363080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363080) {
            ctx->pc = 0x3631DCu;
            return;
        }
    }
    ctx->pc = 0x363088u;
}
