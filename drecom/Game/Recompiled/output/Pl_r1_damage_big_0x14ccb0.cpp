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

// Function: Pl_r1_damage_big
// Address: 0x14ccb0 - 0x14cf30
void Pl_r1_damage_big_0x14ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_damage_big_0x14ccb0");
#endif

    switch (ctx->pc) {
        case 0x14cd28u: goto label_14cd28;
        case 0x14cd4cu: goto label_14cd4c;
        case 0x14cd60u: goto label_14cd60;
        case 0x14cd94u: goto label_14cd94;
        case 0x14cdacu: goto label_14cdac;
        case 0x14cdc0u: goto label_14cdc0;
        case 0x14cdd4u: goto label_14cdd4;
        case 0x14cde0u: goto label_14cde0;
        case 0x14ce00u: goto label_14ce00;
        case 0x14ce48u: goto label_14ce48;
        case 0x14ce68u: goto label_14ce68;
        case 0x14ce74u: goto label_14ce74;
        case 0x14ce88u: goto label_14ce88;
        case 0x14ce94u: goto label_14ce94;
        case 0x14ceb4u: goto label_14ceb4;
        default: break;
    }

    ctx->pc = 0x14ccb0u;

    // 0x14ccb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ccb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x14ccb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x14ccb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ccbc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x14ccc0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x14ccc4: 0x2470fe10  addiu       $s0, $v1, -0x1F0
    ctx->pc = 0x14ccc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
    // 0x14ccc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cccc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14ccccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14ccd0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14ccd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14ccd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ccd8: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x14CCD8u;
    {
        const bool branch_taken_0x14ccd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14ccd8) {
            ctx->pc = 0x14CE58u;
            goto label_14ce58;
        }
    }
    ctx->pc = 0x14CCE0u;
    // 0x14cce0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14cce4: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x14CCE4u;
    {
        const bool branch_taken_0x14cce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14cce4) {
            ctx->pc = 0x14CE28u;
            goto label_14ce28;
        }
    }
    ctx->pc = 0x14CCECu;
    // 0x14ccec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ccf0: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14CCF0u;
    {
        const bool branch_taken_0x14ccf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14ccf0) {
            ctx->pc = 0x14CD70u;
            goto label_14cd70;
        }
    }
    ctx->pc = 0x14CCF8u;
    // 0x14ccf8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CCF8u;
    {
        const bool branch_taken_0x14ccf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ccf8) {
            ctx->pc = 0x14CD08u;
            goto label_14cd08;
        }
    }
    ctx->pc = 0x14CD00u;
    // 0x14cd00: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x14CD00u;
    {
        const bool branch_taken_0x14cd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd00) {
            ctx->pc = 0x14CF1Cu;
            goto label_14cf1c;
        }
    }
    ctx->pc = 0x14CD08u;
