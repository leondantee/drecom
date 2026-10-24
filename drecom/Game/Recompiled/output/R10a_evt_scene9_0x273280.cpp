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

// Function: R10a_evt_scene9
// Address: 0x273280 - 0x273594
void R10a_evt_scene9_0x273280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_evt_scene9_0x273280");
#endif

    switch (ctx->pc) {
        case 0x2732b0u: goto label_2732b0;
        case 0x2732dcu: goto label_2732dc;
        case 0x273354u: goto label_273354;
        case 0x273364u: goto label_273364;
        case 0x2733b0u: goto label_2733b0;
        case 0x2733dcu: goto label_2733dc;
        case 0x273454u: goto label_273454;
        case 0x273464u: goto label_273464;
        case 0x273498u: goto label_273498;
        case 0x2734c4u: goto label_2734c4;
        case 0x27353cu: goto label_27353c;
        case 0x27354cu: goto label_27354c;
        case 0x27357cu: goto label_27357c;
        default: break;
    }

    ctx->pc = 0x273280u;

    // 0x273280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x273284: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x273284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x273288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x273288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27328c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27328cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x273290: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x273290u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x273294: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x273294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273298: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x273298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27329c: 0xa0224f11  sb          $v0, 0x4F11($at)
    ctx->pc = 0x27329cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x2732a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2732a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2732a4: 0xa0204f12  sb          $zero, 0x4F12($at)
    ctx->pc = 0x2732a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F12u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F12u, _value); } while (0);
    // 0x2732a8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2732A8u;
    {
        const bool branch_taken_0x2732a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2732a8) {
            ctx->pc = 0x273368u;
            goto label_273368;
        }
    }
    ctx->pc = 0x2732B0u;
label_2732b0:
    // 0x2732b0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2732b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2732b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2732b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2732b8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2732b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2732bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2732BCu;
    {
        const bool branch_taken_0x2732bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2732bc) {
            ctx->pc = 0x2732E0u;
            goto label_2732e0;
        }
    }
    ctx->pc = 0x2732C4u;
    // 0x2732c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2732c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2732c8: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2732c8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2732cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2732ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2732d0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2732d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2732d4: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x2732D4u;
    SET_GPR_U32(ctx, 31, 0x2732DCu);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x2732D4u, 0x2732DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2732DCu;
label_2732dc:
    // 0x2732dc: 0x0  nop
    ctx->pc = 0x2732dcu;
    // NOP
label_2732e0:
    // 0x2732e0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2732e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2732e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2732e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2732e8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2732e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2732ec: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2732ECu;
    {
        const bool branch_taken_0x2732ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2732ec) {
            ctx->pc = 0x273358u;
            goto label_273358;
        }
    }
    ctx->pc = 0x2732F4u;
    // 0x2732f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2732f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2732f8: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2732f8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2732fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2732fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x273300: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x273300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x273304: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x273304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x273308: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27330c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273310: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x273310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x273314: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x273314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x273318: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27331c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27331cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x273320: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x273320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x273324: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27332c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27332cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x273330: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x273330u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x273334: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x273334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273338: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27333c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27333cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x273340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x273340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x273344: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x273344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x273348: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x273348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27334c: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x27334Cu;
    SET_GPR_U32(ctx, 31, 0x273354u);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x27334Cu, 0x273354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273354u;
label_273354:
    // 0x273354: 0x0  nop
    ctx->pc = 0x273354u;
    // NOP
label_273358:
    // 0x273358: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27335c: 0xc084964  jal         func_212590
    ctx->pc = 0x27335Cu;
    SET_GPR_U32(ctx, 31, 0x273364u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27335Cu, 0x273364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273364u;
label_273364:
    // 0x273364: 0x0  nop
    ctx->pc = 0x273364u;
    // NOP
label_273368:
    // 0x273368: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x273368u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27336c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x273370: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x273370u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x273374: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x273374u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x273378: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x273378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x27337c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27337cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273380: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x273380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x273384: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x273384u;
    {
        const bool branch_taken_0x273384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273384) {
            ctx->pc = 0x2732B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2732b0;
        }
    }
    ctx->pc = 0x27338Cu;
    // 0x27338c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x27338cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x273390: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x273390u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x273394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273398: 0x2602134c  addiu       $v0, $s0, 0x134C
    ctx->pc = 0x273398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4940));
    // 0x27339c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2733a0: 0xac4301c8  sw          $v1, 0x1C8($v0)
    ctx->pc = 0x2733a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 456), GPR_U32(ctx, 3));
    // 0x2733a4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2733a4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2733a8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2733A8u;
    {
        const bool branch_taken_0x2733a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2733a8) {
            ctx->pc = 0x273468u;
            goto label_273468;
        }
    }
    ctx->pc = 0x2733B0u;
label_2733b0:
    // 0x2733b0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2733b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2733b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2733b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2733b8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2733b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2733bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2733BCu;
    {
        const bool branch_taken_0x2733bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2733bc) {
            ctx->pc = 0x2733E0u;
            goto label_2733e0;
        }
    }
    ctx->pc = 0x2733C4u;
    // 0x2733c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2733c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2733c8: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2733c8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2733cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2733ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2733d0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2733d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2733d4: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x2733D4u;
    SET_GPR_U32(ctx, 31, 0x2733DCu);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x2733D4u, 0x2733DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733DCu;
