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

// Function: entry_00258c50
// Address: 0x258c50 - 0x258c70
void entry_00258c50_0x258c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258c50_0x258c50");
#endif

    ctx->pc = 0x258c50u;

    // 0x258c50: 0x93a30088  lbu         $v1, 0x88($sp)
    ctx->pc = 0x258c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x258c54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258c58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258c5c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x258c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x258c60: 0x8c710018  lw          $s1, 0x18($v1)
    ctx->pc = 0x258c60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x258c64: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x258c64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x258c68: 0x0  nop
    ctx->pc = 0x258c68u;
    // NOP
    // 0x258c6c: 0x0  nop
    ctx->pc = 0x258c6cu;
    // NOP
    ctx->pc = 0x258c70u;
}
