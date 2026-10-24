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

// Function: entry_0036caf4
// Address: 0x36caf4 - 0x36cb20
void entry_0036caf4_0x36caf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036caf4_0x36caf4");
#endif

    ctx->pc = 0x36caf4u;

    // 0x36caf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36caf8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36cafc: 0x244204b0  addiu       $v0, $v0, 0x4B0
    ctx->pc = 0x36cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x36cb00: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x36cb00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36cb04: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cb08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cb0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cb10: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cb14: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x36cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36cb18: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x36cb18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x36cb1c: 0x0  nop
    ctx->pc = 0x36cb1cu;
    // NOP
    ctx->pc = 0x36cb20u;
}
