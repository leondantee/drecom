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

// Function: entry_00276848
// Address: 0x276848 - 0x2768a0
void entry_00276848_0x276848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276848_0x276848");
#endif

    switch (ctx->pc) {
        case 0x276864u: goto label_276864;
        case 0x276884u: goto label_276884;
        default: break;
    }

    ctx->pc = 0x276848u;

    // 0x276848: 0x3c02bfae  lui         $v0, 0xBFAE
    ctx->pc = 0x276848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49070 << 16));
    // 0x27684c: 0x34425727  ori         $v0, $v0, 0x5727
    ctx->pc = 0x27684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22311);
    // 0x276850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276854: 0x0  nop
    ctx->pc = 0x276854u;
    // NOP
    // 0x276858: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x276858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x27685c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27685Cu;
    SET_GPR_U32(ctx, 31, 0x276864u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27685Cu, 0x276864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276864u;
label_276864:
    // 0x276864: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x276864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x276868: 0x34450fdb  ori         $a1, $v0, 0xFDB
    ctx->pc = 0x276868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27686c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x27686cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276870: 0x0  nop
    ctx->pc = 0x276870u;
    // NOP
    // 0x276874: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276878: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x276878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x27687c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27687Cu;
    SET_GPR_U32(ctx, 31, 0x276884u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27687Cu, 0x276884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276884u;
label_276884:
    // 0x276884: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x276884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x276888: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x276888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x27688c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x27688cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276890: 0x0  nop
    ctx->pc = 0x276890u;
    // NOP
    // 0x276894: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276898: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x276898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x27689c: 0x0  nop
    ctx->pc = 0x27689cu;
    // NOP
    ctx->pc = 0x2768a0u;
}
