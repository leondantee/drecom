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

// Function: entry_0014ee98
// Address: 0x14ee98 - 0x14eefc
void entry_0014ee98_0x14ee98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ee98_0x14ee98");
#endif

    ctx->pc = 0x14ee98u;

    // 0x14ee98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ee9c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x14ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14eea0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14eea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14eea4: 0x10600148  beqz        $v1, . + 4 + (0x148 << 2)
    ctx->pc = 0x14EEA4u;
    {
        const bool branch_taken_0x14eea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eea4) {
            ctx->pc = 0x14F3C8u;
            return;
        }
    }
    ctx->pc = 0x14EEACu;
    // 0x14eeac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14eeb0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14eeb4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x14eeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x14eeb8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14EEB8u;
    {
        const bool branch_taken_0x14eeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eeb8) {
            ctx->pc = 0x14EEFCu;
            return;
        }
    }
    ctx->pc = 0x14EEC0u;
    // 0x14eec0: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x14eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x14eec4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14eec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14eec8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14eecc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14eeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14eed0: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x14eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x14eed4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14eed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x14eed8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14eed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14eedc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14eee0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x14eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x14eee4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14eee4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14eee8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14eee8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14eeec: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x14eeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x14eef0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14eef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14eef4: 0xc086488  jal         func_219220
    ctx->pc = 0x14EEF4u;
    SET_GPR_U32(ctx, 31, 0x14EEFCu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x14EEF4u, 0x14EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EEFCu;
}
