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

// Function: Item_get_move
// Address: 0x336d40 - 0x33764c
void Item_get_move_0x336d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_get_move_0x336d40");
#endif

    switch (ctx->pc) {
        case 0x336eb0u: goto label_336eb0;
        case 0x336f10u: goto label_336f10;
        case 0x33701cu: goto label_33701c;
        case 0x33705cu: goto label_33705c;
        case 0x337080u: goto label_337080;
        case 0x3370d4u: goto label_3370d4;
        case 0x337100u: goto label_337100;
        case 0x337228u: goto label_337228;
        case 0x33728cu: goto label_33728c;
        case 0x3372f4u: goto label_3372f4;
        case 0x3374c8u: goto label_3374c8;
        case 0x3374f8u: goto label_3374f8;
        case 0x337578u: goto label_337578;
        case 0x3375acu: goto label_3375ac;
        case 0x3375e4u: goto label_3375e4;
        case 0x337610u: goto label_337610;
        default: break;
    }

    ctx->pc = 0x336d40u;

    // 0x336d40: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x336d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x336d44: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x336d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x336d48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x336d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x336d4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x336d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x336d50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x336d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x336d54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x336d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x336d58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x336d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x336d5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x336d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x336d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x336d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x336d64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x336d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336d6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x336d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x336d70: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x336d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x336d74: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x336d74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x336d78: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x336d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x336d7c: 0x24624d20  addiu       $v0, $v1, 0x4D20
    ctx->pc = 0x336d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19744));
    // 0x336d80: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x336d80u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x336d84: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x336d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x336d88: 0x24424c50  addiu       $v0, $v0, 0x4C50
    ctx->pc = 0x336d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19536));
    // 0x336d8c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x336d8cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x336d90: 0x8e226628  lw          $v0, 0x6628($s1)
    ctx->pc = 0x336d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26152)));
    // 0x336d94: 0x90420088  lbu         $v0, 0x88($v0)
    ctx->pc = 0x336d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x336d98: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x336d98u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x336d9c: 0x8e226628  lw          $v0, 0x6628($s1)
    ctx->pc = 0x336d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26152)));
    // 0x336da0: 0x90420089  lbu         $v0, 0x89($v0)
    ctx->pc = 0x336da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 137)));
    // 0x336da4: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x336da4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x336da8: 0x8e226628  lw          $v0, 0x6628($s1)
    ctx->pc = 0x336da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26152)));
    // 0x336dac: 0x90520088  lbu         $s2, 0x88($v0)
    ctx->pc = 0x336dacu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x336db0: 0xa3b200a8  sb          $s2, 0xA8($sp)
    ctx->pc = 0x336db0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 18));
    // 0x336db4: 0x8e226628  lw          $v0, 0x6628($s1)
    ctx->pc = 0x336db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26152)));
    // 0x336db8: 0x90420089  lbu         $v0, 0x89($v0)
    ctx->pc = 0x336db8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 137)));
    // 0x336dbc: 0xa3a200a9  sb          $v0, 0xA9($sp)
    ctx->pc = 0x336dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 169), (uint8_t)GPR_U32(ctx, 2));
    // 0x336dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336dc4: 0xa2225e04  sb          $v0, 0x5E04($s1)
    ctx->pc = 0x336dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24068), (uint8_t)GPR_U32(ctx, 2));
    // 0x336dc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x336dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x336dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336dd0: 0x0  nop
    ctx->pc = 0x336dd0u;
    // NOP
    // 0x336dd4: 0xe6205e00  swc1        $f0, 0x5E00($s1)
    ctx->pc = 0x336dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24064), bits); }
    // 0x336dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x336dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336ddc: 0x0  nop
    ctx->pc = 0x336ddcu;
    // NOP
    // 0x336de0: 0xe6205e00  swc1        $f0, 0x5E00($s1)
    ctx->pc = 0x336de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24064), bits); }
    // 0x336de4: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x336de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x336de8: 0x8c24bf24  lw          $a0, -0x40DC($at)
    ctx->pc = 0x336de8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x62BF24u));
    // 0x336dec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336df0: 0x108200ba  beq         $a0, $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x336DF0u;
    {
        const bool branch_taken_0x336df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x336df0) {
            ctx->pc = 0x3370DCu;
            goto label_3370dc;
        }
    }
    ctx->pc = 0x336DF8u;
    // 0x336df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336dfc: 0x10820063  beq         $a0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x336DFCu;
    {
        const bool branch_taken_0x336dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x336dfc) {
            ctx->pc = 0x336F8Cu;
            goto label_336f8c;
        }
    }
    ctx->pc = 0x336E04u;
    // 0x336e04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336E04u;
    {
        const bool branch_taken_0x336e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x336e04) {
            ctx->pc = 0x336E14u;
            goto label_336e14;
        }
    }
    ctx->pc = 0x336E0Cu;
    // 0x336e0c: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x336E0Cu;
    {
        const bool branch_taken_0x336e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336e0c) {
            ctx->pc = 0x3375ECu;
            goto label_3375ec;
        }
    }
    ctx->pc = 0x336E14u;
