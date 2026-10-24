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

// Function: entry_002f4700
// Address: 0x2f4700 - 0x2f487c
void entry_002f4700_0x2f4700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f4700_0x2f4700");
#endif

    switch (ctx->pc) {
        case 0x2f4780u: goto label_2f4780;
        case 0x2f479cu: goto label_2f479c;
        case 0x2f47b8u: goto label_2f47b8;
        case 0x2f47d4u: goto label_2f47d4;
        default: break;
    }

    ctx->pc = 0x2f4700u;

    // 0x2f4700: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4704: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4704u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4708: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f470c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f470cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4718: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f471c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f471cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4720: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4720u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4724: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4728: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f472c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4730: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4734: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4734u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4738: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f473c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f473cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4740: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4744: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f4744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4748: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f4748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f474c: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f474cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f4750: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4754: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f4754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f4758: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2f4758u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2f475c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2f475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x2f4760: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f4760u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f4764: 0x0  nop
    ctx->pc = 0x2f4764u;
    // NOP
    // 0x2f4768: 0x0  nop
    ctx->pc = 0x2f4768u;
    // NOP
    // 0x2f476c: 0x1010  mfhi        $v0
    ctx->pc = 0x2f476cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f4770: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2F4770u;
    {
        const bool branch_taken_0x2f4770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4770) {
            ctx->pc = 0x2F487Cu;
            return;
        }
    }
    ctx->pc = 0x2F4778u;
    // 0x2f4778: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4778u;
    SET_GPR_U32(ctx, 31, 0x2F4780u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4778u, 0x2F4780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4780u;
label_2f4780:
    // 0x2f4780: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f4780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f4784: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4788: 0x0  nop
    ctx->pc = 0x2f4788u;
    // NOP
    // 0x2f478c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f478cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4790: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f4790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f4794: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4794u;
    SET_GPR_U32(ctx, 31, 0x2F479Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4794u, 0x2F479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F479Cu;
label_2f479c:
    // 0x2f479c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f479cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f47a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f47a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f47a4: 0x0  nop
    ctx->pc = 0x2f47a4u;
    // NOP
    // 0x2f47a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f47a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f47ac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f47acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f47b0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F47B0u;
    SET_GPR_U32(ctx, 31, 0x2F47B8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F47B0u, 0x2F47B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F47B8u;
label_2f47b8:
    // 0x2f47b8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f47bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f47bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f47c0: 0x0  nop
    ctx->pc = 0x2f47c0u;
    // NOP
    // 0x2f47c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f47c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f47c8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f47c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f47cc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F47CCu;
    SET_GPR_U32(ctx, 31, 0x2F47D4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F47CCu, 0x2F47D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F47D4u;
label_2f47d4:
    // 0x2f47d4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2f47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2f47d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f47d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f47dc: 0x0  nop
    ctx->pc = 0x2f47dcu;
    // NOP
    // 0x2f47e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f47e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f47e4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f47e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f47e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f47ec: 0x0  nop
    ctx->pc = 0x2f47ecu;
    // NOP
    // 0x2f47f0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2f47f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f47f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f47f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f47f8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f47fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f47fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4800: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4808: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f480c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f480cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4810: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4814: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4818: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f481c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f481cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4824: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4828: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4828u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f482c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4830: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4834: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4834u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4838: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f483c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f4840: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f4840u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f4844: 0x0  nop
    ctx->pc = 0x2f4844u;
    // NOP
    // 0x2f4848: 0x0  nop
    ctx->pc = 0x2f4848u;
    // NOP
    // 0x2f484c: 0x1810  mfhi        $v1
    ctx->pc = 0x2f484cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f4850: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f4850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4854: 0x24428ed0  addiu       $v0, $v0, -0x7130
    ctx->pc = 0x2f4854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x2f4858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f485c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f485cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4860: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f4860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4864: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f4864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f4868: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f4868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f486c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f486cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f4870: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f4870u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4874: 0xc0bd36c  jal         func_2F4DB0
    ctx->pc = 0x2F4874u;
    SET_GPR_U32(ctx, 31, 0x2F487Cu);
    ctx->pc = 0x2F4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4DB0u, 0x2F4874u, 0x2F487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F487Cu;
}
