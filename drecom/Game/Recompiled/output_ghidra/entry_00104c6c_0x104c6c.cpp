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

// Function: entry_00104c6c
// Address: 0x104c6c - 0x104ca4
void entry_00104c6c_0x104c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104c6c_0x104c6c");
#endif

    ctx->pc = 0x104c6cu;

    // 0x104c6c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x104c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x104c70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x104c70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c74: 0x8cc53bf0  lw          $a1, 0x3BF0($a2)
    ctx->pc = 0x104c74u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x383BF0u));
    // 0x104c78: 0x8c640128  lw          $a0, 0x128($v1)
    ctx->pc = 0x104c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 296)));
    // 0x104c7c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x104c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x104c80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x104c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104c84: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x104c84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104c88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104c88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104c8c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x104c8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104c90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104c90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104c94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104c9c: 0x804166e  j           func_1059B8
    ctx->pc = 0x104C9Cu;
    ctx->pc = 0x104CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C9Cu;
    // 0x104ca0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1059B8u;
    _copyAddRefImage_0x1059b8(rdram, ctx, runtime); return;
    ctx->pc = 0x104CA4u;
}
