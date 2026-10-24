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

// Function: entry_0036347c
// Address: 0x36347c - 0x3634e8
void entry_0036347c_0x36347c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036347c_0x36347c");
#endif

    switch (ctx->pc) {
        case 0x36348cu: goto label_36348c;
        default: break;
    }

    ctx->pc = 0x36347cu;

    // 0x36347c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x36347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363480: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x363480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x363484: 0xc0da030  jal         func_3680C0
    ctx->pc = 0x363484u;
    SET_GPR_U32(ctx, 31, 0x36348Cu);
    ctx->pc = 0x3680C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3680C0u, 0x363484u, 0x36348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36348Cu;
label_36348c:
    // 0x36348c: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x36348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363490: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x363490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x363494: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x363494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x363498: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36349c: 0x0  nop
    ctx->pc = 0x36349cu;
    // NOP
    // 0x3634a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3634a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3634a4: 0x0  nop
    ctx->pc = 0x3634a4u;
    // NOP
    // 0x3634a8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x3634A8u;
    {
        const bool branch_taken_0x3634a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3634a8) {
            ctx->pc = 0x3634E8u;
            return;
        }
    }
    ctx->pc = 0x3634B0u;
    // 0x3634b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3634b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3634b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3634b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3634bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3634bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3634c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3634c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3634c8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3634ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3634d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3634d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3634d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3634d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3634dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3634dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3634e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3634E0u;
    {
        const bool branch_taken_0x3634e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3634e0) {
            ctx->pc = 0x363518u;
            return;
        }
    }
    ctx->pc = 0x3634E8u;
}
