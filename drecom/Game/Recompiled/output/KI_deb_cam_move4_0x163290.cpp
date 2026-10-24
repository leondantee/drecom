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

// Function: KI_deb_cam_move4
// Address: 0x163290 - 0x163bb4
void KI_deb_cam_move4_0x163290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KI_deb_cam_move4_0x163290");
#endif

    switch (ctx->pc) {
        case 0x163318u: goto label_163318;
        case 0x16333cu: goto label_16333c;
        case 0x1634b4u: goto label_1634b4;
        case 0x1634ccu: goto label_1634cc;
        case 0x163650u: goto label_163650;
        case 0x163664u: goto label_163664;
        case 0x163688u: goto label_163688;
        case 0x1636a0u: goto label_1636a0;
        case 0x1636b0u: goto label_1636b0;
        case 0x1636dcu: goto label_1636dc;
        case 0x163830u: goto label_163830;
        case 0x16387cu: goto label_16387c;
        case 0x163890u: goto label_163890;
        case 0x16389cu: goto label_16389c;
        case 0x1638b8u: goto label_1638b8;
        case 0x1638d8u: goto label_1638d8;
        case 0x1638e4u: goto label_1638e4;
        case 0x163a28u: goto label_163a28;
        case 0x163a3cu: goto label_163a3c;
        case 0x163a50u: goto label_163a50;
        case 0x163a84u: goto label_163a84;
        case 0x163ad8u: goto label_163ad8;
        case 0x163b80u: goto label_163b80;
        case 0x163b94u: goto label_163b94;
        default: break;
    }

    ctx->pc = 0x163290u;

    // 0x163290: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x163290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x163294: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x163294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x163298: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x163298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16329c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16329cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1632a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1632a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1632a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1632a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1632a8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1632a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1632ac: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x1632acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1632b0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1632b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1632b4: 0x24530080  addiu       $s3, $v0, 0x80
    ctx->pc = 0x1632b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1632b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1632b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1632bc: 0x8c310af0  lw          $s1, 0xAF0($at)
    ctx->pc = 0x1632bcu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1632c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1632c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1632c4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1632c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1632c8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1632c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1632cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1632ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1632d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1632d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1632d4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1632d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1632d8: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x1632d8u;
    { uint32_t bits = FAST_READ32(0x3EEF48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1632dc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1632dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1632e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1632e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1632e4: 0x0  nop
    ctx->pc = 0x1632e4u;
    // NOP
    // 0x1632e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1632e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1632ec: 0x0  nop
    ctx->pc = 0x1632ecu;
    // NOP
    // 0x1632f0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1632F0u;
    {
        const bool branch_taken_0x1632f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1632f0) {
            ctx->pc = 0x163328u;
            goto label_163328;
        }
    }
    ctx->pc = 0x1632F8u;
    // 0x1632f8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1632f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1632fc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1632fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x163300: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x163300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x163304: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x163304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163308: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x16330c: 0xc42d4f28  lwc1        $f13, 0x4F28($at)
    ctx->pc = 0x16330cu;
    { uint32_t bits = FAST_READ32(0x3F4F28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x163310: 0xc058f50  jal         func_163D40
    ctx->pc = 0x163310u;
    SET_GPR_U32(ctx, 31, 0x163318u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x163310u, 0x163318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163318u;
label_163318:
    // 0x163318: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x16331c: 0xe4204f28  swc1        $f0, 0x4F28($at)
    ctx->pc = 0x16331cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F28u, _value); } while (0); }
    // 0x163320: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x163320u;
    {
        const bool branch_taken_0x163320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163320) {
            ctx->pc = 0x1634BCu;
            goto label_1634bc;
        }
    }
    ctx->pc = 0x163328u;
