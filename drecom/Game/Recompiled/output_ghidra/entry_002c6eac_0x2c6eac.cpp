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

// Function: entry_002c6eac
// Address: 0x2c6eac - 0x2c6fbc
void entry_002c6eac_0x2c6eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6eac_0x2c6eac");
#endif

    switch (ctx->pc) {
        case 0x2c6ed8u: goto label_2c6ed8;
        case 0x2c6f60u: goto label_2c6f60;
        default: break;
    }

    ctx->pc = 0x2c6eacu;

    // 0x2c6eac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6eb0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6eb4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c6eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6eb8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6ebc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c6ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6ec0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c6ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c6ec4: 0x24063c06  addiu       $a2, $zero, 0x3C06
    ctx->pc = 0x2c6ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15366));
    // 0x2c6ec8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c6ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6ecc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c6eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c6ed0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C6ED0u;
    SET_GPR_U32(ctx, 31, 0x2C6ED8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C6ED0u, 0x2C6ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6ED8u;
label_2c6ed8:
    // 0x2c6ed8: 0x3c03c1f0  lui         $v1, 0xC1F0
    ctx->pc = 0x2c6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49648 << 16));
    // 0x2c6edc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6ee0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c6ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6ee4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6ee8: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x2c6ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x2c6eec: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2c6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2c6ef0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2c6ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2c6ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6ef8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6efc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6f00: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c6f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c6f04: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6f08: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c6f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6f0c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c6f10: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c6f14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c6f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c6f18: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2c6f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x2c6f1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6f20: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6f24: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6f28: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c6f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c6f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6f30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6f34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6f38: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c6f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2c6f3c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2c6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c6f40: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c6f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6f44: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2c6f44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c6f48: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2c6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2c6f4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6f50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6f54: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2c6f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2c6f58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6F58u;
    SET_GPR_U32(ctx, 31, 0x2C6F60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6F58u, 0x2C6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F60u;
label_2c6f60:
    // 0x2c6f60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c6f60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c6f64: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2c6f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c6f68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c6f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c6f6c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C6F6Cu;
    {
        const bool branch_taken_0x2c6f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6f6c) {
            ctx->pc = 0x2C6FBCu;
            return;
        }
    }
    ctx->pc = 0x2C6F74u;
    // 0x2c6f74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c6f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c6f78: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x2c6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c6f7c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c6f80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c6f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c6f84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6F84u;
    {
        const bool branch_taken_0x2c6f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6f84) {
            ctx->pc = 0x2C6FBCu;
            return;
        }
    }
    ctx->pc = 0x2C6F8Cu;
    // 0x2c6f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6f90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6f94: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c6f94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6f98: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2c6f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c6f9c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6fa0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c6fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6fa4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6fa8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c6fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6fac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6fb0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c6fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6fb4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6fb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c6fbcu;
}
