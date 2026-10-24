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

// Function: entry_0031fe48
// Address: 0x31fe48 - 0x31fe7c
void entry_0031fe48_0x31fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fe48_0x31fe48");
#endif

    ctx->pc = 0x31fe48u;

    // 0x31fe48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe4c: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x31fe4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x31fe50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31fe54: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x31fe54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x31fe58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe5c: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x31fe5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x31fe60: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x31fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31fe64: 0xa0850348  sb          $a1, 0x348($a0)
    ctx->pc = 0x31fe64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 5));
    // 0x31fe68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31fe68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fe6c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x31fe6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31fe70: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x31fe70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe74: 0x24c402b0  addiu       $a0, $a2, 0x2B0
    ctx->pc = 0x31fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 688));
    // 0x31fe78: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x31fe78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x31fe7cu;
}
