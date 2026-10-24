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

// Function: entry_00175fb8
// Address: 0x175fb8 - 0x175fe4
void entry_00175fb8_0x175fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175fb8_0x175fb8");
#endif

    ctx->pc = 0x175fb8u;

    // 0x175fb8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x175fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175fbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175fbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175fc0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x175fc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175fc4: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x175fc4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x175fc8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x175fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x175fcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175fccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175fd0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175FD0u;
    {
        const bool branch_taken_0x175fd0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x175fd0) {
            ctx->pc = 0x175FE4u;
            return;
        }
    }
    ctx->pc = 0x175FD8u;
    // 0x175fd8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x175fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x175fdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x175FDCu;
    {
        const bool branch_taken_0x175fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175fdc) {
            ctx->pc = 0x175FECu;
            return;
        }
    }
    ctx->pc = 0x175FE4u;
}
