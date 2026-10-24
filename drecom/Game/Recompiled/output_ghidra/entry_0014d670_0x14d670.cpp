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

// Function: entry_0014d670
// Address: 0x14d670 - 0x14d6cc
void entry_0014d670_0x14d670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d670_0x14d670");
#endif

    switch (ctx->pc) {
        case 0x14d6c4u: goto label_14d6c4;
        default: break;
    }

    ctx->pc = 0x14d670u;

    // 0x14d670: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d674: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14d674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14d678: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14d678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x14d67c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d680: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14D680u;
    {
        const bool branch_taken_0x14d680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d680) {
            ctx->pc = 0x14D6CCu;
            return;
        }
    }
    ctx->pc = 0x14D688u;
    // 0x14d688: 0x93828098  lbu         $v0, -0x7F68($gp)
    ctx->pc = 0x14d688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934680)));
    // 0x14d68c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x14d68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x14d690: 0xa3828098  sb          $v0, -0x7F68($gp)
    ctx->pc = 0x14d690u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934680), (uint8_t)GPR_U32(ctx, 2));
    // 0x14d694: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d698: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x14d698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d69c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d6a0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x14d6a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x14d6a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14d6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14d6a8: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x14d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x14d6ac: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x14d6acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14d6b0: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x14d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x14d6b4: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x14d6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x14d6b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14d6b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14d6bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14D6BCu;
    SET_GPR_U32(ctx, 31, 0x14D6C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14D6BCu, 0x14D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6C4u;
label_14d6c4:
    // 0x14d6c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14D6C4u;
    {
        const bool branch_taken_0x14d6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d6c4) {
            ctx->pc = 0x14D6FCu;
            return;
        }
    }
    ctx->pc = 0x14D6CCu;
}
