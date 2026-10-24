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

// Function: entry_00333cbc
// Address: 0x333cbc - 0x333e94
void entry_00333cbc_0x333cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333cbc_0x333cbc");
#endif

    switch (ctx->pc) {
        case 0x333cf0u: goto label_333cf0;
        case 0x333dacu: goto label_333dac;
        case 0x333dd8u: goto label_333dd8;
        default: break;
    }

    ctx->pc = 0x333cbcu;

    // 0x333cbc: 0x9242683f  lbu         $v0, 0x683F($s2)
    ctx->pc = 0x333cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26687)));
    // 0x333cc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x333cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333cc4: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x333cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x333cc8: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x333cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x333ccc: 0x8e426850  lw          $v0, 0x6850($s2)
    ctx->pc = 0x333cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26704)));
    // 0x333cd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x333cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333cd4: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x333cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x333cd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x333cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x333cdc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x333cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x333ce0: 0x2455663e  addiu       $s5, $v0, 0x663E
    ctx->pc = 0x333ce0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x333ce4: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x333ce4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x333ce8: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x333CE8u;
    SET_GPR_U32(ctx, 31, 0x333CF0u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x333CE8u, 0x333CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CF0u;
label_333cf0:
    // 0x333cf0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x333cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x333cf4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x333cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x333cf8: 0x2f040  sll         $fp, $v0, 1
    ctx->pc = 0x333cf8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x333cfc: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x333cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x333d00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x333d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x333d04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333d08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x333d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333d0c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x333d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x333d10: 0x244297e0  addiu       $v0, $v0, -0x6820
    ctx->pc = 0x333d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940640));
    // 0x333d14: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x333d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333d18: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x333d18u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x333d1c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x333d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x333d20: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x333d20u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333d24: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x333d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x333d28: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x333d28u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333d2c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x333d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x333d30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x333d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x333d34: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x333d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333d38: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x333d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x333d3c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x333d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x333d40: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x333d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x333d44: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x333d44u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333d48: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x333d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
    // 0x333d4c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x333d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x333d50: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x333d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x333d54: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x333d54u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333d58: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x333d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x333d5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x333d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333d60: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x333d60u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x333d64: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x333d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x333d68: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x333d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x333d6c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x333d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x333d70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x333d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333d74: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x333d74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x333d78: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x333d78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333d7c: 0x2c61823  subu        $v1, $s6, $a2
    ctx->pc = 0x333d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x333d80: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x333d80u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x333d84: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x333d84u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333d88: 0x0  nop
    ctx->pc = 0x333d88u;
    // NOP
    // 0x333d8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x333d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x333d90: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x333d90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x333d94: 0x34c2cccd  ori         $v0, $a2, 0xCCCD
    ctx->pc = 0x333d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x333d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333d9c: 0x0  nop
    ctx->pc = 0x333d9cu;
    // NOP
    // 0x333da0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x333da0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x333da4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x333DA4u;
    SET_GPR_U32(ctx, 31, 0x333DACu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x333DA4u, 0x333DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DACu;
label_333dac:
    // 0x333dac: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x333dacu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333db0: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x333db0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333db4: 0x0  nop
    ctx->pc = 0x333db4u;
    // NOP
    // 0x333db8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x333db8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x333dbc: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x333dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x333dc0: 0x34c2cccd  ori         $v0, $a2, 0xCCCD
    ctx->pc = 0x333dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x333dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333dc8: 0x0  nop
    ctx->pc = 0x333dc8u;
    // NOP
    // 0x333dcc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x333dccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x333dd0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x333DD0u;
    SET_GPR_U32(ctx, 31, 0x333DD8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x333DD0u, 0x333DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DD8u;
label_333dd8:
    // 0x333dd8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x333dd8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333ddc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x333ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x333de0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x333de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x333de4: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x333de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x333de8: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x333de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x333dec: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x333decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x333df0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x333df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x333df4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x333df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x333df8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x333df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x333dfc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x333dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x333e00: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x333e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x333e04: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x333e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x333e08: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x333e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x333e0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x333e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x333e10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x333e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x333e14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x333e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x333e18: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x333e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x333e1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x333e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x333e20: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x333e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x333e24: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x333e24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x333e28: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x333e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x333e2c: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x333e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x333e30: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x333e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x333e34: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x333e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x333e38: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x333e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x333e3c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x333e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x333e40: 0x82465deb  lb          $a2, 0x5DEB($s2)
    ctx->pc = 0x333e40u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24043)));
    // 0x333e44: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x333e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x333e48: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x333e48u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x333e4c: 0x8e426850  lw          $v0, 0x6850($s2)
    ctx->pc = 0x333e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26704)));
    // 0x333e50: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x333e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x333e54: 0x14c3000f  bne         $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x333E54u;
    {
        const bool branch_taken_0x333e54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x333e54) {
            ctx->pc = 0x333E94u;
            return;
        }
    }
    ctx->pc = 0x333E5Cu;
    // 0x333e5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x333e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x333e60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x333e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x333e64: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x333e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x333e68: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x333e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x333e6c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x333e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x333e70: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x333e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x333e74: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x333e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333e78: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x333e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x333e7c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x333e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x333e80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x333e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333e84: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x333e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x333e88: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x333e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x333e8c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x333E8Cu;
    {
        const bool branch_taken_0x333e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e8c) {
            ctx->pc = 0x333F28u;
            return;
        }
    }
    ctx->pc = 0x333E94u;
}
