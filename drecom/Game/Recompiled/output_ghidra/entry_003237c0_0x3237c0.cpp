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

// Function: entry_003237c0
// Address: 0x3237c0 - 0x3238dc
void entry_003237c0_0x3237c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003237c0_0x3237c0");
#endif

    switch (ctx->pc) {
        case 0x323820u: goto label_323820;
        default: break;
    }

    ctx->pc = 0x3237c0u;

    // 0x3237c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3237c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3237c4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x3237c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3237c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3237c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3237cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3237ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3237d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3237d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3237d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3237d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3237d8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x3237d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3237dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3237dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3237e0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x3237e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3237e4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3237e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3237e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3237e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3237ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3237ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3237f0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3237f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3237f4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3237f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3237f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3237f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3237fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3237fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323800: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x323800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x323804: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x323804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x323808: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x323808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32380c: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x32380cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x323810: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x323810u;
    {
        const bool branch_taken_0x323810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x323810) {
            ctx->pc = 0x3238DCu;
            return;
        }
    }
    ctx->pc = 0x323818u;
    // 0x323818: 0xc067648  jal         func_19D920
    ctx->pc = 0x323818u;
    SET_GPR_U32(ctx, 31, 0x323820u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x323818u, 0x323820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323820u;
label_323820:
    // 0x323820: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x323820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x323824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x323824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x323828: 0x0  nop
    ctx->pc = 0x323828u;
    // NOP
    // 0x32382c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32382cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x323830: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x323830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x323834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x323834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323838: 0x0  nop
    ctx->pc = 0x323838u;
    // NOP
    // 0x32383c: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x32383cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x323840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323844: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x323844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x323848: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32384c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x32384cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x323850: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x323850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x323854: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x323854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x323858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32385c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323860: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x323860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x323864: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323868: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x323868u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x32386c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32386cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x323870: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x323870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x323874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323878: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x323878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x32387c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x32387cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x323880: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x323880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x323884: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323888: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x323888u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x32388c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32388cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323890: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x323890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x323894: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x323894u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x323898: 0x0  nop
    ctx->pc = 0x323898u;
    // NOP
    // 0x32389c: 0x0  nop
    ctx->pc = 0x32389cu;
    // NOP
    // 0x3238a0: 0x1010  mfhi        $v0
    ctx->pc = 0x3238a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3238a4: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x3238a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x3238a8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3238a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3238ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3238acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3238b0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3238b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3238b4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3238b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3238b8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3238b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3238bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3238bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3238c0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x3238c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3238c4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x3238c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3238c8: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x3238c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3238cc: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x3238ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3238d0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x3238d0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3238d4: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x3238D4u;
    SET_GPR_U32(ctx, 31, 0x3238DCu);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x3238D4u, 0x3238DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3238DCu;
}
