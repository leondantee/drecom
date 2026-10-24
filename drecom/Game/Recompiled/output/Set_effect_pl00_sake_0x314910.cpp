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

// Function: Set_effect_pl00_sake
// Address: 0x314910 - 0x314d80
void Set_effect_pl00_sake_0x314910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_sake_0x314910");
#endif

    switch (ctx->pc) {
        case 0x314938u: goto label_314938;
        case 0x314a18u: goto label_314a18;
        case 0x314b0cu: goto label_314b0c;
        case 0x314b9cu: goto label_314b9c;
        case 0x314bc8u: goto label_314bc8;
        case 0x314bf4u: goto label_314bf4;
        case 0x314c80u: goto label_314c80;
        default: break;
    }

    ctx->pc = 0x314910u;

    // 0x314910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x314910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x314914: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x314914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x314918: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x314918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31491c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31491cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x314920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x314920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x314924: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x314928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31492c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x31492cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314930: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x314930u;
    {
        const bool branch_taken_0x314930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x314930) {
            ctx->pc = 0x314D50u;
            goto label_314d50;
        }
    }
    ctx->pc = 0x314938u;
label_314938:
    // 0x314938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31493c: 0x0  nop
    ctx->pc = 0x31493cu;
    // NOP
    // 0x314940: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x314940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x314944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314948: 0x0  nop
    ctx->pc = 0x314948u;
    // NOP
    // 0x31494c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31494cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x314950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314954: 0x0  nop
    ctx->pc = 0x314954u;
    // NOP
    // 0x314958: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x314958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31495c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31495cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x314960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314964: 0x0  nop
    ctx->pc = 0x314964u;
    // NOP
    // 0x314968: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x314968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31496c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31496cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x314970: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x314970u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x314974: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x314974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x314978: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x314978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31497c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x314980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x314980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x314984: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x314984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x314988: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x314988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x31498c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x31498cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x314990: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x314990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x314994: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x314994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x314998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x314998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31499c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x31499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3149a0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3149a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3149a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3149a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3149a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3149a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3149ac: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3149acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3149b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3149b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3149b4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3149b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3149b8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3149b8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3149bc: 0x0  nop
    ctx->pc = 0x3149bcu;
    // NOP
    // 0x3149c0: 0x0  nop
    ctx->pc = 0x3149c0u;
    // NOP
    // 0x3149c4: 0x1810  mfhi        $v1
    ctx->pc = 0x3149c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3149c8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3149c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3149cc: 0x24429b50  addiu       $v0, $v0, -0x64B0
    ctx->pc = 0x3149ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941520));
    // 0x3149d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3149d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3149d4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3149d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3149d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3149d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3149dc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3149dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3149e0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3149e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3149e4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x3149e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x3149e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3149e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3149ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3149ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3149f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3149f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3149f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3149f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3149f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3149f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3149fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3149fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x314a00: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x314a00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x314a04: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x314a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x314a08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x314a08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314a0c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x314a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x314a10: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x314A10u;
    SET_GPR_U32(ctx, 31, 0x314A18u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x314A10u, 0x314A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314A18u;
label_314a18:
    // 0x314a18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314a1c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x314a1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x314a20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314a24: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314a24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314a28: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x314a28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x314a2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314a30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314a30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314a34: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x314a34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x314a38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x314a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x314a3c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x314a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x314a40: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x314a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x314a44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x314a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x314a48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x314a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x314a4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x314a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x314a50: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x314a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x314a54: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x314a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x314a58: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x314a58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x314a5c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x314a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x314a60: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x314a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x314a64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x314a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x314a68: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x314a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x314a6c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x314a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x314a70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x314a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x314a74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x314a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x314a78: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x314a78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x314a7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x314a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x314a80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x314a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x314a84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x314a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x314a88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x314a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x314a8c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x314a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x314a90: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x314a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x314a94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314a98: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314a98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314a9c: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x314a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x314aa0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314aa4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314aa8: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x314aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x314aac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314ab0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314ab4: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x314ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x314ab8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x314ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314abc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314ac0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314ac4: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x314ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x314ac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x314ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314acc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314ad0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314ad4: 0xa043013c  sb          $v1, 0x13C($v0)
    ctx->pc = 0x314ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 3));
    // 0x314ad8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314adc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314adcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314ae0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x314ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x314ae4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314ae8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314aec: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x314aecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x314af0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314af4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314af4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314af8: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x314af8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x314afc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314b00: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x314b00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x314b04: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x314B04u;
    SET_GPR_U32(ctx, 31, 0x314B0Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x314B04u, 0x314B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B0Cu;
label_314b0c:
    // 0x314b0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314b10: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x314b10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x314b14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314b18: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x314b18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x314b1c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x314b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x314b20: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x314b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x314b24: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x314B24u;
    {
        const bool branch_taken_0x314b24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x314b24) {
            ctx->pc = 0x314B38u;
            goto label_314b38;
        }
    }
    ctx->pc = 0x314B2Cu;
    // 0x314b2c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x314b2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314b30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x314B30u;
    {
        const bool branch_taken_0x314b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x314b30) {
            ctx->pc = 0x314B70u;
            goto label_314b70;
        }
    }
    ctx->pc = 0x314B38u;
