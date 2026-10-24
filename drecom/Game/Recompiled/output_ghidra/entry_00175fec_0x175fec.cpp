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

// Function: entry_00175fec
// Address: 0x175fec - 0x176018
void entry_00175fec_0x175fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175fec_0x175fec");
#endif

    ctx->pc = 0x175fecu;

    // 0x175fec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x175fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175ff0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175ff0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175ff4: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x175ff4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175ff8: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x175ff8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x175ffc: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x175ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x176000: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x176000u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x176004: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176004u;
    {
        const bool branch_taken_0x176004 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x176004) {
            ctx->pc = 0x176018u;
            return;
        }
    }
    ctx->pc = 0x17600Cu;
    // 0x17600c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x17600cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x176010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176010u;
    {
        const bool branch_taken_0x176010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176010) {
            ctx->pc = 0x176020u;
            return;
        }
    }
    ctx->pc = 0x176018u;
}
