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

// Function: Disp_number_trans
// Address: 0x328f60 - 0x3296a0
void Disp_number_trans_0x328f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Disp_number_trans_0x328f60");
#endif

    switch (ctx->pc) {
        case 0x328fd8u: goto label_328fd8;
        case 0x329068u: goto label_329068;
        case 0x3290c4u: goto label_3290c4;
        case 0x3290fcu: goto label_3290fc;
        case 0x329128u: goto label_329128;
        case 0x329154u: goto label_329154;
        case 0x3291c4u: goto label_3291c4;
        case 0x3291f4u: goto label_3291f4;
        case 0x32929cu: goto label_32929c;
        case 0x3292a8u: goto label_3292a8;
        case 0x329348u: goto label_329348;
        case 0x32936cu: goto label_32936c;
        case 0x329390u: goto label_329390;
        case 0x3293b4u: goto label_3293b4;
        case 0x3295b0u: goto label_3295b0;
        case 0x329634u: goto label_329634;
        default: break;
    }

    ctx->pc = 0x328f60u;

    // 0x328f60: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x328f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x328f64: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x328f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x328f68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x328f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x328f6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x328f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x328f70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x328f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x328f74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x328f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x328f78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x328f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x328f7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x328f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x328f80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x328f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x328f84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x328f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328f8c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x328f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x328f90: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x328f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x328f94: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x328f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x328f98: 0xe7ac00f8  swc1        $f12, 0xF8($sp)
    ctx->pc = 0x328f98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x328f9c: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x328f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x328fa0: 0x2463c2f0  addiu       $v1, $v1, -0x3D10
    ctx->pc = 0x328fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951664));
    // 0x328fa4: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x328fa4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x328fa8: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x328fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x328fac: 0x2463af80  addiu       $v1, $v1, -0x5080
    ctx->pc = 0x328facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946688));
    // 0x328fb0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x328fb0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x328fb4: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x328fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x328fb8: 0x2463b240  addiu       $v1, $v1, -0x4DC0
    ctx->pc = 0x328fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947392));
    // 0x328fbc: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x328fbcu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x328fc0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x328fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x328fc4: 0x2466a4a0  addiu       $a2, $v1, -0x5B60
    ctx->pc = 0x328fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x328fc8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x328fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x328fcc: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x328fccu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x39A4A0u));
    // 0x328fd0: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x328fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x328fd4: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x328fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_328fd8:
    // 0x328fd8: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x328fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x328fdc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x328fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x328fe0: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x328fe0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x328fe4: 0x0  nop
    ctx->pc = 0x328fe4u;
    // NOP
    // 0x328fe8: 0x0  nop
    ctx->pc = 0x328fe8u;
    // NOP
    // 0x328fec: 0x3010  mfhi        $a2
    ctx->pc = 0x328fecu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x328ff0: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x328ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x328ff4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x328ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x328ff8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x328ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x328ffc: 0xac6600b0  sw          $a2, 0xB0($v1)
    ctx->pc = 0x328ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 6));
    // 0x329000: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x329000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x329004: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x329004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x329008: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x329008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x32900c: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x32900cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x329010: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x329010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x329014: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x329014u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x329018: 0x0  nop
    ctx->pc = 0x329018u;
    // NOP
    // 0x32901c: 0x1810  mfhi        $v1
    ctx->pc = 0x32901cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x329020: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x329020u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x329024: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x329024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x329028: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x329028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x32902c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x32902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x329030: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329034: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x329034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x329038: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x329038u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x32903c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32903Cu;
    {
        const bool branch_taken_0x32903c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32903c) {
            ctx->pc = 0x329050u;
            goto label_329050;
        }
    }
    ctx->pc = 0x329044u;
    // 0x329044: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x329044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x329048: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x329048u;
    {
        const bool branch_taken_0x329048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329048) {
            ctx->pc = 0x328FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328fd8;
        }
    }
    ctx->pc = 0x329050u;
label_329050:
    // 0x329050: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x329050u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x329054: 0x27c3a4b0  addiu       $v1, $fp, -0x5B50
    ctx->pc = 0x329054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294943920));
    // 0x329058: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x329058u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32905c: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x32905cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x329060: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x329060u;
    {
        const bool branch_taken_0x329060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329060) {
            ctx->pc = 0x329658u;
            goto label_329658;
        }
    }
    ctx->pc = 0x329068u;
