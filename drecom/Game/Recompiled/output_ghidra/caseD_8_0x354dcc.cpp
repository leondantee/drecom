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

// Function: caseD_8
// Address: 0x354dcc - 0x354ea0
void caseD_8_0x354dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x354dcc");
#endif

    switch (ctx->pc) {
        case 0x354e18u: goto label_354e18;
        case 0x354e74u: goto label_354e74;
        default: break;
    }

    ctx->pc = 0x354dccu;

    // 0x354dcc: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x354dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354dd0: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x354dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x354dd4: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x354dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x354dd8: 0x90e8010c  lbu         $t0, 0x10C($a3)
    ctx->pc = 0x354dd8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 268)));
    // 0x354ddc: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x354ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x354de0: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x354de0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x354de4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x354de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354de8: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x354de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x354dec: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x354decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x354df0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354df4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x354df4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x354df8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x354df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x354dfc: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x354dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x354e00: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x354e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354e04: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x354e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x354e08: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x354e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x354e0c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x354e0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x354e10: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x354E10u;
    SET_GPR_U32(ctx, 31, 0x354E18u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x354E10u, 0x354E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E18u;
label_354e18:
    // 0x354e18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x354e18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354e1c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x354e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354e20: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x354e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x354e24: 0xbd2021  addu        $a0, $a1, $sp
    ctx->pc = 0x354e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x354e28: 0x9086010c  lbu         $a2, 0x10C($a0)
    ctx->pc = 0x354e28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x354e2c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x354e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x354e30: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x354e30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x354e34: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x354e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354e38: 0x8ca60134  lw          $a2, 0x134($a1)
    ctx->pc = 0x354e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
    // 0x354e3c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x354e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x354e40: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x354e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x354e44: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x354e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x354e48: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x354e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x354e4c: 0x9063010c  lbu         $v1, 0x10C($v1)
    ctx->pc = 0x354e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x354e50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x354e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x354e54: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x354e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x354e58: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x354e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354e5c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x354e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x354e60: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x354e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x354e64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x354e64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x354e68: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x354e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x354e6c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x354E6Cu;
    SET_GPR_U32(ctx, 31, 0x354E74u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x354E6Cu, 0x354E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354E74u;
label_354e74:
    // 0x354e74: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354e78: 0x84a40014  lh          $a0, 0x14($a1)
    ctx->pc = 0x354e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x354e7c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x354e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x354e80: 0xa4a30014  sh          $v1, 0x14($a1)
    ctx->pc = 0x354e80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x354e84: 0x14800062  bnez        $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x354E84u;
    {
        const bool branch_taken_0x354e84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x354e84) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x354E8Cu;
    // 0x354e8c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x354e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x354e90: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x354e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354e94: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x354e94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x354e98: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x354E98u;
    {
        const bool branch_taken_0x354e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354e98) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x354EA0u;
}
