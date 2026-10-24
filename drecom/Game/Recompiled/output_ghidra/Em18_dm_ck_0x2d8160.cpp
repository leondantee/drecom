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

// Function: Em18_dm_ck
// Address: 0x2d8160 - 0x2d8f9c
void Em18_dm_ck_0x2d8160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_dm_ck_0x2d8160");
#endif

    switch (ctx->pc) {
        case 0x2d8270u: goto label_2d8270;
        case 0x2d8294u: goto label_2d8294;
        case 0x2d835cu: goto label_2d835c;
        case 0x2d84fcu: goto label_2d84fc;
        case 0x2d85d0u: goto label_2d85d0;
        case 0x2d8690u: goto label_2d8690;
        case 0x2d8720u: goto label_2d8720;
        case 0x2d87ecu: goto label_2d87ec;
        case 0x2d8884u: goto label_2d8884;
        case 0x2d8918u: goto label_2d8918;
        case 0x2d89e4u: goto label_2d89e4;
        case 0x2d8aa0u: goto label_2d8aa0;
        case 0x2d8afcu: goto label_2d8afc;
        case 0x2d8bc8u: goto label_2d8bc8;
        case 0x2d8cbcu: goto label_2d8cbc;
        case 0x2d8d18u: goto label_2d8d18;
        case 0x2d8ddcu: goto label_2d8ddc;
        case 0x2d8e38u: goto label_2d8e38;
        case 0x2d8f00u: goto label_2d8f00;
        case 0x2d8f48u: goto label_2d8f48;
        default: break;
    }

    ctx->pc = 0x2d8160u;

    // 0x2d8160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d8160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d8164: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2d8164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2d8168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d8168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d816c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d816cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d8170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8174: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2d8174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x2d8178: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d817c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2d817cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2d8180: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2d8180u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2d8184: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8188: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x2d8188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x2d818c: 0x1060037c  beqz        $v1, . + 4 + (0x37C << 2)
    ctx->pc = 0x2D818Cu;
    {
        const bool branch_taken_0x2d818c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d818c) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8194u;
    // 0x2d8194: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2d8194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2d8198: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x2d8198u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2d819c: 0x30640200  andi        $a0, $v1, 0x200
    ctx->pc = 0x2d819cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2d81a0: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D81A0u;
    {
        const bool branch_taken_0x2d81a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d81a0) {
            ctx->pc = 0x2D81FCu;
            goto label_2d81fc;
        }
    }
    ctx->pc = 0x2D81A8u;
    // 0x2d81a8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d81ac: 0x848311f2  lh          $v1, 0x11F2($a0)
    ctx->pc = 0x2d81acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4594)));
    // 0x2d81b0: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2d81b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d81b4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d81b4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d81b8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2d81b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d81bc: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x2d81bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x2d81c0: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x2d81c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x2d81c4: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x2d81c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d81c8: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2d81c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2d81cc: 0x0  nop
    ctx->pc = 0x2d81ccu;
    // NOP
    // 0x2d81d0: 0x2010  mfhi        $a0
    ctx->pc = 0x2d81d0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2d81d4: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x2d81d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
    // 0x2d81d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d81d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d81dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d81dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d81e0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2d81e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d81e4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2d81e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2d81e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d81e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d81ec: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x2d81ecu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x2d81f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2d81f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d81f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d81f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d81f8: 0xa424ef68  sh          $a0, -0x1098($at)
    ctx->pc = 0x2d81f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
label_2d81fc:
    // 0x2d81fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d81fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d8200: 0x8422ef68  lh          $v0, -0x1098($at)
    ctx->pc = 0x2d8200u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x2d8204: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x2d8204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d8208: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d8208u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d820c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d820cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d8210: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x2d8210u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x2d8214: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2d8214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d8218: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2d8218u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2d821c: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x2d821cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d8220: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8220u;
    {
        const bool branch_taken_0x2d8220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8220) {
            ctx->pc = 0x2D8238u;
            goto label_2d8238;
        }
    }
    ctx->pc = 0x2D8228u;
    // 0x2d8228: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d8228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d822c: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x2d822cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x2d8230: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d8230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d8234: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x2d8234u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