label_163328:
    // 0x163328: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x163328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16332c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x16332cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163330: 0xc42d4f28  lwc1        $f13, 0x4F28($at)
    ctx->pc = 0x163330u;
    { uint32_t bits = FAST_READ32(0x3F4F28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x163334: 0xc058f20  jal         func_163C80
    ctx->pc = 0x163334u;
    SET_GPR_U32(ctx, 31, 0x16333Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x163334u, 0x16333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16333Cu;
label_16333c:
    // 0x16333c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x16333cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x163340: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x163340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163348: 0x0  nop
    ctx->pc = 0x163348u;
    // NOP
    // 0x16334c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16334cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163350: 0x0  nop
    ctx->pc = 0x163350u;
    // NOP
    // 0x163354: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x163354u;
    {
        const bool branch_taken_0x163354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163354) {
            ctx->pc = 0x1633F4u;
            goto label_1633f4;
        }
    }
    ctx->pc = 0x16335Cu;
    // 0x16335c: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x16335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163360: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x163360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x163364: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16336c: 0x0  nop
    ctx->pc = 0x16336cu;
    // NOP
    // 0x163370: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163374: 0x0  nop
    ctx->pc = 0x163374u;
    // NOP
    // 0x163378: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x163378u;
    {
        const bool branch_taken_0x163378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163378) {
            ctx->pc = 0x163398u;
            goto label_163398;
        }
    }
    ctx->pc = 0x163380u;
    // 0x163380: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x163380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x163384: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163388: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16338c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x16338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163390: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163394: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x163394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_163398:
    // 0x163398: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x163398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16339c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x16339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1633a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1633a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1633a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1633a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1633a8: 0x0  nop
    ctx->pc = 0x1633a8u;
    // NOP
    // 0x1633ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1633acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1633b0: 0x0  nop
    ctx->pc = 0x1633b0u;
    // NOP
    // 0x1633b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1633B4u;
    {
        const bool branch_taken_0x1633b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1633b4) {
            ctx->pc = 0x1633D0u;
            goto label_1633d0;
        }
    }
    ctx->pc = 0x1633BCu;
    // 0x1633bc: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1633bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1633c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1633c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1633c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1633c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1633c8: 0x0  nop
    ctx->pc = 0x1633c8u;
    // NOP
    // 0x1633cc: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1633ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1633d0:
    // 0x1633d0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1633d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1633d4: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1633d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1633d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1633d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1633dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1633dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1633e0: 0x0  nop
    ctx->pc = 0x1633e0u;
    // NOP
    // 0x1633e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1633e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1633e8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1633e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1633ec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1633ECu;
    {
        const bool branch_taken_0x1633ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1633ec) {
            ctx->pc = 0x163484u;
            goto label_163484;
        }
    }
    ctx->pc = 0x1633F4u;
label_1633f4:
    // 0x1633f4: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1633f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1633f8: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x1633f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x1633fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1633fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163404: 0x0  nop
    ctx->pc = 0x163404u;
    // NOP
    // 0x163408: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16340c: 0x0  nop
    ctx->pc = 0x16340cu;
    // NOP
    // 0x163410: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x163410u;
    {
        const bool branch_taken_0x163410 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163410) {
            ctx->pc = 0x163430u;
            goto label_163430;
        }
    }
    ctx->pc = 0x163418u;
    // 0x163418: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x163418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x16341c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16341cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163424: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x163424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163428: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16342c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x16342cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_163430:
    // 0x163430: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x163430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163434: 0x3c02bec9  lui         $v0, 0xBEC9
    ctx->pc = 0x163434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48841 << 16));
    // 0x163438: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16343c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16343cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163440: 0x0  nop
    ctx->pc = 0x163440u;
    // NOP
    // 0x163444: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163448: 0x0  nop
    ctx->pc = 0x163448u;
    // NOP
    // 0x16344c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x16344Cu;
    {
        const bool branch_taken_0x16344c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16344c) {
            ctx->pc = 0x163468u;
            goto label_163468;
        }
    }
    ctx->pc = 0x163454u;
    // 0x163454: 0x3c02bec9  lui         $v0, 0xBEC9
    ctx->pc = 0x163454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48841 << 16));
    // 0x163458: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16345c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16345cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163460: 0x0  nop
    ctx->pc = 0x163460u;
    // NOP
    // 0x163464: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x163464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_163468:
    // 0x163468: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x163468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16346c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x16346cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x163470: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163478: 0x0  nop
    ctx->pc = 0x163478u;
    // NOP
    // 0x16347c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16347cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163480: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x163480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_163484:
    // 0x163484: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x163484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x163488: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x163488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16348c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16348cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163490: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x163490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163494: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x163494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x163498: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x163498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x16349c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x16349cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1634a0: 0xc4214f28  lwc1        $f1, 0x4F28($at)
    ctx->pc = 0x1634a0u;
    { uint32_t bits = FAST_READ32(0x3F4F28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1634a4: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1634a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1634a8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1634a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1634ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1634ACu;
    SET_GPR_U32(ctx, 31, 0x1634B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1634ACu, 0x1634B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1634B4u;
label_1634b4:
    // 0x1634b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1634b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1634b8: 0xe4204f28  swc1        $f0, 0x4F28($at)
    ctx->pc = 0x1634b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F28u, _value); } while (0); }
