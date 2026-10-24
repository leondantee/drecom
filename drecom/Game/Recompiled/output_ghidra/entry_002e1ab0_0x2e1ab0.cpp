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

// Function: entry_002e1ab0
// Address: 0x2e1ab0 - 0x2e1b78
void entry_002e1ab0_0x2e1ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1ab0_0x2e1ab0");
#endif

    switch (ctx->pc) {
        case 0x2e1ad0u: goto label_2e1ad0;
        default: break;
    }

    ctx->pc = 0x2e1ab0u;

    // 0x2e1ab0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1ab4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1ab8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e1ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e1abc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2e1abcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1ac0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e1ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1ac4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e1ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e1ac8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E1AC8u;
    SET_GPR_U32(ctx, 31, 0x2E1AD0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E1AC8u, 0x2E1AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AD0u;
label_2e1ad0:
    // 0x2e1ad0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e1ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e1ad4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1ad8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x2e1ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1adc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2e1adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e1ae0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1ae4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e1ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1ae8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1aec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e1aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e1af0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2e1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e1af4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e1af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e1af8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e1afc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2e1afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1b00: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e1b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e1b04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2e1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2e1b08: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e1b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e1b0c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e1b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e1b10: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e1b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e1b14: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x2e1b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x2e1b18: 0x8ec300f0  lw          $v1, 0xF0($s6)
    ctx->pc = 0x2e1b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 240)));
    // 0x2e1b1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e1b20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e1b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e1b24: 0xaec200f0  sw          $v0, 0xF0($s6)
    ctx->pc = 0x2e1b24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 240), GPR_U32(ctx, 2));
    // 0x2e1b28: 0xa22000d6  sb          $zero, 0xD6($s1)
    ctx->pc = 0x2e1b28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1b2c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2e1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1b30: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2e1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2e1b34: 0x24502d50  addiu       $s0, $v0, 0x2D50
    ctx->pc = 0x2e1b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11600));
    // 0x2e1b38: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2e1b38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2e1b3c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2e1b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2e1b40: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2e1b40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1b44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1b48: 0x0  nop
    ctx->pc = 0x2e1b48u;
    // NOP
    // 0x2e1b4c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2e1b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2e1b50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1b54: 0x0  nop
    ctx->pc = 0x2e1b54u;
    // NOP
    // 0x2e1b58: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2e1b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2e1b5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1b60: 0x0  nop
    ctx->pc = 0x2e1b60u;
    // NOP
    // 0x2e1b64: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2e1b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2e1b68: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1b6c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e1b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e1b70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e1b74: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e1b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e1b78u;
}