label_2d8238:
    // 0x2d8238: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d823c: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x2d823cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8240: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8244: 0x8c721210  lw          $s2, 0x1210($v1)
    ctx->pc = 0x2d8244u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x2d8248: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d824c: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x2d824cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x2d8250: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x2d8250u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d8254: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d8254u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d8258: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d825c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d825cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8260: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x2d8260u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2d8264: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x2d8264u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x2d8268: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2D8268u;
    SET_GPR_U32(ctx, 31, 0x2D8270u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2D8268u, 0x2D8270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8270u;
label_2d8270:
    // 0x2d8270: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8274: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8278: 0xa20400d8  sb          $a0, 0xD8($s0)
    ctx->pc = 0x2d8278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d827c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8280: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8284: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x2d8284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d8288: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x2d8288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d828c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x2D828Cu;
    SET_GPR_U32(ctx, 31, 0x2D8294u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x2D828Cu, 0x2D8294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8294u;
label_2d8294:
    // 0x2d8294: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2d8294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d8298: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2d8298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d829c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d829cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d82a0: 0x0  nop
    ctx->pc = 0x2d82a0u;
    // NOP
    // 0x2d82a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d82a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d82a8: 0x0  nop
    ctx->pc = 0x2d82a8u;
    // NOP
    // 0x2d82ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2D82ACu;
    {
        const bool branch_taken_0x2d82ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d82ac) {
            ctx->pc = 0x2D82C8u;
            goto label_2d82c8;
        }
    }
    ctx->pc = 0x2D82B4u;
    // 0x2d82b4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2d82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2d82b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d82b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d82bc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2d82bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d82c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d82c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d82c4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2d82c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2d82c8:
    // 0x2d82c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d82cc: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2d82ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2d82d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d82d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d82d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d82d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d82d8: 0x461002e  bgez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D82D8u;
    {
        const bool branch_taken_0x2d82d8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d82d8) {
            ctx->pc = 0x2D8394u;
            goto label_2d8394;
        }
    }
    ctx->pc = 0x2D82E0u;
    // 0x2d82e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d82e4: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x2d82e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x2d82e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d82e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d82ec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2d82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d82f0: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D82F0u;
    {
        const bool branch_taken_0x2d82f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d82f0) {
            ctx->pc = 0x2D8348u;
            goto label_2d8348;
        }
    }
    ctx->pc = 0x2D82F8u;
    // 0x2d82f8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2d82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2d82fc: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D82FCu;
    {
        const bool branch_taken_0x2d82fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d82fc) {
            ctx->pc = 0x2D8348u;
            goto label_2d8348;
        }
    }
    ctx->pc = 0x2D8304u;
    // 0x2d8304: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2d8304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d8308: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D8308u;
    {
        const bool branch_taken_0x2d8308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8308) {
            ctx->pc = 0x2D8348u;
            goto label_2d8348;
        }
    }
    ctx->pc = 0x2D8310u;
    // 0x2d8310: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2d8310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8314: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D8314u;
    {
        const bool branch_taken_0x2d8314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8314) {
            ctx->pc = 0x2D8348u;
            goto label_2d8348;
        }
    }
    ctx->pc = 0x2D831Cu;
    // 0x2d831c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2d831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d8320: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8320u;
    {
        const bool branch_taken_0x2d8320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d8320) {
            ctx->pc = 0x2D8348u;
            goto label_2d8348;
        }
    }
    ctx->pc = 0x2D8328u;
    // 0x2d8328: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d832c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D832Cu;
    {
        const bool branch_taken_0x2d832c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d832c) {
            ctx->pc = 0x2D8348u;
            goto label_2d8348;
        }
    }
    ctx->pc = 0x2D8334u;
    // 0x2d8334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8338: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8338u;
    {
        const bool branch_taken_0x2d8338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8338) {
            ctx->pc = 0x2D8348u;
            goto label_2d8348;
        }
    }
    ctx->pc = 0x2D8340u;
    // 0x2d8340: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D8340u;
    {
        const bool branch_taken_0x2d8340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8340) {
            ctx->pc = 0x2D8348u;
            goto label_2d8348;
        }
    }
    ctx->pc = 0x2D8348u;
label_2d8348:
    // 0x2d8348: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d8348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d834c: 0xa20300d9  sb          $v1, 0xD9($s0)
    ctx->pc = 0x2d834cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8350: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8354: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8354u;
    SET_GPR_U32(ctx, 31, 0x2D835Cu);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8354u, 0x2D835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D835Cu;
label_2d835c:
    // 0x2d835c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d835cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8360: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d8360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d8364: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8368: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2d8368u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d836c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8370: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d8370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8374: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8378: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d837c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8380: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8384: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8388: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d8388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d838c: 0x100002fc  b           . + 4 + (0x2FC << 2)
    ctx->pc = 0x2D838Cu;
    {
        const bool branch_taken_0x2d838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d838c) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8394u;
label_2d8394:
    // 0x2d8394: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8398: 0x906411ef  lbu         $a0, 0x11EF($v1)
    ctx->pc = 0x2d8398u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4591)));
    // 0x2d839c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d839cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d83a0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2d83a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d83a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d83a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2d83a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d83ac: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2d83acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2d83b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d83b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d83b4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D83B4u;
    {
        const bool branch_taken_0x2d83b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d83b4) {
            ctx->pc = 0x2D8448u;
            goto label_2d8448;
        }
    }
    ctx->pc = 0x2D83BCu;
    // 0x2d83bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d83bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d83c0: 0x948311f6  lhu         $v1, 0x11F6($a0)
    ctx->pc = 0x2d83c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
    // 0x2d83c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d83c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d83c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d83c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d83cc: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D83CCu;
    {
        const bool branch_taken_0x2d83cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d83cc) {
            ctx->pc = 0x2D8410u;
            goto label_2d8410;
        }
    }
    ctx->pc = 0x2D83D4u;
    // 0x2d83d4: 0x920300d5  lbu         $v1, 0xD5($s0)
    ctx->pc = 0x2d83d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 213)));
    // 0x2d83d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d83d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d83dc: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2d83dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2d83e0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2D83E0u;
    {
        const bool branch_taken_0x2d83e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d83e0) {
            ctx->pc = 0x2D8410u;
            goto label_2d8410;
        }
    }
    ctx->pc = 0x2D83E8u;
    // 0x2d83e8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d83e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d83ec: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2d83ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d83f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d83f4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2d83f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d83f8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2d83f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2d83fc: 0x920300d5  lbu         $v1, 0xD5($s0)
    ctx->pc = 0x2d83fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 213)));
    // 0x2d8400: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d8400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8404: 0xa20300d5  sb          $v1, 0xD5($s0)
    ctx->pc = 0x2d8404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8408: 0x100002dd  b           . + 4 + (0x2DD << 2)
    ctx->pc = 0x2D8408u;
    {
        const bool branch_taken_0x2d8408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8408) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8410u;
label_2d8410:
    // 0x2d8410: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8414: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8418: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d841c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8420: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8424: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8428: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d842c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d842cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8430: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8434: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8438: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d843c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d843cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8440: 0x100002cf  b           . + 4 + (0x2CF << 2)
    ctx->pc = 0x2D8440u;
    {
        const bool branch_taken_0x2d8440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8440) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8448u;
