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

// Function: entry_0026fd90
// Address: 0x26fd90 - 0x26fdf0
void entry_0026fd90_0x26fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026fd90_0x26fd90");
#endif

    switch (ctx->pc) {
        case 0x26fde8u: goto label_26fde8;
        default: break;
    }

    ctx->pc = 0x26fd90u;

    // 0x26fd90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fd94: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x26fd94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x26fd98: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x26fd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x26fd9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26fd9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x26fda0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x26fda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x26fda4: 0x1460015a  bnez        $v1, . + 4 + (0x15A << 2)
    ctx->pc = 0x26FDA4u;
    {
        const bool branch_taken_0x26fda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fda4) {
            ctx->pc = 0x270310u;
            return;
        }
    }
    ctx->pc = 0x26FDACu;
    // 0x26fdac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26fdb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26fdb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26fdb4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x26fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x26fdb8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x26fdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x26fdbc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26fdbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26fdc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fdc4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x26fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26fdc8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x26fdcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26fdccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26fdd0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26fdd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26fdd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fdd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26fdd8: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x26fdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x26fddc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x26fddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26fde0: 0xc086488  jal         func_219220
    ctx->pc = 0x26FDE0u;
    SET_GPR_U32(ctx, 31, 0x26FDE8u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x26FDE0u, 0x26FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FDE8u;
label_26fde8:
    // 0x26fde8: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x26FDE8u;
    {
        const bool branch_taken_0x26fde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fde8) {
            ctx->pc = 0x270310u;
            return;
        }
    }
    ctx->pc = 0x26FDF0u;
}
