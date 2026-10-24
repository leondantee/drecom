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

// Function: entry_00314938
// Address: 0x314938 - 0x314b38
void entry_00314938_0x314938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00314938_0x314938");
#endif

    switch (ctx->pc) {
        case 0x314a18u: goto label_314a18;
        case 0x314b0cu: goto label_314b0c;
        default: break;
    }

    ctx->pc = 0x314938u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x314B38u;
}
