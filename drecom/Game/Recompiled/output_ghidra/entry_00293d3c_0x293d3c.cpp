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

// Function: entry_00293d3c
// Address: 0x293d3c - 0x294030
void entry_00293d3c_0x293d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00293d3c_0x293d3c");
#endif

    switch (ctx->pc) {
        case 0x293dd4u: goto label_293dd4;
        case 0x293e04u: goto label_293e04;
        case 0x293f18u: goto label_293f18;
        case 0x293f88u: goto label_293f88;
        case 0x294000u: goto label_294000;
        default: break;
    }

    ctx->pc = 0x293d3cu;

    // 0x293d3c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x293d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x293d40: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x293d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293d44: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x293d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293d48: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x293d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x293d4c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x293d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x293d50: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x293d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x293d54: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x293d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x293d58: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x293d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
    // 0x293d5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x293d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x293d60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x293d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x293d64: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x293d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x293d68: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x293d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x293d6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x293d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x293d70: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x293d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x293d74: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x293d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x293d78: 0x34560040  ori         $s6, $v0, 0x40
    ctx->pc = 0x293d78u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x293d7c: 0xae160004  sw          $s6, 0x4($s0)
    ctx->pc = 0x293d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 22));
    // 0x293d80: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x293d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x293d84: 0x70c0b628  paddub      $s6, $a2, $zero
    ctx->pc = 0x293d84u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x293d88: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x293d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x293d8c: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x293d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x293d90: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x293d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x293d94: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x293d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x293d98: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x293d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x293d9c: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x293d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x293da0: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x293da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x293da4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x293da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293da8: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x293da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x293dac: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x293dacu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293db0: 0x0  nop
    ctx->pc = 0x293db0u;
    // NOP
    // 0x293db4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x293db4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x293db8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x293db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x293dbc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x293dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x293dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293dc4: 0x0  nop
    ctx->pc = 0x293dc4u;
    // NOP
    // 0x293dc8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x293dc8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x293dcc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x293DCCu;
    SET_GPR_U32(ctx, 31, 0x293DD4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293DCCu, 0x293DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293DD4u;
label_293dd4:
    // 0x293dd4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x293dd4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x293dd8: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x293dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x293ddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293de0: 0x0  nop
    ctx->pc = 0x293de0u;
    // NOP
    // 0x293de4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x293de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x293de8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x293de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x293dec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x293decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x293df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293df4: 0x0  nop
    ctx->pc = 0x293df4u;
    // NOP
    // 0x293df8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x293df8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x293dfc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x293DFCu;
    SET_GPR_U32(ctx, 31, 0x293E04u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293DFCu, 0x293E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E04u;
label_293e04:
    // 0x293e04: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x293e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x293e08: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x293e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293e0c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x293e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x293e10: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x293e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x293e14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x293e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x293e18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x293e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x293e1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293e20: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x293e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x293e24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x293e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x293e28: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x293e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x293e2c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x293e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x293e30: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x293e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x293e34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x293e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x293e38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x293e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x293e3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293e40: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x293e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x293e44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x293e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x293e48: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x293e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x293e4c: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x293e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x293e50: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x293e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x293e54: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x293e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x293e58: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x293e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x293e5c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x293e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293e60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x293e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x293e64: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x293e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x293e68: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x293e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x293e6c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x293e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x293e70: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x293e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x293e74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x293e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x293e78: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x293e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x293e7c: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x293e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x293e80: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x293e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x293e84: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x293e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x293e88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x293e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x293e8c: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x293e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x293e90: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x293e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x293e94: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x293e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x293e98: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x293e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x293e9c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x293e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x293ea0: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x293ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x293ea4: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x293ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x293ea8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x293ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x293eac: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x293eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x293eb0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x293eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x293eb4: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x293eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x293eb8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x293eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x293ebc: 0x8fbe0164  lw          $fp, 0x164($sp)
    ctx->pc = 0x293ebcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x293ec0: 0x1ef0c0  sll         $fp, $fp, 3
    ctx->pc = 0x293ec0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x293ec4: 0x27c27900  addiu       $v0, $fp, 0x7900
    ctx->pc = 0x293ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 30976));
    // 0x293ec8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x293ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x293ecc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x293eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293ed0: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x293ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x293ed4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x293ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x293ed8: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x293ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x293edc: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x293edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x293ee0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x293ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x293ee4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x293ee4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293ee8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x293ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x293eec: 0x244400a3  addiu       $a0, $v0, 0xA3
    ctx->pc = 0x293eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 163));
    // 0x293ef0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x293ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x293ef4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x293ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x293ef8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x293ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x293efc: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x293efcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x293f00: 0x24c3cca0  addiu       $v1, $a2, -0x3360
    ctx->pc = 0x293f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
    // 0x293f04: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x293f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293f08: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x293f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x293f0c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x293f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x293f10: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x293F10u;
    SET_GPR_U32(ctx, 31, 0x293F18u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x293F18u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x293F18u) { return; }
    ctx->pc = 0x293F18u;
