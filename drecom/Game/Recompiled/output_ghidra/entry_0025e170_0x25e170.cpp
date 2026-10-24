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

// Function: entry_0025e170
// Address: 0x25e170 - 0x25e1c8
void entry_0025e170_0x25e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e170_0x25e170");
#endif

    switch (ctx->pc) {
        case 0x25e1c0u: goto label_25e1c0;
        default: break;
    }

    ctx->pc = 0x25e170u;

    // 0x25e170: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e174: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x25e174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e178: 0x8c620370  lw          $v0, 0x370($v1)
    ctx->pc = 0x25e178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x25e17c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25E17Cu;
    {
        const bool branch_taken_0x25e17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e17c) {
            ctx->pc = 0x25E1C8u;
            return;
        }
    }
    ctx->pc = 0x25E184u;
    // 0x25e184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e188: 0xa7a200da  sh          $v0, 0xDA($sp)
    ctx->pc = 0x25e188u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 218), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e18c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e190: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e194: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x25e194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25e198: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x25e198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x25e19c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x25e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25e1a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e1a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25e1a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e1ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x25e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25e1b0: 0x26250104  addiu       $a1, $s1, 0x104
    ctx->pc = 0x25e1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x25e1b4: 0x24460608  addiu       $a2, $v0, 0x608
    ctx->pc = 0x25e1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1544));
    // 0x25e1b8: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25E1B8u;
    SET_GPR_U32(ctx, 31, 0x25E1C0u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25E1B8u, 0x25E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1C0u;
label_25e1c0:
    // 0x25e1c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25E1C0u;
    {
        const bool branch_taken_0x25e1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e1c0) {
            ctx->pc = 0x25E1E0u;
            return;
        }
    }
    ctx->pc = 0x25E1C8u;
}
