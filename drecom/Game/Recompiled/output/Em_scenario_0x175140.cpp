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

// Function: Em_scenario
// Address: 0x175140 - 0x175274
void Em_scenario_0x175140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_scenario_0x175140");
#endif

    switch (ctx->pc) {
        case 0x1751c0u: goto label_1751c0;
        case 0x1751d4u: goto label_1751d4;
        case 0x175208u: goto label_175208;
        case 0x175224u: goto label_175224;
        case 0x175240u: goto label_175240;
        case 0x17524cu: goto label_17524c;
        default: break;
    }

    ctx->pc = 0x175140u;

    // 0x175140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175144: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x175144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x175148: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x175148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x17514c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x17514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175150: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x175150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x175154: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x175154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x175158: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x175158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17515c: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x17515Cu;
    {
        const bool branch_taken_0x17515c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17515c) {
            ctx->pc = 0x175264u;
            goto label_175264;
        }
    }
    ctx->pc = 0x175164u;
    // 0x175164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175168: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x175168u;
    {
        const bool branch_taken_0x175168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x175168) {
            ctx->pc = 0x1751F8u;
            goto label_1751f8;
        }
    }
    ctx->pc = 0x175170u;
    // 0x175170: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175170u;
    {
        const bool branch_taken_0x175170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x175170) {
            ctx->pc = 0x175180u;
            goto label_175180;
        }
    }
    ctx->pc = 0x175178u;
    // 0x175178: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x175178u;
    {
        const bool branch_taken_0x175178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175178) {
            ctx->pc = 0x175264u;
            goto label_175264;
        }
    }
    ctx->pc = 0x175180u;
label_175180:
    // 0x175180: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x175180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175184: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x175184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175188: 0x9442003a  lhu         $v0, 0x3A($v0)
    ctx->pc = 0x175188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x17518c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17518cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175190: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x175190u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x175194: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x175194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175198: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x175198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17519c: 0x9442003c  lhu         $v0, 0x3C($v0)
    ctx->pc = 0x17519cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1751a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1751a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1751a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1751a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1751a8: 0x34480100  ori         $t0, $v0, 0x100
    ctx->pc = 0x1751a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1751ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1751acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751b0: 0x8ca50364  lw          $a1, 0x364($a1)
    ctx->pc = 0x1751b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 868)));
    // 0x1751b4: 0x94670038  lhu         $a3, 0x38($v1)
    ctx->pc = 0x1751b4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1751b8: 0xc09696c  jal         func_25A5B0
    ctx->pc = 0x1751B8u;
    SET_GPR_U32(ctx, 31, 0x1751C0u);
    ctx->pc = 0x25A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5B0u, 0x1751B8u, 0x1751C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751C0u;
label_1751c0:
    // 0x1751c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1751c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1751c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751c8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1751c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1751cc: 0xc096c60  jal         func_25B180
    ctx->pc = 0x1751CCu;
    SET_GPR_U32(ctx, 31, 0x1751D4u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x1751CCu, 0x1751D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751D4u;
label_1751d4:
    // 0x1751d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1751d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1751d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1751d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1751dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1751e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1751e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1751e4: 0xac20bcf8  sw          $zero, -0x4308($at)
    ctx->pc = 0x1751e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BCF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BCF8u, _value); } while (0);
    // 0x1751e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1751e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1751ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1751f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1751f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1751f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1751f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1751f8:
    // 0x1751f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1751f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1751fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1751fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x175200: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x175200u;
    SET_GPR_U32(ctx, 31, 0x175208u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x175200u, 0x175208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175208u;
label_175208:
    // 0x175208: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17520c: 0x8c22bcf8  lw          $v0, -0x4308($at)
    ctx->pc = 0x17520cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BCF8u));
    // 0x175210: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175210u;
    {
        const bool branch_taken_0x175210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175210) {
            ctx->pc = 0x175224u;
            goto label_175224;
        }
    }
    ctx->pc = 0x175218u;
    // 0x175218: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x175218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17521c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x17521Cu;
    SET_GPR_U32(ctx, 31, 0x175224u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x17521Cu, 0x175224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175224u;
label_175224:
    // 0x175224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175228: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17522c: 0xac22bcf8  sw          $v0, -0x4308($at)
    ctx->pc = 0x17522cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BCF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BCF8u, _value); } while (0);
    // 0x175230: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x175230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175234: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x175234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x175238: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x175238u;
    SET_GPR_U32(ctx, 31, 0x175240u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x175238u, 0x175240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175240u;
label_175240:
    // 0x175240: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x175240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175244: 0xc0974e8  jal         func_25D3A0
    ctx->pc = 0x175244u;
    SET_GPR_U32(ctx, 31, 0x17524Cu);
    ctx->pc = 0x25D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D3A0u, 0x175244u, 0x17524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17524Cu;
label_17524c:
    // 0x17524c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x17524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175250: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x175250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x175254: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175254u;
    {
        const bool branch_taken_0x175254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175254) {
            ctx->pc = 0x175264u;
            goto label_175264;
        }
    }
    ctx->pc = 0x17525Cu;
    // 0x17525c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17525cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175260: 0xac20bcf8  sw          $zero, -0x4308($at)
    ctx->pc = 0x175260u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BCF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BCF8u, _value); } while (0);
label_175264:
    // 0x175264: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x175264u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175268: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x175268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17526c: 0x3e00008  jr          $ra
    ctx->pc = 0x17526Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17526Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175274u;
}
