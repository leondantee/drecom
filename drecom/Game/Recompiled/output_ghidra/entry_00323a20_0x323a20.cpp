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

// Function: entry_00323a20
// Address: 0x323a20 - 0x323b3c
void entry_00323a20_0x323a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00323a20_0x323a20");
#endif

    switch (ctx->pc) {
        case 0x323a80u: goto label_323a80;
        default: break;
    }

    ctx->pc = 0x323a20u;

    // 0x323a20: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323a24: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x323a24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x323a28: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x323a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x323a2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x323a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x323a30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x323a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x323a34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x323a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x323a38: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x323a38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x323a3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323a40: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x323a40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x323a44: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x323a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x323a48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x323a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x323a4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x323a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x323a50: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x323a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x323a54: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x323a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x323a58: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x323a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x323a5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323a60: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x323a60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x323a64: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x323a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x323a68: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x323a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x323a6c: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x323a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x323a70: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x323A70u;
    {
        const bool branch_taken_0x323a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x323a70) {
            ctx->pc = 0x323B3Cu;
            return;
        }
    }
    ctx->pc = 0x323A78u;
    // 0x323a78: 0xc067648  jal         func_19D920
    ctx->pc = 0x323A78u;
    SET_GPR_U32(ctx, 31, 0x323A80u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x323A78u, 0x323A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A80u;
label_323a80:
    // 0x323a80: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x323a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x323a84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x323a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x323a88: 0x0  nop
    ctx->pc = 0x323a88u;
    // NOP
    // 0x323a8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x323a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x323a90: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x323a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x323a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x323a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323a98: 0x0  nop
    ctx->pc = 0x323a98u;
    // NOP
    // 0x323a9c: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x323a9cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x323aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323aa4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x323aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x323aa8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323aac: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x323aacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x323ab0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x323ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x323ab4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x323ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x323ab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323abc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x323abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323ac0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x323ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x323ac4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323ac8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x323ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x323acc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x323accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x323ad0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x323ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x323ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323ad8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x323ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x323adc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x323adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x323ae0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x323ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x323ae4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x323ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x323ae8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x323ae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x323aec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x323aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323af0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x323af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x323af4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x323af4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x323af8: 0x0  nop
    ctx->pc = 0x323af8u;
    // NOP
    // 0x323afc: 0x0  nop
    ctx->pc = 0x323afcu;
    // NOP
    // 0x323b00: 0x1010  mfhi        $v0
    ctx->pc = 0x323b00u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x323b04: 0x2445000e  addiu       $a1, $v0, 0xE
    ctx->pc = 0x323b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x323b08: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x323b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x323b0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x323b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x323b10: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x323b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x323b14: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x323b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x323b18: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x323b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x323b1c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x323b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x323b20: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x323b20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x323b24: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x323b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x323b28: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x323b28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x323b2c: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x323b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x323b30: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x323b30u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x323b34: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x323B34u;
    SET_GPR_U32(ctx, 31, 0x323B3Cu);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x323B34u, 0x323B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B3Cu;
}
