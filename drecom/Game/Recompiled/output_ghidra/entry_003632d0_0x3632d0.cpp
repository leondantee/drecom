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

// Function: entry_003632d0
// Address: 0x3632d0 - 0x363338
void entry_003632d0_0x3632d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003632d0_0x3632d0");
#endif

    switch (ctx->pc) {
        case 0x3632e0u: goto label_3632e0;
        default: break;
    }

    ctx->pc = 0x3632d0u;

    // 0x3632d0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3632d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3632d4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x3632d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x3632d8: 0xc0da030  jal         func_3680C0
    ctx->pc = 0x3632D8u;
    SET_GPR_U32(ctx, 31, 0x3632E0u);
    ctx->pc = 0x3680C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3680C0u, 0x3632D8u, 0x3632E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3632E0u;
label_3632e0:
    // 0x3632e0: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x3632e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3632e4: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3632e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x3632e8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3632e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3632ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3632ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3632f0: 0x0  nop
    ctx->pc = 0x3632f0u;
    // NOP
    // 0x3632f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3632f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3632f8: 0x0  nop
    ctx->pc = 0x3632f8u;
    // NOP
    // 0x3632fc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x3632FCu;
    {
        const bool branch_taken_0x3632fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3632fc) {
            ctx->pc = 0x363338u;
            return;
        }
    }
    ctx->pc = 0x363304u;
    // 0x363304: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x363304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363308: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36330c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36330cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363310: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363314: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x363314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x363318: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36331c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36331cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363320: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363324: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363328: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36332c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36332cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363330: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x363330u;
    {
        const bool branch_taken_0x363330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363330) {
            ctx->pc = 0x363518u;
            return;
        }
    }
    ctx->pc = 0x363338u;
}
