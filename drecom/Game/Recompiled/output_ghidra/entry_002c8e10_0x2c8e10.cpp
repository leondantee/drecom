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

// Function: entry_002c8e10
// Address: 0x2c8e10 - 0x2c8efc
void entry_002c8e10_0x2c8e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c8e10_0x2c8e10");
#endif

    switch (ctx->pc) {
        case 0x2c8e70u: goto label_2c8e70;
        default: break;
    }

    ctx->pc = 0x2c8e10u;

    // 0x2c8e10: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c8e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c8e14: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c8e14u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8e18: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c8e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c8e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8e20: 0x0  nop
    ctx->pc = 0x2c8e20u;
    // NOP
    // 0x2c8e24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8e28: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c8e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c8e2c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c8e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c8e30: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x2c8e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8e34: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8e38: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8e3c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c8e40: 0x3446fa35  ori         $a2, $v0, 0xFA35
    ctx->pc = 0x2c8e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c8e44: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x2c8e44u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2c8e48: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2c8e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2c8e4c: 0x24e40120  addiu       $a0, $a3, 0x120
    ctx->pc = 0x2c8e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x2c8e50: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c8e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8e54: 0xc4ad00d0  lwc1        $f13, 0xD0($a1)
    ctx->pc = 0x2c8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c8e58: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c8e5c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c8e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c8e60: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x2c8e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2c8e64: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x2c8e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2c8e68: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x2C8E68u;
    SET_GPR_U32(ctx, 31, 0x2C8E70u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x2C8E68u, 0x2C8E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E70u;
label_2c8e70:
    // 0x2c8e70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c8e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c8e74: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c8e74u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8e78: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c8e7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c8e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8e80: 0x0  nop
    ctx->pc = 0x2c8e80u;
    // NOP
    // 0x2c8e84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c8e84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c8e88: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c8e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c8e8c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c8e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c8e90: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8e94: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x2c8e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2c8e98: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c8e9c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x2c8e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c8ea0: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C8EA0u;
    {
        const bool branch_taken_0x2c8ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8ea0) {
            ctx->pc = 0x2C8EFCu;
            return;
        }
    }
    ctx->pc = 0x2C8EA8u;
    // 0x2c8ea8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c8ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8eac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8eb0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2c8eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c8eb4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8eb8: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2c8eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c8ebc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8ec0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8ec4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c8ec8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c8ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c8ecc: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c8eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c8ed0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8ed4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8ed8: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x2c8ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c8edc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8ee0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8ee4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c8ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c8ee8: 0x24060f06  addiu       $a2, $zero, 0xF06
    ctx->pc = 0x2c8ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3846));
    // 0x2c8eec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8ef0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c8ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c8ef4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C8EF4u;
    SET_GPR_U32(ctx, 31, 0x2C8EFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C8EF4u, 0x2C8EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8EFCu;
}
