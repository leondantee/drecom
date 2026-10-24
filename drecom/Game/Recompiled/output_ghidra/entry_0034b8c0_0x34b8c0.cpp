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

// Function: entry_0034b8c0
// Address: 0x34b8c0 - 0x34ba7c
void entry_0034b8c0_0x34b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034b8c0_0x34b8c0");
#endif

    switch (ctx->pc) {
        case 0x34b8d0u: goto label_34b8d0;
        case 0x34b918u: goto label_34b918;
        case 0x34b928u: goto label_34b928;
        case 0x34b934u: goto label_34b934;
        case 0x34b940u: goto label_34b940;
        case 0x34ba3cu: goto label_34ba3c;
        case 0x34ba50u: goto label_34ba50;
        case 0x34ba5cu: goto label_34ba5c;
        default: break;
    }

    ctx->pc = 0x34b8c0u;

    // 0x34b8c0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b8c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b8c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b8c8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34B8C8u;
    SET_GPR_U32(ctx, 31, 0x34B8D0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34B8C8u, 0x34B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8D0u;
label_34b8d0:
    // 0x34b8d0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b8d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b8d8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34b8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b8dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b8e0: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x34b8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b8e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34b8e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b8e8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34b8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34b8ec: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b8f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b8f4: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x34b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x34b8f8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x34b8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x34b8fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34b8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34b900: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x34b900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b904: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34b904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34b908: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34b908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34b90c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b910: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x34B910u;
    SET_GPR_U32(ctx, 31, 0x34B918u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x34B910u, 0x34B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B918u;
label_34b918:
    // 0x34b918: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b91c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b91cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b920: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B920u;
    SET_GPR_U32(ctx, 31, 0x34B928u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B920u, 0x34B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B928u;
label_34b928:
    // 0x34b928: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b92c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B92Cu;
    SET_GPR_U32(ctx, 31, 0x34B934u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B92Cu, 0x34B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B934u;
label_34b934:
    // 0x34b934: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b938: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x34B938u;
    SET_GPR_U32(ctx, 31, 0x34B940u);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x34B938u, 0x34B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B940u;
label_34b940:
    // 0x34b940: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x34b940u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34b944: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x34b944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x34b948: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x34B948u;
    {
        const bool branch_taken_0x34b948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b948) {
            ctx->pc = 0x34BA7Cu;
            return;
        }
    }
    ctx->pc = 0x34B950u;
    // 0x34b950: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b954: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x34b954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x34b958: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34b958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34b95c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x34b95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x34b960: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x34B960u;
    {
        const bool branch_taken_0x34b960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b960) {
            ctx->pc = 0x34BA7Cu;
            return;
        }
    }
    ctx->pc = 0x34B968u;
    // 0x34b968: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x34b968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x34b96c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x34b96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x34b970: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x34B970u;
    {
        const bool branch_taken_0x34b970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b970) {
            ctx->pc = 0x34BA7Cu;
            return;
        }
    }
    ctx->pc = 0x34B978u;
    // 0x34b978: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b97c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34b97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b980: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x34b980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x34b984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34b984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b988: 0x0  nop
    ctx->pc = 0x34b988u;
    // NOP
    // 0x34b98c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34b98cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b990: 0x0  nop
    ctx->pc = 0x34b990u;
    // NOP
    // 0x34b994: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x34B994u;
    {
        const bool branch_taken_0x34b994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b994) {
            ctx->pc = 0x34BA7Cu;
            return;
        }
    }
    ctx->pc = 0x34B99Cu;
    // 0x34b99c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b9a0: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x34b9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x34b9a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34b9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34b9a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x34b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34b9ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x34b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x34b9b0: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x34b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x34b9b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34b9b8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x34b9b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34b9bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b9c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34b9c4: 0xa022edae  sb          $v0, -0x1252($at)
    ctx->pc = 0x34b9c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAEu, _value); } while (0);
    // 0x34b9c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b9cc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34b9d0: 0xa022edaf  sb          $v0, -0x1251($at)
    ctx->pc = 0x34b9d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAFu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAFu, _value); } while (0);
    // 0x34b9d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34b9d8: 0xa420edb4  sh          $zero, -0x124C($at)
    ctx->pc = 0x34b9d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB4u, _value); } while (0);
    // 0x34b9dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34b9e0: 0xa420edb2  sh          $zero, -0x124E($at)
    ctx->pc = 0x34b9e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB2u, _value); } while (0);
    // 0x34b9e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x34b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34b9e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34b9ec: 0xa422edb6  sh          $v0, -0x124A($at)
    ctx->pc = 0x34b9ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB6u, _value); } while (0);
    // 0x34b9f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34b9f4: 0xa020edb0  sb          $zero, -0x1250($at)
    ctx->pc = 0x34b9f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDB0u, _value); } while (0);
    // 0x34b9f8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b9fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34b9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34ba00: 0xac22edd0  sw          $v0, -0x1230($at)
    ctx->pc = 0x34ba00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEDD0u, _value); } while (0);
    // 0x34ba04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ba08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x34ba08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x34ba0c: 0xa022ec68  sb          $v0, -0x1398($at)
    ctx->pc = 0x34ba0cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEC68u, _value); } while (0);
    // 0x34ba10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ba14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba18: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34ba18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ba1c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba20: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba24: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34ba24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34ba28: 0x2406082e  addiu       $a2, $zero, 0x82E
    ctx->pc = 0x34ba28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2094));
    // 0x34ba2c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x34ba2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x34ba30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34ba30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34ba34: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34BA34u;
    SET_GPR_U32(ctx, 31, 0x34BA3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34BA34u, 0x34BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA3Cu;
label_34ba3c:
    // 0x34ba3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba40: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34ba40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba44: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x34ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x34ba48: 0xc096c60  jal         func_25B180
    ctx->pc = 0x34BA48u;
    SET_GPR_U32(ctx, 31, 0x34BA50u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x34BA48u, 0x34BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA50u;
label_34ba50:
    // 0x34ba50: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba54: 0xc05ce54  jal         func_173950
    ctx->pc = 0x34BA54u;
    SET_GPR_U32(ctx, 31, 0x34BA5Cu);
    ctx->pc = 0x173950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173950u, 0x34BA54u, 0x34BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA5Cu;
label_34ba5c:
    // 0x34ba5c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba60: 0x247210b0  addiu       $s2, $v1, 0x10B0
    ctx->pc = 0x34ba60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x34ba64: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x34ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x34ba68: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x34ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x34ba6c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x34ba6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x34ba70: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x34ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x34ba74: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x34BA74u;
    {
        const bool branch_taken_0x34ba74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ba74) {
            ctx->pc = 0x34BD88u;
            return;
        }
    }
    ctx->pc = 0x34BA7Cu;
}
