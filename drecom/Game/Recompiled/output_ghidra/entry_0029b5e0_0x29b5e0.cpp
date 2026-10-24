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

// Function: entry_0029b5e0
// Address: 0x29b5e0 - 0x29b650
void entry_0029b5e0_0x29b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b5e0_0x29b5e0");
#endif

    switch (ctx->pc) {
        case 0x29b60cu: goto label_29b60c;
        case 0x29b628u: goto label_29b628;
        default: break;
    }

    ctx->pc = 0x29b5e0u;

    // 0x29b5e0: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29b5e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b5e4: 0xdfa401b8  ld          $a0, 0x1B8($sp)
    ctx->pc = 0x29b5e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x29b5e8: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x29b5e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x29b5ec: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x29b5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x29b5f0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x29b5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b5f4: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x29b5f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29b5f8: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b5fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b5fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b600: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29b600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29b604: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B604u;
    SET_GPR_U32(ctx, 31, 0x29B60Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B60Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B60Cu) { return; }
    ctx->pc = 0x29B60Cu;
label_29b60c:
    // 0x29b60c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29b60cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b610: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b614: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b614u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b618: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b618u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b61c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x29b61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x29b620: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B620u;
    SET_GPR_U32(ctx, 31, 0x29B628u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B628u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B628u) { return; }
    ctx->pc = 0x29B628u;
label_29b628:
    // 0x29b628: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b628u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b62c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b630: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x29b630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x29b634: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B634u;
    {
        const bool branch_taken_0x29b634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b634) {
            ctx->pc = 0x29B650u;
            return;
        }
    }
    ctx->pc = 0x29B63Cu;
    // 0x29b63c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b640: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b644: 0xffa201c0  sd          $v0, 0x1C0($sp)
    ctx->pc = 0x29b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 2));
    // 0x29b648: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B648u;
    {
        const bool branch_taken_0x29b648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b648) {
            ctx->pc = 0x29B654u;
            return;
        }
    }
    ctx->pc = 0x29B650u;
}
