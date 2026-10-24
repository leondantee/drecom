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

// Function: entry_002594f0
// Address: 0x2594f0 - 0x259554
void entry_002594f0_0x2594f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002594f0_0x2594f0");
#endif

    ctx->pc = 0x2594f0u;

    // 0x2594f0: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x2594f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2594f4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2594f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2594f8: 0x1640ffb5  bnez        $s2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2594F8u;
    {
        const bool branch_taken_0x2594f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2594f8) {
            ctx->pc = 0x2593D0u;
            return;
        }
    }
    ctx->pc = 0x259500u;
    // 0x259500: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x259500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x259504: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x259504u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x259508: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x259508u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x25950c: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x25950cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x259510: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259514: 0x2e3182b  sltu        $v1, $s7, $v1
    ctx->pc = 0x259514u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x259518: 0x1460ff96  bnez        $v1, . + 4 + (-0x6A << 2)
    ctx->pc = 0x259518u;
    {
        const bool branch_taken_0x259518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259518) {
            ctx->pc = 0x259374u;
            return;
        }
    }
    ctx->pc = 0x259520u;
    // 0x259520: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x259520u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x259524: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x259524u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259528: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x259528u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25952c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25952cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259530: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x259530u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259534: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x259534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259538: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x259538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25953c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25953cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259548: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x259548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25954c: 0x3e00008  jr          $ra
    ctx->pc = 0x25954Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25954Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259554u;
}
