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

// Function: entry_001d3dbc
// Address: 0x1d3dbc - 0x1d3e44
void entry_001d3dbc_0x1d3dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3dbc_0x1d3dbc");
#endif

    switch (ctx->pc) {
        case 0x1d3de4u: goto label_1d3de4;
        case 0x1d3e0cu: goto label_1d3e0c;
        case 0x1d3e2cu: goto label_1d3e2c;
        case 0x1d3e3cu: goto label_1d3e3c;
        default: break;
    }

    ctx->pc = 0x1d3dbcu;

label_1d3dbc:
    // 0x1d3dbc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1d3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d3dc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d3dc4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3dc8: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1d3dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3dcc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1d3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d3dd0: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1d3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1d3dd4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3dd8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1d3dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3ddc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D3DDCu;
    SET_GPR_U32(ctx, 31, 0x1D3DE4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D3DE4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3DE4u) { return; }
    ctx->pc = 0x1D3DE4u;
label_1d3de4:
    // 0x1d3de4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1d3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d3de8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1d3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1d3dec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3df0: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1d3df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3df4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1d3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d3df8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1d3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1d3dfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3e00: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1d3e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3e04: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D3E04u;
    SET_GPR_U32(ctx, 31, 0x1D3E0Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D3E0Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3E0Cu) { return; }
    ctx->pc = 0x1D3E0Cu;
label_1d3e0c:
    // 0x1d3e0c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d3e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d3e10: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1d3e10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d3e14: 0x1020ffe9  beqz        $at, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D3E14u;
    {
        const bool branch_taken_0x1d3e14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e14) {
            ctx->pc = 0x1D3DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3dbc;
        }
    }
    ctx->pc = 0x1D3E1Cu;
    // 0x1d3e1c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1d3e1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1d3e20: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1d3e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d3e24: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D3E24u;
    SET_GPR_U32(ctx, 31, 0x1D3E2Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D3E2Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3E2Cu) { return; }
    ctx->pc = 0x1D3E2Cu;
label_1d3e2c:
    // 0x1d3e2c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1d3e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1d3e30: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x1d3e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1d3e34: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D3E34u;
    SET_GPR_U32(ctx, 31, 0x1D3E3Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D3E3Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3E3Cu) { return; }
    ctx->pc = 0x1D3E3Cu;
label_1d3e3c:
    // 0x1d3e3c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D3E3Cu;
    {
        const bool branch_taken_0x1d3e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e3c) {
            ctx->pc = 0x1D3E98u;
            return;
        }
    }
    ctx->pc = 0x1D3E44u;
}
