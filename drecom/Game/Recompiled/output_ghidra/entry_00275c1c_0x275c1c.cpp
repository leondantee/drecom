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

// Function: entry_00275c1c
// Address: 0x275c1c - 0x275c70
void entry_00275c1c_0x275c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275c1c_0x275c1c");
#endif

    ctx->pc = 0x275c1cu;

    // 0x275c1c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x275c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x275c20: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275c24: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275c28: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275c28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275c2c: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275c30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275c34: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x275c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x275c38: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x275c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x275c3c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275c40: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275c44: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275c48: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275c4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275c50: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x275c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
    // 0x275c54: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x275c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x275c58: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x275c58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275c5c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x275c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x275c60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275c64: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x275c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275c68: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275c6c: 0xac650068  sw          $a1, 0x68($v1)
    ctx->pc = 0x275c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 5));
    ctx->pc = 0x275c70u;
}
