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

// Function: entry_001d452c
// Address: 0x1d452c - 0x1d45a4
void entry_001d452c_0x1d452c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d452c_0x1d452c");
#endif

    switch (ctx->pc) {
        case 0x1d4544u: goto label_1d4544;
        case 0x1d4560u: goto label_1d4560;
        default: break;
    }

    ctx->pc = 0x1d452cu;

    // 0x1d452c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1d452cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d4530: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4530u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4534: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1d4534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1d4538: 0x2465e550  addiu       $a1, $v1, -0x1AB0
    ctx->pc = 0x1d4538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960464));
    // 0x1d453c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D453Cu;
    SET_GPR_U32(ctx, 31, 0x1D4544u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D4544u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4544u) { return; }
    ctx->pc = 0x1D4544u;
label_1d4544:
    // 0x1d4544: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1d4544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4548: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d454c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1d454cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1d4550: 0x2442e510  addiu       $v0, $v0, -0x1AF0
    ctx->pc = 0x1d4550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1d4554: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d4554u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4558: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D4558u;
    SET_GPR_U32(ctx, 31, 0x1D4560u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D4560u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4560u) { return; }
    ctx->pc = 0x1D4560u;
label_1d4560:
    // 0x1d4560: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d4560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d4564: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d4564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4568: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d4568u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d456c: 0x8fb50170  lw          $s5, 0x170($sp)
    ctx->pc = 0x1d456cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d4570: 0x97a2015e  lhu         $v0, 0x15E($sp)
    ctx->pc = 0x1d4570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 350)));
    // 0x1d4574: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d4574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d457c: 0x1462008a  bne         $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1D457Cu;
    {
        const bool branch_taken_0x1d457c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d457c) {
            ctx->pc = 0x1D47A8u;
            return;
        }
    }
    ctx->pc = 0x1D4584u;
    // 0x1d4584: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d4584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d4588: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d4588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d458c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1d458cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4590: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d4590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d4594: 0x101882  srl         $v1, $s0, 2
    ctx->pc = 0x1d4594u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1d4598: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1d4598u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d459c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1D459Cu;
    {
        const bool branch_taken_0x1d459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d459c) {
            ctx->pc = 0x1D4718u;
            return;
        }
    }
    ctx->pc = 0x1D45A4u;
}
