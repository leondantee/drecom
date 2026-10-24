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

// Function: entry_0033e134
// Address: 0x33e134 - 0x33e3b0
void entry_0033e134_0x33e134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033e134_0x33e134");
#endif

    switch (ctx->pc) {
        case 0x33e144u: goto label_33e144;
        case 0x33e214u: goto label_33e214;
        case 0x33e220u: goto label_33e220;
        case 0x33e228u: goto label_33e228;
        case 0x33e258u: goto label_33e258;
        case 0x33e30cu: goto label_33e30c;
        case 0x33e328u: goto label_33e328;
        default: break;
    }

    ctx->pc = 0x33e134u;

    // 0x33e134: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x33e134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33e138: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x33e138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e13c: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x33E13Cu;
    SET_GPR_U32(ctx, 31, 0x33E144u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x33E13Cu, 0x33E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E144u;
label_33e144:
    // 0x33e144: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e148: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x33e148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x33e14c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x33e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x33e150: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x33e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33e154: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x33e154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x33e158: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33e158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e15c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x33e15cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e160: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e164: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e164u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e168: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e16c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e174: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e178: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33e178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33e17c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e180: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e180u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e184: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e188: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e18c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e190: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33e190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33e194: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33e194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33e198: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33e19c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e1a0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33e1a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33e1a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e1a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33e1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33e1ac: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x33e1b0: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x33e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x33e1b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e1b8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e1bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e1c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e1c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e1c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e1cc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33e1d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e1d4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e1d8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e1dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e1e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e1e4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33e1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33e1e8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33e1ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33e1f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e1f4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33e1f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33e1f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e1fc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x33e1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x33e200: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x33e200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x33e204: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x33e204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x33e208: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x33e208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33e20c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x33E20Cu;
    SET_GPR_U32(ctx, 31, 0x33E214u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x33E20Cu, 0x33E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E214u;
label_33e214:
    // 0x33e214: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x33e214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33e218: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x33E218u;
    SET_GPR_U32(ctx, 31, 0x33E220u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x33E218u, 0x33E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E220u;
label_33e220:
    // 0x33e220: 0xc06765c  jal         func_19D970
    ctx->pc = 0x33E220u;
    SET_GPR_U32(ctx, 31, 0x33E228u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33E220u, 0x33E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E228u;
label_33e228:
    // 0x33e228: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x33e228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x33e22c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e230: 0x0  nop
    ctx->pc = 0x33e230u;
    // NOP
    // 0x33e234: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x33e234u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e238: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x33e238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x33e23c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e240: 0x0  nop
    ctx->pc = 0x33e240u;
    // NOP
    // 0x33e244: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33e244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33e248: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x33e248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x33e24c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x33e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x33e250: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x33E250u;
    SET_GPR_U32(ctx, 31, 0x33E258u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x33E250u, 0x33E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E258u;
label_33e258:
    // 0x33e258: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e25c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e260: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e264: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e26c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e270: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33e270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33e274: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e278: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e278u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e27c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e280: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e288: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33e288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33e28c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33e290: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33e290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33e294: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e298: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33e298u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33e29c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e2a0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x33e2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x33e2a4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x33e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x33e2a8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x33e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x33e2ac: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x33e2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x33e2b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e2b4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e2b8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e2bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e2c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e2c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e2c8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33e2cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e2d0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e2d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e2d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e2dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e2e0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33e2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33e2e4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33e2e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33e2ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e2f0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33e2f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33e2f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e2f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33e2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33e2fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33e2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e300: 0xa6020052  sh          $v0, 0x52($s0)
    ctx->pc = 0x33e300u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 2));
    // 0x33e304: 0xc06765c  jal         func_19D970
    ctx->pc = 0x33E304u;
    SET_GPR_U32(ctx, 31, 0x33E30Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33E304u, 0x33E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E30Cu;
label_33e30c:
    // 0x33e30c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x33e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x33e310: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e314: 0x0  nop
    ctx->pc = 0x33e314u;
    // NOP
    // 0x33e318: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33e318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e31c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x33e31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x33e320: 0xc06765c  jal         func_19D970
    ctx->pc = 0x33E320u;
    SET_GPR_U32(ctx, 31, 0x33E328u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33E320u, 0x33E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E328u;
label_33e328:
    // 0x33e328: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x33e328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x33e32c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e330: 0x0  nop
    ctx->pc = 0x33e330u;
    // NOP
    // 0x33e334: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33e334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e338: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x33e338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x33e33c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33e33cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e340: 0x0  nop
    ctx->pc = 0x33e340u;
    // NOP
    // 0x33e344: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x33e344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x33e348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33e348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e34c: 0x0  nop
    ctx->pc = 0x33e34cu;
    // NOP
    // 0x33e350: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x33e350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x33e354: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e358: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e358u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e35c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e360: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e368: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e36c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33e370: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e374: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e374u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e378: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e37c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e384: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33e384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33e388: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33e388u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33e38c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33e390: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e394: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33e394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33e398: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e39c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x33e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x33e3a0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x33e3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x33e3a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33e3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e3a8: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x33e3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x33e3ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33e3acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x33e3b0u;
}
