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

// Function: e2d_id64_type00
// Address: 0x2ba0f0 - 0x2ba27c
void e2d_id64_type00_0x2ba0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id64_type00_0x2ba0f0");
#endif

    switch (ctx->pc) {
        case 0x2ba11cu: goto label_2ba11c;
        case 0x2ba22cu: goto label_2ba22c;
        case 0x2ba250u: goto label_2ba250;
        default: break;
    }

    ctx->pc = 0x2ba0f0u;

    // 0x2ba0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba0f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ba0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ba0f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ba0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ba0fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ba0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba100: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba104: 0xa043013f  sb          $v1, 0x13F($v0)
    ctx->pc = 0x2ba104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ba108: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ba108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba10c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba110: 0xa0430140  sb          $v1, 0x140($v0)
    ctx->pc = 0x2ba110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 320), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ba114: 0xc067654  jal         func_19D950
    ctx->pc = 0x2BA114u;
    SET_GPR_U32(ctx, 31, 0x2BA11Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2BA114u, 0x2BA11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA11Cu;
label_2ba11c:
    // 0x2ba11c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ba11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ba120: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ba120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba124: 0x0  nop
    ctx->pc = 0x2ba124u;
    // NOP
    // 0x2ba128: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ba128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ba12c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ba12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ba130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba134: 0x0  nop
    ctx->pc = 0x2ba134u;
    // NOP
    // 0x2ba138: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ba138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ba13c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba140: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2ba140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2ba144: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba148: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ba148u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba14c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ba14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ba150: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ba150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ba154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba158: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ba158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba15c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2ba15cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ba160: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba164: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ba164u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba168: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ba168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ba16c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ba16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ba170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba174: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ba174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ba178: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ba178u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ba17c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ba17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ba180: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba184: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2ba184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ba188: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ba188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba18c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ba18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ba190: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2ba190u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2ba194: 0x0  nop
    ctx->pc = 0x2ba194u;
    // NOP
    // 0x2ba198: 0x0  nop
    ctx->pc = 0x2ba198u;
    // NOP
    // 0x2ba19c: 0x1010  mfhi        $v0
    ctx->pc = 0x2ba19cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2ba1a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ba1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba1a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba1a8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ba1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ba1ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba1b0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ba1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba1b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ba1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ba1b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ba1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ba1bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba1c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ba1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba1c4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2ba1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ba1c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba1cc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ba1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba1d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ba1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ba1d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ba1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ba1d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba1dc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ba1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ba1e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ba1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ba1e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ba1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ba1e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba1ec: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2ba1ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ba1f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ba1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba1f4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2ba1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ba1f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ba1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba1fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba200: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2ba200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ba204: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x2ba204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
    // 0x2ba208: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ba208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ba20c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba210: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba214: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x2ba214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x2ba218: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ba218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba21c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba220: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2ba220u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ba224: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BA224u;
    SET_GPR_U32(ctx, 31, 0x2BA22Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BA224u, 0x2BA22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA22Cu;
label_2ba22c:
    // 0x2ba22c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2ba22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2ba230: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ba230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ba234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ba234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba238: 0x0  nop
    ctx->pc = 0x2ba238u;
    // NOP
    // 0x2ba23c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ba23cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ba240: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba244: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2ba244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2ba248: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BA248u;
    SET_GPR_U32(ctx, 31, 0x2BA250u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BA248u, 0x2BA250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA250u;
label_2ba250:
    // 0x2ba250: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2ba250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2ba254: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ba254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ba258: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ba258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba25c: 0x0  nop
    ctx->pc = 0x2ba25cu;
    // NOP
    // 0x2ba260: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ba260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ba264: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba268: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2ba268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2ba26c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ba26cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba270: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ba270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba274: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA27Cu;
}