label_1634bc:
    // 0x1634bc: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x1634bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1634c0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1634c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1634c4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1634C4u;
    SET_GPR_U32(ctx, 31, 0x1634CCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1634C4u, 0x1634CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1634CCu;
label_1634cc:
    // 0x1634cc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1634ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1634d0: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x1634d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1634d4: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x1634d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1634d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1634d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1634dc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1634dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1634e0: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x1634e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1634e4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1634e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1634e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1634e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1634ec: 0x0  nop
    ctx->pc = 0x1634ecu;
    // NOP
    // 0x1634f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1634f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1634f4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1634f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1634f8: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x1634f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1634fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1634fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163500: 0x0  nop
    ctx->pc = 0x163500u;
    // NOP
    // 0x163504: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163508: 0x0  nop
    ctx->pc = 0x163508u;
    // NOP
    // 0x16350c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16350Cu;
    {
        const bool branch_taken_0x16350c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16350c) {
            ctx->pc = 0x163520u;
            goto label_163520;
        }
    }
    ctx->pc = 0x163514u;
    // 0x163514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163518: 0x0  nop
    ctx->pc = 0x163518u;
    // NOP
    // 0x16351c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x16351cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_163520:
    // 0x163520: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x163520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163524: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x163524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x163528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16352c: 0x0  nop
    ctx->pc = 0x16352cu;
    // NOP
    // 0x163530: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163534: 0x0  nop
    ctx->pc = 0x163534u;
    // NOP
    // 0x163538: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x163538u;
    {
        const bool branch_taken_0x163538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163538) {
            ctx->pc = 0x163550u;
            goto label_163550;
        }
    }
    ctx->pc = 0x163540u;
    // 0x163540: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x163540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x163544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163548: 0x0  nop
    ctx->pc = 0x163548u;
    // NOP
    // 0x16354c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x16354cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_163550:
    // 0x163550: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163554: 0xc4214f30  lwc1        $f1, 0x4F30($at)
    ctx->pc = 0x163554u;
    { uint32_t bits = FAST_READ32(0x3F4F30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163558: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x163558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16355c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16355cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163560: 0x0  nop
    ctx->pc = 0x163560u;
    // NOP
    // 0x163564: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x163564u;
    {
        const bool branch_taken_0x163564 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163564) {
            ctx->pc = 0x1635D4u;
            goto label_1635d4;
        }
    }
    ctx->pc = 0x16356Cu;
    // 0x16356c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x16356cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163570: 0xc4214f30  lwc1        $f1, 0x4F30($at)
    ctx->pc = 0x163570u;
    { uint32_t bits = FAST_READ32(0x3F4F30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163574: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x163574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x163578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16357c: 0x0  nop
    ctx->pc = 0x16357cu;
    // NOP
    // 0x163580: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x163580u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163584: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x163584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163588: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163588u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16358c: 0x0  nop
    ctx->pc = 0x16358cu;
    // NOP
    // 0x163590: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x163590u;
    {
        const bool branch_taken_0x163590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163590) {
            ctx->pc = 0x1635C0u;
            goto label_1635c0;
        }
    }
    ctx->pc = 0x163598u;
    // 0x163598: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x16359c: 0xc4214f30  lwc1        $f1, 0x4F30($at)
    ctx->pc = 0x16359cu;
    { uint32_t bits = FAST_READ32(0x3F4F30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1635a0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1635a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1635a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1635a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1635a8: 0x0  nop
    ctx->pc = 0x1635a8u;
    // NOP
    // 0x1635ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1635acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1635b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1635b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1635b4: 0xe4204f30  swc1        $f0, 0x4F30($at)
    ctx->pc = 0x1635b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F30u, _value); } while (0); }
    // 0x1635b8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1635B8u;
    {
        const bool branch_taken_0x1635b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1635b8) {
            ctx->pc = 0x163630u;
            goto label_163630;
        }
    }
    ctx->pc = 0x1635C0u;
label_1635c0:
    // 0x1635c0: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x1635c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1635c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1635c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1635c8: 0xe4204f30  swc1        $f0, 0x4F30($at)
    ctx->pc = 0x1635c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F30u, _value); } while (0); }
    // 0x1635cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1635CCu;
    {
        const bool branch_taken_0x1635cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1635cc) {
            ctx->pc = 0x163630u;
            goto label_163630;
        }
    }
    ctx->pc = 0x1635D4u;
