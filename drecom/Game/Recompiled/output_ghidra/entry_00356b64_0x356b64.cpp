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

// Function: entry_00356b64
// Address: 0x356b64 - 0x356b88
void entry_00356b64_0x356b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356b64_0x356b64");
#endif

    ctx->pc = 0x356b64u;

    // 0x356b64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b68: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x356b68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x356b6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b70: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x356b70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x356b74: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x356b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x356b78: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x356b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x356b7c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x356b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x356b80: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x356b80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356b84: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x356b84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x356b88u;
}