label_329068:
    // 0x329068: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x329068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x32906c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x32906cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x329070: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x329070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x329074: 0x8c6300b0  lw          $v1, 0xB0($v1)
    ctx->pc = 0x329074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x329078: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x329078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32907c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x329080: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x329080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x329084: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x329084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x329088: 0x2442a240  addiu       $v0, $v0, -0x5DC0
    ctx->pc = 0x329088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
    // 0x32908c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x32908cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x329090: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x329090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x329094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x329094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329098: 0x0  nop
    ctx->pc = 0x329098u;
    // NOP
    // 0x32909c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32909cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3290a0: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3290a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3290a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3290a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3290a8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3290a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3290ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3290acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3290b0: 0x0  nop
    ctx->pc = 0x3290b0u;
    // NOP
    // 0x3290b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3290b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3290b8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3290b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3290bc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3290BCu;
    SET_GPR_U32(ctx, 31, 0x3290C4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3290BCu, 0x3290C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290C4u;
label_3290c4:
    // 0x3290c4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x3290c4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3290c8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3290c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3290cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3290ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3290d0: 0x0  nop
    ctx->pc = 0x3290d0u;
    // NOP
    // 0x3290d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3290d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3290d8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3290d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3290dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3290dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3290e0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3290e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3290e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3290e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3290e8: 0x0  nop
    ctx->pc = 0x3290e8u;
    // NOP
    // 0x3290ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3290ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3290f0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3290f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3290f4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3290F4u;
    SET_GPR_U32(ctx, 31, 0x3290FCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3290F4u, 0x3290FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290FCu;
label_3290fc:
    // 0x3290fc: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x3290fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x329100: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x329100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x329104: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x329104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x329108: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x329108u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32910c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32910cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329110: 0x0  nop
    ctx->pc = 0x329110u;
    // NOP
    // 0x329114: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329118: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x329118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32911c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x32911cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x329120: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x329120u;
    SET_GPR_U32(ctx, 31, 0x329128u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x329120u, 0x329128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329128u;
label_329128:
    // 0x329128: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x329128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x32912c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x32912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x329130: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x329130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x329134: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x329134u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x329138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32913c: 0x0  nop
    ctx->pc = 0x32913cu;
    // NOP
    // 0x329140: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329144: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x329144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329148: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x329148u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32914c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32914Cu;
    SET_GPR_U32(ctx, 31, 0x329154u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32914Cu, 0x329154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329154u;
label_329154:
    // 0x329154: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x329154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x329158: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x329158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32915c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329160: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x329160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x329164: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x329164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x329168: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x329168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x32916c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x32916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x329170: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x329170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329174: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x329174u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x329178: 0x242a021  addu        $s4, $s2, $v0
    ctx->pc = 0x329178u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32917c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x32917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x329180: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x329180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329184: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x329184u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x329188: 0x2c2b023  subu        $s6, $s6, $v0
    ctx->pc = 0x329188u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32918c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x32918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x329190: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x329190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329194: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x329194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x329198: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x329198u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32919c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x32919cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3291a0: 0x0  nop
    ctx->pc = 0x3291a0u;
    // NOP
    // 0x3291a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3291a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3291a8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3291a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3291ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3291acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3291b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3291b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3291b4: 0x0  nop
    ctx->pc = 0x3291b4u;
    // NOP
    // 0x3291b8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x3291b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3291bc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3291BCu;
    SET_GPR_U32(ctx, 31, 0x3291C4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3291BCu, 0x3291C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3291C4u;
label_3291c4:
    // 0x3291c4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x3291c4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3291c8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x3291c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x3291cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3291ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3291d0: 0x0  nop
    ctx->pc = 0x3291d0u;
    // NOP
    // 0x3291d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3291d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3291d8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3291d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3291dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3291dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3291e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3291e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3291e4: 0x0  nop
    ctx->pc = 0x3291e4u;
    // NOP
    // 0x3291e8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x3291e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3291ec: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3291ECu;
    SET_GPR_U32(ctx, 31, 0x3291F4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3291ECu, 0x3291F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3291F4u;
label_3291f4:
    // 0x3291f4: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3291f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x3291f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3291f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3291fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3291fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x329200: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x329200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x329204: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x329204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x329208: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x329208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32920c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32920cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x329210: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x329210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x329214: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x329214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x329218: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x329218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32921c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x329220: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x329220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x329224: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x329224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x329228: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x329228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32922c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32922cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x329230: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x329230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x329234: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x329234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x329238: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x329238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32923c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x329240: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x329240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x329244: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x329244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x329248: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x329248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32924c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32924cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x329250: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x329250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x329254: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x329254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x329258: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x329258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32925c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32925cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329260: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x329260u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x329264: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x329264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x329268: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x329268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32926c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x32926Cu;
    {
        const bool branch_taken_0x32926c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32926c) {
            ctx->pc = 0x3293B8u;
            goto label_3293b8;
        }
    }
    ctx->pc = 0x329274u;
    // 0x329274: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x329274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x329278: 0x24536150  addiu       $s3, $v0, 0x6150
    ctx->pc = 0x329278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x32927c: 0x92625e04  lbu         $v0, 0x5E04($s3)
    ctx->pc = 0x32927cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62BF54u));
    // 0x329280: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x329280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x329284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x329284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329288: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x329288u;
    {
        const bool branch_taken_0x329288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x329288) {
            ctx->pc = 0x3292B4u;
            goto label_3292b4;
        }
    }
    ctx->pc = 0x329290u;
    // 0x329290: 0xc66c5e00  lwc1        $f12, 0x5E00($s3)
    ctx->pc = 0x329290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x329294: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x329294u;
    SET_GPR_U32(ctx, 31, 0x32929Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x329294u, 0x32929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32929Cu;
label_32929c:
    // 0x32929c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32929cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3292a0: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x3292A0u;
    SET_GPR_U32(ctx, 31, 0x3292A8u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x3292A0u, 0x3292A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292A8u;
label_3292a8:
    // 0x3292a8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x3292a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3292ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3292ACu;
    {
        const bool branch_taken_0x3292ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3292ac) {
            ctx->pc = 0x3292F0u;
            goto label_3292f0;
        }
    }
    ctx->pc = 0x3292B4u;
label_3292b4:
    // 0x3292b4: 0x92625e04  lbu         $v0, 0x5E04($s3)
    ctx->pc = 0x3292b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24068)));
    // 0x3292b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3292b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3292bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3292bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3292c0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3292C0u;
    {
        const bool branch_taken_0x3292c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3292c0) {
            ctx->pc = 0x3292F0u;
            goto label_3292f0;
        }
    }
    ctx->pc = 0x3292C8u;
    // 0x3292c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3292c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3292cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3292ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3292d0: 0xc6605e00  lwc1        $f0, 0x5E00($s3)
    ctx->pc = 0x3292d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3292d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3292d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3292d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3292d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3292dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3292dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3292e0: 0x0  nop
    ctx->pc = 0x3292e0u;
    // NOP
    // 0x3292e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3292e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3292e8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x3292e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3292ec: 0x0  nop
    ctx->pc = 0x3292ecu;
    // NOP
