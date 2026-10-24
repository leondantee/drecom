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

// Function: Em0a_R1_catch_bom
// Address: 0x366380 - 0x366504
void Em0a_R1_catch_bom_0x366380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_catch_bom_0x366380");
#endif

    switch (ctx->pc) {
        case 0x366400u: goto label_366400;
        case 0x366420u: goto label_366420;
        case 0x366434u: goto label_366434;
        case 0x366448u: goto label_366448;
        case 0x366458u: goto label_366458;
        case 0x366470u: goto label_366470;
        case 0x3664a4u: goto label_3664a4;
        default: break;
    }

    ctx->pc = 0x366380u;

    // 0x366380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x366380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x366384: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x366384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x366388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x366388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36638c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36638cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x366390: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x366390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x366394: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x366394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x366398: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x366398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x36639c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3663a0: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x3663a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3663a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3663a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3663a8: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x3663a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x3663ac: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3663acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x3663b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3663b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3663b4: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x3663b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x3663b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3663b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3663bc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3663bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3663c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3663c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3663c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3663c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3663c8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3663C8u;
    {
        const bool branch_taken_0x3663c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3663c8) {
            ctx->pc = 0x366410u;
            goto label_366410;
        }
    }
    ctx->pc = 0x3663D0u;
    // 0x3663d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3663D0u;
    {
        const bool branch_taken_0x3663d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3663d0) {
            ctx->pc = 0x3663E0u;
            goto label_3663e0;
        }
    }
    ctx->pc = 0x3663D8u;
    // 0x3663d8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3663D8u;
    {
        const bool branch_taken_0x3663d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3663d8) {
            ctx->pc = 0x3664ECu;
            goto label_3664ec;
        }
    }
    ctx->pc = 0x3663E0u;
label_3663e0:
    // 0x3663e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3663e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3663e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3663e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3663e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3663e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3663ec: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x3663ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3663f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3663f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3663f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3663f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3663f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3663F8u;
    SET_GPR_U32(ctx, 31, 0x366400u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3663F8u, 0x366400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366400u;
label_366400:
    // 0x366400: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366404: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x366404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36640c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36640cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_366410:
    // 0x366410: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366414: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366418: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x366418u;
    SET_GPR_U32(ctx, 31, 0x366420u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366418u, 0x366420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366420u;
label_366420:
    // 0x366420: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366424: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366428: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x366428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36642c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x36642Cu;
    SET_GPR_U32(ctx, 31, 0x366434u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x36642Cu, 0x366434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366434u;
label_366434:
    // 0x366434: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366438: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x366438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36643c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x366440: 0xc040c9e  jal         func_103278
    ctx->pc = 0x366440u;
    SET_GPR_U32(ctx, 31, 0x366448u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x366448u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x366448u) { return; }
    ctx->pc = 0x366448u;
label_366448:
    // 0x366448: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36644c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36644cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366450: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366450u;
    SET_GPR_U32(ctx, 31, 0x366458u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366450u, 0x366458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366458u;
label_366458:
    // 0x366458: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36645c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36645cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366460: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x366464: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x366464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366468: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x366468u;
    SET_GPR_U32(ctx, 31, 0x366470u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x366468u, 0x366470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366470u;
label_366470:
    // 0x366470: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366474: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x366474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366478: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x366478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36647c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36647cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366480: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x366480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x366484: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366488: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x366488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36648c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366490: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366494: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x366494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x366498: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36649c: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x36649Cu;
    SET_GPR_U32(ctx, 31, 0x3664A4u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x36649Cu, 0x3664A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3664A4u;
label_3664a4:
    // 0x3664a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3664a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3664ac: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3664ACu;
    {
        const bool branch_taken_0x3664ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3664ac) {
            ctx->pc = 0x3664ECu;
            goto label_3664ec;
        }
    }
    ctx->pc = 0x3664B4u;
    // 0x3664b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664b8: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x3664b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x3664bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3664bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3664c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3664c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3664c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3664c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3664cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3664d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3664d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3664d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3664dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3664e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3664e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3664e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3664e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3664e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3664ec:
    // 0x3664ec: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3664ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3664f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3664f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3664f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3664f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3664f8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3664f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3664fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3664FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3664FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366504u;
}