label_2d8448:
    // 0x2d8448: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d844c: 0x948311f6  lhu         $v1, 0x11F6($a0)
    ctx->pc = 0x2d844cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
    // 0x2d8450: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2d8450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d8454: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2d8454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2d8458: 0x10a302b8  beq         $a1, $v1, . + 4 + (0x2B8 << 2)
    ctx->pc = 0x2D8458u;
    {
        const bool branch_taken_0x2d8458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8458) {
            ctx->pc = 0x2D8F3Cu;
            goto label_2d8f3c;
        }
    }
    ctx->pc = 0x2D8460u;
    // 0x2d8460: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2d8460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d8464: 0x10a3026d  beq         $a1, $v1, . + 4 + (0x26D << 2)
    ctx->pc = 0x2D8464u;
    {
        const bool branch_taken_0x2d8464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8464) {
            ctx->pc = 0x2D8E1Cu;
            goto label_2d8e1c;
        }
    }
    ctx->pc = 0x2D846Cu;
    // 0x2d846c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2d846cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d8470: 0x10a3026a  beq         $a1, $v1, . + 4 + (0x26A << 2)
    ctx->pc = 0x2D8470u;
    {
        const bool branch_taken_0x2d8470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8470) {
            ctx->pc = 0x2D8E1Cu;
            goto label_2d8e1c;
        }
    }
    ctx->pc = 0x2D8478u;
    // 0x2d8478: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2d8478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2d847c: 0x10a3021e  beq         $a1, $v1, . + 4 + (0x21E << 2)
    ctx->pc = 0x2D847Cu;
    {
        const bool branch_taken_0x2d847c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d847c) {
            ctx->pc = 0x2D8CF8u;
            goto label_2d8cf8;
        }
    }
    ctx->pc = 0x2D8484u;
    // 0x2d8484: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x2d8484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2d8488: 0x10a4021b  beq         $a1, $a0, . + 4 + (0x21B << 2)
    ctx->pc = 0x2D8488u;
    {
        const bool branch_taken_0x2d8488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d8488) {
            ctx->pc = 0x2D8CF8u;
            goto label_2d8cf8;
        }
    }
    ctx->pc = 0x2D8490u;
    // 0x2d8490: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2d8490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2d8494: 0x10a30191  beq         $a1, $v1, . + 4 + (0x191 << 2)
    ctx->pc = 0x2D8494u;
    {
        const bool branch_taken_0x2d8494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8494) {
            ctx->pc = 0x2D8ADCu;
            goto label_2d8adc;
        }
    }
    ctx->pc = 0x2D849Cu;
    // 0x2d849c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2d849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d84a0: 0x10a3014a  beq         $a1, $v1, . + 4 + (0x14A << 2)
    ctx->pc = 0x2D84A0u;
    {
        const bool branch_taken_0x2d84a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d84a0) {
            ctx->pc = 0x2D89CCu;
            goto label_2d89cc;
        }
    }
    ctx->pc = 0x2D84A8u;
    // 0x2d84a8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2d84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d84ac: 0x10a30138  beq         $a1, $v1, . + 4 + (0x138 << 2)
    ctx->pc = 0x2D84ACu;
    {
        const bool branch_taken_0x2d84ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d84ac) {
            ctx->pc = 0x2D8990u;
            goto label_2d8990;
        }
    }
    ctx->pc = 0x2D84B4u;
    // 0x2d84b4: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2d84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2d84b8: 0x10a40126  beq         $a1, $a0, . + 4 + (0x126 << 2)
    ctx->pc = 0x2D84B8u;
    {
        const bool branch_taken_0x2d84b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d84b8) {
            ctx->pc = 0x2D8954u;
            goto label_2d8954;
        }
    }
    ctx->pc = 0x2D84C0u;
    // 0x2d84c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d84c4: 0x10a30090  beq         $a1, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x2D84C4u;
    {
        const bool branch_taken_0x2d84c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d84c4) {
            ctx->pc = 0x2D8708u;
            goto label_2d8708;
        }
    }
    ctx->pc = 0x2D84CCu;
    // 0x2d84cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d84ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d84d0: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D84D0u;
    {
        const bool branch_taken_0x2d84d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d84d0) {
            ctx->pc = 0x2D84E0u;
            goto label_2d84e0;
        }
    }
    ctx->pc = 0x2D84D8u;
    // 0x2d84d8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D84D8u;
    {
        const bool branch_taken_0x2d84d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d84d8) {
            ctx->pc = 0x2D84E0u;
            goto label_2d84e0;
        }
    }
    ctx->pc = 0x2D84E0u;
label_2d84e0:
    // 0x2d84e0: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2d84e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d84e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d84e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d84e8: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x2d84e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d84ec: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D84ECu;
    {
        const bool branch_taken_0x2d84ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d84ec) {
            ctx->pc = 0x2D85B8u;
            goto label_2d85b8;
        }
    }
    ctx->pc = 0x2D84F4u;
    // 0x2d84f4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D84F4u;
    SET_GPR_U32(ctx, 31, 0x2D84FCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D84F4u, 0x2D84FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D84FCu;
label_2d84fc:
    // 0x2d84fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d84fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8500: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8504: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d8504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d8508: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D8508u;
    {
        const bool branch_taken_0x2d8508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8508) {
            ctx->pc = 0x2D85B8u;
            goto label_2d85b8;
        }
    }
    ctx->pc = 0x2D8510u;
    // 0x2d8510: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8514: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2d8514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d8518: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d851c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8520: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D8520u;
    {
        const bool branch_taken_0x2d8520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8520) {
            ctx->pc = 0x2D85B8u;
            goto label_2d85b8;
        }
    }
    ctx->pc = 0x2D8528u;
    // 0x2d8528: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d852c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d852cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8530: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8538: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8538u;
    {
        const bool branch_taken_0x2d8538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8538) {
            ctx->pc = 0x2D8570u;
            goto label_2d8570;
        }
    }
    ctx->pc = 0x2D8540u;
    // 0x2d8540: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8544: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2d8544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2d8548: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d854c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8550: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8550u;
    {
        const bool branch_taken_0x2d8550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8550) {
            ctx->pc = 0x2D8570u;
            goto label_2d8570;
        }
    }
    ctx->pc = 0x2D8558u;
    // 0x2d8558: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d855c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d855cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8560: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8564: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8568: 0x14640013  bne         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8568u;
    {
        const bool branch_taken_0x2d8568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d8568) {
            ctx->pc = 0x2D85B8u;
            goto label_2d85b8;
        }
    }
    ctx->pc = 0x2D8570u;