label_336e14:
    // 0x336e14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336e18: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e1c: 0xa0224bf8  sb          $v0, 0x4BF8($at)
    ctx->pc = 0x336e1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894BF8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x894BF8u, _value); } while (0);
    // 0x336e20: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x336e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x336e24: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x336e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x336e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336e2c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e30: 0xe4204bf4  swc1        $f0, 0x4BF4($at)
    ctx->pc = 0x336e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x894BF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894BF4u, _value); } while (0); }
    // 0x336e34: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x336e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x336e38: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e3c: 0xa0224bf9  sb          $v0, 0x4BF9($at)
    ctx->pc = 0x336e3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894BF9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x894BF9u, _value); } while (0);
    // 0x336e40: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x336e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x336e44: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x336e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x336e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336e4c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e50: 0xe4204bf0  swc1        $f0, 0x4BF0($at)
    ctx->pc = 0x336e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x894BF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894BF0u, _value); } while (0); }
    // 0x336e54: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x336e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x336e58: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x336e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x336e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x336e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336e60: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e64: 0xe4204bfc  swc1        $f0, 0x4BFC($at)
    ctx->pc = 0x336e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x894BFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894BFCu, _value); } while (0); }
    // 0x336e68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x336e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x336e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336e70: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e74: 0xe4204c00  swc1        $f0, 0x4C00($at)
    ctx->pc = 0x336e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x894C00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894C00u, _value); } while (0); }
    // 0x336e78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336e7c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e80: 0xa0224c05  sb          $v0, 0x4C05($at)
    ctx->pc = 0x336e80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C05u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x894C05u, _value); } while (0);
    // 0x336e84: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x336e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x336e88: 0x24626158  addiu       $v0, $v1, 0x6158
    ctx->pc = 0x336e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24920));
    // 0x336e8c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e90: 0xac224c10  sw          $v0, 0x4C10($at)
    ctx->pc = 0x336e90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894C10u, _value); } while (0);
    // 0x336e94: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x336e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x336e98: 0x24444c18  addiu       $a0, $v0, 0x4C18
    ctx->pc = 0x336e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19480));
    // 0x336e9c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x336e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x336ea0: 0x2465e7d0  addiu       $a1, $v1, -0x1830
    ctx->pc = 0x336ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
    // 0x336ea4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x336ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x336ea8: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x336EA8u;
    SET_GPR_U32(ctx, 31, 0x336EB0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x336EB0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x336EB0u) { return; }
    ctx->pc = 0x336EB0u;
label_336eb0:
    // 0x336eb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336eb4: 0x12c20012  beq         $s6, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x336EB4u;
    {
        const bool branch_taken_0x336eb4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x336eb4) {
            ctx->pc = 0x336F00u;
            goto label_336f00;
        }
    }
    ctx->pc = 0x336EBCu;
    // 0x336ebc: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x336EBCu;
    {
        const bool branch_taken_0x336ebc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ebc) {
            ctx->pc = 0x336ECCu;
            goto label_336ecc;
        }
    }
    ctx->pc = 0x336EC4u;
    // 0x336ec4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x336EC4u;
    {
        const bool branch_taken_0x336ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ec4) {
            ctx->pc = 0x336F70u;
            goto label_336f70;
        }
    }
    ctx->pc = 0x336ECCu;
