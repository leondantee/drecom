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

// Function: entry_001d4718
// Address: 0x1d4718 - 0x1d47a8
void entry_001d4718_0x1d4718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4718_0x1d4718");
#endif

    switch (ctx->pc) {
        case 0x1d4730u: goto label_1d4730;
        case 0x1d4740u: goto label_1d4740;
        case 0x1d4750u: goto label_1d4750;
        case 0x1d4760u: goto label_1d4760;
        case 0x1d4770u: goto label_1d4770;
        case 0x1d4780u: goto label_1d4780;
        case 0x1d4790u: goto label_1d4790;
        case 0x1d47a0u: goto label_1d47a0;
        default: break;
    }

    ctx->pc = 0x1d4718u;

    // 0x1d4718: 0x1600ffa2  bnez        $s0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x1D4718u;
    {
        const bool branch_taken_0x1d4718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4718) {
            ctx->pc = 0x1D45A4u;
            return;
        }
    }
    ctx->pc = 0x1D4720u;
    // 0x1d4720: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1d4720u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d4724: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1d4724u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1d4728: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4728u;
    SET_GPR_U32(ctx, 31, 0x1D4730u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4730u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4730u) { return; }
    ctx->pc = 0x1D4730u;
label_1d4730:
    // 0x1d4730: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1d4730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d4734: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x1d4734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1d4738: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4738u;
    SET_GPR_U32(ctx, 31, 0x1D4740u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4740u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4740u) { return; }
    ctx->pc = 0x1D4740u;
label_1d4740:
    // 0x1d4740: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1d4740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d4744: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x1d4744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1d4748: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4748u;
    SET_GPR_U32(ctx, 31, 0x1D4750u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4750u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4750u) { return; }
    ctx->pc = 0x1D4750u;
label_1d4750:
    // 0x1d4750: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1d4750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d4754: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x1d4754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x1d4758: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4758u;
    SET_GPR_U32(ctx, 31, 0x1D4760u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4760u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4760u) { return; }
    ctx->pc = 0x1D4760u;
label_1d4760:
    // 0x1d4760: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1d4760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1d4764: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x1d4764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1d4768: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4768u;
    SET_GPR_U32(ctx, 31, 0x1D4770u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4770u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4770u) { return; }
    ctx->pc = 0x1D4770u;
label_1d4770:
    // 0x1d4770: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1d4770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1d4774: 0x26a50050  addiu       $a1, $s5, 0x50
    ctx->pc = 0x1d4774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x1d4778: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4778u;
    SET_GPR_U32(ctx, 31, 0x1D4780u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4780u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4780u) { return; }
    ctx->pc = 0x1D4780u;
label_1d4780:
    // 0x1d4780: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1d4780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1d4784: 0x26a50060  addiu       $a1, $s5, 0x60
    ctx->pc = 0x1d4784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1d4788: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4788u;
    SET_GPR_U32(ctx, 31, 0x1D4790u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4790u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4790u) { return; }
    ctx->pc = 0x1D4790u;
label_1d4790:
    // 0x1d4790: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x1d4790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1d4794: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x1d4794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x1d4798: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4798u;
    SET_GPR_U32(ctx, 31, 0x1D47A0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D47A0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D47A0u) { return; }
    ctx->pc = 0x1D47A0u;
label_1d47a0:
    // 0x1d47a0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1D47A0u;
    {
        const bool branch_taken_0x1d47a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d47a0) {
            ctx->pc = 0x1D48A8u;
            return;
        }
    }
    ctx->pc = 0x1D47A8u;
}