label_293f18:
    // 0x293f18: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x293f18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x293f1c: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x293f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x293f20: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x293f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x293f24: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x293f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x293f28: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x293f28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x293f2c: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x293f2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x293f30: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x293f30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x293f34: 0x32378  dsll        $a0, $v1, 13
    ctx->pc = 0x293f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 13);
    // 0x293f38: 0x42cbe  dsrl32      $a1, $a0, 18
    ctx->pc = 0x293f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) >> (32 + 18));
    // 0x293f3c: 0xa7202d  daddu       $a0, $a1, $a3
    ctx->pc = 0x293f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 7));
    // 0x293f40: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x293f40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x293f44: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x293f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x293f48: 0x4197c  dsll32      $v1, $a0, 5
    ctx->pc = 0x293f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 5));
    // 0x293f4c: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x293f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x293f50: 0x3447001f  ori         $a3, $v0, 0x1F
    ctx->pc = 0x293f50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x293f54: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x293f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x293f58: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x293f58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x293f5c: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x293f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x293f60: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x293f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x293f64: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x293f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x293f68: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x293f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x293f6c: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x293f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x293f70: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x293f70u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x293f74: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x293f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x293f78: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x293f78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x293f7c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x293f7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x293f80: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x293F80u;
    SET_GPR_U32(ctx, 31, 0x293F88u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x293F80u, 0x293F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F88u;
label_293f88:
    // 0x293f88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x293f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x293f8c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x293f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x293f90: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x293f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x293f94: 0x34651009  ori         $a1, $v1, 0x1009
    ctx->pc = 0x293f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x293f98: 0xaea50004  sw          $a1, 0x4($s5)
    ctx->pc = 0x293f98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
    // 0x293f9c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x293f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293fa0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x293fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x293fa4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x293fa4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x293fa8: 0x32138  dsll        $a0, $v1, 4
    ctx->pc = 0x293fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 4);
    // 0x293fac: 0x3483000a  ori         $v1, $a0, 0xA
    ctx->pc = 0x293facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x293fb0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x293fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x293fb4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x293fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x293fb8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x293fb8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x293fbc: 0x413b8  dsll        $v0, $a0, 14
    ctx->pc = 0x293fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 14);
    // 0x293fc0: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x293fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293fc4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x293fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x293fc8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x293fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x293fcc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x293fccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x293fd0: 0x32638  dsll        $a0, $v1, 24
    ctx->pc = 0x293fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 24);
    // 0x293fd4: 0x853825  or          $a3, $a0, $a1
    ctx->pc = 0x293fd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x293fd8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x293fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x293fdc: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x293fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x293fe0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x293fe0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x293fe4: 0x330bc  dsll32      $a2, $v1, 2
    ctx->pc = 0x293fe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 2));
    // 0x293fe8: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x293fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x293fec: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x293fecu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x293ff0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x293ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x293ff4: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x293ff4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x293ff8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x293FF8u;
    SET_GPR_U32(ctx, 31, 0x294000u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x293FF8u, 0x294000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294000u;
label_294000:
    // 0x294000: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x294000u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x294004: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x294004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x294008: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x294008u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29400c: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x29400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x294010: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x294010u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x294014: 0x26e20008  addiu       $v0, $s7, 0x8
    ctx->pc = 0x294014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x294018: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x294018u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29401c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x29401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x294020: 0x24430028  addiu       $v1, $v0, 0x28
    ctx->pc = 0x294020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x294024: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x294024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x294028: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x294028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29402c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x29402cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x294030u;
}
