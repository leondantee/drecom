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

// Function: entry_00218964
// Address: 0x218964 - 0x218b10
void entry_00218964_0x218964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00218964_0x218964");
#endif

    switch (ctx->pc) {
        case 0x2189a4u: goto label_2189a4;
        case 0x218ae4u: goto label_218ae4;
        default: break;
    }

    ctx->pc = 0x218964u;

    // 0x218964: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x218964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x218968: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x218968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21896c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21896cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x218970: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x218970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x218974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218978: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x218978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21897c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21897cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x218980: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x218980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x218984: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x218984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x218988: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x218988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21898c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21898cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x218990: 0x24040909  addiu       $a0, $zero, 0x909
    ctx->pc = 0x218990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2313));
    // 0x218994: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x218994u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218998: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x218998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21899c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21899Cu;
    SET_GPR_U32(ctx, 31, 0x2189A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21899Cu, 0x2189A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189A4u;
label_2189a4:
    // 0x2189a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2189a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2189a8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2189a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2189ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2189acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2189b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2189b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2189b4: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2189b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2189b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2189b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2189bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2189bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2189c0: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2189c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2189c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2189c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2189c8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2189c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2189cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2189ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2189d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2189d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2189d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2189d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2189d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2189d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2189dc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2189dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2189e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2189e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2189e4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2189e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2189e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2189e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2189ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2189ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2189f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2189f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2189f4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2189f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2189f8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2189f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2189fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2189fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x218a00: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218a04: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x218a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x218a08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218a0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x218a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x218a10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218a14: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x218a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218a18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218a1c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x218a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218a20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218a24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218a28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218a2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218a30: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x218a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x218a34: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218a38: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x218a38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218a3c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218a40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218a44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218a48: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x218a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x218a4c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x218a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x218a50: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x218a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x218a54: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218a58: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x218a58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x218a5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218a60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x218a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x218a64: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x218a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x218a68: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x218a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x218a6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x218a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218a70: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218a74: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218a74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218a78: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x218a78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x218a7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218a80: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218a80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218a84: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x218a84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x218a88: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218a8c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218a90: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x218a90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x218a94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218a98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218a9c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218aa0: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x218aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x218aa4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218aa8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218aac: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x218aacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x218ab0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218ab4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218ab8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x218ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x218abc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218ac0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218ac4: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x218ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x218ac8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218acc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218accu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218ad0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x218ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x218ad4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218ad8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x218ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x218adc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x218ADCu;
    SET_GPR_U32(ctx, 31, 0x218AE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x218ADCu, 0x218AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AE4u;
label_218ae4:
    // 0x218ae4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218ae8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x218ae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x218aec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218af0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x218af0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x218af4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x218af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x218af8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x218af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x218afc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x218AFCu;
    {
        const bool branch_taken_0x218afc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x218afc) {
            ctx->pc = 0x218B10u;
            return;
        }
    }
    ctx->pc = 0x218B04u;
    // 0x218b04: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x218b04u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218b08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x218B08u;
    {
        const bool branch_taken_0x218b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218b08) {
            ctx->pc = 0x218B38u;
            return;
        }
    }
    ctx->pc = 0x218B10u;
}
