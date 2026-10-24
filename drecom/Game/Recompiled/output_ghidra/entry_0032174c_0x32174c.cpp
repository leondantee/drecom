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

// Function: entry_0032174c
// Address: 0x32174c - 0x321780
void entry_0032174c_0x32174c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032174c_0x32174c");
#endif

    switch (ctx->pc) {
        case 0x321778u: goto label_321778;
        default: break;
    }

    ctx->pc = 0x32174cu;

    // 0x32174c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x32174cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321750: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321754: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x321754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321758: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x321758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32175c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x321760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321764: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x321764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x321768: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x321768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x32176c: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x32176cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x321770: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x321770u;
    SET_GPR_U32(ctx, 31, 0x321778u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x321778u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321778u) { return; }
    ctx->pc = 0x321778u;
label_321778:
    // 0x321778: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x321778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32177c: 0x0  nop
    ctx->pc = 0x32177cu;
    // NOP
    ctx->pc = 0x321780u;
}