label_1635d4:
    // 0x1635d4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1635d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1635d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1635d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1635dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1635dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1635e0: 0xc4204f30  lwc1        $f0, 0x4F30($at)
    ctx->pc = 0x1635e0u;
    { uint32_t bits = FAST_READ32(0x3F4F30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1635e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1635e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1635e8: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x1635e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1635ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1635ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1635f0: 0x0  nop
    ctx->pc = 0x1635f0u;
    // NOP
    // 0x1635f4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1635F4u;
    {
        const bool branch_taken_0x1635f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1635f4) {
            ctx->pc = 0x163624u;
            goto label_163624;
        }
    }
    ctx->pc = 0x1635FCu;
    // 0x1635fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1635fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163600: 0xc4214f30  lwc1        $f1, 0x4F30($at)
    ctx->pc = 0x163600u;
    { uint32_t bits = FAST_READ32(0x3F4F30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163604: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x163604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x163608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16360c: 0x0  nop
    ctx->pc = 0x16360cu;
    // NOP
    // 0x163610: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163614: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163618: 0xe4204f30  swc1        $f0, 0x4F30($at)
    ctx->pc = 0x163618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F30u, _value); } while (0); }
    // 0x16361c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16361Cu;
    {
        const bool branch_taken_0x16361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16361c) {
            ctx->pc = 0x163630u;
            goto label_163630;
        }
    }
    ctx->pc = 0x163624u;
label_163624:
    // 0x163624: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x163624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163628: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x16362c: 0xe4204f30  swc1        $f0, 0x4F30($at)
    ctx->pc = 0x16362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F30u, _value); } while (0); }
label_163630:
    // 0x163630: 0x3c023d00  lui         $v0, 0x3D00
    ctx->pc = 0x163630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15616 << 16));
    // 0x163634: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x163634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x163638: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x163638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x16363c: 0xc60c1b50  lwc1        $f12, 0x1B50($s0)
    ctx->pc = 0x16363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163640: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163644: 0xc42d4f40  lwc1        $f13, 0x4F40($at)
    ctx->pc = 0x163644u;
    { uint32_t bits = FAST_READ32(0x3F4F40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x163648: 0xc058f50  jal         func_163D40
    ctx->pc = 0x163648u;
    SET_GPR_U32(ctx, 31, 0x163650u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x163648u, 0x163650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163650u;
label_163650:
    // 0x163650: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163654: 0xe4204f40  swc1        $f0, 0x4F40($at)
    ctx->pc = 0x163654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F40u, _value); } while (0); }
    // 0x163658: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16365c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x16365Cu;
    SET_GPR_U32(ctx, 31, 0x163664u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x163664u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163664u) { return; }
    ctx->pc = 0x163664u;
