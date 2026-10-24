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

// Function: entry_002dfd68
// Address: 0x2dfd68 - 0x2dfdc8
void entry_002dfd68_0x2dfd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dfd68_0x2dfd68");
#endif

    switch (ctx->pc) {
        case 0x2dfdc0u: goto label_2dfdc0;
        default: break;
    }

    ctx->pc = 0x2dfd68u;

    // 0x2dfd68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfd6c: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2dfd6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2dfd70: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2dfd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2dfd74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2dfd74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2dfd78: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2dfd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2dfd7c: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x2DFD7Cu;
    {
        const bool branch_taken_0x2dfd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfd7c) {
            ctx->pc = 0x2DFFACu;
            return;
        }
    }
    ctx->pc = 0x2DFD84u;
    // 0x2dfd84: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x2dfd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x2dfd88: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2dfd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2dfd8c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dfd8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dfd90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfd94: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2dfd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dfd98: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dfd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2dfd9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dfd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dfda0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dfda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2dfda4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dfda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dfda8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2dfda8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dfdac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dfdacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dfdb0: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x2dfdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2dfdb4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2dfdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dfdb8: 0xc086488  jal         func_219220
    ctx->pc = 0x2DFDB8u;
    SET_GPR_U32(ctx, 31, 0x2DFDC0u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2DFDB8u, 0x2DFDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFDC0u;
label_2dfdc0:
    // 0x2dfdc0: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2DFDC0u;
    {
        const bool branch_taken_0x2dfdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfdc0) {
            ctx->pc = 0x2DFFACu;
            return;
        }
    }
    ctx->pc = 0x2DFDC8u;
}