label_336ecc:
    // 0x336ecc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336ed0: 0xa4204c42  sh          $zero, 0x4C42($at)
    ctx->pc = 0x336ed0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x894C42u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C42u, _value); } while (0);
    // 0x336ed4: 0x3004ffff  andi        $a0, $zero, 0xFFFF
    ctx->pc = 0x336ed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x336ed8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336edc: 0xa4244c40  sh          $a0, 0x4C40($at)
    ctx->pc = 0x336edcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x894C40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C40u, _value); } while (0);
    // 0x336ee0: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x336ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x336ee4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336ee8: 0xa4224c46  sh          $v0, 0x4C46($at)
    ctx->pc = 0x336ee8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C46u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C46u, _value); } while (0);
    // 0x336eec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336ef0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336ef4: 0xa4224c44  sh          $v0, 0x4C44($at)
    ctx->pc = 0x336ef4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C44u, _value); } while (0);
    // 0x336ef8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x336EF8u;
    {
        const bool branch_taken_0x336ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ef8) {
            ctx->pc = 0x336F70u;
            goto label_336f70;
        }
    }
    ctx->pc = 0x336F00u;
label_336f00:
    // 0x336f00: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x336f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x336f04: 0x32e500ff  andi        $a1, $s7, 0xFF
    ctx->pc = 0x336f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x336f08: 0xc0ce1ec  jal         func_3387B0
    ctx->pc = 0x336F08u;
    SET_GPR_U32(ctx, 31, 0x336F10u);
    ctx->pc = 0x3387B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3387B0u, 0x336F08u, 0x336F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336F10u;
label_336f10:
    // 0x336f10: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x336f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x336f14: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x336f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x336f18: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x336f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336f1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x336f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x336f20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x336f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336f24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x336f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x336f28: 0x24429740  addiu       $v0, $v0, -0x68C0
    ctx->pc = 0x336f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940480));
    // 0x336f2c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x336f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x336f30: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x336f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x336f34: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336f38: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f3c: 0xa4224c40  sh          $v0, 0x4C40($at)
    ctx->pc = 0x336f3cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C40u, _value); } while (0);
    // 0x336f40: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x336f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x336f44: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x336f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x336f48: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f4c: 0xa4224c44  sh          $v0, 0x4C44($at)
    ctx->pc = 0x336f4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C44u, _value); } while (0);
    // 0x336f50: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x336f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x336f54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336f58: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f5c: 0xa4224c42  sh          $v0, 0x4C42($at)
    ctx->pc = 0x336f5cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C42u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C42u, _value); } while (0);
    // 0x336f60: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x336f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x336f64: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336f68: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f6c: 0xa4224c46  sh          $v0, 0x4C46($at)
    ctx->pc = 0x336f6cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C46u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C46u, _value); } while (0);
label_336f70:
    // 0x336f70: 0x8e245dd4  lw          $a0, 0x5DD4($s1)
    ctx->pc = 0x336f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24020)));
    // 0x336f74: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x336f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x336f78: 0xae225dd4  sw          $v0, 0x5DD4($s1)
    ctx->pc = 0x336f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24020), GPR_U32(ctx, 2));
    // 0x336f7c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f80: 0xac204e20  sw          $zero, 0x4E20($at)
    ctx->pc = 0x336f80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x894E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E20u, _value); } while (0);
    // 0x336f84: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x336F84u;
    {
        const bool branch_taken_0x336f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336f84) {
            ctx->pc = 0x3375ECu;
            goto label_3375ec;
        }
    }
    ctx->pc = 0x336F8Cu;
label_336f8c:
    // 0x336f8c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f90: 0x8c234e28  lw          $v1, 0x4E28($at)
    ctx->pc = 0x336f90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x894E28u));
    // 0x336f94: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x336f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x336f98: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f9c: 0xac224e28  sw          $v0, 0x4E28($at)
    ctx->pc = 0x336f9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E28u, _value); } while (0);
    // 0x336fa0: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x336fa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x336fa4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x336FA4u;
    {
        const bool branch_taken_0x336fa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x336fa4) {
            ctx->pc = 0x336FC0u;
            goto label_336fc0;
        }
    }
    ctx->pc = 0x336FACu;
    // 0x336fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336fb0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336fb4: 0xac224e20  sw          $v0, 0x4E20($at)
    ctx->pc = 0x336fb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E20u, _value); } while (0);
    // 0x336fb8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336fbc: 0xac204e28  sw          $zero, 0x4E28($at)
    ctx->pc = 0x336fbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x894E28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E28u, _value); } while (0);