label_2d8570:
    // 0x2d8570: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8574: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8574u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8578: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d857c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8580: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8584: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8584u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8588: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d8588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d858c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8590: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8594: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8598: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2d8598u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d859c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d85a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d85a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d85a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d85a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d85a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d85a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d85ac: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d85acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d85b0: 0x10000273  b           . + 4 + (0x273 << 2)
    ctx->pc = 0x2D85B0u;
    {
        const bool branch_taken_0x2d85b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d85b0) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D85B8u;
label_2d85b8:
    // 0x2d85b8: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2d85b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d85bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d85bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d85c0: 0x18600030  blez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D85C0u;
    {
        const bool branch_taken_0x2d85c0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2d85c0) {
            ctx->pc = 0x2D8684u;
            goto label_2d8684;
        }
    }
    ctx->pc = 0x2D85C8u;
    // 0x2d85c8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D85C8u;
    SET_GPR_U32(ctx, 31, 0x2D85D0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D85C8u, 0x2D85D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D85D0u;
label_2d85d0:
    // 0x2d85d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d85d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d85d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d85d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d85d8: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2d85d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d85dc: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D85DCu;
    {
        const bool branch_taken_0x2d85dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d85dc) {
            ctx->pc = 0x2D8684u;
            goto label_2d8684;
        }
    }
    ctx->pc = 0x2D85E4u;
    // 0x2d85e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d85e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d85e8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2d85e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d85ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d85ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d85f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d85f4: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D85F4u;
    {
        const bool branch_taken_0x2d85f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d85f4) {
            ctx->pc = 0x2D8684u;
            goto label_2d8684;
        }
    }
    ctx->pc = 0x2D85FCu;
    // 0x2d85fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8600: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x2d8600u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8604: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d8604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d8608: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8608u;
    {
        const bool branch_taken_0x2d8608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8608) {
            ctx->pc = 0x2D8640u;
            goto label_2d8640;
        }
    }
    ctx->pc = 0x2D8610u;
    // 0x2d8610: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8614: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2d8614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2d8618: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d861c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d861cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8620: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8620u;
    {
        const bool branch_taken_0x2d8620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8620) {
            ctx->pc = 0x2D8640u;
            goto label_2d8640;
        }
    }
    ctx->pc = 0x2D8628u;
    // 0x2d8628: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d862c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d862cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8630: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8638: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8638u;
    {
        const bool branch_taken_0x2d8638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8638) {
            ctx->pc = 0x2D8684u;
            goto label_2d8684;
        }
    }
    ctx->pc = 0x2D8640u;
label_2d8640:
    // 0x2d8640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8644: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8648: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d864c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d864cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8650: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8654: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8658: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d865c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d865cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8660: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8664: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8668: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d866c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d866cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8670: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d8670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8674: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8678: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8678u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d867c: 0x10000240  b           . + 4 + (0x240 << 2)
    ctx->pc = 0x2D867Cu;
    {
        const bool branch_taken_0x2d867c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d867c) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8684u;
label_2d8684:
    // 0x2d8684: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8688: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8688u;
    SET_GPR_U32(ctx, 31, 0x2D8690u);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8688u, 0x2D8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8690u;
label_2d8690:
    // 0x2d8690: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8690u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8694: 0x920300d5  lbu         $v1, 0xD5($s0)
    ctx->pc = 0x2d8694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 213)));
    // 0x2d8698: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d869c: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2d869cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2d86a0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2D86A0u;
    {
        const bool branch_taken_0x2d86a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d86a0) {
            ctx->pc = 0x2D86D0u;
            goto label_2d86d0;
        }
    }
    ctx->pc = 0x2D86A8u;
    // 0x2d86a8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d86a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d86ac: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d86acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d86b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d86b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2d86b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d86b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2d86b8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2d86b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2d86bc: 0x920300d5  lbu         $v1, 0xD5($s0)
    ctx->pc = 0x2d86bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 213)));
    // 0x2d86c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d86c4: 0xa20300d5  sb          $v1, 0xD5($s0)
    ctx->pc = 0x2d86c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d86c8: 0x1000022d  b           . + 4 + (0x22D << 2)
    ctx->pc = 0x2D86C8u;
    {
        const bool branch_taken_0x2d86c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d86c8) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D86D0u;
label_2d86d0:
    // 0x2d86d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d86d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d86d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d86d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d86d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d86d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d86dc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d86dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d86e0: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2d86e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d86e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d86e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d86e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d86ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d86ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d86f0: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2d86f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d86f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d86f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d86f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d86f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d86fc: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d86fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8700: 0x1000021f  b           . + 4 + (0x21F << 2)
    ctx->pc = 0x2D8700u;
    {
        const bool branch_taken_0x2d8700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8700) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8708u;
