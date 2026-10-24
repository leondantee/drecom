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

// Function: entry_0017a54c
// Address: 0x17a54c - 0x17a58c
void entry_0017a54c_0x17a54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a54c_0x17a54c");
#endif

    switch (ctx->pc) {
        case 0x17a558u: goto label_17a558;
        default: break;
    }

    ctx->pc = 0x17a54cu;

    // 0x17a54c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x17a54cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a550: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x17A550u;
    SET_GPR_U32(ctx, 31, 0x17A558u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x17A558u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A558u) { return; }
    ctx->pc = 0x17A558u;
label_17a558:
    // 0x17a558: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x17a558u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17a55c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17a55cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17a560: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17a560u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17a564: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17a564u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17a568: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17a568u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a56c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17a56cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a570: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a574: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a57c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a580: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x17a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17a584: 0x3e00008  jr          $ra
    ctx->pc = 0x17A584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A58Cu;
}
