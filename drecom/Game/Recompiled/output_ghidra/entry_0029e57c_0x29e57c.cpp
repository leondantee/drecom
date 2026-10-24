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

// Function: entry_0029e57c
// Address: 0x29e57c - 0x29e5e4
void entry_0029e57c_0x29e57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e57c_0x29e57c");
#endif

    switch (ctx->pc) {
        case 0x29e5a8u: goto label_29e5a8;
        case 0x29e5dcu: goto label_29e5dc;
        default: break;
    }

    ctx->pc = 0x29e57cu;

    // 0x29e57c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e580: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e584: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29e584u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29e588: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e58c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29e590: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x29e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29e594: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x29e594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x29e598: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29E598u;
    {
        const bool branch_taken_0x29e598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e598) {
            ctx->pc = 0x29E5E4u;
            return;
        }
    }
    ctx->pc = 0x29E5A0u;
    // 0x29e5a0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E5A0u;
    SET_GPR_U32(ctx, 31, 0x29E5A8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E5A0u, 0x29E5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5A8u;
label_29e5a8:
    // 0x29e5a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e5ac: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29e5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29e5b0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29e5b4: 0x90420038  lbu         $v0, 0x38($v0)
    ctx->pc = 0x29e5b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x29e5b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e5bc: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x29e5bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x29e5c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e5c4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e5c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29e5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29e5cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29e5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e5d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29e5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29e5d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29E5D4u;
    SET_GPR_U32(ctx, 31, 0x29E5DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29E5D4u, 0x29E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5DCu;
label_29e5dc:
    // 0x29e5dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29E5DCu;
    {
        const bool branch_taken_0x29e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e5dc) {
            ctx->pc = 0x29E620u;
            return;
        }
    }
    ctx->pc = 0x29E5E4u;
}
