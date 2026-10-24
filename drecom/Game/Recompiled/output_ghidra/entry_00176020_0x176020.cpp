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

// Function: entry_00176020
// Address: 0x176020 - 0x17604c
void entry_00176020_0x176020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176020_0x176020");
#endif

    ctx->pc = 0x176020u;

    // 0x176020: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x176020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x176024: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x176024u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x176028: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x176028u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17602c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x17602cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x176030: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x176030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x176034: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x176034u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x176038: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176038u;
    {
        const bool branch_taken_0x176038 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x176038) {
            ctx->pc = 0x17604Cu;
            return;
        }
    }
    ctx->pc = 0x176040u;
    // 0x176040: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x176040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x176044: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176044u;
    {
        const bool branch_taken_0x176044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176044) {
            ctx->pc = 0x176054u;
            return;
        }
    }
    ctx->pc = 0x17604Cu;
}
