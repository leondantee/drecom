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

// Function: entry_003214b0
// Address: 0x3214b0 - 0x321520
void entry_003214b0_0x3214b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003214b0_0x3214b0");
#endif

    switch (ctx->pc) {
        case 0x3214f4u: goto label_3214f4;
        case 0x32151cu: goto label_32151c;
        default: break;
    }

    ctx->pc = 0x3214b0u;

    // 0x3214b0: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3214b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3214b4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3214b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3214b8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3214b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3214bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3214bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3214c0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3214c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3214c4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3214c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3214c8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3214c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3214cc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3214ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3214d0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3214d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3214d4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3214d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3214d8: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x3214d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3214dc: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x3214dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3214e0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3214e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3214e4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x3214e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3214e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3214e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3214ec: 0xc040c80  jal         func_103200
    ctx->pc = 0x3214ECu;
    SET_GPR_U32(ctx, 31, 0x3214F4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x3214F4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3214F4u) { return; }
    ctx->pc = 0x3214F4u;
label_3214f4:
    // 0x3214f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3214f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3214f8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3214f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3214fc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3214fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321500: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x321500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321504: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x321504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321508: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x321508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32150c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321510: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x321510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321514: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x321514u;
    SET_GPR_U32(ctx, 31, 0x32151Cu);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x32151Cu;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32151Cu) { return; }
    ctx->pc = 0x32151Cu;
label_32151c:
    // 0x32151c: 0x0  nop
    ctx->pc = 0x32151cu;
    // NOP
    ctx->pc = 0x321520u;
}
