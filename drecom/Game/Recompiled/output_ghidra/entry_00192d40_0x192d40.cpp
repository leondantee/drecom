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

// Function: entry_00192d40
// Address: 0x192d40 - 0x192d7c
void entry_00192d40_0x192d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192d40_0x192d40");
#endif

    switch (ctx->pc) {
        case 0x192d68u: goto label_192d68;
        default: break;
    }

    ctx->pc = 0x192d40u;

    // 0x192d40: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x192d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x192d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x192d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192d48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x192d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x192d4c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x192d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x192d50: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x192d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x192d54: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x192D54u;
    {
        const bool branch_taken_0x192d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192d54) {
            ctx->pc = 0x192BA8u;
            return;
        }
    }
    ctx->pc = 0x192D5Cu;
    // 0x192d5c: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x192d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x192d60: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x192D60u;
    SET_GPR_U32(ctx, 31, 0x192D68u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x192D60u, 0x192D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D68u;
label_192d68:
    // 0x192d68: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x192d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x192d6c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x192d6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x192d70: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x192D70u;
    {
        const bool branch_taken_0x192d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192d70) {
            ctx->pc = 0x192D7Cu;
            return;
        }
    }
    ctx->pc = 0x192D78u;
    // 0x192d78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x192d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x192d7cu;
}
