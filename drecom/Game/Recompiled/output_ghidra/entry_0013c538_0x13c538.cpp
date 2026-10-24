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

// Function: entry_0013c538
// Address: 0x13c538 - 0x13c580
void entry_0013c538_0x13c538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c538_0x13c538");
#endif

    ctx->pc = 0x13c538u;

    // 0x13c538: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13c538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13c53c: 0x26f70040  addiu       $s7, $s7, 0x40
    ctx->pc = 0x13c53cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x13c540: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x13c540u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x13c544: 0x16c0ffe4  bnez        $s6, . + 4 + (-0x1C << 2)
    ctx->pc = 0x13C544u;
    {
        const bool branch_taken_0x13c544 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c544) {
            ctx->pc = 0x13C4D8u;
            return;
        }
    }
    ctx->pc = 0x13C54Cu;
    // 0x13c54c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x13c54cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13c550: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13c550u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13c554: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13c554u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c558: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13c558u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c55c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13c55cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c560: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13c560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c564: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13c564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c568: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c56c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c574: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x13c574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13c578: 0x3e00008  jr          $ra
    ctx->pc = 0x13C578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C580u;
}
