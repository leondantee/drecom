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

// Function: entry_0029b510
// Address: 0x29b510 - 0x29b578
void entry_0029b510_0x29b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b510_0x29b510");
#endif

    switch (ctx->pc) {
        case 0x29b53cu: goto label_29b53c;
        case 0x29b554u: goto label_29b554;
        default: break;
    }

    ctx->pc = 0x29b510u;

    // 0x29b510: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29b510u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b514: 0xdfa301a8  ld          $v1, 0x1A8($sp)
    ctx->pc = 0x29b514u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29b518: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29b518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29b51c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b51cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b520: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b524: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b524u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b528: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b52c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b52cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b530: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29b530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29b534: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B534u;
    SET_GPR_U32(ctx, 31, 0x29B53Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B53Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B53Cu) { return; }
    ctx->pc = 0x29B53Cu;
label_29b53c:
    // 0x29b53c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b540: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b540u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b544: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b544u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b548: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x29b548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29b54c: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B54Cu;
    SET_GPR_U32(ctx, 31, 0x29B554u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B554u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B554u) { return; }
    ctx->pc = 0x29B554u;
label_29b554:
    // 0x29b554: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b558: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29b558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x29b55c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B55Cu;
    {
        const bool branch_taken_0x29b55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b55c) {
            ctx->pc = 0x29B578u;
            return;
        }
    }
    ctx->pc = 0x29B564u;
    // 0x29b564: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b568: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b56c: 0xffa201b0  sd          $v0, 0x1B0($sp)
    ctx->pc = 0x29b56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 2));
    // 0x29b570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B570u;
    {
        const bool branch_taken_0x29b570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b570) {
            ctx->pc = 0x29B57Cu;
            return;
        }
    }
    ctx->pc = 0x29B578u;
}
