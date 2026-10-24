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

// Function: entry_002a8928
// Address: 0x2a8928 - 0x2a8ab0
void entry_002a8928_0x2a8928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8928_0x2a8928");
#endif

    switch (ctx->pc) {
        case 0x2a89f8u: goto label_2a89f8;
        case 0x2a8a50u: goto label_2a8a50;
        case 0x2a8a5cu: goto label_2a8a5c;
        case 0x2a8aa4u: goto label_2a8aa4;
        default: break;
    }

    ctx->pc = 0x2a8928u;

    // 0x2a8928: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a8928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a892c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2a892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2a8930: 0x245112c0  addiu       $s1, $v0, 0x12C0
    ctx->pc = 0x2a8930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2a8934: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x2a8934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8938: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2a8938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2a893c: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x2a893cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a8940: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8948: 0x0  nop
    ctx->pc = 0x2a8948u;
    // NOP
    // 0x2a894c: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2a894cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2a8950: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8958: 0x0  nop
    ctx->pc = 0x2a8958u;
    // NOP
    // 0x2a895c: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x2a895cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x2a8960: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8968: 0x0  nop
    ctx->pc = 0x2a8968u;
    // NOP
    // 0x2a896c: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x2a896cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x2a8970: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a8970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8974: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2a8974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2a8978: 0x24511450  addiu       $s1, $v0, 0x1450
    ctx->pc = 0x2a8978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5200));
    // 0x2a897c: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x2a897cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8980: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2a8980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2a8984: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x2a8984u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a8988: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a898c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a898cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8990: 0x0  nop
    ctx->pc = 0x2a8990u;
    // NOP
    // 0x2a8994: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2a8994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2a8998: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a899c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a899cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a89a0: 0x0  nop
    ctx->pc = 0x2a89a0u;
    // NOP
    // 0x2a89a4: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x2a89a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x2a89a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a89ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a89acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a89b0: 0x0  nop
    ctx->pc = 0x2a89b0u;
    // NOP
    // 0x2a89b4: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x2a89b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x2a89b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a89bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a89c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a89c4: 0xa0430052  sb          $v1, 0x52($v0)
    ctx->pc = 0x2a89c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 82), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a89c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a89cc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2a89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2a89d0: 0x24500ab0  addiu       $s0, $v0, 0xAB0
    ctx->pc = 0x2a89d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x2a89d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a89d8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2a89d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a89dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a89e0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2a89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2a89e4: 0x245001b0  addiu       $s0, $v0, 0x1B0
    ctx->pc = 0x2a89e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x2a89e8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2a89e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a89ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a89ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a89f0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A89F0u;
    SET_GPR_U32(ctx, 31, 0x2A89F8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A89F0u, 0x2A89F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A89F8u;
label_2a89f8:
    // 0x2a89f8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a89fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a89fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8a00: 0x0  nop
    ctx->pc = 0x2a8a00u;
    // NOP
    // 0x2a8a04: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2a8a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a8a08: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2a8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2a8a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8a10: 0x0  nop
    ctx->pc = 0x2a8a10u;
    // NOP
    // 0x2a8a14: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2a8a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a8a18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8a1c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a8a20: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2a8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a8a24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a8a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a8a28: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a8a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a8a2c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a8a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a8a30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a8a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a8a34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a8a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a8a38: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2a8a38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a8a3c: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2a8a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2a8a40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a8a40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a8a44: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a8a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a8a48: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2A8A48u;
    SET_GPR_U32(ctx, 31, 0x2A8A50u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2A8A48u, 0x2A8A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A50u;
label_2a8a50:
    // 0x2a8a50: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a8a50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8a54: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2A8A54u;
    SET_GPR_U32(ctx, 31, 0x2A8A5Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2A8A54u, 0x2A8A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A5Cu;
label_2a8a5c:
    // 0x2a8a5c: 0x3c02c28c  lui         $v0, 0xC28C
    ctx->pc = 0x2a8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49804 << 16));
    // 0x2a8a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8a64: 0x0  nop
    ctx->pc = 0x2a8a64u;
    // NOP
    // 0x2a8a68: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2a8a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a8a6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8a70: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a8a74: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2a8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a8a78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a8a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a8a7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a8a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a8a80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a8a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a8a84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a8a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a8a88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a8a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a8a8c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2a8a8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a8a90: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2a8a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2a8a94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a8a94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a8a98: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a8a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a8a9c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2A8A9Cu;
    SET_GPR_U32(ctx, 31, 0x2A8AA4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2A8A9Cu, 0x2A8AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8AA4u;
label_2a8aa4:
    // 0x2a8aa4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a8aa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8aa8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2A8AA8u;
    SET_GPR_U32(ctx, 31, 0x2A8AB0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2A8AA8u, 0x2A8AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8AB0u;
}