label_336fc0:
    // 0x336fc0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336fc4: 0x8c234e20  lw          $v1, 0x4E20($at)
    ctx->pc = 0x336fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x894E20u));
    // 0x336fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336fcc: 0x14620187  bne         $v1, $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x336FCCu;
    {
        const bool branch_taken_0x336fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x336fcc) {
            ctx->pc = 0x3375ECu;
            goto label_3375ec;
        }
    }
    ctx->pc = 0x336FD4u;
    // 0x336fd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x336fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x336fd8: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x336fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x336fdc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x336fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x336fe0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x336fe0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x336fe4: 0x0  nop
    ctx->pc = 0x336fe4u;
    // NOP
    // 0x336fe8: 0x0  nop
    ctx->pc = 0x336fe8u;
    // NOP
    // 0x336fec: 0x1010  mfhi        $v0
    ctx->pc = 0x336fecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x336ff0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x336FF0u;
    {
        const bool branch_taken_0x336ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336ff0) {
            ctx->pc = 0x337040u;
            goto label_337040;
        }
    }
    ctx->pc = 0x336FF8u;
    // 0x336ff8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336ffc: 0x8c224e30  lw          $v0, 0x4E30($at)
    ctx->pc = 0x336ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894E30u));
    // 0x337000: 0x24420027  addiu       $v0, $v0, 0x27
    ctx->pc = 0x337000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x337004: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x337004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337008: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x337008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33700c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33700cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x337010: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x337010u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x337014: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x337014u;
    SET_GPR_U32(ctx, 31, 0x33701Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x337014u, 0x33701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33701Cu;
label_33701c:
    // 0x33701c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33701cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337020: 0x8c224e30  lw          $v0, 0x4E30($at)
    ctx->pc = 0x337020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894E30u));
    // 0x337024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x337024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x337028: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33702c: 0xac224e30  sw          $v0, 0x4E30($at)
    ctx->pc = 0x33702cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E30u, _value); } while (0);
    // 0x337030: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337030u;
    {
        const bool branch_taken_0x337030 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x337030) {
            ctx->pc = 0x337040u;
            goto label_337040;
        }
    }
    ctx->pc = 0x337038u;
    // 0x337038: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33703c: 0xac204e30  sw          $zero, 0x4E30($at)
    ctx->pc = 0x33703cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x894E30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E30u, _value); } while (0);
label_337040:
    // 0x337040: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x337044: 0x24444c18  addiu       $a0, $v0, 0x4C18
    ctx->pc = 0x337044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19480));
    // 0x337048: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x337048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33704c: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x33704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x337050: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x337050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x337054: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x337054u;
    SET_GPR_U32(ctx, 31, 0x33705Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x33705Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33705Cu) { return; }
    ctx->pc = 0x33705Cu;
label_33705c:
    // 0x33705c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33705cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x337060: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x337064: 0x24444bf0  addiu       $a0, $v0, 0x4BF0
    ctx->pc = 0x337064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19440));
    // 0x337068: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x337068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x33706c: 0x2445c324  addiu       $a1, $v0, -0x3CDC
    ctx->pc = 0x33706cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951716));
    // 0x337070: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x337074: 0x24464c10  addiu       $a2, $v0, 0x4C10
    ctx->pc = 0x337074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19472));
    // 0x337078: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x337078u;
    SET_GPR_U32(ctx, 31, 0x337080u);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x337078u, 0x337080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337080u;
label_337080:
    // 0x337080: 0x1040015a  beqz        $v0, . + 4 + (0x15A << 2)
    ctx->pc = 0x337080u;
    {
        const bool branch_taken_0x337080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337080) {
            ctx->pc = 0x3375ECu;
            goto label_3375ec;
        }
    }
    ctx->pc = 0x337088u;
    // 0x337088: 0x8e225dd4  lw          $v0, 0x5DD4($s1)
    ctx->pc = 0x337088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24020)));
    // 0x33708c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x337090: 0xae225dd4  sw          $v0, 0x5DD4($s1)
    ctx->pc = 0x337090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24020), GPR_U32(ctx, 2));
    // 0x337094: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337098: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337098u;
    {
        const bool branch_taken_0x337098 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x337098) {
            ctx->pc = 0x3370B0u;
            goto label_3370b0;
        }
    }
    ctx->pc = 0x3370A0u;
    // 0x3370a0: 0x26e2000c  addiu       $v0, $s7, 0xC
    ctx->pc = 0x3370a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x3370a4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x3370a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x3370a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3370A8u;
    {
        const bool branch_taken_0x3370a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3370a8) {
            ctx->pc = 0x3370C0u;
            goto label_3370c0;
        }
    }
    ctx->pc = 0x3370B0u;
