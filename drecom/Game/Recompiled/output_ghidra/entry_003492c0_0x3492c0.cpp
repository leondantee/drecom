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

// Function: entry_003492c0
// Address: 0x3492c0 - 0x349354
void entry_003492c0_0x3492c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003492c0_0x3492c0");
#endif

    switch (ctx->pc) {
        case 0x3492d0u: goto label_3492d0;
        case 0x3492dcu: goto label_3492dc;
        default: break;
    }

    ctx->pc = 0x3492c0u;

    // 0x3492c0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3492c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3492c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3492c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3492c8: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3492C8u;
    SET_GPR_U32(ctx, 31, 0x3492D0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3492C8u, 0x3492D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492D0u;
label_3492d0:
    // 0x3492d0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3492d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3492d4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3492D4u;
    SET_GPR_U32(ctx, 31, 0x3492DCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3492D4u, 0x3492DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492DCu;
label_3492dc:
    // 0x3492dc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3492dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3492e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3492e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3492e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3492e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3492e8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3492E8u;
    {
        const bool branch_taken_0x3492e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3492e8) {
            ctx->pc = 0x349354u;
            return;
        }
    }
    ctx->pc = 0x3492F0u;
    // 0x3492f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3492f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3492f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3492f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3492f8: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x3492f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3492fc: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x3492fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x349300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349304: 0x0  nop
    ctx->pc = 0x349304u;
    // NOP
    // 0x349308: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x349308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34930c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34930cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349310: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x349310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349314: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x349314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349318: 0x0  nop
    ctx->pc = 0x349318u;
    // NOP
    // 0x34931c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x34931Cu;
    {
        const bool branch_taken_0x34931c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34931c) {
            ctx->pc = 0x349354u;
            return;
        }
    }
    ctx->pc = 0x349324u;
    // 0x349324: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x349324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349328: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34932c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34932cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x349330: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x349330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x349334: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349338: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x349338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34933c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349340: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x349340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x349344: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349348: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x349348u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34934c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349350: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x349350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x349354u;
}
