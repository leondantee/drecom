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

// Function: R110_event01
// Address: 0x278110 - 0x2783b8
void R110_event01_0x278110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R110_event01_0x278110");
#endif

    switch (ctx->pc) {
        case 0x2781f8u: goto label_2781f8;
        case 0x278204u: goto label_278204;
        case 0x27821cu: goto label_27821c;
        case 0x278230u: goto label_278230;
        case 0x27823cu: goto label_27823c;
        case 0x278250u: goto label_278250;
        case 0x27825cu: goto label_27825c;
        case 0x278264u: goto label_278264;
        case 0x2782a0u: goto label_2782a0;
        case 0x2782c8u: goto label_2782c8;
        case 0x278308u: goto label_278308;
        case 0x278398u: goto label_278398;
        default: break;
    }

    ctx->pc = 0x278110u;

    // 0x278110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x278110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x278114: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x278114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x278118: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x278118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27811c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x278120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x278120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x278124: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x278128: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x278128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27812c: 0x24531a50  addiu       $s3, $v0, 0x1A50
    ctx->pc = 0x27812cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 6736));
    // 0x278130: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x278130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x278134: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x278134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x278138: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27813c: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x27813cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x278140: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x278140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x278144: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x278144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x278148: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27814c: 0xac221aa4  sw          $v0, 0x1AA4($at)
    ctx->pc = 0x27814cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
    // 0x278150: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x278150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x278154: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278158: 0xa022d731  sb          $v0, -0x28CF($at)
    ctx->pc = 0x278158u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD731u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD731u, _value); } while (0);
    // 0x27815c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x278160: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278164: 0xa022d7d1  sb          $v0, -0x282F($at)
    ctx->pc = 0x278164u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD7D1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD7D1u, _value); } while (0);
    // 0x278168: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27816c: 0x8c31f9e4  lw          $s1, -0x61C($at)
    ctx->pc = 0x27816cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x278170: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x278170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278174: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x278174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x278178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x278178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27817c: 0x0  nop
    ctx->pc = 0x27817cu;
    // NOP
    // 0x278180: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x278180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x278184: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x278184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x278188: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x278188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27818c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x27818cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x278190: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x278190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x278194: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278198: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278198u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27819c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27819cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2781a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2781a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2781a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2781a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2781a8: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2781a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x2781ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2781acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2781b0: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x2781b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x2781b4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x2781b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2781b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2781b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2781bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2781bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2781c0: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x2781c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x2781c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2781c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2781c8: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x2781c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x2781cc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2781ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2781d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2781d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2781d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2781d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2781d8: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x2781d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x2781dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2781dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2781e0: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x2781e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x2781e4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2781e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2781e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2781e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2781ec: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2781ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x2781f0: 0xc0a1244  jal         func_284910
    ctx->pc = 0x2781F0u;
    SET_GPR_U32(ctx, 31, 0x2781F8u);
    ctx->pc = 0x284910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284910u, 0x2781F0u, 0x2781F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781F8u;
label_2781f8:
    // 0x2781f8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2781f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2781fc: 0xc0a1120  jal         func_284480
    ctx->pc = 0x2781FCu;
    SET_GPR_U32(ctx, 31, 0x278204u);
    ctx->pc = 0x284480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284480u, 0x2781FCu, 0x278204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278204u;
