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

// Function: entry_00297dbc
// Address: 0x297dbc - 0x297e30
void entry_00297dbc_0x297dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297dbc_0x297dbc");
#endif

    switch (ctx->pc) {
        case 0x297decu: goto label_297dec;
        default: break;
    }

    ctx->pc = 0x297dbcu;

    // 0x297dbc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x297dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297dc0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x297dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x297dc4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x297dc8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x297dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x297dcc: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x297dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x297dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297dd4: 0x8c540830  lw          $s4, 0x830($v0)
    ctx->pc = 0x297dd4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2096)));
    // 0x297dd8: 0x2602000e  addiu       $v0, $s0, 0xE
    ctx->pc = 0x297dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x297ddc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x297ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297de0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x297de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297de4: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x297DE4u;
    SET_GPR_U32(ctx, 31, 0x297DECu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x297DE4u, 0x297DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DECu;
label_297dec:
    // 0x297dec: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x297DECu;
    {
        const bool branch_taken_0x297dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297dec) {
            ctx->pc = 0x297FA0u;
            return;
        }
    }
    ctx->pc = 0x297DF4u;
    // 0x297df4: 0x92820018  lbu         $v0, 0x18($s4)
    ctx->pc = 0x297df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x297df8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297dfc: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x297dfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297e00: 0x92820019  lbu         $v0, 0x19($s4)
    ctx->pc = 0x297e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 25)));
    // 0x297e04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297e08: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x297e08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297e0c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x297e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x297e10: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x297e10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297e14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x297e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297e18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x297e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297e1c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x297e1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x297e20: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x297E20u;
    {
        const bool branch_taken_0x297e20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x297e20) {
            ctx->pc = 0x297E30u;
            return;
        }
    }
    ctx->pc = 0x297E28u;
    // 0x297e28: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x297e28u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x297e2c: 0x0  nop
    ctx->pc = 0x297e2cu;
    // NOP
    ctx->pc = 0x297e30u;
}