label_3292f0:
    // 0x3292f0: 0xc6615e00  lwc1        $f1, 0x5E00($s3)
    ctx->pc = 0x3292f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3292f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3292f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3292f8: 0x0  nop
    ctx->pc = 0x3292f8u;
    // NOP
    // 0x3292fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3292fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329300: 0x0  nop
    ctx->pc = 0x329300u;
    // NOP
    // 0x329304: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x329304u;
    {
        const bool branch_taken_0x329304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x329304) {
            ctx->pc = 0x32931Cu;
            goto label_32931c;
        }
    }
    ctx->pc = 0x32930Cu;
    // 0x32930c: 0xc6605e00  lwc1        $f0, 0x5E00($s3)
    ctx->pc = 0x32930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329310: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x329310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x329314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x329314u;
    {
        const bool branch_taken_0x329314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329314) {
            ctx->pc = 0x329328u;
            goto label_329328;
        }
    }
    ctx->pc = 0x32931Cu;
label_32931c:
    // 0x32931c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32931cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329320: 0x0  nop
    ctx->pc = 0x329320u;
    // NOP
    // 0x329324: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x329324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_329328:
    // 0x329328: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x329328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32932c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32932cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329330: 0x0  nop
    ctx->pc = 0x329330u;
    // NOP
    // 0x329334: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329338: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x329338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32933c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32933cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x329340: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x329340u;
    SET_GPR_U32(ctx, 31, 0x329348u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x329340u, 0x329348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329348u;
label_329348:
    // 0x329348: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x329348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32934c: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x32934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x329350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x329350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329354: 0x0  nop
    ctx->pc = 0x329354u;
    // NOP
    // 0x329358: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32935c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x32935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329360: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x329360u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x329364: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x329364u;
    SET_GPR_U32(ctx, 31, 0x32936Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x329364u, 0x32936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32936Cu;
label_32936c:
    // 0x32936c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32936cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x329370: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x329370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x329374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x329374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329378: 0x0  nop
    ctx->pc = 0x329378u;
    // NOP
    // 0x32937c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32937cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329380: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x329380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329384: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x329384u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x329388: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x329388u;
    SET_GPR_U32(ctx, 31, 0x329390u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x329388u, 0x329390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329390u;
label_329390:
    // 0x329390: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x329390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x329394: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x329394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x329398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x329398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32939c: 0x0  nop
    ctx->pc = 0x32939cu;
    // NOP
    // 0x3293a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3293a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3293a4: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x3293a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3293a8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x3293a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3293ac: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3293ACu;
    SET_GPR_U32(ctx, 31, 0x3293B4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3293ACu, 0x3293B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3293B4u;
label_3293b4:
    // 0x3293b4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x3293b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_3293b8:
    // 0x3293b8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3293b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3293bc: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x3293bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3293c0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x3293c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x3293c4: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3293c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3293c8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3293c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3293cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3293ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3293d0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x3293d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3293d4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x3293d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x3293d8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3293d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3293dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3293dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3293e0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3293e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3293e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3293e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3293e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3293e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3293ec: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x3293ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x3293f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3293f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3293f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3293f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3293f8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3293F8u;
    {
        const bool branch_taken_0x3293f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3293f8) {
            ctx->pc = 0x329470u;
            goto label_329470;
        }
    }
    ctx->pc = 0x329400u;
    // 0x329400: 0x2643ffdf  addiu       $v1, $s2, -0x21
    ctx->pc = 0x329400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967263));
    // 0x329404: 0x8ee228c4  lw          $v0, 0x28C4($s7)
    ctx->pc = 0x329404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10436)));
    // 0x329408: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x329408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x32940c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x32940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x329410: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x329410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x329414: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x329414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x329418: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x329418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32941c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x32941cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x329420: 0x0  nop
    ctx->pc = 0x329420u;
    // NOP
    // 0x329424: 0x1010  mfhi        $v0
    ctx->pc = 0x329424u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x329428: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x329428u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32942c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x329430: 0x24520021  addiu       $s2, $v0, 0x21
    ctx->pc = 0x329430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x329434: 0x2683ffdf  addiu       $v1, $s4, -0x21
    ctx->pc = 0x329434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967263));
    // 0x329438: 0x8ee228c4  lw          $v0, 0x28C4($s7)
    ctx->pc = 0x329438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10436)));
    // 0x32943c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x32943cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x329440: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x329440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x329444: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x329444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x329448: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x329448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x32944c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x32944cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x329450: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x329450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x329454: 0x0  nop
    ctx->pc = 0x329454u;
    // NOP
    // 0x329458: 0x1010  mfhi        $v0
    ctx->pc = 0x329458u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32945c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x32945cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x329460: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x329460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x329464: 0x24540021  addiu       $s4, $v0, 0x21
    ctx->pc = 0x329464u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x329468: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x329468u;
    {
        const bool branch_taken_0x329468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329468) {
            ctx->pc = 0x3294D8u;
            goto label_3294d8;
        }
    }
    ctx->pc = 0x329470u;