label_314b38:
    // 0x314b38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314b3c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x314b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x314b40: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x314b40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x314b44: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x314b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x314b48: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x314b48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x314b4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314b50: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x314b50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x314b54: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x314b54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x314b58: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x314b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x314b5c: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x314b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x314b60: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x314b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x314b64: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x314b64u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x314b68: 0x3291ffff  andi        $s1, $s4, 0xFFFF
    ctx->pc = 0x314b68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x314b6c: 0x0  nop
    ctx->pc = 0x314b6cu;
    // NOP
label_314b70:
    // 0x314b70: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x314b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x314b74: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x314b74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x314b78: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x314b78u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x314b7c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x314b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x314b80: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x314b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x314b84: 0x12030070  beq         $s0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x314B84u;
    {
        const bool branch_taken_0x314b84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x314b84) {
            ctx->pc = 0x314D48u;
            goto label_314d48;
        }
    }
    ctx->pc = 0x314B8Cu;
    // 0x314b8c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x314b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x314b90: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x314b90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x314b94: 0xc067654  jal         func_19D950
    ctx->pc = 0x314B94u;
    SET_GPR_U32(ctx, 31, 0x314B9Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x314B94u, 0x314B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B9Cu;
label_314b9c:
    // 0x314b9c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x314b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x314ba0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314ba4: 0x0  nop
    ctx->pc = 0x314ba4u;
    // NOP
    // 0x314ba8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x314ba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314bac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x314bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x314bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314bb4: 0x0  nop
    ctx->pc = 0x314bb4u;
    // NOP
    // 0x314bb8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x314bb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x314bbc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x314bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x314bc0: 0xc067654  jal         func_19D950
    ctx->pc = 0x314BC0u;
    SET_GPR_U32(ctx, 31, 0x314BC8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x314BC0u, 0x314BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314BC8u;
label_314bc8:
    // 0x314bc8: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x314bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x314bcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314bd0: 0x0  nop
    ctx->pc = 0x314bd0u;
    // NOP
    // 0x314bd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x314bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314bd8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x314bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x314bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314be0: 0x0  nop
    ctx->pc = 0x314be0u;
    // NOP
    // 0x314be4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x314be4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x314be8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x314be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x314bec: 0xc067654  jal         func_19D950
    ctx->pc = 0x314BECu;
    SET_GPR_U32(ctx, 31, 0x314BF4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x314BECu, 0x314BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314BF4u;
label_314bf4:
    // 0x314bf4: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x314bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x314bf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314bfc: 0x0  nop
    ctx->pc = 0x314bfcu;
    // NOP
    // 0x314c00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x314c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314c04: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x314c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x314c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c0c: 0x0  nop
    ctx->pc = 0x314c0cu;
    // NOP
    // 0x314c10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x314c10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x314c14: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x314c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x314c18: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x314c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x314c1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c20: 0x0  nop
    ctx->pc = 0x314c20u;
    // NOP
    // 0x314c24: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x314c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x314c28: 0x3c023f77  lui         $v0, 0x3F77
    ctx->pc = 0x314c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16247 << 16));
    // 0x314c2c: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x314c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x314c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c34: 0x0  nop
    ctx->pc = 0x314c34u;
    // NOP
    // 0x314c38: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x314c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x314c3c: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x314c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x314c40: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x314c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x314c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c48: 0x0  nop
    ctx->pc = 0x314c48u;
    // NOP
    // 0x314c4c: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x314c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x314c50: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x314c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x314c54: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x314c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x314c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c5c: 0x0  nop
    ctx->pc = 0x314c5cu;
    // NOP
    // 0x314c60: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x314c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x314c64: 0x3c023f6c  lui         $v0, 0x3F6C
    ctx->pc = 0x314c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16236 << 16));
    // 0x314c68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x314c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x314c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c70: 0x0  nop
    ctx->pc = 0x314c70u;
    // NOP
    // 0x314c74: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x314c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x314c78: 0xc067648  jal         func_19D920
    ctx->pc = 0x314C78u;
    SET_GPR_U32(ctx, 31, 0x314C80u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x314C78u, 0x314C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314C80u;
label_314c80:
    // 0x314c80: 0x3c0342be  lui         $v1, 0x42BE
    ctx->pc = 0x314c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17086 << 16));
    // 0x314c84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x314c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314c88: 0x0  nop
    ctx->pc = 0x314c88u;
    // NOP
    // 0x314c8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x314c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314c90: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x314c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x314c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c98: 0x0  nop
    ctx->pc = 0x314c98u;
    // NOP
    // 0x314c9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x314c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x314ca0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x314ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x314ca4: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x314ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x314ca8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x314ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x314cac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314cacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314cb0: 0x0  nop
    ctx->pc = 0x314cb0u;
    // NOP
    // 0x314cb4: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x314cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x314cb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314cbc: 0x0  nop
    ctx->pc = 0x314cbcu;
    // NOP
    // 0x314cc0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x314cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x314cc4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314cc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314ccc: 0x0  nop
    ctx->pc = 0x314cccu;
    // NOP
    // 0x314cd0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x314cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x314cd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314cd8: 0x0  nop
    ctx->pc = 0x314cd8u;
    // NOP
    // 0x314cdc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x314cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x314ce0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314ce8: 0x0  nop
    ctx->pc = 0x314ce8u;
    // NOP
    // 0x314cec: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x314cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x314cf0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314cf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314cf8: 0x0  nop
    ctx->pc = 0x314cf8u;
    // NOP
    // 0x314cfc: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x314cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x314d00: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314d08: 0x0  nop
    ctx->pc = 0x314d08u;
    // NOP
    // 0x314d0c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x314d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x314d10: 0x3c033d79  lui         $v1, 0x3D79
    ctx->pc = 0x314d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15737 << 16));
    // 0x314d14: 0x3463db23  ori         $v1, $v1, 0xDB23
    ctx->pc = 0x314d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56099);
    // 0x314d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314d1c: 0x0  nop
    ctx->pc = 0x314d1cu;
    // NOP
    // 0x314d20: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x314d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x314d24: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x314d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x314d28: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x314d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x314d2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314d30: 0x0  nop
    ctx->pc = 0x314d30u;
    // NOP
    // 0x314d34: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x314d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x314d38: 0xa2000139  sb          $zero, 0x139($s0)
    ctx->pc = 0x314d38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 0));
    // 0x314d3c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x314d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x314d40: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x314d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x314d44: 0x0  nop
    ctx->pc = 0x314d44u;
    // NOP
label_314d48:
    // 0x314d48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x314d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x314d4c: 0x0  nop
    ctx->pc = 0x314d4cu;
    // NOP
label_314d50:
    // 0x314d50: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x314d50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x314d54: 0x1460fef8  bnez        $v1, . + 4 + (-0x108 << 2)
    ctx->pc = 0x314D54u;
    {
        const bool branch_taken_0x314d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314d54) {
            ctx->pc = 0x314938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314938;
        }
    }
    ctx->pc = 0x314D5Cu;
    // 0x314d5c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x314d5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314d60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x314d60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314d64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x314d64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314d68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x314d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314d6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x314d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314d70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x314d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314d74: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x314d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x314d78: 0x3e00008  jr          $ra
    ctx->pc = 0x314D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314D80u;
}
