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

// Function: entry_002a37f0
// Address: 0x2a37f0 - 0x2a3854
void entry_002a37f0_0x2a37f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a37f0_0x2a37f0");
#endif

    switch (ctx->pc) {
        case 0x2a3834u: goto label_2a3834;
        case 0x2a3850u: goto label_2a3850;
        default: break;
    }

    ctx->pc = 0x2a37f0u;

    // 0x2a37f0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a37f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a37f4: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x2a37f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x2a37f8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2a37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a37fc: 0xa482127e  sh          $v0, 0x127E($a0)
    ctx->pc = 0x2a37fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a3800: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x2a3800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a3804: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a3804u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a3808: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x2a3808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a380c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A380Cu;
    {
        const bool branch_taken_0x2a380c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a380c) {
            ctx->pc = 0x2A3854u;
            return;
        }
    }
    ctx->pc = 0x2A3814u;
    // 0x2a3814: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x2a3814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x2a3818: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a3818u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a381c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3820: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a3820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a3824: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a3824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3828: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a382c: 0xc0c4b74  jal         func_312DD0
    ctx->pc = 0x2A382Cu;
    SET_GPR_U32(ctx, 31, 0x2A3834u);
    ctx->pc = 0x312DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312DD0u, 0x2A382Cu, 0x2A3834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3834u;
label_2a3834:
    // 0x2a3834: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a3834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a3838: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a383c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a383cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3840: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a3840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3844: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3848: 0xc0c4b74  jal         func_312DD0
    ctx->pc = 0x2A3848u;
    SET_GPR_U32(ctx, 31, 0x2A3850u);
    ctx->pc = 0x312DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312DD0u, 0x2A3848u, 0x2A3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3850u;
label_2a3850:
    // 0x2a3850: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a3850u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2a3854u;
}
