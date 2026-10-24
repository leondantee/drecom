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

// Function: entry_0031bba4
// Address: 0x31bba4 - 0x31bbd4
void entry_0031bba4_0x31bba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031bba4_0x31bba4");
#endif

    ctx->pc = 0x31bba4u;

    // 0x31bba4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bba8: 0x246312f0  addiu       $v1, $v1, 0x12F0
    ctx->pc = 0x31bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4848));
    // 0x31bbac: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31bbacu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31bbb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bbb4: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x31bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x31bbb8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31bbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31bbbc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bbc0: 0x246312f0  addiu       $v1, $v1, 0x12F0
    ctx->pc = 0x31bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4848));
    // 0x31bbc4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31bbc4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31bbc8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bbcc: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x31bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x31bbd0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31bbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x31bbd4u;
}