label_163664:
    // 0x163664: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x163664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x163668: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16366c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x16366cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163670: 0xc4204f40  lwc1        $f0, 0x4F40($at)
    ctx->pc = 0x163670u;
    { uint32_t bits = FAST_READ32(0x3F4F40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163674: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x163674u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x163678: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16367c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16367cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163680: 0xc040d0e  jal         func_103438
    ctx->pc = 0x163680u;
    SET_GPR_U32(ctx, 31, 0x163688u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x163688u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163688u) { return; }
    ctx->pc = 0x163688u;
label_163688:
    // 0x163688: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16368c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163690: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163694: 0xc42c4f28  lwc1        $f12, 0x4F28($at)
    ctx->pc = 0x163694u;
    { uint32_t bits = FAST_READ32(0x3F4F28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163698: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x163698u;
    SET_GPR_U32(ctx, 31, 0x1636A0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1636A0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1636A0u) { return; }
    ctx->pc = 0x1636A0u;
label_1636a0:
    // 0x1636a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1636a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1636a4: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1636a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1636a8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1636A8u;
    SET_GPR_U32(ctx, 31, 0x1636B0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1636B0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1636B0u) { return; }
    ctx->pc = 0x1636B0u;
label_1636b0:
    // 0x1636b0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1636b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1636b4: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1636b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1636b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1636b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1636bc: 0x0  nop
    ctx->pc = 0x1636bcu;
    // NOP
    // 0x1636c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1636c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1636c4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1636c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1636c8: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x1636c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1636cc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1636ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1636d0: 0xc42d4f28  lwc1        $f13, 0x4F28($at)
    ctx->pc = 0x1636d0u;
    { uint32_t bits = FAST_READ32(0x3F4F28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1636d4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1636D4u;
    SET_GPR_U32(ctx, 31, 0x1636DCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1636D4u, 0x1636DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636DCu;
label_1636dc:
    // 0x1636dc: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1636dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1636e0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1636e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1636e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1636e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1636e8: 0x0  nop
    ctx->pc = 0x1636e8u;
    // NOP
    // 0x1636ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1636ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1636f0: 0x0  nop
    ctx->pc = 0x1636f0u;
    // NOP
    // 0x1636f4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1636F4u;
    {
        const bool branch_taken_0x1636f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1636f4) {
            ctx->pc = 0x163710u;
            goto label_163710;
        }
    }
    ctx->pc = 0x1636FCu;
    // 0x1636fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1636fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x163700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163704: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x163704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163708: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x163708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16370c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x16370cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_163710:
    // 0x163710: 0x3c02c3cf  lui         $v0, 0xC3CF
    ctx->pc = 0x163710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50127 << 16));
    // 0x163714: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163718: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x163718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16371c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16371cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x163720: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x163720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x163724: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x163724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163728: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x16372c: 0xc4204f38  lwc1        $f0, 0x4F38($at)
    ctx->pc = 0x16372cu;
    { uint32_t bits = FAST_READ32(0x3F4F38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163730: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163734: 0x0  nop
    ctx->pc = 0x163734u;
    // NOP
    // 0x163738: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x163738u;
    {
        const bool branch_taken_0x163738 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163738) {
            ctx->pc = 0x163790u;
            goto label_163790;
        }
    }
    ctx->pc = 0x163740u;
    // 0x163740: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163744: 0xc4214f38  lwc1        $f1, 0x4F38($at)
    ctx->pc = 0x163744u;
    { uint32_t bits = FAST_READ32(0x3F4F38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163748: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x163748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x16374c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16374cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163750: 0x0  nop
    ctx->pc = 0x163750u;
    // NOP
    // 0x163754: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163758: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x16375c: 0xe4204f38  swc1        $f0, 0x4F38($at)
    ctx->pc = 0x16375cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F38u, _value); } while (0); }
    // 0x163760: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163764: 0xc4214f38  lwc1        $f1, 0x4F38($at)
    ctx->pc = 0x163764u;
    { uint32_t bits = FAST_READ32(0x3F4F38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163768: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x163768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16376c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16376cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163770: 0x0  nop
    ctx->pc = 0x163770u;
    // NOP
    // 0x163774: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x163774u;
    {
        const bool branch_taken_0x163774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163774) {
            ctx->pc = 0x1637D8u;
            goto label_1637d8;
        }
    }
    ctx->pc = 0x16377Cu;
    // 0x16377c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x16377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163780: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163784: 0xe4204f38  swc1        $f0, 0x4F38($at)
    ctx->pc = 0x163784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F38u, _value); } while (0); }
    // 0x163788: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x163788u;
    {
        const bool branch_taken_0x163788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163788) {
            ctx->pc = 0x1637D8u;
            goto label_1637d8;
        }
    }
    ctx->pc = 0x163790u;
label_163790:
    // 0x163790: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163794: 0xc4214f38  lwc1        $f1, 0x4F38($at)
    ctx->pc = 0x163794u;
    { uint32_t bits = FAST_READ32(0x3F4F38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163798: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x163798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x16379c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16379cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1637a0: 0x0  nop
    ctx->pc = 0x1637a0u;
    // NOP
    // 0x1637a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1637a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1637a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1637a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1637ac: 0xe4204f38  swc1        $f0, 0x4F38($at)
    ctx->pc = 0x1637acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F38u, _value); } while (0); }
    // 0x1637b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1637b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1637b4: 0xc4214f38  lwc1        $f1, 0x4F38($at)
    ctx->pc = 0x1637b4u;
    { uint32_t bits = FAST_READ32(0x3F4F38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1637b8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1637b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1637bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1637bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1637c0: 0x0  nop
    ctx->pc = 0x1637c0u;
    // NOP
    // 0x1637c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1637C4u;
    {
        const bool branch_taken_0x1637c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1637c4) {
            ctx->pc = 0x1637D8u;
            goto label_1637d8;
        }
    }
    ctx->pc = 0x1637CCu;
    // 0x1637cc: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1637ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1637d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1637d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1637d4: 0xe4204f38  swc1        $f0, 0x4F38($at)
    ctx->pc = 0x1637d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F38u, _value); } while (0); }
