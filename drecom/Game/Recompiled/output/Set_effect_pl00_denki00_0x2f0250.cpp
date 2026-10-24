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

// Function: Set_effect_pl00_denki00
// Address: 0x2f0250 - 0x2f04e0
void Set_effect_pl00_denki00_0x2f0250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_denki00_0x2f0250");
#endif

    switch (ctx->pc) {
        case 0x2f0294u: goto label_2f0294;
        case 0x2f0350u: goto label_2f0350;
        case 0x2f03b8u: goto label_2f03b8;
        case 0x2f04ccu: goto label_2f04cc;
        default: break;
    }

    ctx->pc = 0x2f0250u;

    // 0x2f0250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f0250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f0254: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2f0254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2f0258: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2f0258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f025c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f025cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f0260: 0x24428d50  addiu       $v0, $v0, -0x72B0
    ctx->pc = 0x2f0260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x2f0264: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2f0264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f0268: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f0268u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398D50u));
    // 0x2f026c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f026cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f0270: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f0270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f0274: 0x24428d60  addiu       $v0, $v0, -0x72A0
    ctx->pc = 0x2f0274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937952));
    // 0x2f0278: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2f0278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f027c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f027cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398D60u));
    // 0x2f0280: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f0280u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f0284: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f0284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f0288: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2f0288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f028c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F028Cu;
    SET_GPR_U32(ctx, 31, 0x2F0294u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F028Cu, 0x2F0294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0294u;
label_2f0294:
    // 0x2f0294: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f0294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f0298: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f029c: 0x0  nop
    ctx->pc = 0x2f029cu;
    // NOP
    // 0x2f02a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f02a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f02a4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2f02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2f02a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f02a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f02ac: 0x0  nop
    ctx->pc = 0x2f02acu;
    // NOP
    // 0x2f02b0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f02b0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f02b4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f02b8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f02b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f02bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f02bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f02c0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f02c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f02c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f02c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f02c8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f02c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f02cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f02ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f02d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f02d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f02d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f02d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f02dc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f02dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f02e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f02e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f02e4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f02e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f02e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f02ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f02f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f02f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f02f4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f02f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f02f8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f02fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f02fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0300: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0304: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0304u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0308: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f0308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f030c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2f030cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2f0310: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f0310u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f0314: 0x0  nop
    ctx->pc = 0x2f0314u;
    // NOP
    // 0x2f0318: 0x0  nop
    ctx->pc = 0x2f0318u;
    // NOP
    // 0x2f031c: 0x2810  mfhi        $a1
    ctx->pc = 0x2f031cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2f0320: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0324: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f0324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0328: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f0328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f032c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f032cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0330: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f0330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0334: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2f0334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f0338: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2f0338u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f033c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f033cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f0340: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x2f0340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f0344: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f0344u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f0348: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F0348u;
    SET_GPR_U32(ctx, 31, 0x2F0350u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F0348u, 0x2F0350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0350u;
label_2f0350:
    // 0x2f0350: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0354: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f0354u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0358: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2f0358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f035c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f035cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f0360: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f0360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f0364: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f0364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f0368: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2f0368u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f036c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f036cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0370: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f0370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0374: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2f0374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f0378: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f0378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f037c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f0380: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2f0380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2f0384: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2f0384u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2f0388: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2f0388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f038c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f038cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0390: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2f0390u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0394: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2f0394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f0398: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f0398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f039c: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x2f039cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2f03a0: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2F03A0u;
    {
        const bool branch_taken_0x2f03a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f03a0) {
            ctx->pc = 0x2F04CCu;
            goto label_2f04cc;
        }
    }
    ctx->pc = 0x2F03A8u;
    // 0x2f03a8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f03ac: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2f03acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f03b0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F03B0u;
    SET_GPR_U32(ctx, 31, 0x2F03B8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F03B0u, 0x2F03B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03B8u;
label_2f03b8:
    // 0x2f03b8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f03bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f03bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f03c0: 0x0  nop
    ctx->pc = 0x2f03c0u;
    // NOP
    // 0x2f03c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f03c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f03c8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2f03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2f03cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f03ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f03d0: 0x0  nop
    ctx->pc = 0x2f03d0u;
    // NOP
    // 0x2f03d4: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f03d4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f03d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f03dc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f03dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f03e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f03e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f03e4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f03e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f03e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f03ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f03ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f03f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f03f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f03f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f03f8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f03f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f03fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f03fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0400: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0400u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0404: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0408: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f040c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0410: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0414: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0414u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0418: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f041c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f041cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0420: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0420u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0424: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f0424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0428: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2f0428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2f042c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f042cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f0430: 0x0  nop
    ctx->pc = 0x2f0430u;
    // NOP
    // 0x2f0434: 0x0  nop
    ctx->pc = 0x2f0434u;
    // NOP
    // 0x2f0438: 0x2810  mfhi        $a1
    ctx->pc = 0x2f0438u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2f043c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f043cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0440: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0440u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0444: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0448: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f044c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0450: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0454: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0458: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f045c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f045cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0460: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0464: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f046c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0470: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0470u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0474: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0478: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f047c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f047cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0480: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f0480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0484: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2f0484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2f0488: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f0488u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f048c: 0x0  nop
    ctx->pc = 0x2f048cu;
    // NOP
    // 0x2f0490: 0x0  nop
    ctx->pc = 0x2f0490u;
    // NOP
    // 0x2f0494: 0x4010  mfhi        $t0
    ctx->pc = 0x2f0494u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x2f0498: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f0498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f049c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f049cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f04a0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f04a4: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f04a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f04a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f04a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f04ac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f04acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f04b0: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f04b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f04b4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2f04b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f04b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f04b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f04bc: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x2f04bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f04c0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f04c0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f04c4: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F04C4u;
    SET_GPR_U32(ctx, 31, 0x2F04CCu);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F04C4u, 0x2F04CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F04CCu;
label_2f04cc:
    // 0x2f04cc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2f04ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f04d0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f04d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f04d4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2f04d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f04d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F04D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F04D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F04E0u;
}
