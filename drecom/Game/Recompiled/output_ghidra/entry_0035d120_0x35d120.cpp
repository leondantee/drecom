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

// Function: entry_0035d120
// Address: 0x35d120 - 0x35d148
void entry_0035d120_0x35d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d120_0x35d120");
#endif

    ctx->pc = 0x35d120u;

    // 0x35d120: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x35d120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x35d124: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35d124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x35d128: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x35d128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35d12c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x35d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x35d130: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35d130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35d134: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x35d134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x35d138: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x35d138u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x35d13c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x35d13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x35d140: 0x26037fff  addiu       $v1, $s0, 0x7FFF
    ctx->pc = 0x35d140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32767));
    // 0x35d144: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x35d144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x35d148u;
}