label_2d8708:
    // 0x2d8708: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2d8708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d870c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d870cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8710: 0x18600030  blez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D8710u;
    {
        const bool branch_taken_0x2d8710 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2d8710) {
            ctx->pc = 0x2D87D4u;
            goto label_2d87d4;
        }
    }
    ctx->pc = 0x2D8718u;
    // 0x2d8718: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D8718u;
    SET_GPR_U32(ctx, 31, 0x2D8720u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D8718u, 0x2D8720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8720u;
label_2d8720:
    // 0x2d8720: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2d8720u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8724: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d8724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d8728: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d8728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d872c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D872Cu;
    {
        const bool branch_taken_0x2d872c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d872c) {
            ctx->pc = 0x2D87D4u;
            goto label_2d87d4;
        }
    }
    ctx->pc = 0x2D8734u;
    // 0x2d8734: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8738: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2d8738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d873c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d873cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8740: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8744: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D8744u;
    {
        const bool branch_taken_0x2d8744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8744) {
            ctx->pc = 0x2D87D4u;
            goto label_2d87d4;
        }
    }
    ctx->pc = 0x2D874Cu;
    // 0x2d874c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d874cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8750: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2d8750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2d8754: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8758: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8758u;
    {
        const bool branch_taken_0x2d8758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8758) {
            ctx->pc = 0x2D8790u;
            goto label_2d8790;
        }
    }
    ctx->pc = 0x2D8760u;
    // 0x2d8760: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8764: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8768: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d876c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d876cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8770: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8770u;
    {
        const bool branch_taken_0x2d8770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8770) {
            ctx->pc = 0x2D8790u;
            goto label_2d8790;
        }
    }
    ctx->pc = 0x2D8778u;
    // 0x2d8778: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d877c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d877cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8780: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8784: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8788: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8788u;
    {
        const bool branch_taken_0x2d8788 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8788) {
            ctx->pc = 0x2D87D4u;
            goto label_2d87d4;
        }
    }
    ctx->pc = 0x2D8790u;
label_2d8790:
    // 0x2d8790: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8794: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8798: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d879c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d879cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d87a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d87a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d87a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d87a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d87a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d87a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d87ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d87acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d87b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d87b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d87b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d87b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d87b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d87b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d87bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d87c0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d87c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d87c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d87c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d87c8: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d87c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d87cc: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x2D87CCu;
    {
        const bool branch_taken_0x2d87cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d87cc) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D87D4u;
label_2d87d4:
    // 0x2d87d4: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2d87d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d87d8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d87d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d87dc: 0x1880004b  blez        $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2D87DCu;
    {
        const bool branch_taken_0x2d87dc = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2d87dc) {
            ctx->pc = 0x2D890Cu;
            goto label_2d890c;
        }
    }
    ctx->pc = 0x2D87E4u;
    // 0x2d87e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D87E4u;
    SET_GPR_U32(ctx, 31, 0x2D87ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D87E4u, 0x2D87ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87ECu;
label_2d87ec:
    // 0x2d87ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d87ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d87f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d87f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d87f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d87f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d87f8: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2D87F8u;
    {
        const bool branch_taken_0x2d87f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d87f8) {
            ctx->pc = 0x2D890Cu;
            goto label_2d890c;
        }
    }
    ctx->pc = 0x2D8800u;
    // 0x2d8800: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8804: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2d8804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8808: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d880c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d880cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8810: 0x1464003e  bne         $v1, $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D8810u;
    {
        const bool branch_taken_0x2d8810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d8810) {
            ctx->pc = 0x2D890Cu;
            goto label_2d890c;
        }
    }
    ctx->pc = 0x2D8818u;
    // 0x2d8818: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d881c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d881cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8820: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8828: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8828u;
    {
        const bool branch_taken_0x2d8828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8828) {
            ctx->pc = 0x2D8848u;
            goto label_2d8848;
        }
    }
    ctx->pc = 0x2D8830u;
    // 0x2d8830: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8834: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x2d8834u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8838: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d8838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d883c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8840: 0x14640032  bne         $v1, $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D8840u;
    {
        const bool branch_taken_0x2d8840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d8840) {
            ctx->pc = 0x2D890Cu;
            goto label_2d890c;
        }
    }
    ctx->pc = 0x2D8848u;
label_2d8848:
    // 0x2d8848: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d8848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d884c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2d884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8850: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x2d8850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x2d8854: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x2d8854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2d8858: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d8858u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d885c: 0x0  nop
    ctx->pc = 0x2d885cu;
    // NOP
    // 0x2d8860: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d8860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8864: 0x0  nop
    ctx->pc = 0x2d8864u;
    // NOP
    // 0x2d8868: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x2D8868u;
    {
        const bool branch_taken_0x2d8868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d8868) {
            ctx->pc = 0x2D890Cu;
            goto label_2d890c;
        }
    }
    ctx->pc = 0x2D8870u;
    // 0x2d8870: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8874: 0xa49110a6  sh          $s1, 0x10A6($a0)
    ctx->pc = 0x2d8874u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8878: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d887c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D887Cu;
    SET_GPR_U32(ctx, 31, 0x2D8884u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D887Cu, 0x2D8884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8884u;
label_2d8884:
    // 0x2d8884: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8884u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8888: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d888c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d888cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d8890: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D8890u;
    {
        const bool branch_taken_0x2d8890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8890) {
            ctx->pc = 0x2D88D0u;
            goto label_2d88d0;
        }
    }
    ctx->pc = 0x2D8898u;
    // 0x2d8898: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d889c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d889cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88a0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2d88a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d88a4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2d88a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d88a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d88a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d88acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d88b0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d88b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88b4: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x2d88b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d88b8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d88b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88bc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2d88bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d88c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d88c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d88c8: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x2D88C8u;
    {
        const bool branch_taken_0x2d88c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d88c8) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D88D0u;
label_2d88d0:
    // 0x2d88d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d88d4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88d8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2d88d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d88dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d88dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d88e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d88e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d88e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d88ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d88f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d88f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d88f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d88f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d88f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d88fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d88fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8900: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d8900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8904: 0x1000019e  b           . + 4 + (0x19E << 2)
    ctx->pc = 0x2D8904u;
    {
        const bool branch_taken_0x2d8904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8904) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D890Cu;
