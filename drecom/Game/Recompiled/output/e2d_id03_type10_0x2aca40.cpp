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

// Function: e2d_id03_type10
// Address: 0x2aca40 - 0x2acc64
void e2d_id03_type10_0x2aca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type10_0x2aca40");
#endif

    switch (ctx->pc) {
        case 0x2acae0u: goto label_2acae0;
        default: break;
    }

    ctx->pc = 0x2aca40u;

    // 0x2aca40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aca40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aca44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2aca44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2aca48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aca48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aca4c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2aca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2aca50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aca50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aca54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aca58: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2aca58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2aca5c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2aca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2aca60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aca60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aca64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aca68: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aca68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aca6c: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2aca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2aca70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aca70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aca74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aca78: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2aca78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2aca7c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2aca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2aca80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aca80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aca84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aca88: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2aca88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2aca8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2aca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2aca90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aca90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aca94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aca98: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2aca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2aca9c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2aca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2acaa0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2acaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2acaa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acaa8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acaac: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2acaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2acab0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2acab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2acab4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2acab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2acab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acabc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acac0: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2acac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2acac4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2acac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2acac8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2acac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2acacc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acaccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acad0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2acad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acad4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2acad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2acad8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ACAD8u;
    SET_GPR_U32(ctx, 31, 0x2ACAE0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ACAD8u, 0x2ACAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACAE0u;
label_2acae0:
    // 0x2acae0: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x2acae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x2acae4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2acae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2acae8: 0x0  nop
    ctx->pc = 0x2acae8u;
    // NOP
    // 0x2acaec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2acaecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2acaf0: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2acaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2acaf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2acaf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acaf8: 0x0  nop
    ctx->pc = 0x2acaf8u;
    // NOP
    // 0x2acafc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2acafcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2acb00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2acb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acb04: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2acb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2acb08: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2acb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2acb0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2acb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acb10: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2acb10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2acb14: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acb18: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2acb18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2acb1c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2acb1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2acb20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2acb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acb24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acb28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2acb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acb2c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2acb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2acb30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acb34: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2acb34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2acb38: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2acb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2acb3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2acb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acb40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acb44: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2acb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2acb48: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2acb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2acb4c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2acb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2acb50: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acb54: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2acb54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2acb58: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2acb58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acb5c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2acb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2acb60: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2acb60u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2acb64: 0x0  nop
    ctx->pc = 0x2acb64u;
    // NOP
    // 0x2acb68: 0x0  nop
    ctx->pc = 0x2acb68u;
    // NOP
    // 0x2acb6c: 0x1810  mfhi        $v1
    ctx->pc = 0x2acb6cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2acb70: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2acb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acb74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2acb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acb78: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2acb78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2acb7c: 0x3c03bd75  lui         $v1, 0xBD75
    ctx->pc = 0x2acb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
    // 0x2acb80: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2acb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2acb84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2acb84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2acb88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2acb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acb8c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2acb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2acb90: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acb94: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2acb94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2acb98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2acb98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2acb9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2acb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acba0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acba4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2acba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acba8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2acba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2acbac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acbb0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2acbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2acbb4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2acbb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2acbb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2acbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acbbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acbc0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2acbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2acbc4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2acbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2acbc8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2acbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2acbcc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acbccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acbd0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2acbd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2acbd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2acbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acbd8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2acbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2acbdc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2acbdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acbe0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2acbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acbe4: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2acbe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2acbe8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2acbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2acbec: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2acbecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2acbf0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acbf4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2acbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2acbf8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2acbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2acbfc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2acbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acc00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acc04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2acc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acc08: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2acc08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2acc0c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acc10: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2acc10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2acc14: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2acc14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2acc18: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2acc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acc1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acc20: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2acc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2acc24: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2acc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2acc28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2acc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2acc2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2acc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2acc30: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2acc30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2acc34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2acc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acc38: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2acc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2acc3c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2acc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2acc40: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2acc40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2acc44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2acc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acc48: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2acc48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2acc4c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2acc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2acc50: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2acc50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2acc54: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2acc54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acc58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2acc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2acc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACC64u;
}
