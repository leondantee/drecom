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

// Function: R10a_evt_scene7
// Address: 0x272fe0 - 0x273194
void R10a_evt_scene7_0x272fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_evt_scene7_0x272fe0");
#endif

    switch (ctx->pc) {
        case 0x273020u: goto label_273020;
        case 0x273038u: goto label_273038;
        case 0x27304cu: goto label_27304c;
        case 0x273064u: goto label_273064;
        case 0x273078u: goto label_273078;
        case 0x273090u: goto label_273090;
        case 0x273098u: goto label_273098;
        case 0x2730c4u: goto label_2730c4;
        case 0x27313cu: goto label_27313c;
        case 0x27314cu: goto label_27314c;
        case 0x27317cu: goto label_27317c;
        default: break;
    }

    ctx->pc = 0x272fe0u;

    // 0x272fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x272fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x272fe4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x272fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x272fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x272ff0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x272ff0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272ff4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272ff8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x272ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x272ffc: 0xa0224f11  sb          $v0, 0x4F11($at)
    ctx->pc = 0x272ffcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x273000: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x273000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273004: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x273004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x273008: 0xa0224f12  sb          $v0, 0x4F12($at)
    ctx->pc = 0x273008u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F12u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F12u, _value); } while (0);
    // 0x27300c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x27300cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x273010: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x273010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x273014: 0x34450026  ori         $a1, $v0, 0x26
    ctx->pc = 0x273014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38);
    // 0x273018: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x273018u;
    SET_GPR_U32(ctx, 31, 0x273020u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x273018u, 0x273020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273020u;
label_273020:
    // 0x273020: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x273020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x273024: 0x34449664  ori         $a0, $v0, 0x9664
    ctx->pc = 0x273024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38500);
    // 0x273028: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x273028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x27302c: 0x34450023  ori         $a1, $v0, 0x23
    ctx->pc = 0x27302cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35);
    // 0x273030: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x273030u;
    SET_GPR_U32(ctx, 31, 0x273038u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x273030u, 0x273038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273038u;
label_273038:
    // 0x273038: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x273038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x27303c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x27303cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x273040: 0x34450080  ori         $a1, $v0, 0x80
    ctx->pc = 0x273040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x273044: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x273044u;
    SET_GPR_U32(ctx, 31, 0x27304Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x273044u, 0x27304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27304Cu;
label_27304c:
    // 0x27304c: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x27304cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x273050: 0x3444b464  ori         $a0, $v0, 0xB464
    ctx->pc = 0x273050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46180);
    // 0x273054: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x273054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x273058: 0x3445007d  ori         $a1, $v0, 0x7D
    ctx->pc = 0x273058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)125);
    // 0x27305c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27305Cu;
    SET_GPR_U32(ctx, 31, 0x273064u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27305Cu, 0x273064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273064u;
label_273064:
    // 0x273064: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x273064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x273068: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x273068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x27306c: 0x344500c6  ori         $a1, $v0, 0xC6
    ctx->pc = 0x27306cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)198);
    // 0x273070: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x273070u;
    SET_GPR_U32(ctx, 31, 0x273078u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x273070u, 0x273078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273078u;
label_273078:
    // 0x273078: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x273078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x27307c: 0x3444d264  ori         $a0, $v0, 0xD264
    ctx->pc = 0x27307cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53860);
    // 0x273080: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x273080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x273084: 0x344500c3  ori         $a1, $v0, 0xC3
    ctx->pc = 0x273084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)195);
    // 0x273088: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x273088u;
    SET_GPR_U32(ctx, 31, 0x273090u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x273088u, 0x273090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273090u;
label_273090:
    // 0x273090: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x273090u;
    {
        const bool branch_taken_0x273090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273090) {
            ctx->pc = 0x273150u;
            goto label_273150;
        }
    }
    ctx->pc = 0x273098u;
label_273098:
    // 0x273098: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x273098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x27309c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27309cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2730a0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2730a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2730a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2730A4u;
    {
        const bool branch_taken_0x2730a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2730a4) {
            ctx->pc = 0x2730C8u;
            goto label_2730c8;
        }
    }
    ctx->pc = 0x2730ACu;
    // 0x2730ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2730acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2730b0: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2730b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2730b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2730b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2730b8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2730b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2730bc: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x2730BCu;
    SET_GPR_U32(ctx, 31, 0x2730C4u);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x2730BCu, 0x2730C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730C4u;
label_2730c4:
    // 0x2730c4: 0x0  nop
    ctx->pc = 0x2730c4u;
    // NOP
label_2730c8:
    // 0x2730c8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2730c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2730cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2730ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2730d0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2730d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2730d4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2730D4u;
    {
        const bool branch_taken_0x2730d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2730d4) {
            ctx->pc = 0x273140u;
            goto label_273140;
        }
    }
    ctx->pc = 0x2730DCu;
    // 0x2730dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2730dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2730e0: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2730e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2730e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2730e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2730e8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2730e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2730ec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2730ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2730f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2730f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2730f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2730f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2730f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2730f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2730fc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2730fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x273100: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x273104: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x273104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x273108: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x273108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27310c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27310cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273114: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x273114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x273118: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x273118u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27311c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273120: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x273120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x273124: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x273124u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x273128: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x273128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27312c: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x27312cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x273130: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x273130u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x273134: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x273134u;
    SET_GPR_U32(ctx, 31, 0x27313Cu);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x273134u, 0x27313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27313Cu;
label_27313c:
    // 0x27313c: 0x0  nop
    ctx->pc = 0x27313cu;
    // NOP
label_273140:
    // 0x273140: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273144: 0xc084964  jal         func_212590
    ctx->pc = 0x273144u;
    SET_GPR_U32(ctx, 31, 0x27314Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x273144u, 0x27314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27314Cu;
label_27314c:
    // 0x27314c: 0x0  nop
    ctx->pc = 0x27314cu;
    // NOP
label_273150:
    // 0x273150: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x273150u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x273154: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x273154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x273158: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x273158u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27315c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x27315cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x273160: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x273160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x273164: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x273164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273168: 0x2842035c  slti        $v0, $v0, 0x35C
    ctx->pc = 0x273168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)860) ? 1 : 0);
    // 0x27316c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x27316Cu;
    {
        const bool branch_taken_0x27316c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27316c) {
            ctx->pc = 0x273098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273098;
        }
    }
    ctx->pc = 0x273174u;
    // 0x273174: 0xc084934  jal         func_2124D0
    ctx->pc = 0x273174u;
    SET_GPR_U32(ctx, 31, 0x27317Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x273174u, 0x27317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27317Cu;
label_27317c:
    // 0x27317c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x27317cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273188: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x273188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27318c: 0x3e00008  jr          $ra
    ctx->pc = 0x27318Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27318Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273194u;
}