label_2d890c:
    // 0x2d890c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d890cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8910: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8910u;
    SET_GPR_U32(ctx, 31, 0x2D8918u);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8910u, 0x2D8918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8918u;
label_2d8918:
    // 0x2d8918: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d8918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d891c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8920: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2d8920u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d8924: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8928: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d892c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d892cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8930: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8934: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8938: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d893c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d893cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8940: 0x8fb20058  lw          $s2, 0x58($sp)
    ctx->pc = 0x2d8940u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8944: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2d8944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2d8948: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d894c: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x2D894Cu;
    {
        const bool branch_taken_0x2d894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d894c) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8954u;
label_2d8954:
    // 0x2d8954: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8958: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d895c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d895cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8960: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2d8960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8964: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8968: 0xa0710001  sb          $s1, 0x1($v1)
    ctx->pc = 0x2d8968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x2d896c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d896cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8970: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2d8970u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8974: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x2d8974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8978: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x2d8978u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d897c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8980: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8984: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8988: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x2D8988u;
    {
        const bool branch_taken_0x2d8988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8988) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8990u;
label_2d8990:
    // 0x2d8990: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8994: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8998: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d899c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d89a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d89a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d89a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d89a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d89a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d89ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d89acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d89b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d89b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d89b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d89b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d89b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d89bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d89bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d89c0: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d89c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d89c4: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x2D89C4u;
    {
        const bool branch_taken_0x2d89c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d89c4) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D89CCu;
label_2d89cc:
    // 0x2d89cc: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x2d89ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d89d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d89d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d89d4: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D89D4u;
    {
        const bool branch_taken_0x2d89d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d89d4) {
            ctx->pc = 0x2D8A94u;
            goto label_2d8a94;
        }
    }
    ctx->pc = 0x2D89DCu;
    // 0x2d89dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D89DCu;
    SET_GPR_U32(ctx, 31, 0x2D89E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D89DCu, 0x2D89E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D89E4u;
label_2d89e4:
    // 0x2d89e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d89e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d89e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d89e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d89ec: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D89ECu;
    {
        const bool branch_taken_0x2d89ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d89ec) {
            ctx->pc = 0x2D8A94u;
            goto label_2d8a94;
        }
    }
    ctx->pc = 0x2D89F4u;
    // 0x2d89f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d89f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d89f8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2d89f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d89fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d89fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8a00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8a04: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D8A04u;
    {
        const bool branch_taken_0x2d8a04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8a04) {
            ctx->pc = 0x2D8A94u;
            goto label_2d8a94;
        }
    }
    ctx->pc = 0x2D8A0Cu;
    // 0x2d8a0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a10: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8a14: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8a18: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8A18u;
    {
        const bool branch_taken_0x2d8a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8a18) {
            ctx->pc = 0x2D8A50u;
            goto label_2d8a50;
        }
    }
    ctx->pc = 0x2D8A20u;
    // 0x2d8a20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a24: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8a28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8a2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8a30: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8A30u;
    {
        const bool branch_taken_0x2d8a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8a30) {
            ctx->pc = 0x2D8A50u;
            goto label_2d8a50;
        }
    }
    ctx->pc = 0x2D8A38u;
    // 0x2d8a38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a3c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8a40: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8a44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8a48: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8A48u;
    {
        const bool branch_taken_0x2d8a48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8a48) {
            ctx->pc = 0x2D8A94u;
            goto label_2d8a94;
        }
    }
    ctx->pc = 0x2D8A50u;
label_2d8a50:
    // 0x2d8a50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8a54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8a58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8a5c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2d8a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8a60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a64: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2d8a64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8a68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a6c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8a70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a74: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8a78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8a7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a80: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8a84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a88: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8a88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8a8c: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x2D8A8Cu;
    {
        const bool branch_taken_0x2d8a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8a8c) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8A94u;
label_2d8a94:
    // 0x2d8a94: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a98: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8A98u;
    SET_GPR_U32(ctx, 31, 0x2D8AA0u);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8A98u, 0x2D8AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8AA0u;
label_2d8aa0:
    // 0x2d8aa0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8aa0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8aa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8aa8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d8aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8aac: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2d8aacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8ab0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ab4: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2d8ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ab8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8abc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ac0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ac4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ac8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8acc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8ad0: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ad4: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x2D8AD4u;
    {
        const bool branch_taken_0x2d8ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8ad4) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8ADCu;
label_2d8adc:
    // 0x2d8adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8ae0: 0xa20300d9  sb          $v1, 0xD9($s0)
    ctx->pc = 0x2d8ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8ae4: 0x920400db  lbu         $a0, 0xDB($s0)
    ctx->pc = 0x2d8ae4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d8ae8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d8ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d8aec: 0x18600030  blez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D8AECu;
    {
        const bool branch_taken_0x2d8aec = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2d8aec) {
            ctx->pc = 0x2D8BB0u;
            goto label_2d8bb0;
        }
    }
    ctx->pc = 0x2D8AF4u;
    // 0x2d8af4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D8AF4u;
    SET_GPR_U32(ctx, 31, 0x2D8AFCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D8AF4u, 0x2D8AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8AFCu;
label_2d8afc:
    // 0x2d8afc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2d8afcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8b00: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d8b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d8b04: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d8b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d8b08: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D8B08u;
    {
        const bool branch_taken_0x2d8b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8b08) {
            ctx->pc = 0x2D8BB0u;
            goto label_2d8bb0;
        }
    }
    ctx->pc = 0x2D8B10u;
    // 0x2d8b10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b14: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2d8b14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d8b18: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8b1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8b20: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D8B20u;
    {
        const bool branch_taken_0x2d8b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8b20) {
            ctx->pc = 0x2D8BB0u;
            goto label_2d8bb0;
        }
    }
    ctx->pc = 0x2D8B28u;
    // 0x2d8b28: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d8b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b2c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2d8b2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2d8b30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8b34: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8B34u;
    {
        const bool branch_taken_0x2d8b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8b34) {
            ctx->pc = 0x2D8B6Cu;
            goto label_2d8b6c;
        }
    }
    ctx->pc = 0x2D8B3Cu;
    // 0x2d8b3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b40: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8b44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8b4c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8B4Cu;
    {
        const bool branch_taken_0x2d8b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8b4c) {
            ctx->pc = 0x2D8B6Cu;
            goto label_2d8b6c;
        }
    }
    ctx->pc = 0x2D8B54u;
    // 0x2d8b54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b58: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8b5c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8b60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8b64: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8B64u;
    {
        const bool branch_taken_0x2d8b64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8b64) {
            ctx->pc = 0x2D8BB0u;
            goto label_2d8bb0;
        }
    }
    ctx->pc = 0x2D8B6Cu;
