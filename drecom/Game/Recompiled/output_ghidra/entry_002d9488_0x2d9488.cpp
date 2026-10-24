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

// Function: entry_002d9488
// Address: 0x2d9488 - 0x2d94d0
void entry_002d9488_0x2d9488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9488_0x2d9488");
#endif

    switch (ctx->pc) {
        case 0x2d94bcu: goto label_2d94bc;
        default: break;
    }

    ctx->pc = 0x2d9488u;

    // 0x2d9488: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2d9488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2d948c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2d948cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2d9490: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d9490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d9494: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2d9494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9498: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d9498u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d949c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2d949cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d94a0: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2d94a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d94a4: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2d94a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d94a8: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x2d94a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d94ac: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2d94acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d94b0: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x2d94b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d94b4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2D94B4u;
    SET_GPR_U32(ctx, 31, 0x2D94BCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2D94B4u, 0x2D94BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D94BCu;
label_2d94bc:
    // 0x2d94bc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2d94bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d94c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d94c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d94c4: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2d94c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d94c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D94C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D94C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D94D0u;
}
