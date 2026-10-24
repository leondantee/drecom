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

// Function: Gauge_init
// Address: 0x328c90 - 0x328e50
void Gauge_init_0x328c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gauge_init_0x328c90");
#endif

    switch (ctx->pc) {
        case 0x328d00u: goto label_328d00;
        case 0x328d40u: goto label_328d40;
        case 0x328d64u: goto label_328d64;
        case 0x328d94u: goto label_328d94;
        case 0x328da8u: goto label_328da8;
        case 0x328dbcu: goto label_328dbc;
        case 0x328e08u: goto label_328e08;
        default: break;
    }

    ctx->pc = 0x328c90u;

    // 0x328c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x328c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x328c94: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x328c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x328c98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x328c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x328c9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x328ca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328ca4: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x328ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x328ca8: 0x2450c2f0  addiu       $s0, $v0, -0x3D10
    ctx->pc = 0x328ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951664));
    // 0x328cac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x328cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x328cb0: 0x2451dbc0  addiu       $s1, $v0, -0x2440
    ctx->pc = 0x328cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x328cb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x328cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x328cb8: 0x24526150  addiu       $s2, $v0, 0x6150
    ctx->pc = 0x328cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x328cbc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x328cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x328cc0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x328cc0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85C2F2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x85C2F2u, _value); } while (0);
    // 0x328cc4: 0x862213aa  lh          $v0, 0x13AA($s1)
    ctx->pc = 0x328cc4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x328cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328ccc: 0x0  nop
    ctx->pc = 0x328cccu;
    // NOP
    // 0x328cd0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x328cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x328cd4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x328cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x328cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328cdc: 0x0  nop
    ctx->pc = 0x328cdcu;
    // NOP
    // 0x328ce0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x328ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x328ce4: 0x3c023bb6  lui         $v0, 0x3BB6
    ctx->pc = 0x328ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15286 << 16));
    // 0x328ce8: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x328ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
    // 0x328cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328cf0: 0x0  nop
    ctx->pc = 0x328cf0u;
    // NOP
    // 0x328cf4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x328cf4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x328cf8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x328CF8u;
    SET_GPR_U32(ctx, 31, 0x328D00u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x328CF8u, 0x328D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D00u;
label_328d00:
    // 0x328d00: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x328d00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x328d04: 0x8622138c  lh          $v0, 0x138C($s1)
    ctx->pc = 0x328d04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5004)));
    // 0x328d08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328d0c: 0x0  nop
    ctx->pc = 0x328d0cu;
    // NOP
    // 0x328d10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x328d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x328d14: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x328d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x328d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328d1c: 0x0  nop
    ctx->pc = 0x328d1cu;
    // NOP
    // 0x328d20: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x328d20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x328d24: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x328d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x328d28: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x328d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x328d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328d30: 0x0  nop
    ctx->pc = 0x328d30u;
    // NOP
    // 0x328d34: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x328d34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x328d38: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x328D38u;
    SET_GPR_U32(ctx, 31, 0x328D40u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x328D38u, 0x328D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D40u;
label_328d40:
    // 0x328d40: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x328d40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x328d44: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x328d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x328d48: 0xa2022820  sb          $v0, 0x2820($s0)
    ctx->pc = 0x328d48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10272), (uint8_t)GPR_U32(ctx, 2));
    // 0x328d4c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x328d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x328d50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x328d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x328d54: 0x0  nop
    ctx->pc = 0x328d54u;
    // NOP
    // 0x328d58: 0xe60c2824  swc1        $f12, 0x2824($s0)
    ctx->pc = 0x328d58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10276), bits); }
    // 0x328d5c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x328D5Cu;
    SET_GPR_U32(ctx, 31, 0x328D64u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x328D5Cu, 0x328D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D64u;
label_328d64:
    // 0x328d64: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x328d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x328d68: 0xac22af78  sw          $v0, -0x5088($at)
    ctx->pc = 0x328d68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF78u, _value); } while (0);
    // 0x328d6c: 0xa200290f  sb          $zero, 0x290F($s0)
    ctx->pc = 0x328d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10511), (uint8_t)GPR_U32(ctx, 0));
    // 0x328d70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x328d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328d74: 0xa2022904  sb          $v0, 0x2904($s0)
    ctx->pc = 0x328d74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10500), (uint8_t)GPR_U32(ctx, 2));
    // 0x328d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328d7c: 0xa2022830  sb          $v0, 0x2830($s0)
    ctx->pc = 0x328d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10288), (uint8_t)GPR_U32(ctx, 2));
    // 0x328d80: 0x260428c8  addiu       $a0, $s0, 0x28C8
    ctx->pc = 0x328d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10440));
    // 0x328d84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x328d84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x328d88: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x328d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x328d8c: 0xc046314  jal         func_118C50
    ctx->pc = 0x328D8Cu;
    SET_GPR_U32(ctx, 31, 0x328D94u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x328D94u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x328D94u) { return; }
    ctx->pc = 0x328D94u;