label_3370b0:
    // 0x3370b0: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3370B0u;
    {
        const bool branch_taken_0x3370b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x3370b0) {
            ctx->pc = 0x3370C0u;
            goto label_3370c0;
        }
    }
    ctx->pc = 0x3370B8u;
    // 0x3370b8: 0x26e20002  addiu       $v0, $s7, 0x2
    ctx->pc = 0x3370b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x3370bc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x3370bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_3370c0:
    // 0x3370c0: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x3370c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x3370c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3370c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3370c8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3370c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3370cc: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x3370CCu;
    SET_GPR_U32(ctx, 31, 0x3370D4u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x3370CCu, 0x3370D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3370D4u;
label_3370d4:
    // 0x3370d4: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x3370D4u;
    {
        const bool branch_taken_0x3370d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3370d4) {
            ctx->pc = 0x3375ECu;
            goto label_3375ec;
        }
    }
    ctx->pc = 0x3370DCu;
label_3370dc:
    // 0x3370dc: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x3370dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x3370e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3370e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3370e4: 0x3c021e04  lui         $v0, 0x1E04
    ctx->pc = 0x3370e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7684 << 16));
    // 0x3370e8: 0x34423214  ori         $v0, $v0, 0x3214
    ctx->pc = 0x3370e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12820);
    // 0x3370ec: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3370ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3370f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3370f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3370f4: 0x24452110  addiu       $a1, $v0, 0x2110
    ctx->pc = 0x3370f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8464));
    // 0x3370f8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x3370F8u;
    SET_GPR_U32(ctx, 31, 0x337100u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x3370F8u, 0x337100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337100u;
label_337100:
    // 0x337100: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x337100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x337104: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x337104u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x337108: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x337108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x33710c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33710cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x337110: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337110u;
    {
        const bool branch_taken_0x337110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337110) {
            ctx->pc = 0x337124u;
            goto label_337124;
        }
    }
    ctx->pc = 0x337118u;
    // 0x337118: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33711c: 0xae225dc8  sw          $v0, 0x5DC8($s1)
    ctx->pc = 0x33711cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24008), GPR_U32(ctx, 2));
    // 0x337120: 0xae205dd4  sw          $zero, 0x5DD4($s1)
    ctx->pc = 0x337120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24020), GPR_U32(ctx, 0));
label_337124:
    // 0x337124: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x337124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x337128: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x337128u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x33712c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x33712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x337130: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x337130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x337134: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337134u;
    {
        const bool branch_taken_0x337134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337134) {
            ctx->pc = 0x337148u;
            goto label_337148;
        }
    }
    ctx->pc = 0x33713Cu;
    // 0x33713c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337140: 0xae225dc8  sw          $v0, 0x5DC8($s1)
    ctx->pc = 0x337140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24008), GPR_U32(ctx, 2));
    // 0x337144: 0xae205dd4  sw          $zero, 0x5DD4($s1)
    ctx->pc = 0x337144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24020), GPR_U32(ctx, 0));
