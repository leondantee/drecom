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

// Function: entry_00145300
// Address: 0x145300 - 0x145340
void entry_00145300_0x145300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145300_0x145300");
#endif

    switch (ctx->pc) {
        case 0x145308u: goto label_145308;
        case 0x145338u: goto label_145338;
        default: break;
    }

    ctx->pc = 0x145300u;

    // 0x145300: 0xc05d030  jal         func_1740C0
    ctx->pc = 0x145300u;
    SET_GPR_U32(ctx, 31, 0x145308u);
    ctx->pc = 0x1740C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1740C0u, 0x145300u, 0x145308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145308u;
label_145308:
    // 0x145308: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x145308u;
    {
        const bool branch_taken_0x145308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145308) {
            ctx->pc = 0x145340u;
            return;
        }
    }
    ctx->pc = 0x145310u;
    // 0x145310: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145314: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145318: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x145318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x14531c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x14531cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x145320: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x145320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x145324: 0x34460001  ori         $a2, $v0, 0x1
    ctx->pc = 0x145324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x145328: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x145328u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14532c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14532cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x145330: 0xc0965d0  jal         func_259740
    ctx->pc = 0x145330u;
    SET_GPR_U32(ctx, 31, 0x145338u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x145330u, 0x145338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145338u;
label_145338:
    // 0x145338: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x145338u;
    {
        const bool branch_taken_0x145338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145338) {
            ctx->pc = 0x145364u;
            return;
        }
    }
    ctx->pc = 0x145340u;
}
