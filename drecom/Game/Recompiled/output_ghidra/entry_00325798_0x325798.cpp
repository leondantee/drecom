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

// Function: entry_00325798
// Address: 0x325798 - 0x3257e4
void entry_00325798_0x325798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325798_0x325798");
#endif

    switch (ctx->pc) {
        case 0x3257dcu: goto label_3257dc;
        default: break;
    }

    ctx->pc = 0x325798u;

    // 0x325798: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32579c: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x32579cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3257a0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3257a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3257a4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3257a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3257a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3257a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3257ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3257acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3257b0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x3257b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3257b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3257b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3257b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3257b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3257bc: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x3257bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3257c0: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x3257c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3257c4: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x3257c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3257c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3257c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3257cc: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x3257ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3257d0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x3257d0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3257d4: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x3257D4u;
    SET_GPR_U32(ctx, 31, 0x3257DCu);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x3257D4u, 0x3257DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3257DCu;
label_3257dc:
    // 0x3257dc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3257DCu;
    {
        const bool branch_taken_0x3257dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3257dc) {
            ctx->pc = 0x3258CCu;
            return;
        }
    }
    ctx->pc = 0x3257E4u;
}
