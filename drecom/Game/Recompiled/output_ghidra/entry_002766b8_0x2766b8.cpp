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

// Function: entry_002766b8
// Address: 0x2766b8 - 0x276710
void entry_002766b8_0x2766b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002766b8_0x2766b8");
#endif

    switch (ctx->pc) {
        case 0x2766d4u: goto label_2766d4;
        case 0x2766f4u: goto label_2766f4;
        default: break;
    }

    ctx->pc = 0x2766b8u;

    // 0x2766b8: 0x3c02bfae  lui         $v0, 0xBFAE
    ctx->pc = 0x2766b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49070 << 16));
    // 0x2766bc: 0x34425727  ori         $v0, $v0, 0x5727
    ctx->pc = 0x2766bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22311);
    // 0x2766c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2766c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2766c4: 0x0  nop
    ctx->pc = 0x2766c4u;
    // NOP
    // 0x2766c8: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x2766c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x2766cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2766CCu;
    SET_GPR_U32(ctx, 31, 0x2766D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2766CCu, 0x2766D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2766D4u;
label_2766d4:
    // 0x2766d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2766d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2766d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2766d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2766dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2766dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2766e0: 0x0  nop
    ctx->pc = 0x2766e0u;
    // NOP
    // 0x2766e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2766e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2766e8: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x2766e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x2766ec: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2766ECu;
    SET_GPR_U32(ctx, 31, 0x2766F4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2766ECu, 0x2766F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2766F4u;
label_2766f4:
    // 0x2766f4: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2766f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2766f8: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x2766f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2766fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2766fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276700: 0x0  nop
    ctx->pc = 0x276700u;
    // NOP
    // 0x276704: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276708: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x276708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x27670c: 0x0  nop
    ctx->pc = 0x27670cu;
    // NOP
    ctx->pc = 0x276710u;
}
