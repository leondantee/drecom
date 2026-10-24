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

// Function: entry_0019bd80
// Address: 0x19bd80 - 0x19bde0
void entry_0019bd80_0x19bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bd80_0x19bd80");
#endif

    switch (ctx->pc) {
        case 0x19bdd8u: goto label_19bdd8;
        default: break;
    }

    ctx->pc = 0x19bd80u;

    // 0x19bd80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd84: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19bd84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19bd88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19bd8c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19bd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19bd90: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19BD90u;
    {
        const bool branch_taken_0x19bd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bd90) {
            ctx->pc = 0x19BDF0u;
            return;
        }
    }
    ctx->pc = 0x19BD98u;
    // 0x19bd98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd9c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19bd9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19bda0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19bda4: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x19bda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x19bda8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19BDA8u;
    {
        const bool branch_taken_0x19bda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bda8) {
            ctx->pc = 0x19BDF0u;
            return;
        }
    }
    ctx->pc = 0x19BDB0u;
    // 0x19bdb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bdb4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19bdb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19bdb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19bdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19bdbc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19bdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19bdc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BDC0u;
    {
        const bool branch_taken_0x19bdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bdc0) {
            ctx->pc = 0x19BDE0u;
            return;
        }
    }
    ctx->pc = 0x19BDC8u;
    // 0x19bdc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bdcc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x19bdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x19bdd0: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x19BDD0u;
    SET_GPR_U32(ctx, 31, 0x19BDD8u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x19BDD0u, 0x19BDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDD8u;
label_19bdd8:
    // 0x19bdd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19BDD8u;
    {
        const bool branch_taken_0x19bdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bdd8) {
            ctx->pc = 0x19BDF0u;
            return;
        }
    }
    ctx->pc = 0x19BDE0u;
}