label_329470:
    // 0x329470: 0x2643fe69  addiu       $v1, $s2, -0x197
    ctx->pc = 0x329470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966889));
    // 0x329474: 0x8ee228c4  lw          $v0, 0x28C4($s7)
    ctx->pc = 0x329474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10436)));
    // 0x329478: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x329478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x32947c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x32947cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x329480: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x329480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x329484: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x329484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x329488: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x329488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32948c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x32948cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x329490: 0x0  nop
    ctx->pc = 0x329490u;
    // NOP
    // 0x329494: 0x1010  mfhi        $v0
    ctx->pc = 0x329494u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x329498: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x329498u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32949c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3294a0: 0x24520197  addiu       $s2, $v0, 0x197
    ctx->pc = 0x3294a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 407));
    // 0x3294a4: 0x2683fe69  addiu       $v1, $s4, -0x197
    ctx->pc = 0x3294a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966889));
    // 0x3294a8: 0x8ee228c4  lw          $v0, 0x28C4($s7)
    ctx->pc = 0x3294a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10436)));
    // 0x3294ac: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3294acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3294b0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3294b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3294b4: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x3294b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x3294b8: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x3294b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x3294bc: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3294bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3294c0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3294c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3294c4: 0x0  nop
    ctx->pc = 0x3294c4u;
    // NOP
    // 0x3294c8: 0x1010  mfhi        $v0
    ctx->pc = 0x3294c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3294cc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3294ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3294d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3294d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3294d4: 0x24540197  addiu       $s4, $v0, 0x197
    ctx->pc = 0x3294d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 407));
