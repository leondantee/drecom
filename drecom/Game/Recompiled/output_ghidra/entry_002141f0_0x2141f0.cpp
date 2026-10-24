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

// Function: entry_002141f0
// Address: 0x2141f0 - 0x214228
void entry_002141f0_0x2141f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002141f0_0x2141f0");
#endif

    switch (ctx->pc) {
        case 0x214220u: goto label_214220;
        default: break;
    }

    ctx->pc = 0x2141f0u;

    // 0x2141f0: 0x8e25aad0  lw          $a1, -0x5530($s1)
    ctx->pc = 0x2141f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945488)));
    // 0x2141f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2141f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2141f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2141fc: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x2141fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x214200: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x214200u;
    {
        const bool branch_taken_0x214200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214200u;
        // 0x214204: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214200) {
            ctx->pc = 0x214228u;
            return;
        }
    }
    ctx->pc = 0x214208u;
    // 0x214208: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x214208u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    // 0x21420c: 0xae20aad0  sw          $zero, -0x5530($s1)
    ctx->pc = 0x21420cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945488), GPR_U32(ctx, 0));
    // 0x214210: 0x2642a100  addiu       $v0, $s2, -0x5F00
    ctx->pc = 0x214210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942976));
    // 0x214214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x214214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214218: 0xc084f18  jal         func_213C60
    ctx->pc = 0x214218u;
    SET_GPR_U32(ctx, 31, 0x214220u);
    ctx->pc = 0x21421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214218u;
    // 0x21421c: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C60u, 0x214218u, 0x214220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214220u;
label_214220:
    // 0x214220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x214220u;
    {
        const bool branch_taken_0x214220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214220u;
        // 0x214224: 0x8e25aad0  lw          $a1, -0x5530($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214220) {
            ctx->pc = 0x21422Cu;
            return;
        }
    }
    ctx->pc = 0x214228u;
}
