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

// Function: caseD_1
// Address: 0x206d64 - 0x206fac
void caseD_1_0x206d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x206d64");
#endif

    switch (ctx->pc) {
        case 0x206d98u: goto label_206d98;
        case 0x206db8u: goto label_206db8;
        case 0x206dccu: goto label_206dcc;
        case 0x206ddcu: goto label_206ddc;
        case 0x206e3cu: goto label_206e3c;
        case 0x206e74u: goto label_206e74;
        case 0x206ed8u: goto label_206ed8;
        case 0x206ef4u: goto label_206ef4;
        case 0x206f20u: goto label_206f20;
        case 0x206f2cu: goto label_206f2c;
        default: break;
    }

    ctx->pc = 0x206d64u;

    // 0x206d64: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206d68: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x206d68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x206d6c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x206d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x206d70: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x206d70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x206d74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206d78: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x206d78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x206d7c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x206d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x206d80: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x206d80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x206d84: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x206d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206d88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x206d88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x206d8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x206d8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x206d90: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x206D90u;
    SET_GPR_U32(ctx, 31, 0x206D98u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x206D90u, 0x206D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D98u;
label_206d98:
    // 0x206d98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x206d98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x206d9c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x206d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x206da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206da4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206da8: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x206da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x206dac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206db0: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x206DB0u;
    SET_GPR_U32(ctx, 31, 0x206DB8u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x206DB0u, 0x206DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DB8u;
label_206db8:
    // 0x206db8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x206db8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x206dbc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206dc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x206dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x206dc4: 0xc080f60  jal         func_203D80
    ctx->pc = 0x206DC4u;
    SET_GPR_U32(ctx, 31, 0x206DCCu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x206DC4u, 0x206DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DCCu;
label_206dcc:
    // 0x206dcc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x206dccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x206dd0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206dd4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x206DD4u;
    SET_GPR_U32(ctx, 31, 0x206DDCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x206DD4u, 0x206DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DDCu;
label_206ddc:
    // 0x206ddc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x206ddcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x206de0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206de4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x206de4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x206de8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x206de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x206dec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x206decu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x206df0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x206df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x206df4: 0x1483006d  bne         $a0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x206DF4u;
    {
        const bool branch_taken_0x206df4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x206df4) {
            ctx->pc = 0x206FACu;
            return;
        }
    }
    ctx->pc = 0x206DFCu;
    // 0x206dfc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206e00: 0xa4801278  sh          $zero, 0x1278($a0)
    ctx->pc = 0x206e00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x206e04: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206e08: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x206e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x206e0c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x206e0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206e10: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x206e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x206e14: 0x246292c0  addiu       $v0, $v1, -0x6D40
    ctx->pc = 0x206e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x206e18: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x206e18u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192C0u, _value); } while (0);
    // 0x206e1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206e20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206e24: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x206e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192C4u, _value); } while (0); }
    // 0x206e28: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206e2c: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x206e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206e30: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x206e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x206e34: 0xc06765c  jal         func_19D970
    ctx->pc = 0x206E34u;
    SET_GPR_U32(ctx, 31, 0x206E3Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x206E34u, 0x206E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E3Cu;
label_206e3c:
    // 0x206e3c: 0x3c063e86  lui         $a2, 0x3E86
    ctx->pc = 0x206e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16006 << 16));
    // 0x206e40: 0x34c50a92  ori         $a1, $a2, 0xA92
    ctx->pc = 0x206e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2706);
    // 0x206e44: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x206e44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x206e48: 0x0  nop
    ctx->pc = 0x206e48u;
    // NOP
    // 0x206e4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x206e4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206e50: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x206e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206e54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206e58: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x206e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x206e5c: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x206e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x206e60: 0x24e89280  addiu       $t0, $a3, -0x6D80
    ctx->pc = 0x206e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939264));
    // 0x206e64: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x206e64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x206e68: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x206e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x206e6c: 0xc067844  jal         func_19E110
    ctx->pc = 0x206E6Cu;
    SET_GPR_U32(ctx, 31, 0x206E74u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x206E6Cu, 0x206E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E74u;
label_206e74:
    // 0x206e74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206e78: 0x0  nop
    ctx->pc = 0x206e78u;
    // NOP
    // 0x206e7c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x206e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x206e80: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x206e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x206e84: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x206e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x206e88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x206e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206e8c: 0x8443127a  lh          $v1, 0x127A($v0)
    ctx->pc = 0x206e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x206e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x206e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206e94: 0x0  nop
    ctx->pc = 0x206e94u;
    // NOP
    // 0x206e98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x206e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x206e9c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x206e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x206ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206ea4: 0x0  nop
    ctx->pc = 0x206ea4u;
    // NOP
    // 0x206ea8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x206ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x206eac: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x206eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x206eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206eb4: 0x0  nop
    ctx->pc = 0x206eb4u;
    // NOP
    // 0x206eb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206ebc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x206ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x206ec0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x206ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x206ec4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x206ec8: 0x24459280  addiu       $a1, $v0, -0x6D80
    ctx->pc = 0x206ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x206ecc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x206eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x206ed0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x206ED0u;
    SET_GPR_U32(ctx, 31, 0x206ED8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x206ED8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x206ED8u) { return; }
    ctx->pc = 0x206ED8u;
label_206ed8:
    // 0x206ed8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x206ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x206edc: 0x246492c0  addiu       $a0, $v1, -0x6D40
    ctx->pc = 0x206edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x206ee0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x206ee4: 0x244592c0  addiu       $a1, $v0, -0x6D40
    ctx->pc = 0x206ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x206ee8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x206ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x206eec: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x206EECu;
    SET_GPR_U32(ctx, 31, 0x206EF4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x206EF4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x206EF4u) { return; }
    ctx->pc = 0x206EF4u;
label_206ef4:
    // 0x206ef4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206ef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206ef8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206efc: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x206efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192C4u, _value); } while (0); }
    // 0x206f00: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206f04: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x206f04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x206f08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x206f08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x206f0c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x206f10: 0x244692c0  addiu       $a2, $v0, -0x6D40
    ctx->pc = 0x206f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x206f14: 0x246700d0  addiu       $a3, $v1, 0xD0
    ctx->pc = 0x206f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x206f18: 0xc0bb3e8  jal         func_2ECFA0
    ctx->pc = 0x206F18u;
    SET_GPR_U32(ctx, 31, 0x206F20u);
    ctx->pc = 0x2ECFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECFA0u, 0x206F18u, 0x206F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F20u;
label_206f20:
    // 0x206f20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x206f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x206f24: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x206F24u;
    SET_GPR_U32(ctx, 31, 0x206F2Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x206F2Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x206F2Cu) { return; }
    ctx->pc = 0x206F2Cu;
label_206f2c:
    // 0x206f2c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x206f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x206f30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206f34: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x206f34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x206f38: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x206f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x206f3c: 0x248392c0  addiu       $v1, $a0, -0x6D40
    ctx->pc = 0x206f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939328));
    // 0x206f40: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x206f40u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x6192C0u));
    // 0x206f44: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x206f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x206f48: 0x248592f0  addiu       $a1, $a0, -0x6D10
    ctx->pc = 0x206f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939376));
    // 0x206f4c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x206f4cu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192F0u, _value); } while (0);
    // 0x206f50: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206f54: 0xc42192f4  lwc1        $f1, -0x6D0C($at)
    ctx->pc = 0x206f54u;
    { uint32_t bits = FAST_READ32(0x6192F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206f58: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x206f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x206f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206f60: 0x0  nop
    ctx->pc = 0x206f60u;
    // NOP
    // 0x206f64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x206f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x206f68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206f6c: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x206f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x206f70: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x206f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x206f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206f78: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206f7c: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x206f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x206f80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206f84: 0xa4209304  sh          $zero, -0x6CFC($at)
    ctx->pc = 0x206f84u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x206f88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206f8c: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x206f8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x206f90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206f94: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x206f94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x206f98: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206f9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x206fa0: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x206fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x206fa4: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x206FA4u;
    SET_GPR_U32(ctx, 31, 0x206FACu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x206FA4u, 0x206FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FACu;
}