label_14cd08:
    // 0x14cd08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd10: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14cd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14cd14: 0x24060a43  addiu       $a2, $zero, 0xA43
    ctx->pc = 0x14cd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2627));
    // 0x14cd18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14cd18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cd1c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14cd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14cd20: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14CD20u;
    SET_GPR_U32(ctx, 31, 0x14CD28u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14CD20u, 0x14CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD28u;
label_14cd28:
    // 0x14cd28: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14cd2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd30: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14cd30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14cd34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd38: 0xac4013fc  sw          $zero, 0x13FC($v0)
    ctx->pc = 0x14cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5116), GPR_U32(ctx, 0));
    // 0x14cd3c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x14cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x14cd40: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x14cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x14cd44: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14CD44u;
    SET_GPR_U32(ctx, 31, 0x14CD4Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14CD44u, 0x14CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD4Cu;
label_14cd4c:
    // 0x14cd4c: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x14cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x14cd50: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x14cd50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x14cd54: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x14cd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x14cd58: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14CD58u;
    SET_GPR_U32(ctx, 31, 0x14CD60u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14CD58u, 0x14CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD60u;
label_14cd60:
    // 0x14cd60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd64: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14cd64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14cd68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14cd6c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14cd6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14cd70:
    // 0x14cd70: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd78: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x14cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x14cd7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14cd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14cd80: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14cd80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14cd84: 0xc48c11f8  lwc1        $f12, 0x11F8($a0)
    ctx->pc = 0x14cd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14cd88: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x14cd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14cd8c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x14CD8Cu;
    SET_GPR_U32(ctx, 31, 0x14CD94u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14CD8Cu, 0x14CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD94u;
label_14cd94:
    // 0x14cd94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cd98: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14cd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14cd9c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cda0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14cda0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14cda4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14CDA4u;
    SET_GPR_U32(ctx, 31, 0x14CDACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14CDA4u, 0x14CDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDACu;
label_14cdac:
    // 0x14cdac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cdb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cdb4: 0xc44c11f8  lwc1        $f12, 0x11F8($v0)
    ctx->pc = 0x14cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14cdb8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14CDB8u;
    SET_GPR_U32(ctx, 31, 0x14CDC0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14CDB8u, 0x14CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDC0u;
label_14cdc0:
    // 0x14cdc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14cdc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14cdc4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cdc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14cdc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14cdcc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14CDCCu;
    SET_GPR_U32(ctx, 31, 0x14CDD4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14CDCCu, 0x14CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDD4u;
label_14cdd4:
    // 0x14cdd4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14cdd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14cdd8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14CDD8u;
    SET_GPR_U32(ctx, 31, 0x14CDE0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14CDD8u, 0x14CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CDE0u;
label_14cde0:
    // 0x14cde0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cde4: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x14cde4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x14cde8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14cde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14cdec: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x14cdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x14cdf0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CDF0u;
    {
        const bool branch_taken_0x14cdf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cdf0) {
            ctx->pc = 0x14CE00u;
            goto label_14ce00;
        }
    }
    ctx->pc = 0x14CDF8u;
    // 0x14cdf8: 0xc05776c  jal         func_15DDB0
    ctx->pc = 0x14CDF8u;
    SET_GPR_U32(ctx, 31, 0x14CE00u);
    ctx->pc = 0x15DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DDB0u, 0x14CDF8u, 0x14CE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE00u;
label_14ce00:
    // 0x14ce00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14ce04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14ce08: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x14CE08u;
    {
        const bool branch_taken_0x14ce08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce08) {
            ctx->pc = 0x14CF1Cu;
            goto label_14cf1c;
        }
    }
    ctx->pc = 0x14CE10u;
    // 0x14ce10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ce10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce14: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14ce14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14ce18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ce1c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14ce1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14ce20: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x14CE20u;
    {
        const bool branch_taken_0x14ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce20) {
            ctx->pc = 0x14CF1Cu;
            goto label_14cf1c;
        }
    }
    ctx->pc = 0x14CE28u;
label_14ce28:
    // 0x14ce28: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce30: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14ce30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14ce34: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x14ce34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x14ce38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14ce38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ce3c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14ce3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14ce40: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14CE40u;
    SET_GPR_U32(ctx, 31, 0x14CE48u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14CE40u, 0x14CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE48u;
label_14ce48:
    // 0x14ce48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce4c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14ce4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14ce50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ce54: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14ce54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14ce58:
    // 0x14ce58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce5c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ce5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ce60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14CE60u;
    SET_GPR_U32(ctx, 31, 0x14CE68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14CE60u, 0x14CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE68u;
label_14ce68:
    // 0x14ce68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ce68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce6c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14CE6Cu;
    SET_GPR_U32(ctx, 31, 0x14CE74u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14CE6Cu, 0x14CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE74u;
label_14ce74:
    // 0x14ce74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14ce74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14ce78: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ce7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ce80: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14CE80u;
    SET_GPR_U32(ctx, 31, 0x14CE88u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14CE80u, 0x14CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE88u;
label_14ce88:
    // 0x14ce88: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14ce88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ce8c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14CE8Cu;
    SET_GPR_U32(ctx, 31, 0x14CE94u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14CE8Cu, 0x14CE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE94u;
label_14ce94:
    // 0x14ce94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce98: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x14ce98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x14ce9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14ce9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14cea0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14cea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x14cea4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14CEA4u;
    {
        const bool branch_taken_0x14cea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cea4) {
            ctx->pc = 0x14CECCu;
            goto label_14cecc;
        }
    }
    ctx->pc = 0x14CEACu;
    // 0x14ceac: 0xc0585dc  jal         func_161770
    ctx->pc = 0x14CEACu;
    SET_GPR_U32(ctx, 31, 0x14CEB4u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x14CEACu, 0x14CEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CEB4u;
label_14ceb4:
    // 0x14ceb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CEB4u;
    {
        const bool branch_taken_0x14ceb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ceb4) {
            ctx->pc = 0x14CECCu;
            goto label_14cecc;
        }
    }
    ctx->pc = 0x14CEBCu;
    // 0x14cebc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cec0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14cec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cec4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14CEC4u;
    {
        const bool branch_taken_0x14cec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cec4) {
            ctx->pc = 0x14CF1Cu;
            goto label_14cf1c;
        }
    }
    ctx->pc = 0x14CECCu;
label_14cecc:
    // 0x14cecc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ced0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14ced0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14ced4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14CED4u;
    {
        const bool branch_taken_0x14ced4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ced4) {
            ctx->pc = 0x14CF1Cu;
            goto label_14cf1c;
        }
    }
    ctx->pc = 0x14CEDCu;
    // 0x14cedc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cee0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cee4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14cee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14cee8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ceec: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14ceecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cef0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cef4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14cef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cef8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cefc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14cefcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cf00: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14cf04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cf08: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14cf0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cf10: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14cf10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cf14: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14CF14u;
    {
        const bool branch_taken_0x14cf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cf14) {
            ctx->pc = 0x14CF1Cu;
            goto label_14cf1c;
        }
    }
    ctx->pc = 0x14CF1Cu;
label_14cf1c:
    // 0x14cf1c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x14cf1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cf20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14cf20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cf24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14cf24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14cf28: 0x3e00008  jr          $ra
    ctx->pc = 0x14CF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CF30u;
}
