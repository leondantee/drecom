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

// Function: set_eff_203_kemuri
// Address: 0x269200 - 0x2695cc
void set_eff_203_kemuri_0x269200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_203_kemuri_0x269200");
#endif

    switch (ctx->pc) {
        case 0x269224u: goto label_269224;
        case 0x269294u: goto label_269294;
        case 0x26938cu: goto label_26938c;
        case 0x269498u: goto label_269498;
        case 0x26955cu: goto label_26955c;
        case 0x269578u: goto label_269578;
        case 0x26959cu: goto label_26959c;
        case 0x2695a8u: goto label_2695a8;
        default: break;
    }

    ctx->pc = 0x269200u;

    // 0x269200: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x269200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x269204: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x269204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x269208: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x269208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26920c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26920cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x269210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x269210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x269214: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269218: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x269218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x26921c: 0xc067648  jal         func_19D920
    ctx->pc = 0x26921Cu;
    SET_GPR_U32(ctx, 31, 0x269224u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x26921Cu, 0x269224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269224u;
label_269224:
    // 0x269224: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x269224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x269228: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26922c: 0x0  nop
    ctx->pc = 0x26922cu;
    // NOP
    // 0x269230: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x269230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x269234: 0x3c024411  lui         $v0, 0x4411
    ctx->pc = 0x269234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17425 << 16));
    // 0x269238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26923c: 0x0  nop
    ctx->pc = 0x26923cu;
    // NOP
    // 0x269240: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x269240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x269244: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x269244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x269248: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x269248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x26924c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x26924cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x269250: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x269250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x269254: 0x2442bd40  addiu       $v0, $v0, -0x42C0
    ctx->pc = 0x269254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950208));
    // 0x269258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26925c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269260: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x269260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269264: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x269264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269268: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x269268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x26926c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x26926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x269270: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x269270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x269274: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x269274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x269278: 0x2442bd40  addiu       $v0, $v0, -0x42C0
    ctx->pc = 0x269278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950208));
    // 0x26927c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x26927cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269280: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x269280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x269284: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x269284u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269288: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x269288u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26928c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x26928Cu;
    SET_GPR_U32(ctx, 31, 0x269294u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x26928Cu, 0x269294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269294u;
label_269294:
    // 0x269294: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269298: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x269298u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x26929c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26929cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2692a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2692a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2692a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2692a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2692a8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2692a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2692ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2692acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2692b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2692b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2692b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2692b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2692b8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2692b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2692bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2692bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2692c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2692c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2692c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2692c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2692c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2692c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2692cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2692ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2692d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2692d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2692d4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2692d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2692d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2692d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2692dc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2692dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2692e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2692e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2692e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2692e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2692e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2692e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2692ec: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2692ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2692f0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2692f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2692f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2692f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2692f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2692f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2692fc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2692fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x269300: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x269300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x269304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x269308: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x269308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26930c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269310: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x269310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x269314: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x269314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269318: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26931c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26931cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x269320: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x269320u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x269324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x269324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269328: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26932c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26932cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x269330: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x269330u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x269334: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269338: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x269338u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26933c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x26933cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x269340: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269344: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x269344u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x269348: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x269348u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x26934c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26934cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269350: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x269350u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x269354: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x269354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x269358: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26935c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26935cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x269360: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x269360u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x269364: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269368: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x269368u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26936c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x26936cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x269370: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269374: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x269374u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x269378: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x269378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x26937c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26937cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269380: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x269380u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x269384: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x269384u;
    SET_GPR_U32(ctx, 31, 0x26938Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x269384u, 0x26938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26938Cu;
label_26938c:
    // 0x26938c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26938cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269390: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x269390u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x269394: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269398: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x269398u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x26939c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x26939cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2693a0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2693a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2693a4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2693A4u;
    {
        const bool branch_taken_0x2693a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2693a4) {
            ctx->pc = 0x2693B8u;
            goto label_2693b8;
        }
    }
    ctx->pc = 0x2693ACu;
    // 0x2693ac: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2693acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2693b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2693B0u;
    {
        const bool branch_taken_0x2693b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2693b0) {
            ctx->pc = 0x2693D4u;
            goto label_2693d4;
        }
    }
    ctx->pc = 0x2693B8u;
