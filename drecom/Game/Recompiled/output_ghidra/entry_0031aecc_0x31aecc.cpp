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

// Function: entry_0031aecc
// Address: 0x31aecc - 0x31aef0
void entry_0031aecc_0x31aecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031aecc_0x31aecc");
#endif

    ctx->pc = 0x31aeccu;

    // 0x31aecc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31aeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31aed0: 0x8422ec66  lh          $v0, -0x139A($at)
    ctx->pc = 0x31aed0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x31aed4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31aed8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31aed8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31aedc: 0x441002b  bgez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x31AEDCu;
    {
        const bool branch_taken_0x31aedc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31aedc) {
            ctx->pc = 0x31AF8Cu;
            return;
        }
    }
    ctx->pc = 0x31AEE4u;
    // 0x31aee4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31aee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31aee8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31AEE8u;
    {
        const bool branch_taken_0x31aee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aee8) {
            ctx->pc = 0x31AF70u;
            return;
        }
    }
    ctx->pc = 0x31AEF0u;
}
