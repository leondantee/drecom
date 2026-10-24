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

// Function: entry_00350500
// Address: 0x350500 - 0x3505ac
void entry_00350500_0x350500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00350500_0x350500");
#endif

    switch (ctx->pc) {
        case 0x350510u: goto label_350510;
        case 0x35051cu: goto label_35051c;
        default: break;
    }

    ctx->pc = 0x350500u;

    // 0x350500: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350504: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350508: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x350508u;
    SET_GPR_U32(ctx, 31, 0x350510u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x350508u, 0x350510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350510u;
label_350510:
    // 0x350510: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350514: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x350514u;
    SET_GPR_U32(ctx, 31, 0x35051Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x350514u, 0x35051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35051Cu;
label_35051c:
    // 0x35051c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35051cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350520: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350524: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x350524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x350528: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x350528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x35052c: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x35052Cu;
    {
        const bool branch_taken_0x35052c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35052c) {
            ctx->pc = 0x3506B8u;
            return;
        }
    }
    ctx->pc = 0x350534u;
    // 0x350534: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350538: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x350538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35053c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x35053cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x350540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x350540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350544: 0x0  nop
    ctx->pc = 0x350544u;
    // NOP
    // 0x350548: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x350548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35054c: 0x0  nop
    ctx->pc = 0x35054cu;
    // NOP
    // 0x350550: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x350550u;
    {
        const bool branch_taken_0x350550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350550) {
            ctx->pc = 0x3505ACu;
            return;
        }
    }
    ctx->pc = 0x350558u;
    // 0x350558: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x350558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35055c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350560: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x350560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x350564: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x350564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x350568: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35056c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x35056cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x350570: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350574: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x350574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x350578: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35057c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35057cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x350580: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350584: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x350584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x350588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x350588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35058c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350590: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x350590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x350594: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x350594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350598: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35059c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x35059cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x3505a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3505a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3505a4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3505a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3505a8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x3505a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x3505acu;
}