label_337148:
    // 0x337148: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33714c: 0x24524c50  addiu       $s2, $v0, 0x4C50
    ctx->pc = 0x33714cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19536));
    // 0x337150: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x337154: 0x24504d20  addiu       $s0, $v0, 0x4D20
    ctx->pc = 0x337154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19744));
    // 0x337158: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x337158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33715c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x33715cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894C50u, _value); } while (0);
    // 0x337160: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x337160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x337164: 0x34423b14  ori         $v0, $v0, 0x3B14
    ctx->pc = 0x337164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15124);
    // 0x337168: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x337168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894C54u, _value); } while (0);
    // 0x33716c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33716cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337170: 0x94224c44  lhu         $v0, 0x4C44($at)
    ctx->pc = 0x337170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C44u));
    // 0x337174: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x337174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337178: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33717c: 0x94224c40  lhu         $v0, 0x4C40($at)
    ctx->pc = 0x33717cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C40u));
    // 0x337180: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337184: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x337184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x337188: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x337188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x33718c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33718cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337190: 0x94224c46  lhu         $v0, 0x4C46($at)
    ctx->pc = 0x337190u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C46u));
    // 0x337194: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x337194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337198: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33719c: 0x94224c42  lhu         $v0, 0x4C42($at)
    ctx->pc = 0x33719cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C42u));
    // 0x3371a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3371a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3371a4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3371a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3371a8: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x3371a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x3371ac: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x3371acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3371b0: 0x241500e0  addiu       $s5, $zero, 0xE0
    ctx->pc = 0x3371b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x3371b4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3371b4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3371b8: 0x0  nop
    ctx->pc = 0x3371b8u;
    // NOP
    // 0x3371bc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3371bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3371c0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3371c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3371c4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3371c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3371c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3371c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3371cc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x3371ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x3371d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3371D0u;
    {
        const bool branch_taken_0x3371d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3371d0) {
            ctx->pc = 0x3371ECu;
            goto label_3371ec;
        }
    }
    ctx->pc = 0x3371D8u;
    // 0x3371d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3371d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3371dc: 0x0  nop
    ctx->pc = 0x3371dcu;
    // NOP
    // 0x3371e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3371e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3371e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3371E4u;
    {
        const bool branch_taken_0x3371e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3371e4) {
            ctx->pc = 0x337208u;
            goto label_337208;
        }
    }
    ctx->pc = 0x3371ECu;
label_3371ec:
    // 0x3371ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3371ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3371f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3371f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3371f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3371f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3371f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3371f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3371fc: 0x0  nop
    ctx->pc = 0x3371fcu;
    // NOP
    // 0x337200: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x337204: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x337204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_337208:
    // 0x337208: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x337208u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33720c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x33720cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x337210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x337210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337214: 0x0  nop
    ctx->pc = 0x337214u;
    // NOP
    // 0x337218: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x337218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33721c: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x33721cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x337220: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x337220u;
    SET_GPR_U32(ctx, 31, 0x337228u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x337220u, 0x337228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337228u;
label_337228:
    // 0x337228: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x337228u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33722c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x33722cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337230: 0x0  nop
    ctx->pc = 0x337230u;
    // NOP
    // 0x337234: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x337234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x337238: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x337238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x33723c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33723cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x337240: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x337240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x337244: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x337244u;
    {
        const bool branch_taken_0x337244 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x337244) {
            ctx->pc = 0x337260u;
            goto label_337260;
        }
    }
    ctx->pc = 0x33724Cu;
    // 0x33724c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33724cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337250: 0x0  nop
    ctx->pc = 0x337250u;
    // NOP
    // 0x337254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x337258: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x337258u;
    {
        const bool branch_taken_0x337258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337258) {
            ctx->pc = 0x33727Cu;
            goto label_33727c;
        }
    }
    ctx->pc = 0x337260u;
label_337260:
    // 0x337260: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x337260u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x337264: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x337264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x337268: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x337268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33726c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33726cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337270: 0x0  nop
    ctx->pc = 0x337270u;
    // NOP
    // 0x337274: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x337278: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x337278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_33727c:
    // 0x33727c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33727cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x337280: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x337280u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x337284: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x337284u;
    SET_GPR_U32(ctx, 31, 0x33728Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x337284u, 0x33728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33728Cu;
label_33728c:
    // 0x33728c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x33728cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x337290: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x337290u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337294: 0x0  nop
    ctx->pc = 0x337294u;
    // NOP
    // 0x337298: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x337298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33729c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x33729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3372a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3372a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3372a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3372a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3372a8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x3372a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x3372ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3372ACu;
    {
        const bool branch_taken_0x3372ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3372ac) {
            ctx->pc = 0x3372C8u;
            goto label_3372c8;
        }
    }
    ctx->pc = 0x3372B4u;
    // 0x3372b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3372b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3372b8: 0x0  nop
    ctx->pc = 0x3372b8u;
    // NOP
    // 0x3372bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3372bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3372c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3372C0u;
    {
        const bool branch_taken_0x3372c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3372c0) {
            ctx->pc = 0x3372E4u;
            goto label_3372e4;
        }
    }
    ctx->pc = 0x3372C8u;