label_328d94:
    // 0x328d94: 0x260428dc  addiu       $a0, $s0, 0x28DC
    ctx->pc = 0x328d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10460));
    // 0x328d98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x328d98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x328d9c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x328d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x328da0: 0xc046314  jal         func_118C50
    ctx->pc = 0x328DA0u;
    SET_GPR_U32(ctx, 31, 0x328DA8u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x328DA8u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x328DA8u) { return; }
    ctx->pc = 0x328DA8u;
label_328da8:
    // 0x328da8: 0x260428f0  addiu       $a0, $s0, 0x28F0
    ctx->pc = 0x328da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10480));
    // 0x328dac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x328dacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x328db0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x328db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x328db4: 0xc046314  jal         func_118C50
    ctx->pc = 0x328DB4u;
    SET_GPR_U32(ctx, 31, 0x328DBCu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x328DBCu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x328DBCu) { return; }
    ctx->pc = 0x328DBCu;
label_328dbc:
    // 0x328dbc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x328dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x328dc0: 0x8c22af60  lw          $v0, -0x50A0($at)
    ctx->pc = 0x328dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF60u));
    // 0x328dc4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x328DC4u;
    {
        const bool branch_taken_0x328dc4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x328dc4) {
            ctx->pc = 0x328DE0u;
            goto label_328de0;
        }
    }
    ctx->pc = 0x328DCCu;
    // 0x328dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328dd0: 0x0  nop
    ctx->pc = 0x328dd0u;
    // NOP
    // 0x328dd4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x328dd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x328dd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x328DD8u;
    {
        const bool branch_taken_0x328dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328dd8) {
            ctx->pc = 0x328DFCu;
            goto label_328dfc;
        }
    }
    ctx->pc = 0x328DE0u;
label_328de0:
    // 0x328de0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x328de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x328de4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x328de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x328de8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x328de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x328dec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x328decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328df0: 0x0  nop
    ctx->pc = 0x328df0u;
    // NOP
    // 0x328df4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x328df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x328df8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x328df8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_328dfc:
    // 0x328dfc: 0xe60c28f0  swc1        $f12, 0x28F0($s0)
    ctx->pc = 0x328dfcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10480), bits); }
    // 0x328e00: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x328E00u;
    SET_GPR_U32(ctx, 31, 0x328E08u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x328E00u, 0x328E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E08u;
label_328e08:
    // 0x328e08: 0xae0228dc  sw          $v0, 0x28DC($s0)
    ctx->pc = 0x328e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10460), GPR_U32(ctx, 2));
    // 0x328e0c: 0xae0228c8  sw          $v0, 0x28C8($s0)
    ctx->pc = 0x328e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10440), GPR_U32(ctx, 2));
    // 0x328e10: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x328e10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e14: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x328e14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e18: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x328e18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e1c: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x328e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e20: 0xa20028b9  sb          $zero, 0x28B9($s0)
    ctx->pc = 0x328e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10425), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e24: 0xa20028c0  sb          $zero, 0x28C0($s0)
    ctx->pc = 0x328e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e28: 0xa2002909  sb          $zero, 0x2909($s0)
    ctx->pc = 0x328e28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10505), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e2c: 0xa2002905  sb          $zero, 0x2905($s0)
    ctx->pc = 0x328e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10501), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e30: 0xa2002906  sb          $zero, 0x2906($s0)
    ctx->pc = 0x328e30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10502), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e34: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x328e34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x328e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328e44: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x328e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x328e48: 0x3e00008  jr          $ra
    ctx->pc = 0x328E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328E50u;
}