label_1637d8:
    // 0x1637d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1637d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1637dc: 0x0  nop
    ctx->pc = 0x1637dcu;
    // NOP
    // 0x1637e0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1637e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1637e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1637e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1637e8: 0xc4204f30  lwc1        $f0, 0x4F30($at)
    ctx->pc = 0x1637e8u;
    { uint32_t bits = FAST_READ32(0x3F4F30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1637ec: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1637ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1637f0: 0x3c02c4d4  lui         $v0, 0xC4D4
    ctx->pc = 0x1637f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50388 << 16));
    // 0x1637f4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1637f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1637f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1637f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1637fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1637fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163800: 0xc4204f38  lwc1        $f0, 0x4F38($at)
    ctx->pc = 0x163800u;
    { uint32_t bits = FAST_READ32(0x3F4F38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163804: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163808: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x163808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x16380c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16380cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x163810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163814: 0x0  nop
    ctx->pc = 0x163814u;
    // NOP
    // 0x163818: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x163818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x16381c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16381cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x163820: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x163820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163824: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x163824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x163828: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x163828u;
    SET_GPR_U32(ctx, 31, 0x163830u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x163830u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163830u) { return; }
    ctx->pc = 0x163830u;
label_163830:
    // 0x163830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163834: 0x0  nop
    ctx->pc = 0x163834u;
    // NOP
    // 0x163838: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x163838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x16383c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16383cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163840: 0x0  nop
    ctx->pc = 0x163840u;
    // NOP
    // 0x163844: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x163844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x163848: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x163848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x16384c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16384cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163850: 0x0  nop
    ctx->pc = 0x163850u;
    // NOP
    // 0x163854: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x163854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x163858: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x163858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16385c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16385cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163860: 0x0  nop
    ctx->pc = 0x163860u;
    // NOP
    // 0x163864: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x163864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x163868: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x163868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16386c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16386cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163870: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x163870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x163874: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x163874u;
    SET_GPR_U32(ctx, 31, 0x16387Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x16387Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16387Cu) { return; }
    ctx->pc = 0x16387Cu;
label_16387c:
    // 0x16387c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16387cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163880: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x163880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x163884: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x163884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x163888: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x163888u;
    SET_GPR_U32(ctx, 31, 0x163890u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x163888u, 0x163890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163890u;
label_163890:
    // 0x163890: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x163890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163894: 0xc067588  jal         func_19D620
    ctx->pc = 0x163894u;
    SET_GPR_U32(ctx, 31, 0x16389Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x163894u, 0x16389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16389Cu;
label_16389c:
    // 0x16389c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x16389cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1638a0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1638a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1638a4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1638a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1638a8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1638a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1638ac: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x1638acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1638b0: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x1638B0u;
    SET_GPR_U32(ctx, 31, 0x1638B8u);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x1638B0u, 0x1638B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1638B8u;
label_1638b8:
    // 0x1638b8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1638b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1638bc: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1638BCu;
    {
        const bool branch_taken_0x1638bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1638bc) {
            ctx->pc = 0x1638E8u;
            goto label_1638e8;
        }
    }
    ctx->pc = 0x1638C4u;
    // 0x1638c4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1638c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1638c8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1638c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1638cc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1638ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1638d0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1638D0u;
    SET_GPR_U32(ctx, 31, 0x1638D8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1638D0u, 0x1638D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1638D8u;
label_1638d8:
    // 0x1638d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1638d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1638dc: 0xc067588  jal         func_19D620
    ctx->pc = 0x1638DCu;
    SET_GPR_U32(ctx, 31, 0x1638E4u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1638DCu, 0x1638E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1638E4u;
label_1638e4:
    // 0x1638e4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1638e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1638e8:
    // 0x1638e8: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1638e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1638ec: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1638ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1638f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1638f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1638f4: 0x0  nop
    ctx->pc = 0x1638f4u;
    // NOP
    // 0x1638f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1638f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1638fc: 0x0  nop
    ctx->pc = 0x1638fcu;
    // NOP
    // 0x163900: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x163900u;
    {
        const bool branch_taken_0x163900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163900) {
            ctx->pc = 0x163928u;
            goto label_163928;
        }
    }
    ctx->pc = 0x163908u;
    // 0x163908: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x163908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16390c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x16390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x163910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163914: 0x0  nop
    ctx->pc = 0x163914u;
    // NOP
    // 0x163918: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16391c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x16391cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x163920: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x163920u;
    {
        const bool branch_taken_0x163920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163920) {
            ctx->pc = 0x163938u;
            goto label_163938;
        }
    }
    ctx->pc = 0x163928u;
label_163928:
    // 0x163928: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x163928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x16392c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16392cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163930: 0x0  nop
    ctx->pc = 0x163930u;
    // NOP
    // 0x163934: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x163934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_163938:
    // 0x163938: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x163938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16393c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x16393cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163940: 0xc42056c8  lwc1        $f0, 0x56C8($at)
    ctx->pc = 0x163940u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163944: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163944u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163948: 0x0  nop
    ctx->pc = 0x163948u;
    // NOP
    // 0x16394c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x16394Cu;
    {
        const bool branch_taken_0x16394c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16394c) {
            ctx->pc = 0x1639B8u;
            goto label_1639b8;
        }
    }
    ctx->pc = 0x163954u;
    // 0x163954: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x163954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163958: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x163958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x16395c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16395cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163960: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x163960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163964: 0xc42056c8  lwc1        $f0, 0x56C8($at)
    ctx->pc = 0x163964u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163968: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16396c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x16396cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163970: 0x0  nop
    ctx->pc = 0x163970u;
    // NOP
    // 0x163974: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x163974u;
    {
        const bool branch_taken_0x163974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163974) {
            ctx->pc = 0x1639A4u;
            goto label_1639a4;
        }
    }
    ctx->pc = 0x16397Cu;
    // 0x16397c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x16397cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163980: 0xc42156c8  lwc1        $f1, 0x56C8($at)
    ctx->pc = 0x163980u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163984: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x163984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x163988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16398c: 0x0  nop
    ctx->pc = 0x16398cu;
    // NOP
    // 0x163990: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163994: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x163994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163998: 0xe42056c8  swc1        $f0, 0x56C8($at)
    ctx->pc = 0x163998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3856C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3856C8u, _value); } while (0); }
    // 0x16399c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x16399Cu;
    {
        const bool branch_taken_0x16399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16399c) {
            ctx->pc = 0x163A18u;
            goto label_163a18;
        }
    }
    ctx->pc = 0x1639A4u;
