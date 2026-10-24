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

// Function: entry_0031fa68
// Address: 0x31fa68 - 0x31fad0
void entry_0031fa68_0x31fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fa68_0x31fa68");
#endif

    switch (ctx->pc) {
        case 0x31faacu: goto label_31faac;
        default: break;
    }

    ctx->pc = 0x31fa68u;

    // 0x31fa68: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31fa6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31fa70: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31fa70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa74: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x31fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x31fa78: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31fa78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fa7c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x31fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31fa80: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31fa80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31fa84: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31fa88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa8c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x31fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31fa90: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x31fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31fa94: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31fa98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa9c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x31fa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31faa0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31faa4: 0xc040c80  jal         func_103200
    ctx->pc = 0x31FAA4u;
    SET_GPR_U32(ctx, 31, 0x31FAACu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x31FAACu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FAACu) { return; }
    ctx->pc = 0x31FAACu;
label_31faac:
    // 0x31faac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x31faacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31fab0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fab4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x31fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31fab8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x31fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31fabc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31fac0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fac4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x31fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31fac8: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x31FAC8u;
    SET_GPR_U32(ctx, 31, 0x31FAD0u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x31FAD0u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FAD0u) { return; }
    ctx->pc = 0x31FAD0u;
}
