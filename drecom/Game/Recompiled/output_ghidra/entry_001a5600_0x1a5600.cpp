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

// Function: entry_001a5600
// Address: 0x1a5600 - 0x1a5620
void entry_001a5600_0x1a5600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5600_0x1a5600");
#endif

    ctx->pc = 0x1a5600u;

    // 0x1a5600: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a5600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a5604: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a5604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a5608: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x1a5608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a560c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5610: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1a5610u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a5614: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1a5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a5618: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x1a5618u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1a561c: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1a561cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x1a5620u;
}
