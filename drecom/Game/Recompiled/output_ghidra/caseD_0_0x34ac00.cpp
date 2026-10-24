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

// Function: caseD_0
// Address: 0x34ac00 - 0x34accc
void caseD_0_0x34ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x34ac00");
#endif

    switch (ctx->pc) {
        case 0x34ac2cu: goto label_34ac2c;
        case 0x34ac84u: goto label_34ac84;
        default: break;
    }

    ctx->pc = 0x34ac00u;

    // 0x34ac00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ac04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac08: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34ac08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ac0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34ac18: 0x24060f1b  addiu       $a2, $zero, 0xF1B
    ctx->pc = 0x34ac18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3867));
    // 0x34ac1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34ac1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ac20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34ac20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34ac24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34AC24u;
    SET_GPR_U32(ctx, 31, 0x34AC2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34AC24u, 0x34AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC2Cu;
label_34ac2c:
    // 0x34ac2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac30: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x34ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x34ac34: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34ac34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34ac38: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x34ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34ac3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ac40: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34ac44: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x34ac44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34ac48: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x34ac48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x34ac4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac50: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x34ac50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x34ac54: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x34ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x34ac58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34ac58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ac5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac60: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ac64: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x34ac64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x34ac68: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x34ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x34ac6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34ac6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ac70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac74: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34ac74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34ac78: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x34ac78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x34ac7c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34AC7Cu;
    SET_GPR_U32(ctx, 31, 0x34AC84u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34AC7Cu, 0x34AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC84u;
label_34ac84:
    // 0x34ac84: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34ac84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ac88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34ac88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34ac8c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34ac8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34ac90: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34AC90u;
    {
        const bool branch_taken_0x34ac90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ac90) {
            ctx->pc = 0x34ACCCu;
            return;
        }
    }
    ctx->pc = 0x34AC98u;
    // 0x34ac98: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x34ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x34ac9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34ac9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34aca0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aca4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34aca8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34aca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34acac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34acb0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x34acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34acb4: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x34acb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x34acb8: 0x3c04428c  lui         $a0, 0x428C
    ctx->pc = 0x34acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17036 << 16));
    // 0x34acbc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34acbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34acc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34acc4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34acc8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x34acc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    ctx->pc = 0x34acccu;
}
