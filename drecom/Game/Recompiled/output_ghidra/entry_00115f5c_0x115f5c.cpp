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

// Function: entry_00115f5c
// Address: 0x115f5c - 0x115f88
void entry_00115f5c_0x115f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115f5c_0x115f5c");
#endif

    ctx->pc = 0x115f5cu;

    // 0x115f5c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x115f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x115f60: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x115f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x115f64: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x115f64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x115f68: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x115f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
    // 0x115f6c: 0x2e4b824  and         $s7, $s7, $a0
    ctx->pc = 0x115f6cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 4));
    // 0x115f70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115f74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x115f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115f78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x115f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x115f7c: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x115f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x115f80: 0x2694fbcd  addiu       $s4, $s4, -0x433
    ctx->pc = 0x115f80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966221));
    // 0x115f84: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x115f84u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    ctx->pc = 0x115f88u;
}
