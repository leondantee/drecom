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

// Function: entry_002f4fa4
// Address: 0x2f4fa4 - 0x2f5150
void entry_002f4fa4_0x2f4fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f4fa4_0x2f4fa4");
#endif

    switch (ctx->pc) {
        case 0x2f4fe4u: goto label_2f4fe4;
        case 0x2f5124u: goto label_2f5124;
        default: break;
    }

    ctx->pc = 0x2f4fa4u;

    // 0x2f4fa4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2f4fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f4fa8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f4fac: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2f4facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2f4fb0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2f4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2f4fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4fb8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f4fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f4fbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f4fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f4fc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f4fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f4fc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f4fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f4fc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f4fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f4fcc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f4fccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f4fd0: 0x24040909  addiu       $a0, $zero, 0x909
    ctx->pc = 0x2f4fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2313));
    // 0x2f4fd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f4fd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4fd8: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x2f4fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f4fdc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F4FDCu;
    SET_GPR_U32(ctx, 31, 0x2F4FE4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F4FDCu, 0x2F4FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4FE4u;
label_2f4fe4:
    // 0x2f4fe4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4fe8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4fe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2f4fec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4ff0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f4ff4: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2f4ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4ff8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4ffc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f5000: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2f5000u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f5004: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5008: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f5008u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f500c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f5010: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5018: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f501c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f501cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f5020: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5024: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f5024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f5028: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f5028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f502c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f502cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5034: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f5034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f5038: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f5038u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f503c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f5040: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5044: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f5044u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f5048: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f504c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f504cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f5050: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5054: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f5054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5058: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f505c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f505cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f5060: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f5060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f5064: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f506c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f506cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5070: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f5070u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f5074: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5078: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f5078u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f507c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f507cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f5080: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5088: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f5088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f508c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f508cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f5090: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f5090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f5094: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5098: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f5098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f509c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f509cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f50a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f50a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f50a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f50a8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2f50a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2f50ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f50acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f50b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f50b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f50b8: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2f50b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f50bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f50c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f50c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f50c4: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2f50c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f50c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f50cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f50d0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2f50d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f50d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f50d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f50d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f50dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f50e0: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2f50e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f50e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f50e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f50ec: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2f50ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f50f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f50f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f50f8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2f50f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f50fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f5100: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f5100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f5104: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2f5104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f5108: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f5108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f510c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f510cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f5110: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2f5110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f5114: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f5114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f5118: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2f5118u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f511c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F511Cu;
    SET_GPR_U32(ctx, 31, 0x2F5124u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F511Cu, 0x2F5124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5124u;
label_2f5124:
    // 0x2f5124: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f5124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f5128: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2f5128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2f512c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f512cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f5130: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2f5130u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f5134: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f5134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f5138: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f5138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f513c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F513Cu;
    {
        const bool branch_taken_0x2f513c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f513c) {
            ctx->pc = 0x2F5150u;
            return;
        }
    }
    ctx->pc = 0x2F5144u;
    // 0x2f5144: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f5144u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f5148: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F5148u;
    {
        const bool branch_taken_0x2f5148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5148) {
            ctx->pc = 0x2F5178u;
            return;
        }
    }
    ctx->pc = 0x2F5150u;
}