label_3294d8:
    // 0x3294d8: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x3294d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x3294dc: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3294dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3294e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3294e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3294e4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x3294e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3294e8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3294e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3294ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3294ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3294f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3294f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3294f4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x3294f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3294f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3294f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3294fc: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x3294fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x329500: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x329500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x329504: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x329504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x329508: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x329508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32950c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32950cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x329510: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x329510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x329514: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x329514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x329518: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x329518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x32951c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x329520: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x329520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x329524: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x329524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x329528: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x329528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x32952c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32952cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x329530: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x329530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x329534: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x329534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x329538: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x329538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32953c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32953cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x329540: 0x2442e898  addiu       $v0, $v0, -0x1768
    ctx->pc = 0x329540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961304));
    // 0x329544: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x329544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x329548: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x329548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32954c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x32954cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x329550: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x329550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x329554: 0xdc820018  ld          $v0, 0x18($a0)
    ctx->pc = 0x329554u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x329558: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x329558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x32955c: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x32955cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x329560: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x329560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x329564: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x329564u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x329568: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x329568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x32956c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x32956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x329570: 0x3c05fff8  lui         $a1, 0xFFF8
    ctx->pc = 0x329570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65528 << 16));
    // 0x329574: 0x34a5001f  ori         $a1, $a1, 0x1F
    ctx->pc = 0x329574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
    // 0x329578: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x329578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x32957c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x32957cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x329580: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x329580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x329584: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x329584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x329588: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x329588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x32958c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x32958cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x329590: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x329590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x329594: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x329594u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x329598: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x329598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x32959c: 0x24631a14  addiu       $v1, $v1, 0x1A14
    ctx->pc = 0x32959cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6676));
    // 0x3295a0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x3295a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3295a4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3295a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3295a8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3295A8u;
    SET_GPR_U32(ctx, 31, 0x3295B0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3295A8u, 0x3295B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295B0u;
label_3295b0:
    // 0x3295b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3295b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3295b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3295b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3295b8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x3295b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x3295bc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3295bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3295c0: 0x34631009  ori         $v1, $v1, 0x1009
    ctx->pc = 0x3295c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x3295c4: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x3295c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x3295c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3295c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3295cc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x3295ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3295d0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3295d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3295d4: 0x61938  dsll        $v1, $a2, 4
    ctx->pc = 0x3295d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 4);
    // 0x3295d8: 0x3467000a  ori         $a3, $v1, 0xA
    ctx->pc = 0x3295d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x3295dc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x3295dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3295e0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x3295e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3295e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3295e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3295e8: 0x333b8  dsll        $a2, $v1, 14
    ctx->pc = 0x3295e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 14);
    // 0x3295ec: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x3295ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x3295f0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3295f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3295f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3295f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3295f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3295f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3295fc: 0x33638  dsll        $a2, $v1, 24
    ctx->pc = 0x3295fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 24);
    // 0x329600: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x329600u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x329604: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x329604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x329608: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x329608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32960c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x32960cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x329610: 0x330bc  dsll32      $a2, $v1, 2
    ctx->pc = 0x329610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 2));
    // 0x329614: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x329614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x329618: 0xfea30008  sd          $v1, 0x8($s5)
    ctx->pc = 0x329618u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 3));
    // 0x32961c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x32961cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x329620: 0x24631a14  addiu       $v1, $v1, 0x1A14
    ctx->pc = 0x329620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6676));
    // 0x329624: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x329624u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x329628: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x329628u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x32962c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32962Cu;
    SET_GPR_U32(ctx, 31, 0x329634u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32962Cu, 0x329634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329634u;
label_329634:
    // 0x329634: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x329634u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x329638: 0x26a30010  addiu       $v1, $s5, 0x10
    ctx->pc = 0x329638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x32963c: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x32963cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x329640: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x329640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x329644: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x329644u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x329648: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x329648u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x32964c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x32964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x329650: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329654: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x329654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_329658:
    // 0x329658: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x329658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x32965c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x32965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x329660: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x329660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x329664: 0x1460fe80  bnez        $v1, . + 4 + (-0x180 << 2)
    ctx->pc = 0x329664u;
    {
        const bool branch_taken_0x329664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329664) {
            ctx->pc = 0x329068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329068;
        }
    }
    ctx->pc = 0x32966Cu;
    // 0x32966c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x32966cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x329670: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x329670u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x329674: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x329674u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x329678: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x329678u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32967c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32967cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x329680: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x329680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x329684: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x329684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329688: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x329688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32968c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32968cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329694: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x329694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x329698: 0x3e00008  jr          $ra
    ctx->pc = 0x329698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3296A0u;
}
