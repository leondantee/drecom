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

// Function: Em_critical_move
// Address: 0x141fc0 - 0x142390
void Em_critical_move_0x141fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_critical_move_0x141fc0");
#endif

    switch (ctx->pc) {
        case 0x141fe8u: goto label_141fe8;
        case 0x142030u: goto label_142030;
        case 0x142074u: goto label_142074;
        case 0x14208cu: goto label_14208c;
        case 0x1420a8u: goto label_1420a8;
        case 0x1420c4u: goto label_1420c4;
        case 0x1420d8u: goto label_1420d8;
        case 0x142328u: goto label_142328;
        case 0x142344u: goto label_142344;
        case 0x142364u: goto label_142364;
        case 0x142374u: goto label_142374;
        default: break;
    }

    ctx->pc = 0x141fc0u;

    // 0x141fc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x141fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x141fc4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x141fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x141fc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x141fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x141fcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141fd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141fd4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x141fd8: 0x2451fe10  addiu       $s1, $v0, -0x1F0
    ctx->pc = 0x141fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
    // 0x141fdc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x141fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x141fe0: 0x245295a0  addiu       $s2, $v0, -0x6A60
    ctx->pc = 0x141fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x141fe4: 0xa2200007  sb          $zero, 0x7($s1)
    ctx->pc = 0x141fe4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CFE17u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CFE17u, _value); } while (0);
label_141fe8:
    // 0x141fe8: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x141fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x141fec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x141fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x141ff0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x141ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x141ff4: 0x106200dd  beq         $v1, $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x141FF4u;
    {
        const bool branch_taken_0x141ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141ff4) {
            ctx->pc = 0x14236Cu;
            goto label_14236c;
        }
    }
    ctx->pc = 0x141FFCu;
    // 0x141ffc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142000: 0x106200af  beq         $v1, $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x142000u;
    {
        const bool branch_taken_0x142000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142000) {
            ctx->pc = 0x1422C0u;
            goto label_1422c0;
        }
    }
    ctx->pc = 0x142008u;
    // 0x142008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14200c: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x14200Cu;
    {
        const bool branch_taken_0x14200c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14200c) {
            ctx->pc = 0x1420D0u;
            goto label_1420d0;
        }
    }
    ctx->pc = 0x142014u;
    // 0x142014: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x142014u;
    {
        const bool branch_taken_0x142014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142014) {
            ctx->pc = 0x142024u;
            goto label_142024;
        }
    }
    ctx->pc = 0x14201Cu;
    // 0x14201c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x14201Cu;
    {
        const bool branch_taken_0x14201c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14201c) {
            ctx->pc = 0x1422C0u;
            goto label_1422c0;
        }
    }
    ctx->pc = 0x142024u;
label_142024:
    // 0x142024: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x142024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x142028: 0xc067e5c  jal         func_19F970
    ctx->pc = 0x142028u;
    SET_GPR_U32(ctx, 31, 0x142030u);
    ctx->pc = 0x19F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F970u, 0x142028u, 0x142030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142030u;
label_142030:
    // 0x142030: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142034: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x142034u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142038: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x142038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x14203c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14203cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142040: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142044: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x142044u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x142048: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14204c: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x14204cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142050: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x142050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x142054: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142058: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x142058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x14205c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x14205cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142060: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x142060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142064: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x142064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142068: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x142068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14206c: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x14206Cu;
    SET_GPR_U32(ctx, 31, 0x142074u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x14206Cu, 0x142074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142074u;
label_142074:
    // 0x142074: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x142074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142078: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x142078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14207c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x14207cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142080: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x142080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142084: 0xc065580  jal         func_195600
    ctx->pc = 0x142084u;
    SET_GPR_U32(ctx, 31, 0x14208Cu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x142084u, 0x14208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14208Cu;
label_14208c:
    // 0x14208c: 0x2410001e  addiu       $s0, $zero, 0x1E
    ctx->pc = 0x14208cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x142090: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x142090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x142094: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x142094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x142098: 0x2445cc60  addiu       $a1, $v0, -0x33A0
    ctx->pc = 0x142098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954080));
    // 0x14209c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x14209cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1420a0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x1420A0u;
    SET_GPR_U32(ctx, 31, 0x1420A8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x1420A8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1420A8u) { return; }
    ctx->pc = 0x1420A8u;
label_1420a8:
    // 0x1420a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1420a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1420ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1420acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1420b0: 0xe420cc60  swc1        $f0, -0x33A0($at)
    ctx->pc = 0x1420b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC60u, _value); } while (0); }
    // 0x1420b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1420b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1420b8: 0xa020cc95  sb          $zero, -0x336B($at)
    ctx->pc = 0x1420b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CC95u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CC95u, _value); } while (0);
    // 0x1420bc: 0xc0508e4  jal         func_142390
    ctx->pc = 0x1420BCu;
    SET_GPR_U32(ctx, 31, 0x1420C4u);
    ctx->pc = 0x142390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142390u, 0x1420BCu, 0x1420C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1420C4u;
