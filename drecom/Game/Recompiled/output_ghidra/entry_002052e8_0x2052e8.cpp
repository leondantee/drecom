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

// Function: entry_002052e8
// Address: 0x2052e8 - 0x205318
void entry_002052e8_0x2052e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002052e8_0x2052e8");
#endif

    ctx->pc = 0x2052e8u;

    // 0x2052e8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2052e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2052ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2052ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2052f0: 0x244203b0  addiu       $v0, $v0, 0x3B0
    ctx->pc = 0x2052f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
    // 0x2052f4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2052f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2052f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2052f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2052fc: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x2052fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x205300: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x205300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x205304: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x205304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x205308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20530c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x20530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x205310: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x205310u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x205314: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x205314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x205318u;
}
