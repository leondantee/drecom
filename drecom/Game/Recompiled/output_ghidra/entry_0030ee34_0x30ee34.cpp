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

// Function: entry_0030ee34
// Address: 0x30ee34 - 0x30eeb4
void entry_0030ee34_0x30ee34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030ee34_0x30ee34");
#endif

    switch (ctx->pc) {
        case 0x30ee54u: goto label_30ee54;
        case 0x30ee68u: goto label_30ee68;
        case 0x30ee80u: goto label_30ee80;
        case 0x30ee94u: goto label_30ee94;
        case 0x30eea8u: goto label_30eea8;
        default: break;
    }

    ctx->pc = 0x30ee34u;

    // 0x30ee34: 0x3c053f49  lui         $a1, 0x3F49
    ctx->pc = 0x30ee34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16201 << 16));
    // 0x30ee38: 0x34a20fdb  ori         $v0, $a1, 0xFDB
    ctx->pc = 0x30ee38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x30ee3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ee3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee40: 0x0  nop
    ctx->pc = 0x30ee40u;
    // NOP
    // 0x30ee44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30ee44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30ee48: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x30ee48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x30ee4c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30EE4Cu;
    SET_GPR_U32(ctx, 31, 0x30EE54u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30EE4Cu, 0x30EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE54u;
label_30ee54:
    // 0x30ee54: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x30ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x30ee58: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x30ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x30ee5c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x30ee5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x30ee60: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x30EE60u;
    SET_GPR_U32(ctx, 31, 0x30EE68u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x30EE68u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EE68u) { return; }
    ctx->pc = 0x30EE68u;
label_30ee68:
    // 0x30ee68: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x30ee68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ee6c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x30ee6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30ee70: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x30ee70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x30ee74: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x30ee74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x30ee78: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30EE78u;
    SET_GPR_U32(ctx, 31, 0x30EE80u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30EE80u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EE80u) { return; }
    ctx->pc = 0x30EE80u;
label_30ee80:
    // 0x30ee80: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x30ee80u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ee84: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x30ee84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x30ee88: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x30ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x30ee8c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30EE8Cu;
    SET_GPR_U32(ctx, 31, 0x30EE94u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30EE94u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EE94u) { return; }
    ctx->pc = 0x30EE94u;
label_30ee94:
    // 0x30ee94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30ee94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ee98: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x30ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x30ee9c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x30ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x30eea0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30EEA0u;
    SET_GPR_U32(ctx, 31, 0x30EEA8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30EEA8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EEA8u) { return; }
    ctx->pc = 0x30EEA8u;
label_30eea8:
    // 0x30eea8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30eea8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30eeac: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x30EEACu;
    {
        const bool branch_taken_0x30eeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30eeac) {
            ctx->pc = 0x30EF7Cu;
            return;
        }
    }
    ctx->pc = 0x30EEB4u;
}
