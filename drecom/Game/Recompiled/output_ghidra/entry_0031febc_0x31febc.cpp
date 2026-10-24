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

// Function: entry_0031febc
// Address: 0x31febc - 0x31fed0
void entry_0031febc_0x31febc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031febc_0x31febc");
#endif

    ctx->pc = 0x31febcu;

    // 0x31febc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31febcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fec0: 0x246502b0  addiu       $a1, $v1, 0x2B0
    ctx->pc = 0x31fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x31fec4: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x31fec4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31fec8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fecc: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x31feccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    ctx->pc = 0x31fed0u;
}
