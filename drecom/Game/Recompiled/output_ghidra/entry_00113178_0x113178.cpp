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

// Function: entry_00113178
// Address: 0x113178 - 0x11318c
void entry_00113178_0x113178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113178_0x113178");
#endif

    ctx->pc = 0x113178u;

    // 0x113178: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x113178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x11317c: 0x32730007  andi        $s3, $s3, 0x7
    ctx->pc = 0x11317cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x113180: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x113180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113184: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x113184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113188: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x113188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
    ctx->pc = 0x11318cu;
}