label_1420c4:
    // 0x1420c4: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x1420c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x1420c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1420c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1420cc: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x1420ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
label_1420d0:
    // 0x1420d0: 0xc06ac88  jal         func_1AB220
    ctx->pc = 0x1420D0u;
    SET_GPR_U32(ctx, 31, 0x1420D8u);
    ctx->pc = 0x1AB220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB220u, 0x1420D0u, 0x1420D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1420D8u;
label_1420d8:
    // 0x1420d8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1420d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1420dc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1420DCu;
    {
        const bool branch_taken_0x1420dc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1420dc) {
            ctx->pc = 0x1420F8u;
            goto label_1420f8;
        }
    }
    ctx->pc = 0x1420E4u;
    // 0x1420e4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1420e4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1420e8: 0x0  nop
    ctx->pc = 0x1420e8u;
    // NOP
    // 0x1420ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1420ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1420f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1420F0u;
    {
        const bool branch_taken_0x1420f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1420f0) {
            ctx->pc = 0x142114u;
            goto label_142114;
        }
    }
    ctx->pc = 0x1420F8u;
label_1420f8:
    // 0x1420f8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1420f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1420fc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1420fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x142100: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x142100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142104: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x142104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142108: 0x0  nop
    ctx->pc = 0x142108u;
    // NOP
    // 0x14210c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14210cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x142110: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x142110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_142114:
    // 0x142114: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x142114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x142118: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x142118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14211c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x14211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142120: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x142120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x142124: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x142124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x142128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14212c: 0x0  nop
    ctx->pc = 0x14212cu;
    // NOP
    // 0x142130: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x142130u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x142134: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142138: 0xe420cc68  swc1        $f0, -0x3398($at)
    ctx->pc = 0x142138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC68u, _value); } while (0); }
    // 0x14213c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14213cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x142140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x142140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142144: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142148: 0xc420cc68  lwc1        $f0, -0x3398($at)
    ctx->pc = 0x142148u;
    { uint32_t bits = FAST_READ32(0x47CC68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14214c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14214cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x142150: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142154: 0xe420cc6c  swc1        $f0, -0x3394($at)
    ctx->pc = 0x142154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC6Cu, _value); } while (0); }
    // 0x142158: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x142158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14215c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x14215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142160: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x142160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x142164: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x142164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x142168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14216c: 0x0  nop
    ctx->pc = 0x14216cu;
    // NOP
    // 0x142170: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x142170u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x142174: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142178: 0xe420cc60  swc1        $f0, -0x33A0($at)
    ctx->pc = 0x142178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC60u, _value); } while (0); }
    // 0x14217c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x14217cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x142180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x142180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142184: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x142184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142188: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x142188u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14218c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x14218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142190: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x142190u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x142194: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x142194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x142198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14219c: 0x0  nop
    ctx->pc = 0x14219cu;
    // NOP
    // 0x1421a0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1421a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1421a4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1421a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1421a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1421a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1421ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1421acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1421b0: 0xe420cc64  swc1        $f0, -0x339C($at)
    ctx->pc = 0x1421b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC64u, _value); } while (0); }
    // 0x1421b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1421b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1421b8: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x1421b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1421bc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1421bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1421c0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1421c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x1421c4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1421c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x1421c8: 0x430019  multu       $v0, $v1
    ctx->pc = 0x1421c8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1421cc: 0x0  nop
    ctx->pc = 0x1421ccu;
    // NOP
    // 0x1421d0: 0x0  nop
    ctx->pc = 0x1421d0u;
    // NOP
    // 0x1421d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1421d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1421d8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1421d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1421dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1421dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1421e0: 0xac22cc70  sw          $v0, -0x3390($at)
    ctx->pc = 0x1421e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC70u, _value); } while (0);
    // 0x1421e4: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1421e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1421e8: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x1421e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1421ec: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1421ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1421f0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1421f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x1421f4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1421f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x1421f8: 0x430019  multu       $v0, $v1
    ctx->pc = 0x1421f8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1421fc: 0x0  nop
    ctx->pc = 0x1421fcu;
    // NOP
    // 0x142200: 0x0  nop
    ctx->pc = 0x142200u;
    // NOP
    // 0x142204: 0x1010  mfhi        $v0
    ctx->pc = 0x142204u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x142208: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x142208u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x14220c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x14220cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142210: 0xac22cc74  sw          $v0, -0x338C($at)
    ctx->pc = 0x142210u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC74u, _value); } while (0);
    // 0x142214: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x142214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x142218: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x142218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14221c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x14221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x142220: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x142220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x142224: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x142224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x142228: 0x430019  multu       $v0, $v1
    ctx->pc = 0x142228u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14222c: 0x0  nop
    ctx->pc = 0x14222cu;
    // NOP
    // 0x142230: 0x0  nop
    ctx->pc = 0x142230u;
    // NOP
    // 0x142234: 0x1010  mfhi        $v0
    ctx->pc = 0x142234u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x142238: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x142238u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x14223c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x14223cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142240: 0xac22cc78  sw          $v0, -0x3388($at)
    ctx->pc = 0x142240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC78u, _value); } while (0);
    // 0x142244: 0x1600001e  bnez        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x142244u;
    {
        const bool branch_taken_0x142244 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x142244) {
            ctx->pc = 0x1422C0u;
            goto label_1422c0;
        }
    }
    ctx->pc = 0x14224Cu;
    // 0x14224c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14224cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142250: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142254: 0xe420cc6c  swc1        $f0, -0x3394($at)
    ctx->pc = 0x142254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC6Cu, _value); } while (0); }
    // 0x142258: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x142258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14225c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x14225cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142260: 0xe420cc68  swc1        $f0, -0x3398($at)
    ctx->pc = 0x142260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC68u, _value); } while (0); }
    // 0x142264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x142264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142268: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x14226c: 0xe420cc60  swc1        $f0, -0x33A0($at)
    ctx->pc = 0x14226cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC60u, _value); } while (0); }
    // 0x142270: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x142270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x142274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142278: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x14227c: 0xe420cc64  swc1        $f0, -0x339C($at)
    ctx->pc = 0x14227cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC64u, _value); } while (0); }
    // 0x142280: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142284: 0xac20cc70  sw          $zero, -0x3390($at)
    ctx->pc = 0x142284u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CC70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC70u, _value); } while (0);
    // 0x142288: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x14228c: 0xac20cc74  sw          $zero, -0x338C($at)
    ctx->pc = 0x14228cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CC74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC74u, _value); } while (0);
    // 0x142290: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142294: 0xac20cc78  sw          $zero, -0x3388($at)
    ctx->pc = 0x142294u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CC78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC78u, _value); } while (0);
    // 0x142298: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14229c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14229cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1422a0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1422a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1422a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1422a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1422a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1422a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1422ac: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1422acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1422b0: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x1422b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x1422b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1422b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1422b8: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x1422b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1422bc: 0x0  nop
    ctx->pc = 0x1422bcu;
    // NOP
