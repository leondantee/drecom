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

// Function: entry_001e5d94
// Address: 0x1e5d94 - 0x1e5e34
void entry_001e5d94_0x1e5d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5d94_0x1e5d94");
#endif

    switch (ctx->pc) {
        case 0x1e5dd0u: goto label_1e5dd0;
        default: break;
    }

    ctx->pc = 0x1e5d94u;

    // 0x1e5d94: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e5d94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5d98: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5d9c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e5d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e5da0: 0x2e32821  addu        $a1, $s7, $v1
    ctx->pc = 0x1e5da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1e5da4: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1e5da4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e5da8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5dac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e5db0: 0x2e33021  addu        $a2, $s7, $v1
    ctx->pc = 0x1e5db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1e5db4: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1e5db4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e5db8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5dbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e5dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e5dc0: 0x2e33821  addu        $a3, $s7, $v1
    ctx->pc = 0x1e5dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1e5dc4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e5dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e5dc8: 0xc079668  jal         func_1E59A0
    ctx->pc = 0x1E5DC8u;
    SET_GPR_U32(ctx, 31, 0x1E5DD0u);
    ctx->pc = 0x1E59A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E59A0u, 0x1E5DC8u, 0x1E5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DD0u;
label_1e5dd0:
    // 0x1e5dd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e5dd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5dd4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1e5dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e5dd8: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1e5dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e5ddc: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e5ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5de0: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x1e5de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x1e5de4: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1e5de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1e5de8: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x1e5de8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5dec: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1e5decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e5df0: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1e5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e5df4: 0x83a823  subu        $s5, $a0, $v1
    ctx->pc = 0x1e5df4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5df8: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x1e5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e5dfc: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1e5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1e5e00: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1e5e00u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5e04: 0x2952018  mult        $a0, $s4, $s5
    ctx->pc = 0x1e5e04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e5e08: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x1e5e08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e5e0c: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e5e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5e10: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5E10u;
    {
        const bool branch_taken_0x1e5e10 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1e5e10) {
            ctx->pc = 0x1E5E34u;
            return;
        }
    }
    ctx->pc = 0x1E5E18u;
    // 0x1e5e18: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e5e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e5e1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e5e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e5e20: 0x240400a1  addiu       $a0, $zero, 0xA1
    ctx->pc = 0x1e5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e5e24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e5e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e5e28: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e5e28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e5e2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5E2Cu;
    {
        const bool branch_taken_0x1e5e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e2c) {
            ctx->pc = 0x1E5E48u;
            return;
        }
    }
    ctx->pc = 0x1E5E34u;
}
