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

// Function: entry_003044d4
// Address: 0x3044d4 - 0x3044e8
void entry_003044d4_0x3044d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003044d4_0x3044d4");
#endif

    ctx->pc = 0x3044d4u;

    // 0x3044d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3044d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3044d8: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x3044d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x3044dc: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x3044dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x3044e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3044e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3044e4: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x3044e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    ctx->pc = 0x3044e8u;
}
