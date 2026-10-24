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

// Function: entry_0026e3d0
// Address: 0x26e3d0 - 0x26e430
void entry_0026e3d0_0x26e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026e3d0_0x26e3d0");
#endif

    switch (ctx->pc) {
        case 0x26e418u: goto label_26e418;
        default: break;
    }

    ctx->pc = 0x26e3d0u;

    // 0x26e3d0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e3d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26e3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26e3d8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e3dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26e3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26e3e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x26e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26e3e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e3e8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x26e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x26e3ec: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e3f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26e3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e3f4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x26e3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26e3f8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x26e3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e3fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x26e3fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e400: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26e400u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e404: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x26e404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e408: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x26e408u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e40c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x26e40cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e410: 0xc0bc958  jal         func_2F2560
    ctx->pc = 0x26E410u;
    SET_GPR_U32(ctx, 31, 0x26E418u);
    ctx->pc = 0x2F2560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2560u, 0x26E410u, 0x26E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E418u;
label_26e418:
    // 0x26e418: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x26e418u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e41c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26e41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e420: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26e420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e424: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x26e424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26e428: 0x3e00008  jr          $ra
    ctx->pc = 0x26E428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E430u;
}