label_2693b8:
    // 0x2693b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2693b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2693bc: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2693bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2693c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2693c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2693c4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2693c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2693c8: 0x24720118  addiu       $s2, $v1, 0x118
    ctx->pc = 0x2693c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2693cc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x2693ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2693d0: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x2693d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2693d4:
    // 0x2693d4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2693d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2693d8: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x2693d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2693dc: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2693dcu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2693e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2693e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2693e4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2693e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2693e8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2693e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2693ec: 0x2463bd40  addiu       $v1, $v1, -0x42C0
    ctx->pc = 0x2693ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950208));
    // 0x2693f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2693f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2693f4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2693f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2693f8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2693f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2693fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2693fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x269400: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x269400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x269404: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x269404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x269408: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x269408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x26940c: 0x12030067  beq         $s0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x26940Cu;
    {
        const bool branch_taken_0x26940c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x26940c) {
            ctx->pc = 0x2695ACu;
            goto label_2695ac;
        }
    }
    ctx->pc = 0x269414u;
    // 0x269414: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x269414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x269418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26941c: 0x0  nop
    ctx->pc = 0x26941cu;
    // NOP
    // 0x269420: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x269420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x269424: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x269424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x269428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26942c: 0x0  nop
    ctx->pc = 0x26942cu;
    // NOP
    // 0x269430: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x269430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x269434: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x269434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x269438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26943c: 0x0  nop
    ctx->pc = 0x26943cu;
    // NOP
    // 0x269440: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x269440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x269444: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x269444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x269448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26944c: 0x0  nop
    ctx->pc = 0x26944cu;
    // NOP
    // 0x269450: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x269450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x269454: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x269454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x269458: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x269458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x26945c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26945cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269460: 0x0  nop
    ctx->pc = 0x269460u;
    // NOP
    // 0x269464: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x269464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x269468: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x269468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x26946c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x26946cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x269470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269474: 0x0  nop
    ctx->pc = 0x269474u;
    // NOP
    // 0x269478: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x269478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x26947c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x26947cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x269480: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x269480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x269484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269488: 0x0  nop
    ctx->pc = 0x269488u;
    // NOP
    // 0x26948c: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x26948cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x269490: 0xc067648  jal         func_19D920
    ctx->pc = 0x269490u;
    SET_GPR_U32(ctx, 31, 0x269498u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x269490u, 0x269498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269498u;
label_269498:
    // 0x269498: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x269498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x26949c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26949cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2694a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2694a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2694a4: 0x0  nop
    ctx->pc = 0x2694a4u;
    // NOP
    // 0x2694a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2694a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2694ac: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2694acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2694b0: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2694b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2694b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2694b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2694b8: 0x0  nop
    ctx->pc = 0x2694b8u;
    // NOP
    // 0x2694bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2694bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2694c0: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2694c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2694c4: 0x3c024417  lui         $v0, 0x4417
    ctx->pc = 0x2694c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17431 << 16));
    // 0x2694c8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2694c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2694cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2694ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2694d0: 0x0  nop
    ctx->pc = 0x2694d0u;
    // NOP
    // 0x2694d4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2694d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2694d8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2694d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2694dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2694dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2694e0: 0x0  nop
    ctx->pc = 0x2694e0u;
    // NOP
    // 0x2694e4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2694e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2694e8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2694e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2694ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2694ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2694f0: 0x0  nop
    ctx->pc = 0x2694f0u;
    // NOP
    // 0x2694f4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2694f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2694f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2694f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2694fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2694fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269500: 0x0  nop
    ctx->pc = 0x269500u;
    // NOP
    // 0x269504: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x269504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x269508: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x269508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26950c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26950cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269510: 0x0  nop
    ctx->pc = 0x269510u;
    // NOP
    // 0x269514: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x269514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x269518: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x269518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x26951c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x26951cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x269520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269524: 0x0  nop
    ctx->pc = 0x269524u;
    // NOP
    // 0x269528: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x269528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26952c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x26952cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x269530: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x269530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x269534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269538: 0x0  nop
    ctx->pc = 0x269538u;
    // NOP
    // 0x26953c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x26953cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x269540: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x269540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x269544: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x269544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x269548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26954c: 0x0  nop
    ctx->pc = 0x26954cu;
    // NOP
    // 0x269550: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x269550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x269554: 0xc067648  jal         func_19D920
    ctx->pc = 0x269554u;
    SET_GPR_U32(ctx, 31, 0x26955Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x269554u, 0x26955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26955Cu;
label_26955c:
    // 0x26955c: 0x3c023c13  lui         $v0, 0x3C13
    ctx->pc = 0x26955cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15379 << 16));
    // 0x269560: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x269560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
    // 0x269564: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269568: 0x0  nop
    ctx->pc = 0x269568u;
    // NOP
    // 0x26956c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x26956cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x269570: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x269570u;
    SET_GPR_U32(ctx, 31, 0x269578u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x269570u, 0x269578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269578u;
label_269578:
    // 0x269578: 0x3c033f74  lui         $v1, 0x3F74
    ctx->pc = 0x269578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16244 << 16));
    // 0x26957c: 0x34637ae1  ori         $v1, $v1, 0x7AE1
    ctx->pc = 0x26957cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31457);
    // 0x269580: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x269580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x269584: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x269584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
    // 0x269588: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x269588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x26958c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x26958cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x269590: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x269590u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x269594: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x269594u;
    SET_GPR_U32(ctx, 31, 0x26959Cu);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x269594u, 0x26959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26959Cu;
label_26959c:
    // 0x26959c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26959cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2695a0: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x2695A0u;
    SET_GPR_U32(ctx, 31, 0x2695A8u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x2695A0u, 0x2695A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2695A8u;
label_2695a8:
    // 0x2695a8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2695a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_2695ac:
    // 0x2695ac: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2695acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2695b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2695b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2695b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2695b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2695b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2695b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2695bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2695bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2695c0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2695c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2695c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2695C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2695C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2695CCu;
}
