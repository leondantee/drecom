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

// Function: entry_00136b50
// Address: 0x136b50 - 0x136b70
void entry_00136b50_0x136b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136b50_0x136b50");
#endif

    ctx->pc = 0x136b50u;

    // 0x136b50: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x136b50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x136b54: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x136b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x136b58: 0x24634e88  addiu       $v1, $v1, 0x4E88
    ctx->pc = 0x136b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20104));
    // 0x136b5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x136b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136b60: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x136b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x136b64: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x136b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136b68: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x136b68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x136b6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x136b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x136b70u;
}