label_278204:
    // 0x278204: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x278204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278208: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x278208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x27820c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27820cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278210: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x278210u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278214: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x278214u;
    SET_GPR_U32(ctx, 31, 0x27821Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x278214u, 0x27821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27821Cu;
label_27821c:
    // 0x27821c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x278220: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x278220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x278224: 0x24457ba0  addiu       $a1, $v0, 0x7BA0
    ctx->pc = 0x278224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31648));
    // 0x278228: 0xc0848cc  jal         func_212330
    ctx->pc = 0x278228u;
    SET_GPR_U32(ctx, 31, 0x278230u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x278228u, 0x278230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278230u;
label_278230:
    // 0x278230: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x278230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x278234: 0xc084964  jal         func_212590
    ctx->pc = 0x278234u;
    SET_GPR_U32(ctx, 31, 0x27823Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x278234u, 0x27823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27823Cu;
label_27823c:
    // 0x27823c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27823cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x278240: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x278240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x278244: 0x24457c40  addiu       $a1, $v0, 0x7C40
    ctx->pc = 0x278244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31808));
    // 0x278248: 0xc0848cc  jal         func_212330
    ctx->pc = 0x278248u;
    SET_GPR_U32(ctx, 31, 0x278250u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x278248u, 0x278250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278250u;
label_278250:
    // 0x278250: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x278250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x278254: 0xc084964  jal         func_212590
    ctx->pc = 0x278254u;
    SET_GPR_U32(ctx, 31, 0x27825Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x278254u, 0x27825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27825Cu;
label_27825c:
    // 0x27825c: 0xc0a128c  jal         func_284A30
    ctx->pc = 0x27825Cu;
    SET_GPR_U32(ctx, 31, 0x278264u);
    ctx->pc = 0x284A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284A30u, 0x27825Cu, 0x278264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278264u;
label_278264:
    // 0x278264: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x278268: 0x8c31f9e0  lw          $s1, -0x620($at)
    ctx->pc = 0x278268u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x27826c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x278270: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x278270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x278274: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x278274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x278278: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27827c: 0x8c231ae4  lw          $v1, 0x1AE4($at)
    ctx->pc = 0x27827cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x278280: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x278280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x278284: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x278284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x278288: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x278288u;
    {
        const bool branch_taken_0x278288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278288) {
            ctx->pc = 0x278308u;
            goto label_278308;
        }
    }
    ctx->pc = 0x278290u;
    // 0x278290: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x278290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x278294: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x278294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x278298: 0xc040c9e  jal         func_103278
    ctx->pc = 0x278298u;
    SET_GPR_U32(ctx, 31, 0x2782A0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2782A0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2782A0u) { return; }
    ctx->pc = 0x2782A0u;
label_2782a0:
    // 0x2782a0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2782a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2782a4: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x2782a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2782a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2782a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2782ac: 0x240600c9  addiu       $a2, $zero, 0xC9
    ctx->pc = 0x2782acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x2782b0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2782b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2782b4: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x2782b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2782b8: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x2782b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2782bc: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x2782bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2782c0: 0xc065644  jal         func_195910
    ctx->pc = 0x2782C0u;
    SET_GPR_U32(ctx, 31, 0x2782C8u);
    ctx->pc = 0x195910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195910u, 0x2782C0u, 0x2782C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2782C8u;
label_2782c8:
    // 0x2782c8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2782c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2782cc: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2782ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2782d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2782d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2782d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2782d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2782d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2782d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2782dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2782dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2782e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2782e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2782e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2782e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2782e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2782e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2782ec: 0x3444001d  ori         $a0, $v0, 0x1D
    ctx->pc = 0x2782ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x2782f0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2782f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2782f4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2782f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2782f8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2782f8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2782fc: 0x240800ca  addiu       $t0, $zero, 0xCA
    ctx->pc = 0x2782fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x278300: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x278300u;
    SET_GPR_U32(ctx, 31, 0x278308u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x278300u, 0x278308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278308u;
label_278308:
    // 0x278308: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x278308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27830c: 0x245295a0  addiu       $s2, $v0, -0x6A60
    ctx->pc = 0x27830cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x278310: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x278310u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6195A0u, _value); } while (0);
    // 0x278314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278318: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x278318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27831c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x27831cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x278320: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x278320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x278324: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x278324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x278328: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x278328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x27832c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x278330: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x278330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x278334: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x278334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x278338: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x278338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27833c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x27833cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x278340: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x278340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x278344: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278348: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x278348u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27834c: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x27834cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x278350: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x278350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x278354: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278358: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278358u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27835c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27835cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278360: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278360u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x278364: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x278364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x278368: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x278368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x27836c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x278370: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278374: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x278378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27837c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27837cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278380: 0xa022d871  sb          $v0, -0x278F($at)
    ctx->pc = 0x278380u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD871u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD871u, _value); } while (0);
    // 0x278384: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x278384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x278388: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27838c: 0xa022d911  sb          $v0, -0x26EF($at)
    ctx->pc = 0x27838cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
    // 0x278390: 0xc084934  jal         func_2124D0
    ctx->pc = 0x278390u;
    SET_GPR_U32(ctx, 31, 0x278398u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x278390u, 0x278398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278398u;
label_278398:
    // 0x278398: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x278398u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27839c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27839cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2783a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2783a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2783a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2783a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2783a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2783a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2783ac: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2783acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2783b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2783B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2783B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2783B8u;
}
