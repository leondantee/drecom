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

// Function: entry_002c8b44
// Address: 0x2c8b44 - 0x2c8c60
void entry_002c8b44_0x2c8b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c8b44_0x2c8b44");
#endif

    switch (ctx->pc) {
        case 0x2c8b70u: goto label_2c8b70;
        default: break;
    }

    ctx->pc = 0x2c8b44u;

    // 0x2c8b44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8b48: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8b4c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x2c8b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c8b50: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8b54: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8b58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c8b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c8b5c: 0x24060f00  addiu       $a2, $zero, 0xF00
    ctx->pc = 0x2c8b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x2c8b60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8b64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c8b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c8b68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C8B68u;
    SET_GPR_U32(ctx, 31, 0x2C8B70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C8B68u, 0x2C8B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B70u;
label_2c8b70:
    // 0x2c8b70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2c8b70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c8b74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c8b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8b78: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8b7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8b80: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x2c8b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x2c8b84: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2c8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2c8b88: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2c8b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2c8b8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c8b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8b90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8b94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8b98: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x2c8b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x2c8b9c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8ba0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x2c8ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2c8ba4: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2c8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2c8ba8: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x2c8ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c8bac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c8bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c8bb0: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x2c8bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x2c8bb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c8bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8bb8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8bbc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c8bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8bc0: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x2c8bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x2c8bc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c8bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8bc8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8bcc: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x2c8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2c8bd0: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c8bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2c8bd4: 0x240301e0  addiu       $v1, $zero, 0x1E0
    ctx->pc = 0x2c8bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x2c8bd8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8bdc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c8bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c8be0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2c8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2c8be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8be8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8bec: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2c8becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2c8bf0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c8bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8bf8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8bfc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8c00: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2c8c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2c8c04: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c8c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2c8c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8c0c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8c10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8c14: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2c8c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2c8c18: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8c1c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8c20: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2c8c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c8c24: 0x34a60008  ori         $a2, $a1, 0x8
    ctx->pc = 0x2c8c24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x2c8c28: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x2c8c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x2c8c2c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8c30: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8c34: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c8c34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c8c38: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x2c8c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c8c3c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2c8c3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2c8c40: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x2c8c40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c8c44: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8C44u;
    {
        const bool branch_taken_0x2c8c44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c44) {
            ctx->pc = 0x2C8C60u;
            return;
        }
    }
    ctx->pc = 0x2C8C4Cu;
    // 0x2c8c4c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8c50: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2c8c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2c8c54: 0x80c20039  lb          $v0, 0x39($a2)
    ctx->pc = 0x2c8c54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 57)));
    // 0x2c8c58: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2c8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2c8c5c: 0xa0c20039  sb          $v0, 0x39($a2)
    ctx->pc = 0x2c8c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 57), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2c8c60u;
}