label_1639a4:
    // 0x1639a4: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1639a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1639a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1639a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1639ac: 0xe42056c8  swc1        $f0, 0x56C8($at)
    ctx->pc = 0x1639acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3856C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3856C8u, _value); } while (0); }
    // 0x1639b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1639B0u;
    {
        const bool branch_taken_0x1639b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1639b0) {
            ctx->pc = 0x163A18u;
            goto label_163a18;
        }
    }
    ctx->pc = 0x1639B8u;
label_1639b8:
    // 0x1639b8: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x1639b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1639bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1639bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1639c0: 0xc42156c8  lwc1        $f1, 0x56C8($at)
    ctx->pc = 0x1639c0u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1639c4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1639c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1639c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1639c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1639cc: 0x0  nop
    ctx->pc = 0x1639ccu;
    // NOP
    // 0x1639d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1639d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1639d4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1639d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1639d8: 0x0  nop
    ctx->pc = 0x1639d8u;
    // NOP
    // 0x1639dc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1639DCu;
    {
        const bool branch_taken_0x1639dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1639dc) {
            ctx->pc = 0x163A0Cu;
            goto label_163a0c;
        }
    }
    ctx->pc = 0x1639E4u;
    // 0x1639e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1639e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1639e8: 0xc42156c8  lwc1        $f1, 0x56C8($at)
    ctx->pc = 0x1639e8u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1639ec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1639ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1639f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1639f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1639f4: 0x0  nop
    ctx->pc = 0x1639f4u;
    // NOP
    // 0x1639f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1639f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1639fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1639fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163a00: 0xe42056c8  swc1        $f0, 0x56C8($at)
    ctx->pc = 0x163a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3856C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3856C8u, _value); } while (0); }
    // 0x163a04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x163A04u;
    {
        const bool branch_taken_0x163a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163a04) {
            ctx->pc = 0x163A18u;
            goto label_163a18;
        }
    }
    ctx->pc = 0x163A0Cu;
label_163a0c:
    // 0x163a0c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x163a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163a10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x163a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163a14: 0xe42056c8  swc1        $f0, 0x56C8($at)
    ctx->pc = 0x163a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3856C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3856C8u, _value); } while (0); }
label_163a18:
    // 0x163a18: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x163a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163a1c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x163a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163a20: 0xc040c24  jal         func_103090
    ctx->pc = 0x163A20u;
    SET_GPR_U32(ctx, 31, 0x163A28u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x163A28u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163A28u) { return; }
    ctx->pc = 0x163A28u;
label_163a28:
    // 0x163a28: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x163a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163a2c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x163a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163a30: 0xc7ac00f4  lwc1        $f12, 0xF4($sp)
    ctx->pc = 0x163a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163a34: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x163A34u;
    SET_GPR_U32(ctx, 31, 0x163A3Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x163A3Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163A3Cu) { return; }
    ctx->pc = 0x163A3Cu;
label_163a3c:
    // 0x163a3c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x163a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x163a40: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x163a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x163a44: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x163a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163a48: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x163A48u;
    SET_GPR_U32(ctx, 31, 0x163A50u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x163A48u, 0x163A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A50u;
label_163a50:
    // 0x163a50: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x163a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163a54: 0xc42156c8  lwc1        $f1, 0x56C8($at)
    ctx->pc = 0x163a54u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163a58: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x163a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x163a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163a60: 0x0  nop
    ctx->pc = 0x163a60u;
    // NOP
    // 0x163a64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163a68: 0x0  nop
    ctx->pc = 0x163a68u;
    // NOP
    // 0x163a6c: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x163A6Cu;
    {
        const bool branch_taken_0x163a6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163a6c) {
            ctx->pc = 0x163B44u;
            goto label_163b44;
        }
    }
    ctx->pc = 0x163A74u;
    // 0x163a74: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x163a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163a78: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x163a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x163a7c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x163A7Cu;
    SET_GPR_U32(ctx, 31, 0x163A84u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x163A84u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163A84u) { return; }
    ctx->pc = 0x163A84u;
