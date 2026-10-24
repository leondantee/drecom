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

// Function: entry_002a09b8
// Address: 0x2a09b8 - 0x2a0c58
void entry_002a09b8_0x2a09b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a09b8_0x2a09b8");
#endif

    switch (ctx->pc) {
        case 0x2a09e4u: goto label_2a09e4;
        case 0x2a0a2cu: goto label_2a0a2c;
        case 0x2a0a3cu: goto label_2a0a3c;
        case 0x2a0a4cu: goto label_2a0a4c;
        case 0x2a0b04u: goto label_2a0b04;
        case 0x2a0b3cu: goto label_2a0b3c;
        case 0x2a0b78u: goto label_2a0b78;
        case 0x2a0bb0u: goto label_2a0bb0;
        case 0x2a0c00u: goto label_2a0c00;
        case 0x2a0c50u: goto label_2a0c50;
        default: break;
    }

    ctx->pc = 0x2a09b8u;

    // 0x2a09b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a09bc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a09bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a09c0: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x2a09c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a09c4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a09c8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a09c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a09cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a09ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a09d0: 0x24060420  addiu       $a2, $zero, 0x420
    ctx->pc = 0x2a09d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x2a09d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a09d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a09d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a09d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a09dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A09DCu;
    SET_GPR_U32(ctx, 31, 0x2A09E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A09DCu, 0x2A09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A09E4u;
label_2a09e4:
    // 0x2a09e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a09e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a09e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a09e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a09ec: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a09ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a09f0: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2a09f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2a09f4: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x2a09f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
    // 0x2a09f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a09f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a09fc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a09fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0a00: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2a0a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2a0a04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a0a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0a08: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0a0c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2a0a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2a0a10: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0a14: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x2a0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2a0a18: 0x1460008f  bnez        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x2A0A18u;
    {
        const bool branch_taken_0x2a0a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0a18) {
            ctx->pc = 0x2A0C58u;
            return;
        }
    }
    ctx->pc = 0x2A0A20u;
    // 0x2a0a20: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a0a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0a24: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A0A24u;
    SET_GPR_U32(ctx, 31, 0x2A0A2Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A0A24u, 0x2A0A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A2Cu;
label_2a0a2c:
    // 0x2a0a2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a0a2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0a30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a0a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0a34: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A0A34u;
    SET_GPR_U32(ctx, 31, 0x2A0A3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A0A34u, 0x2A0A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A3Cu;
label_2a0a3c:
    // 0x2a0a3c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a0a3cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0a40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a0a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0a44: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A0A44u;
    SET_GPR_U32(ctx, 31, 0x2A0A4Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A0A44u, 0x2A0A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A4Cu;
label_2a0a4c:
    // 0x2a0a4c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2a0a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0a54: 0x0  nop
    ctx->pc = 0x2a0a54u;
    // NOP
    // 0x2a0a58: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2a0a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a0a5c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a0a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a0a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0a64: 0x0  nop
    ctx->pc = 0x2a0a64u;
    // NOP
    // 0x2a0a68: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a0a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a0a6c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2a0a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2a0a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a0a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0a74: 0x0  nop
    ctx->pc = 0x2a0a74u;
    // NOP
    // 0x2a0a78: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2a0a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a0a7c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a0a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0a84: 0x0  nop
    ctx->pc = 0x2a0a84u;
    // NOP
    // 0x2a0a88: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a0a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2a0a8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a0a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0a94: 0x0  nop
    ctx->pc = 0x2a0a94u;
    // NOP
    // 0x2a0a98: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2a0a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a0a9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0aa4: 0x0  nop
    ctx->pc = 0x2a0aa4u;
    // NOP
    // 0x2a0aa8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2a0aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a0aac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0ab4: 0x0  nop
    ctx->pc = 0x2a0ab4u;
    // NOP
    // 0x2a0ab8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2a0ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a0abc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a0abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0ac0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a0ac0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0ac4: 0x0  nop
    ctx->pc = 0x2a0ac4u;
    // NOP
    // 0x2a0ac8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a0ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a0acc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a0accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0ad0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0ad4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0ad8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a0ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a0adc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0ae0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ae4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a0ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a0ae8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a0ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0aec: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a0aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0af0: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a0af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0af4: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a0af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0af8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a0af8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0afc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0AFCu;
    SET_GPR_U32(ctx, 31, 0x2A0B04u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0AFCu, 0x2A0B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B04u;
label_2a0b04:
    // 0x2a0b04: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0b08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0b0c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a0b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0b10: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x2a0b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a0b14: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a0b14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0b18: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0b1c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a0b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a0b20: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a0b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0b24: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a0b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0b28: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a0b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0b2c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a0b2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0b30: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a0b30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0b34: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0B34u;
    SET_GPR_U32(ctx, 31, 0x2A0B3Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0B34u, 0x2A0B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B3Cu;
label_2a0b3c:
    // 0x2a0b3c: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x2a0b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0b40: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2a0b40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0b44: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x2a0b44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0b48: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2a0b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x2a0b4c: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a0b4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0b50: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x2a0b50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0b54: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a0b54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0b58: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a0b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a0b5c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a0b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0b60: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a0b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0b64: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a0b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0b68: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a0b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0b6c: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a0b6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0b70: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0B70u;
    SET_GPR_U32(ctx, 31, 0x2A0B78u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0B70u, 0x2A0B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B78u;
label_2a0b78:
    // 0x2a0b78: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x2a0b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0b7c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a0b7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0b80: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0b84: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a0b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a0b88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0b8c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0b90: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a0b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a0b94: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a0b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0b98: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a0b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0b9c: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a0b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0ba0: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a0ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0ba4: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a0ba4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0ba8: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0BA8u;
    SET_GPR_U32(ctx, 31, 0x2A0BB0u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0BA8u, 0x2A0BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BB0u;
label_2a0bb0:
    // 0x2a0bb0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0bb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0bb8: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a0bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0bbc: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a0bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a0bc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0bc4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0bc8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a0bc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a0bcc: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x2a0bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a0bd0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a0bd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a0bd4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2a0bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0bd8: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a0bd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a0bdc: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a0bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0be0: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2a0be0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0be4: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a0be4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0be8: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2a0be8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a0bec: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a0becu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0bf0: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x2a0bf0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a0bf4: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a0bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0bf8: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0BF8u;
    SET_GPR_U32(ctx, 31, 0x2A0C00u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0BF8u, 0x2A0C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C00u;
label_2a0c00:
    // 0x2a0c00: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0c04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0c08: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a0c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0c0c: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a0c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a0c10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0c14: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0c18: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a0c18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a0c1c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x2a0c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a0c20: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a0c20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a0c24: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2a0c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0c28: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a0c28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a0c2c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a0c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0c30: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2a0c30u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0c34: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a0c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0c38: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2a0c38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a0c3c: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a0c3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0c40: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x2a0c40u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a0c44: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a0c44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0c48: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0C48u;
    SET_GPR_U32(ctx, 31, 0x2A0C50u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0C48u, 0x2A0C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C50u;
label_2a0c50:
    // 0x2a0c50: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2A0C50u;
    {
        const bool branch_taken_0x2a0c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0c50) {
            ctx->pc = 0x2A0CD8u;
            return;
        }
    }
    ctx->pc = 0x2A0C58u;
}