label_2d8b6c:
    // 0x2d8b6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8b70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8b78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d8b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d8b7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8b80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8b84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8b88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8b8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8b90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8b94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8b98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8b9c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ba0: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8ba4: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ba8: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x2D8BA8u;
    {
        const bool branch_taken_0x2d8ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8ba8) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8BB0u;
label_2d8bb0:
    // 0x2d8bb0: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2d8bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d8bb4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8bb8: 0x1880003d  blez        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2D8BB8u;
    {
        const bool branch_taken_0x2d8bb8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2d8bb8) {
            ctx->pc = 0x2D8CB0u;
            goto label_2d8cb0;
        }
    }
    ctx->pc = 0x2D8BC0u;
    // 0x2d8bc0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D8BC0u;
    SET_GPR_U32(ctx, 31, 0x2D8BC8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D8BC0u, 0x2D8BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8BC8u;
label_2d8bc8:
    // 0x2d8bc8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8bc8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8bcc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8bd0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d8bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d8bd4: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D8BD4u;
    {
        const bool branch_taken_0x2d8bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8bd4) {
            ctx->pc = 0x2D8CB0u;
            goto label_2d8cb0;
        }
    }
    ctx->pc = 0x2D8BDCu;
    // 0x2d8bdc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8be0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2d8be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8be4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8be8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8bec: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D8BECu;
    {
        const bool branch_taken_0x2d8bec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8bec) {
            ctx->pc = 0x2D8CB0u;
            goto label_2d8cb0;
        }
    }
    ctx->pc = 0x2D8BF4u;
    // 0x2d8bf4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8bf8: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2d8bf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2d8bfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8c00: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8C00u;
    {
        const bool branch_taken_0x2d8c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8c00) {
            ctx->pc = 0x2D8C38u;
            goto label_2d8c38;
        }
    }
    ctx->pc = 0x2D8C08u;
    // 0x2d8c08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c0c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8c10: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8c18: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8C18u;
    {
        const bool branch_taken_0x2d8c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8c18) {
            ctx->pc = 0x2D8C38u;
            goto label_2d8c38;
        }
    }
    ctx->pc = 0x2D8C20u;
    // 0x2d8c20: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c24: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2d8c24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2d8c28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8c2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8c30: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D8C30u;
    {
        const bool branch_taken_0x2d8c30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8c30) {
            ctx->pc = 0x2D8CB0u;
            goto label_2d8cb0;
        }
    }
    ctx->pc = 0x2D8C38u;
label_2d8c38:
    // 0x2d8c38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8c3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8c40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8c44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d8c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d8c48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8c50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8c58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8c60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8c68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c6c: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8c70: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8c70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8c74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8c78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8c80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2d8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8c84: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c88: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2d8c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8c8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8c90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8c94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c98: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8c98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8c9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8ca0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ca4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d8ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8ca8: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x2D8CA8u;
    {
        const bool branch_taken_0x2d8ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8ca8) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8CB0u;
label_2d8cb0:
    // 0x2d8cb0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8cb4: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8CB4u;
    SET_GPR_U32(ctx, 31, 0x2D8CBCu);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8CB4u, 0x2D8CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8CBCu;
label_2d8cbc:
    // 0x2d8cbc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8cbcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8cc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8cc4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8cc8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8ccc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8cd0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d8cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8cd4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8cd8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8cdc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ce0: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2d8ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ce4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ce8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8cec: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8cf0: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2D8CF0u;
    {
        const bool branch_taken_0x2d8cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8cf0) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8CF8u;
label_2d8cf8:
    // 0x2d8cf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8cfc: 0xa20400d9  sb          $a0, 0xD9($s0)
    ctx->pc = 0x2d8cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8d00: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2d8d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d8d04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8d08: 0x18800031  blez        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D8D08u;
    {
        const bool branch_taken_0x2d8d08 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2d8d08) {
            ctx->pc = 0x2D8DD0u;
            goto label_2d8dd0;
        }
    }
    ctx->pc = 0x2D8D10u;
    // 0x2d8d10: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D8D10u;
    SET_GPR_U32(ctx, 31, 0x2D8D18u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D8D10u, 0x2D8D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D18u;
label_2d8d18:
    // 0x2d8d18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8d18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8d1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8d20: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d8d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d8d24: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D8D24u;
    {
        const bool branch_taken_0x2d8d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8d24) {
            ctx->pc = 0x2D8DD0u;
            goto label_2d8dd0;
        }
    }
    ctx->pc = 0x2D8D2Cu;
    // 0x2d8d2c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8d30: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2d8d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8d34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8d38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8d3c: 0x14640024  bne         $v1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D8D3Cu;
    {
        const bool branch_taken_0x2d8d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d8d3c) {
            ctx->pc = 0x2D8DD0u;
            goto label_2d8dd0;
        }
    }
    ctx->pc = 0x2D8D44u;
    // 0x2d8d44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8d48: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8d4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8d50: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8D50u;
    {
        const bool branch_taken_0x2d8d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8d50) {
            ctx->pc = 0x2D8D88u;
            goto label_2d8d88;
        }
    }
    ctx->pc = 0x2D8D58u;
    // 0x2d8d58: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d8d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8d5c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2d8d5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2d8d60: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8d64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8d68: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8D68u;
    {
        const bool branch_taken_0x2d8d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8d68) {
            ctx->pc = 0x2D8D88u;
            goto label_2d8d88;
        }
    }
    ctx->pc = 0x2D8D70u;
    // 0x2d8d70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8d74: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8d74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8d78: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8d7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8d80: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8D80u;
    {
        const bool branch_taken_0x2d8d80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8d80) {
            ctx->pc = 0x2D8DD0u;
            goto label_2d8dd0;
        }
    }
    ctx->pc = 0x2D8D88u;
