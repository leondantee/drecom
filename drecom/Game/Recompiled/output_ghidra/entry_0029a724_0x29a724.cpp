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

// Function: entry_0029a724
// Address: 0x29a724 - 0x29a740
void entry_0029a724_0x29a724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a724_0x29a724");
#endif

    ctx->pc = 0x29a724u;

    // 0x29a724: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x29a724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x29a728: 0x34460002  ori         $a2, $v0, 0x2
    ctx->pc = 0x29a728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29a72c: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x29a72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29a730: 0x3c062402  lui         $a2, 0x2402
    ctx->pc = 0x29a730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)9218 << 16));
    // 0x29a734: 0xc41025  or          $v0, $a2, $a0
    ctx->pc = 0x29a734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x29a738: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x29a738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a73c: 0xfc820170  sd          $v0, 0x170($a0)
    ctx->pc = 0x29a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 368), GPR_U64(ctx, 2));
    ctx->pc = 0x29a740u;
}
