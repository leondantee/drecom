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

// Function: entry_00345d34
// Address: 0x345d34 - 0x345e60
void entry_00345d34_0x345d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345d34_0x345d34");
#endif

    switch (ctx->pc) {
        case 0x345dbcu: goto label_345dbc;
        case 0x345e3cu: goto label_345e3c;
        case 0x345e44u: goto label_345e44;
        default: break;
    }

    ctx->pc = 0x345d34u;

    // 0x345d34: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345d38: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x345d38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x345d3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x345d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x345d40: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x345d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x345d44: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x345D44u;
    {
        const bool branch_taken_0x345d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345d44) {
            ctx->pc = 0x345F00u;
            return;
        }
    }
    ctx->pc = 0x345D4Cu;
    // 0x345d4c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345d50: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x345d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x345d54: 0x244202c0  addiu       $v0, $v0, 0x2C0
    ctx->pc = 0x345d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x345d58: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x345d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x345d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d60: 0x0  nop
    ctx->pc = 0x345d60u;
    // NOP
    // 0x345d64: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x345d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x345d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d6c: 0x0  nop
    ctx->pc = 0x345d6cu;
    // NOP
    // 0x345d70: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x345d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x345d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d78: 0x0  nop
    ctx->pc = 0x345d78u;
    // NOP
    // 0x345d7c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x345d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x345d80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x345d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x345d84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d88: 0x0  nop
    ctx->pc = 0x345d88u;
    // NOP
    // 0x345d8c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x345d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x345d90: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x345d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x345d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d98: 0x0  nop
    ctx->pc = 0x345d98u;
    // NOP
    // 0x345d9c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x345d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x345da0: 0xa7a00084  sh          $zero, 0x84($sp)
    ctx->pc = 0x345da0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 0));
    // 0x345da4: 0xa3a00086  sb          $zero, 0x86($sp)
    ctx->pc = 0x345da4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x345da8: 0xa3a00087  sb          $zero, 0x87($sp)
    ctx->pc = 0x345da8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x345dac: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345db0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x345db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x345db4: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x345DB4u;
    SET_GPR_U32(ctx, 31, 0x345DBCu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x345DB4u, 0x345DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345DBCu;
label_345dbc:
    // 0x345dbc: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x345DBCu;
    {
        const bool branch_taken_0x345dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345dbc) {
            ctx->pc = 0x345F00u;
            return;
        }
    }
    ctx->pc = 0x345DC4u;
    // 0x345dc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345dc8: 0x0  nop
    ctx->pc = 0x345dc8u;
    // NOP
    // 0x345dcc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x345dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x345dd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345dd4: 0x0  nop
    ctx->pc = 0x345dd4u;
    // NOP
    // 0x345dd8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x345dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x345ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345de0: 0x0  nop
    ctx->pc = 0x345de0u;
    // NOP
    // 0x345de4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x345de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x345de8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x345de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x345dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345df0: 0x0  nop
    ctx->pc = 0x345df0u;
    // NOP
    // 0x345df4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x345df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x345df8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345dfc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x345dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345e00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x345e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x345e04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x345e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x345e08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x345e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x345e0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x345e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x345e10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345e14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x345e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345e18: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x345e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x345e1c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345e20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x345e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x345e24: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x345e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x345e28: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x345e28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345e2c: 0x24470340  addiu       $a3, $v0, 0x340
    ctx->pc = 0x345e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x345e30: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x345e30u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345e34: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x345E34u;
    SET_GPR_U32(ctx, 31, 0x345E3Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x345E34u, 0x345E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E3Cu;
label_345e3c:
    // 0x345e3c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x345E3Cu;
    SET_GPR_U32(ctx, 31, 0x345E44u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x345E3Cu, 0x345E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E44u;
label_345e44:
    // 0x345e44: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x345E44u;
    {
        const bool branch_taken_0x345e44 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x345e44) {
            ctx->pc = 0x345E60u;
            return;
        }
    }
    ctx->pc = 0x345E4Cu;
    // 0x345e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345e50: 0x0  nop
    ctx->pc = 0x345e50u;
    // NOP
    // 0x345e54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x345e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x345e58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x345E58u;
    {
        const bool branch_taken_0x345e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345e58) {
            ctx->pc = 0x345E7Cu;
            return;
        }
    }
    ctx->pc = 0x345E60u;
}
