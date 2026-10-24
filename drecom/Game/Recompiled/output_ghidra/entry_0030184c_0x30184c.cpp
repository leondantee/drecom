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

// Function: entry_0030184c
// Address: 0x30184c - 0x3018c0
void entry_0030184c_0x30184c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030184c_0x30184c");
#endif

    switch (ctx->pc) {
        case 0x301864u: goto label_301864;
        case 0x301880u: goto label_301880;
        case 0x301890u: goto label_301890;
        case 0x3018a0u: goto label_3018a0;
        case 0x3018b0u: goto label_3018b0;
        default: break;
    }

    ctx->pc = 0x30184cu;

    // 0x30184c: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x30184cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x301850: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x301850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x301854: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x301858: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x301858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30185c: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x30185Cu;
    SET_GPR_U32(ctx, 31, 0x301864u);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x30185Cu, 0x301864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301864u;
label_301864:
    // 0x301864: 0x3c02bfc8  lui         $v0, 0xBFC8
    ctx->pc = 0x301864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49096 << 16));
    // 0x301868: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x301868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x30186c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30186cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x301870: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x301870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x301874: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x301874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x301878: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x301878u;
    SET_GPR_U32(ctx, 31, 0x301880u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x301880u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x301880u) { return; }
    ctx->pc = 0x301880u;
label_301880:
    // 0x301880: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x301880u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x301884: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x301884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x301888: 0xc040c9e  jal         func_103278
    ctx->pc = 0x301888u;
    SET_GPR_U32(ctx, 31, 0x301890u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x301890u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x301890u) { return; }
    ctx->pc = 0x301890u;
label_301890:
    // 0x301890: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x301890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x301894: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x301894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x301898: 0xc040c9e  jal         func_103278
    ctx->pc = 0x301898u;
    SET_GPR_U32(ctx, 31, 0x3018A0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3018A0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3018A0u) { return; }
    ctx->pc = 0x3018A0u;
label_3018a0:
    // 0x3018a0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3018a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3018a4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x3018a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3018a8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3018A8u;
    SET_GPR_U32(ctx, 31, 0x3018B0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3018B0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3018B0u) { return; }
    ctx->pc = 0x3018B0u;
label_3018b0:
    // 0x3018b0: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x3018b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
    // 0x3018b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3018b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3018b8: 0x0  nop
    ctx->pc = 0x3018b8u;
    // NOP
    // 0x3018bc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3018bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x3018c0u;
}