label_2733dc:
    // 0x2733dc: 0x0  nop
    ctx->pc = 0x2733dcu;
    // NOP
label_2733e0:
    // 0x2733e0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2733e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2733e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2733e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2733e8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2733e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2733ec: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2733ECu;
    {
        const bool branch_taken_0x2733ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2733ec) {
            ctx->pc = 0x273458u;
            goto label_273458;
        }
    }
    ctx->pc = 0x2733F4u;
    // 0x2733f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2733f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2733f8: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2733f8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2733fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2733fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x273400: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x273400u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x273404: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x273404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x273408: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27340c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273410: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x273410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x273414: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x273414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x273418: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27341c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27341cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x273420: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x273420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x273424: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27342c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27342cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x273430: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x273430u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x273434: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x273434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273438: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27343c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27343cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x273440: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x273440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x273444: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x273444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x273448: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x273448u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27344c: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x27344Cu;
    SET_GPR_U32(ctx, 31, 0x273454u);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x27344Cu, 0x273454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273454u;
label_273454:
    // 0x273454: 0x0  nop
    ctx->pc = 0x273454u;
    // NOP
label_273458:
    // 0x273458: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27345c: 0xc084964  jal         func_212590
    ctx->pc = 0x27345Cu;
    SET_GPR_U32(ctx, 31, 0x273464u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27345Cu, 0x273464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273464u;
label_273464:
    // 0x273464: 0x0  nop
    ctx->pc = 0x273464u;
    // NOP
label_273468:
    // 0x273468: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x273468u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27346c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x273470: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x273470u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x273474: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x273474u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x273478: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x273478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x27347c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27347cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273480: 0x284200f0  slti        $v0, $v0, 0xF0
    ctx->pc = 0x273480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)240) ? 1 : 0);
    // 0x273484: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x273484u;
    {
        const bool branch_taken_0x273484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273484) {
            ctx->pc = 0x2733B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2733b0;
        }
    }
    ctx->pc = 0x27348Cu;
    // 0x27348c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27348cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x273490: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x273490u;
    {
        const bool branch_taken_0x273490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273490) {
            ctx->pc = 0x273550u;
            goto label_273550;
        }
    }
    ctx->pc = 0x273498u;
label_273498:
    // 0x273498: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x273498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x27349c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27349cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2734a0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2734a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2734a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2734A4u;
    {
        const bool branch_taken_0x2734a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2734a4) {
            ctx->pc = 0x2734C8u;
            goto label_2734c8;
        }
    }
    ctx->pc = 0x2734ACu;
    // 0x2734ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2734acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2734b0: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2734b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2734b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2734b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2734b8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2734b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2734bc: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x2734BCu;
    SET_GPR_U32(ctx, 31, 0x2734C4u);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x2734BCu, 0x2734C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2734C4u;
label_2734c4:
    // 0x2734c4: 0x0  nop
    ctx->pc = 0x2734c4u;
    // NOP
label_2734c8:
    // 0x2734c8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2734c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2734cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2734ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2734d0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2734d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2734d4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2734D4u;
    {
        const bool branch_taken_0x2734d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2734d4) {
            ctx->pc = 0x273540u;
            goto label_273540;
        }
    }
    ctx->pc = 0x2734DCu;
    // 0x2734dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2734dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2734e0: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2734e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2734e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2734e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2734e8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2734e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2734ec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2734ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2734f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2734f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2734f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2734f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2734f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2734f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2734fc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2734fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x273500: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x273504: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x273504u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x273508: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x273508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27350c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27350cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273514: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x273514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x273518: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x273518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27351c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273520: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x273524: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x273524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x273528: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x273528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27352c: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x27352cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x273530: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x273530u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x273534: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x273534u;
    SET_GPR_U32(ctx, 31, 0x27353Cu);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x273534u, 0x27353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27353Cu;
label_27353c:
    // 0x27353c: 0x0  nop
    ctx->pc = 0x27353cu;
    // NOP
label_273540:
    // 0x273540: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273544: 0xc084964  jal         func_212590
    ctx->pc = 0x273544u;
    SET_GPR_U32(ctx, 31, 0x27354Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x273544u, 0x27354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27354Cu;
label_27354c:
    // 0x27354c: 0x0  nop
    ctx->pc = 0x27354cu;
    // NOP
label_273550:
    // 0x273550: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x273550u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x273554: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x273554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x273558: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x273558u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27355c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x27355cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x273560: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x273560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x273564: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x273564u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273568: 0x2842014f  slti        $v0, $v0, 0x14F
    ctx->pc = 0x273568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)335) ? 1 : 0);
    // 0x27356c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x27356Cu;
    {
        const bool branch_taken_0x27356c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27356c) {
            ctx->pc = 0x273498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273498;
        }
    }
    ctx->pc = 0x273574u;
    // 0x273574: 0xc084934  jal         func_2124D0
    ctx->pc = 0x273574u;
    SET_GPR_U32(ctx, 31, 0x27357Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x273574u, 0x27357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27357Cu;
label_27357c:
    // 0x27357c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x27357cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273588: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x273588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27358c: 0x3e00008  jr          $ra
    ctx->pc = 0x27358Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27358Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273594u;
}