label_2d8d88:
    // 0x2d8d88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8d8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8d90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8d94: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d8d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8d98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8d9c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8da0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8da4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8da4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8da8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8dac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8db0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8db4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8db8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d8db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8dbc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8dc0: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8dc4: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8dc8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2D8DC8u;
    {
        const bool branch_taken_0x2d8dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8dc8) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8DD0u;
label_2d8dd0:
    // 0x2d8dd0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8dd4: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8DD4u;
    SET_GPR_U32(ctx, 31, 0x2D8DDCu);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8DD4u, 0x2D8DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8DDCu;
label_2d8ddc:
    // 0x2d8ddc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8ddcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8de0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8de4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8de8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8dec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8df0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8df4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8df4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8df8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8dfc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8e00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8e04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8e04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8e08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8e0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8e10: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8e10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8e14: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2D8E14u;
    {
        const bool branch_taken_0x2d8e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8e14) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8E1Cu;
label_2d8e1c:
    // 0x2d8e1c: 0x920400db  lbu         $a0, 0xDB($s0)
    ctx->pc = 0x2d8e1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d8e20: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d8e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d8e24: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2d8e24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d8e28: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D8E28u;
    {
        const bool branch_taken_0x2d8e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8e28) {
            ctx->pc = 0x2D8EF4u;
            goto label_2d8ef4;
        }
    }
    ctx->pc = 0x2D8E30u;
    // 0x2d8e30: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D8E30u;
    SET_GPR_U32(ctx, 31, 0x2D8E38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D8E30u, 0x2D8E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E38u;
label_2d8e38:
    // 0x2d8e38: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8e38u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8e3c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8e40: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2d8e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2d8e44: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D8E44u;
    {
        const bool branch_taken_0x2d8e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8e44) {
            ctx->pc = 0x2D8EF4u;
            goto label_2d8ef4;
        }
    }
    ctx->pc = 0x2D8E4Cu;
    // 0x2d8e4c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8e50: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2d8e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8e54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8e58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8e5c: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D8E5Cu;
    {
        const bool branch_taken_0x2d8e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8e5c) {
            ctx->pc = 0x2D8EF4u;
            goto label_2d8ef4;
        }
    }
    ctx->pc = 0x2D8E64u;
    // 0x2d8e64: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8e68: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8e6c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8e74: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8E74u;
    {
        const bool branch_taken_0x2d8e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8e74) {
            ctx->pc = 0x2D8EACu;
            goto label_2d8eac;
        }
    }
    ctx->pc = 0x2D8E7Cu;
    // 0x2d8e7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8e80: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8e84: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8e88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8e8c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8E8Cu;
    {
        const bool branch_taken_0x2d8e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8e8c) {
            ctx->pc = 0x2D8EACu;
            goto label_2d8eac;
        }
    }
    ctx->pc = 0x2D8E94u;
    // 0x2d8e94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8e98: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8e9c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8e9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8ea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8ea4: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8EA4u;
    {
        const bool branch_taken_0x2d8ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8ea4) {
            ctx->pc = 0x2D8EF4u;
            goto label_2d8ef4;
        }
    }
    ctx->pc = 0x2D8EACu;
label_2d8eac:
    // 0x2d8eac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8eb0: 0xa47110a6  sh          $s1, 0x10A6($v1)
    ctx->pc = 0x2d8eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d8eb4: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8eb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8ebc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ec0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8ec4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2d8ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8ec8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ecc: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2d8eccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8ed0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ed4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ed8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8edc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8ee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8ee4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ee8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d8ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d8eec: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2D8EECu;
    {
        const bool branch_taken_0x2d8eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8eec) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8EF4u;
label_2d8ef4:
    // 0x2d8ef4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8ef8: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8EF8u;
    SET_GPR_U32(ctx, 31, 0x2D8F00u);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8EF8u, 0x2D8F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F00u;
label_2d8f00:
    // 0x2d8f00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8f04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f08: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d8f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8f0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8f10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f14: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8f14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8f18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8f20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d8f24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8f28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d8f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d8f30: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8f30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8f34: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8F34u;
    {
        const bool branch_taken_0x2d8f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8f34) {
            ctx->pc = 0x2D8F80u;
            goto label_2d8f80;
        }
    }
    ctx->pc = 0x2D8F3Cu;
label_2d8f3c:
    // 0x2d8f3c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f40: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8F40u;
    SET_GPR_U32(ctx, 31, 0x2D8F48u);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8F40u, 0x2D8F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F48u;
label_2d8f48:
    // 0x2d8f48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2d8f48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8f4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8f50: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d8f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f54: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2d8f54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8f58: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8f5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f60: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8f60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8f64: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f68: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8f68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8f6c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d8f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f70: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x2d8f70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8f74: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f78: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d8f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d8f7c: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_2d8f80:
    // 0x2d8f80: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2d8f80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8f84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d8f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8f88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8f8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8f90: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d8f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d8f94: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8F9Cu;
}
