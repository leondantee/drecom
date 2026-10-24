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

// Function: entry_003258cc
// Address: 0x3258cc - 0x325a30
void entry_003258cc_0x3258cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003258cc_0x3258cc");
#endif

    switch (ctx->pc) {
        case 0x32594cu: goto label_32594c;
        case 0x325968u: goto label_325968;
        case 0x325984u: goto label_325984;
        case 0x3259a0u: goto label_3259a0;
        default: break;
    }

    ctx->pc = 0x3258ccu;

    // 0x3258cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3258ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3258d0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x3258d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3258d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3258d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3258d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3258d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3258dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3258dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3258e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3258e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3258e4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x3258e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3258e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3258e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3258ec: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x3258ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3258f0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3258f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3258f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3258f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3258f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3258f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3258fc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3258fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x325900: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x325900u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x325904: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x325904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x325908: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x325908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32590c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x32590cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x325910: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x325910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x325914: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x325914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x325918: 0x93a30078  lbu         $v1, 0x78($sp)
    ctx->pc = 0x325918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x32591c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32591cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x325920: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x325920u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x325924: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x325924u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x325928: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x325928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x32592c: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x32592cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x325930: 0x0  nop
    ctx->pc = 0x325930u;
    // NOP
    // 0x325934: 0x0  nop
    ctx->pc = 0x325934u;
    // NOP
    // 0x325938: 0x1810  mfhi        $v1
    ctx->pc = 0x325938u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32593c: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x32593Cu;
    {
        const bool branch_taken_0x32593c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32593c) {
            ctx->pc = 0x325A38u;
            return;
        }
    }
    ctx->pc = 0x325944u;
    // 0x325944: 0xc067648  jal         func_19D920
    ctx->pc = 0x325944u;
    SET_GPR_U32(ctx, 31, 0x32594Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325944u, 0x32594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32594Cu;
label_32594c:
    // 0x32594c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x32594cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x325950: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325954: 0x0  nop
    ctx->pc = 0x325954u;
    // NOP
    // 0x325958: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32595c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x32595cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x325960: 0xc067648  jal         func_19D920
    ctx->pc = 0x325960u;
    SET_GPR_U32(ctx, 31, 0x325968u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325960u, 0x325968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325968u;
label_325968:
    // 0x325968: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x325968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x32596c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32596cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325970: 0x0  nop
    ctx->pc = 0x325970u;
    // NOP
    // 0x325974: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325978: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x325978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x32597c: 0xc067648  jal         func_19D920
    ctx->pc = 0x32597Cu;
    SET_GPR_U32(ctx, 31, 0x325984u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x32597Cu, 0x325984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325984u;
label_325984:
    // 0x325984: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x325984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x325988: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32598c: 0x0  nop
    ctx->pc = 0x32598cu;
    // NOP
    // 0x325990: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325994: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x325994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x325998: 0xc067648  jal         func_19D920
    ctx->pc = 0x325998u;
    SET_GPR_U32(ctx, 31, 0x3259A0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325998u, 0x3259A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259A0u;
label_3259a0:
    // 0x3259a0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3259a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3259a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3259a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3259a8: 0x0  nop
    ctx->pc = 0x3259a8u;
    // NOP
    // 0x3259ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3259acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3259b0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3259b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3259b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3259b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3259b8: 0x0  nop
    ctx->pc = 0x3259b8u;
    // NOP
    // 0x3259bc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3259bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3259c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3259c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3259c4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3259c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3259c8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3259c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3259cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3259ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3259d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3259d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3259d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3259d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3259d8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3259d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3259dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3259dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3259e0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3259e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3259e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3259e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3259e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3259e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3259ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3259ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3259f0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3259f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3259f4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3259f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3259f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3259f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3259fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3259fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x325a00: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x325a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x325a04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x325a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325a08: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x325a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x325a0c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x325a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x325a10: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x325a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x325a14: 0x2442a1d8  addiu       $v0, $v0, -0x5E28
    ctx->pc = 0x325a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943192));
    // 0x325a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x325a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x325a1c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x325a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325a20: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x325a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325a24: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x325a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x325a28: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x325a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x325a2c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x325a2cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x325a30u;
}
