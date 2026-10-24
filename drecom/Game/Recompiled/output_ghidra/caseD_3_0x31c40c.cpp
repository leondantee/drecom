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

// Function: caseD_3
// Address: 0x31c40c - 0x31c46c
void caseD_3_0x31c40c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x31c40c");
#endif

    switch (ctx->pc) {
        case 0x31c414u: goto label_31c414;
        default: break;
    }

    ctx->pc = 0x31c40cu;

    // 0x31c40c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x31C40Cu;
    SET_GPR_U32(ctx, 31, 0x31C414u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x31C40Cu, 0x31C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C414u;
label_31c414:
    // 0x31c414: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x31c414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c418: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x31c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31c41c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x31c41cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31c420: 0x0  nop
    ctx->pc = 0x31c420u;
    // NOP
    // 0x31c424: 0x0  nop
    ctx->pc = 0x31c424u;
    // NOP
    // 0x31c428: 0x3810  mfhi        $a3
    ctx->pc = 0x31c428u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x31c42c: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x31c42cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x31c430: 0x873023  subu        $a2, $a0, $a3
    ctx->pc = 0x31c430u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x31c434: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x31c434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31c438: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x31c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x31c43c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c440: 0xac621330  sw          $v0, 0x1330($v1)
    ctx->pc = 0x31c440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 2));
    // 0x31c444: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c448: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x31c448u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x31c44c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x31c44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x31c450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c454: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x31C454u;
    {
        const bool branch_taken_0x31c454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31c454) {
            ctx->pc = 0x31C5D4u;
            return;
        }
    }
    ctx->pc = 0x31C45Cu;
    // 0x31c45c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C45Cu;
    {
        const bool branch_taken_0x31c45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c45c) {
            ctx->pc = 0x31C46Cu;
            return;
        }
    }
    ctx->pc = 0x31C464u;
    // 0x31c464: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x31C464u;
    {
        const bool branch_taken_0x31c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c464) {
            ctx->pc = 0x31C6B4u;
            return;
        }
    }
    ctx->pc = 0x31C46Cu;
}