label_1422c0:
    // 0x1422c0: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x1422c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1422c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1422c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1422c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1422c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1422cc: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x1422ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1422d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1422d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1422d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1422d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1422d8: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x1422d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x1422dc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1422dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1422e0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1422E0u;
    {
        const bool branch_taken_0x1422e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1422e0) {
            ctx->pc = 0x142328u;
            goto label_142328;
        }
    }
    ctx->pc = 0x1422E8u;
    // 0x1422e8: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x1422e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1422ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1422ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1422f0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1422F0u;
    {
        const bool branch_taken_0x1422f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1422f0) {
            ctx->pc = 0x142328u;
            goto label_142328;
        }
    }
    ctx->pc = 0x1422F8u;
    // 0x1422f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1422f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1422fc: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1422fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x142300: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x142300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x142304: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x142304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142308: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14230c: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x14230cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x142310: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x142310u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x142314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142318: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x142318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x14231c: 0x24452510  addiu       $a1, $v0, 0x2510
    ctx->pc = 0x14231cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9488));
    // 0x142320: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x142320u;
    SET_GPR_U32(ctx, 31, 0x142328u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x142320u, 0x142328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142328u;
label_142328:
    // 0x142328: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x14232c: 0x9022cc95  lbu         $v0, -0x336B($at)
    ctx->pc = 0x14232cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x47CC95u));
    // 0x142330: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x142330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x142334: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x142334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x142338: 0x2444cc60  addiu       $a0, $v0, -0x33A0
    ctx->pc = 0x142338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954080));
    // 0x14233c: 0xc05d4a0  jal         func_175280
    ctx->pc = 0x14233Cu;
    SET_GPR_U32(ctx, 31, 0x142344u);
    ctx->pc = 0x175280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175280u, 0x14233Cu, 0x142344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142344u;
label_142344:
    // 0x142344: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142348: 0xdc23cc80  ld          $v1, -0x3380($at)
    ctx->pc = 0x142348u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47CC80u));
    // 0x14234c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14234cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142350: 0x8c220b94  lw          $v0, 0xB94($at)
    ctx->pc = 0x142350u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0B94u));
    // 0x142354: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x142354u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x142358: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14235c: 0xc06750c  jal         func_19D430
    ctx->pc = 0x14235Cu;
    SET_GPR_U32(ctx, 31, 0x142364u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x14235Cu, 0x142364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142364u;
label_142364:
    // 0x142364: 0x1000ff20  b           . + 4 + (-0xE0 << 2)
    ctx->pc = 0x142364u;
    {
        const bool branch_taken_0x142364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142364) {
            ctx->pc = 0x141FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141fe8;
        }
    }
    ctx->pc = 0x14236Cu;
label_14236c:
    // 0x14236c: 0xc0674dc  jal         func_19D370
    ctx->pc = 0x14236Cu;
    SET_GPR_U32(ctx, 31, 0x142374u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x14236Cu, 0x142374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142374u;
label_142374:
    // 0x142374: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x142374u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142378: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14237c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14237cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142384: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x142384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x142388: 0x3e00008  jr          $ra
    ctx->pc = 0x142388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142390u;
}
