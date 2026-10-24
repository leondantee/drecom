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

// Function: entry_001a45c0
// Address: 0x1a45c0 - 0x1a45e4
void entry_001a45c0_0x1a45c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a45c0_0x1a45c0");
#endif

    ctx->pc = 0x1a45c0u;

    // 0x1a45c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a45c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a45c4: 0x90830312  lbu         $v1, 0x312($a0)
    ctx->pc = 0x1a45c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 786)));
    // 0x1a45c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a45c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a45cc: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1a45ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a45d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a45d4: 0x428c3  sra         $a1, $a0, 3
    ctx->pc = 0x1a45d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1a45d8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a45d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a45dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a45e0: 0x659823  subu        $s3, $v1, $a1
    ctx->pc = 0x1a45e0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x1a45e4u;
}