label_3372c8:
    // 0x3372c8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3372c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3372cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3372ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3372d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3372d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3372d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3372d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3372d8: 0x0  nop
    ctx->pc = 0x3372d8u;
    // NOP
    // 0x3372dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3372dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3372e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3372e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3372e4:
    // 0x3372e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3372e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3372e8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x3372e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3372ec: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3372ECu;
    SET_GPR_U32(ctx, 31, 0x3372F4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3372ECu, 0x3372F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3372F4u;
label_3372f4:
    // 0x3372f4: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x3372f4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3372f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x3372f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3372fc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3372fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x337300: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x337300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x337304: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x337304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x337308: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x337308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x33730c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x33730cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x337310: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x337310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x337314: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x337314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x337318: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x337318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33731c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x33731cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x337320: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x337320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x337324: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x337328: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x337328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33732c: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x33732cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x337330: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x337330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337334: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x337334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x337338: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x337338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x33733c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33733cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337340: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x337340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x337344: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x337344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x337348: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x337348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33734c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x33734cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x337350: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x337350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x337354: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x337358: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x337358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33735c: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x33735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x337360: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x337360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337364: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x337364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x337368: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x337368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x33736c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33736cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337370: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x337370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x337374: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x337374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x337378: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x337378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33737c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x33737cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x337380: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x337380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x337384: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x337384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x337388: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33738c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33738cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x337390: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x337390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x337394: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x337394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337398: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x337398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x33739c: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x33739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x3373a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3373a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3373a4: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x3373a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x3373a8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3373a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3373ac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3373acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3373b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3373b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3373b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3373b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3373b8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3373b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3373bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3373bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3373c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3373c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3373c4: 0x2642003c  addiu       $v0, $s2, 0x3C
    ctx->pc = 0x3373c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x3373c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3373c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3373cc: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3373ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x3373d0: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x3373d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3373d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3373d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3373d8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3373d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3373dc: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x3373dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3373e0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x3373e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3373e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3373e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3373e8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3373e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3373ec: 0x94224c40  lhu         $v0, 0x4C40($at)
    ctx->pc = 0x3373ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C40u));
    // 0x3373f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3373f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3373f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3373f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3373f8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3373f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3373fc: 0x94224c42  lhu         $v0, 0x4C42($at)
    ctx->pc = 0x3373fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C42u));
    // 0x337400: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337404: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x337404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337408: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33740c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33740cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x337410: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x337410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x337414: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x337414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337418: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33741c: 0x94224c44  lhu         $v0, 0x4C44($at)
    ctx->pc = 0x33741cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C44u));
    // 0x337420: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337424: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x337424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337428: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33742c: 0x94224c42  lhu         $v0, 0x4C42($at)
    ctx->pc = 0x33742cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C42u));
    // 0x337430: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337434: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x337434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337438: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33743c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33743cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x337440: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x337440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x337444: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x337444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337448: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33744c: 0x94224c40  lhu         $v0, 0x4C40($at)
    ctx->pc = 0x33744cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C40u));
    // 0x337450: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337454: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x337454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337458: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33745c: 0x94224c46  lhu         $v0, 0x4C46($at)
    ctx->pc = 0x33745cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C46u));
    // 0x337460: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337464: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x337464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337468: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33746c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33746cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x337470: 0x2642002c  addiu       $v0, $s2, 0x2C
    ctx->pc = 0x337470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x337474: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x337474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337478: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33747c: 0x94224c44  lhu         $v0, 0x4C44($at)
    ctx->pc = 0x33747cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C44u));
    // 0x337480: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337484: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x337484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337488: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33748c: 0x94224c46  lhu         $v0, 0x4C46($at)
    ctx->pc = 0x33748cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C46u));
    // 0x337490: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337494: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x337494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337498: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33749c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x33749cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3374a0: 0x26560038  addiu       $s6, $s2, 0x38
    ctx->pc = 0x3374a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x3374a4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x3374a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x3374a8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3374a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3374ac: 0x24424c18  addiu       $v0, $v0, 0x4C18
    ctx->pc = 0x3374acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19480));
    // 0x3374b0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3374b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3374b4: 0x26370008  addiu       $s7, $s1, 0x8
    ctx->pc = 0x3374b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3374b8: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x3374b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x3374bc: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x3374bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x3374c0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3374C0u;
    SET_GPR_U32(ctx, 31, 0x3374C8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3374C0u, 0x3374C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3374C8u;
label_3374c8:
    // 0x3374c8: 0x26520044  addiu       $s2, $s2, 0x44
    ctx->pc = 0x3374c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x3374cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3374ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3374d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3374d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3374d4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3374d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3374d8: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x3374d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x3374dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3374dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3374e0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3374e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3374e4: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x3374e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x3374e8: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3374e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3374ec: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3374ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3374f0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3374F0u;
    SET_GPR_U32(ctx, 31, 0x3374F8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3374F0u, 0x3374F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3374F8u;
label_3374f8:
    // 0x3374f8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3374f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3374fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3374fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x337500: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x337500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x337504: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x337504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x337508: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x337508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x33750c: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x33750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x337510: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x337510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x337514: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337518: 0x94224c40  lhu         $v0, 0x4C40($at)
    ctx->pc = 0x337518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C40u));
    // 0x33751c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33751cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337520: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x337520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x337524: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x337524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x337528: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33752c: 0x94224c44  lhu         $v0, 0x4C44($at)
    ctx->pc = 0x33752cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C44u));
    // 0x337530: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337534: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x337534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x337538: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x337538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33753c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33753cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337540: 0x94224c42  lhu         $v0, 0x4C42($at)
    ctx->pc = 0x337540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C42u));
    // 0x337544: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337548: 0x22638  dsll        $a0, $v0, 24
    ctx->pc = 0x337548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 24);
    // 0x33754c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x33754cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x337550: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337554: 0x94254c46  lhu         $a1, 0x4C46($at)
    ctx->pc = 0x337554u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x894C46u));
    // 0x337558: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x337558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x33755c: 0x610bc  dsll32      $v0, $a2, 2
    ctx->pc = 0x33755cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 2));
    // 0x337560: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x337560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x337564: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x337564u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x337568: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x337568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x33756c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x33756cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x337570: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x337570u;
    SET_GPR_U32(ctx, 31, 0x337578u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x337570u, 0x337578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337578u;
label_337578:
    // 0x337578: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x337578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33757c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x33757cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x337580: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x337580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x337584: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x337584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x337588: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x337588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x33758c: 0x34451015  ori         $a1, $v0, 0x1015
    ctx->pc = 0x33758cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x337590: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x337590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x337594: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x337594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x337598: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x337598u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x33759c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x33759cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3375a0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3375a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3375a4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3375A4u;
    SET_GPR_U32(ctx, 31, 0x3375ACu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3375A4u, 0x3375ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3375ACu;
label_3375ac:
    // 0x3375ac: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x3375acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3375b0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x3375b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3375b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3375b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3375b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3375b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3375bc: 0x3c130400  lui         $s3, 0x400
    ctx->pc = 0x3375bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1024 << 16));
    // 0x3375c0: 0x3662103b  ori         $v0, $s3, 0x103B
    ctx->pc = 0x3375c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4155);
    // 0x3375c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3375c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3375c8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3375c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3375cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3375ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3375d0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x3375d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x3375d4: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3375d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3375d8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3375d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3375dc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3375DCu;
    SET_GPR_U32(ctx, 31, 0x3375E4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3375DCu, 0x3375E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3375E4u;
label_3375e4:
    // 0x3375e4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3375e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3375e8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3375e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3375ec:
    // 0x3375ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3375ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3375f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3375f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3375f4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3375f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3375f8: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x3375f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x3375fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3375fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x337600: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x337600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x337604: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x337604u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x337608: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x337608u;
    SET_GPR_U32(ctx, 31, 0x337610u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x337608u, 0x337610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337610u;
label_337610:
    // 0x337610: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x337610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x337614: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x337614u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x337618: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x337618u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33761c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x33761cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x337620: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x337620u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x337624: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x337624u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x337628: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x337628u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33762c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33762cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x337630: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x337630u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x337634: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x337634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33763c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33763cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337640: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x337640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x337644: 0x3e00008  jr          $ra
    ctx->pc = 0x337644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33764Cu;
}