label_163a84:
    // 0x163a84: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x163a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x163a88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x163a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x163a8c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x163a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x163a90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163a94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x163a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163a98: 0xc42056c8  lwc1        $f0, 0x56C8($at)
    ctx->pc = 0x163a98u;
    { uint32_t bits = FAST_READ32(0x3856C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163a9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163aa0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x163aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x163aa4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x163aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x163aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163aac: 0x0  nop
    ctx->pc = 0x163aacu;
    // NOP
    // 0x163ab0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x163ab0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163ab4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x163ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163ab8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x163ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163abc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x163abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x163ac0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x163ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x163ac4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x163ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x163ac8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x163ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x163acc: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x163accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x163ad0: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x163AD0u;
    SET_GPR_U32(ctx, 31, 0x163AD8u);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x163AD0u, 0x163AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AD8u;
label_163ad8:
    // 0x163ad8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x163ad8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x163adc: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x163ADCu;
    {
        const bool branch_taken_0x163adc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x163adc) {
            ctx->pc = 0x163B2Cu;
            goto label_163b2c;
        }
    }
    ctx->pc = 0x163AE4u;
    // 0x163ae4: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x163ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163ae8: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x163ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163aec: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x163aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x163af0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163af4: 0x0  nop
    ctx->pc = 0x163af4u;
    // NOP
    // 0x163af8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163afc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x163afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163b00: 0x0  nop
    ctx->pc = 0x163b00u;
    // NOP
    // 0x163b04: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x163B04u;
    {
        const bool branch_taken_0x163b04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163b04) {
            ctx->pc = 0x163B44u;
            goto label_163b44;
        }
    }
    ctx->pc = 0x163B0Cu;
    // 0x163b0c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x163b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163b10: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x163b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x163b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b18: 0x0  nop
    ctx->pc = 0x163b18u;
    // NOP
    // 0x163b1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163b1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163b20: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x163b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x163b24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x163B24u;
    {
        const bool branch_taken_0x163b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163b24) {
            ctx->pc = 0x163B44u;
            goto label_163b44;
        }
    }
    ctx->pc = 0x163B2Cu;
label_163b2c:
    // 0x163b2c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x163b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163b30: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x163b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x163b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b38: 0x0  nop
    ctx->pc = 0x163b38u;
    // NOP
    // 0x163b3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163b3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163b40: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x163b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_163b44:
    // 0x163b44: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x163b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b48: 0xe6200190  swc1        $f0, 0x190($s1)
    ctx->pc = 0x163b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 400), bits); }
    // 0x163b4c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x163b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b50: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x163b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x163b54: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x163b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b58: 0xe6200198  swc1        $f0, 0x198($s1)
    ctx->pc = 0x163b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 408), bits); }
    // 0x163b5c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x163b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b60: 0xe62001a0  swc1        $f0, 0x1A0($s1)
    ctx->pc = 0x163b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
    // 0x163b64: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x163b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b68: 0xe62001a4  swc1        $f0, 0x1A4($s1)
    ctx->pc = 0x163b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 420), bits); }
    // 0x163b6c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x163b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163b70: 0xe62001a8  swc1        $f0, 0x1A8($s1)
    ctx->pc = 0x163b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 424), bits); }
    // 0x163b74: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x163b74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x163b78: 0xc056518  jal         func_159460
    ctx->pc = 0x163B78u;
    SET_GPR_U32(ctx, 31, 0x163B80u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x163B78u, 0x163B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B80u;
label_163b80:
    // 0x163b80: 0x260413d0  addiu       $a0, $s0, 0x13D0
    ctx->pc = 0x163b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5072));
    // 0x163b84: 0x262501a0  addiu       $a1, $s1, 0x1A0
    ctx->pc = 0x163b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x163b88: 0x26260190  addiu       $a2, $s1, 0x190
    ctx->pc = 0x163b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x163b8c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x163B8Cu;
    SET_GPR_U32(ctx, 31, 0x163B94u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x163B8Cu, 0x163B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B94u;
label_163b94:
    // 0x163b94: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x163b94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x163b98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x163b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163ba8: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x163ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x163bac: 0x3e00008  jr          $ra
    ctx->pc = 0x163BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163BB4u;
}
