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

// Function: entry_00291748
// Address: 0x291748 - 0x291790
void entry_00291748_0x291748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291748_0x291748");
#endif

    switch (ctx->pc) {
        case 0x29176cu: goto label_29176c;
        case 0x291784u: goto label_291784;
        default: break;
    }

    ctx->pc = 0x291748u;

    // 0x291748: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x291748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x29174c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x29174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x291750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291754: 0x0  nop
    ctx->pc = 0x291754u;
    // NOP
    // 0x291758: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x291758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29175c: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x29175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291760: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x291760u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x291764: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x291764u;
    SET_GPR_U32(ctx, 31, 0x29176Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x291764u, 0x29176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29176Cu;
label_29176c:
    // 0x29176c: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x29176cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x291770: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x291770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x291774: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x291774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x291778: 0xc7ac01ec  lwc1        $f12, 0x1EC($sp)
    ctx->pc = 0x291778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29177c: 0xc040ce4  jal         func_103390
    ctx->pc = 0x29177Cu;
    SET_GPR_U32(ctx, 31, 0x291784u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x291784u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x291784u) { return; }
    ctx->pc = 0x291784u;
label_291784:
    // 0x291784: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x291784u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x291788: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x291788u;
    {
        const bool branch_taken_0x291788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291788) {
            ctx->pc = 0x2917D8u;
            return;
        }
    }
    ctx->pc = 0x291790u;
}
