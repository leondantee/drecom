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

// Function: Huuin_door_def_evt
// Address: 0x31ef50 - 0x31f2f0
void Huuin_door_def_evt_0x31ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Huuin_door_def_evt_0x31ef50");
#endif

    switch (ctx->pc) {
        case 0x31ef84u: goto label_31ef84;
        case 0x31ef90u: goto label_31ef90;
        case 0x31f080u: goto label_31f080;
        case 0x31f0c4u: goto label_31f0c4;
        case 0x31f0ecu: goto label_31f0ec;
        case 0x31f10cu: goto label_31f10c;
        case 0x31f164u: goto label_31f164;
        case 0x31f1e8u: goto label_31f1e8;
        case 0x31f214u: goto label_31f214;
        case 0x31f228u: goto label_31f228;
        case 0x31f2dcu: goto label_31f2dc;
        default: break;
    }

    ctx->pc = 0x31ef50u;

    // 0x31ef50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31ef54: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x31ef54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x31ef58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31ef5c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x31ef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x31ef60: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x31ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x31ef64: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x31ef64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x31ef68: 0xafa70088  sw          $a3, 0x88($sp)
    ctx->pc = 0x31ef68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 7));
    // 0x31ef6c: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x31ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x31ef70: 0xa3a90098  sb          $t1, 0x98($sp)
    ctx->pc = 0x31ef70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 152), (uint8_t)GPR_U32(ctx, 9));
    // 0x31ef74: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31ef78: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x31ef78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x31ef7c: 0xc0a1244  jal         func_284910
    ctx->pc = 0x31EF7Cu;
    SET_GPR_U32(ctx, 31, 0x31EF84u);
    ctx->pc = 0x284910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284910u, 0x31EF7Cu, 0x31EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF84u;
label_31ef84:
    // 0x31ef84: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x31ef84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ef88: 0xc062010  jal         func_188040
    ctx->pc = 0x31EF88u;
    SET_GPR_U32(ctx, 31, 0x31EF90u);
    ctx->pc = 0x188040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188040u, 0x31EF88u, 0x31EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF90u;
label_31ef90:
    // 0x31ef90: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x31ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31ef94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31ef98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ef9c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x31ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31efa0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31efa4: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x31efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
    // 0x31efa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31efac: 0xa0400080  sb          $zero, 0x80($v0)
    ctx->pc = 0x31efacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x31efb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31efb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31efb4: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31efb8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x31efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x31efbc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31efbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31efc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31efc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31efc4: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31efc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31efc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31efc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31efcc: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31efccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31efd0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x31efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x31efd4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31efd8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31efd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31efdc: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31efdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31efe0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31efe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31efe4: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x31efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31efe8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x31efe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x31efec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31efecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31eff0: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31eff0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31eff4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31eff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31eff8: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x31eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31effc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x31effcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x31f000: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f004: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f004u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f008: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f00c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x31f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x31f010: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x31f010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x31f014: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31f014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31f018: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f01c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x31f01cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x31f020: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x31f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x31f024: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x31f024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x31f028: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31f028u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f02c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x31f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31f030: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31f030u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31f034: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x31f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x31f038: 0xc44001b0  lwc1        $f0, 0x1B0($v0)
    ctx->pc = 0x31f038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f03c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x31f03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x31f040: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x31f040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31f044: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31f044u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f048: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x31f048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31f04c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31f04cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31f050: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x31f050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x31f054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f058: 0x0  nop
    ctx->pc = 0x31f058u;
    // NOP
    // 0x31f05c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x31f05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x31f060: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x31f060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x31f064: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x31f064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x31f068: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31f068u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f06c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x31f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31f070: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31f070u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31f074: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31f074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31f078: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x31F078u;
    SET_GPR_U32(ctx, 31, 0x31F080u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x31F078u, 0x31F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F080u;
label_31f080:
    // 0x31f080: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31f080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f084: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x31f084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31f088: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x31f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31f08c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x31f08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x31f090: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x31f090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31f094: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x31f094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x31f098: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x31f098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31f09c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31f09cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31f0a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f0a4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x31f0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x31f0a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31f0a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31f0ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31f0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31f0b0: 0x8c29dcf0  lw          $t1, -0x2310($at)
    ctx->pc = 0x31f0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31f0b4: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x31f0b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31f0b8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x31f0b8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31f0bc: 0xc0612a8  jal         func_184AA0
    ctx->pc = 0x31F0BCu;
    SET_GPR_U32(ctx, 31, 0x31F0C4u);
    ctx->pc = 0x184AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184AA0u, 0x31F0BCu, 0x31F0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F0C4u;
label_31f0c4:
    // 0x31f0c4: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31f0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31f0c8: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x31f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF60u));
    // 0x31f0cc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x31f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31f0d0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x31f0d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31f0d4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x31F0D4u;
    {
        const bool branch_taken_0x31f0d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f0d4) {
            ctx->pc = 0x31F0F4u;
            goto label_31f0f4;
        }
    }
    ctx->pc = 0x31F0DCu;
    // 0x31f0dc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x31f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31f0e0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31f0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31f0e4: 0xc0c7cbc  jal         func_31F2F0
    ctx->pc = 0x31F0E4u;
    SET_GPR_U32(ctx, 31, 0x31F0ECu);
    ctx->pc = 0x31F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F2F0u, 0x31F0E4u, 0x31F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F0ECu;
label_31f0ec:
    // 0x31f0ec: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x31F0ECu;
    {
        const bool branch_taken_0x31f0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f0ec) {
            ctx->pc = 0x31F21Cu;
            goto label_31f21c;
        }
    }
    ctx->pc = 0x31F0F4u;
label_31f0f4:
    // 0x31f0f4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x31f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31f0f8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x31f0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31f0fc: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x31f0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31f100: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x31f100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31f104: 0xc0c7cf0  jal         func_31F3C0
    ctx->pc = 0x31F104u;
    SET_GPR_U32(ctx, 31, 0x31F10Cu);
    ctx->pc = 0x31F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F3C0u, 0x31F104u, 0x31F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F10Cu;
label_31f10c:
    // 0x31f10c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f110: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f110u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f114: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x31f114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x31f118: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f11c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f120: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f124: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f124u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f128: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f12c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f130: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x31f130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x31f134: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f138: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f13c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f13cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f140: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31f140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31f144: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x31f144u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF60u));
    // 0x31f148: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x31f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31f14c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x31f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31f150: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31f150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31f154: 0xac22af60  sw          $v0, -0x50A0($at)
    ctx->pc = 0x31f154u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF60u, _value); } while (0);
    // 0x31f158: 0x240400be  addiu       $a0, $zero, 0xBE
    ctx->pc = 0x31f158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x31f15c: 0xc084964  jal         func_212590
    ctx->pc = 0x31F15Cu;
    SET_GPR_U32(ctx, 31, 0x31F164u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x31F15Cu, 0x31F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F164u;
label_31f164:
    // 0x31f164: 0x93a20098  lbu         $v0, 0x98($sp)
    ctx->pc = 0x31f164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x31f168: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31f168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31f16c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x31f16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x31f170: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31f174: 0x622006  srlv        $a0, $v0, $v1
    ctx->pc = 0x31f174u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x31f178: 0x93a20098  lbu         $v0, 0x98($sp)
    ctx->pc = 0x31f178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x31f17c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31f17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31f180: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x31f180u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x31f184: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31f184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31f188: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31f188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31f18c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x31f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x31f190: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31f190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f194: 0x8c621a24  lw          $v0, 0x1A24($v1)
    ctx->pc = 0x31f194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6692)));
    // 0x31f198: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x31f198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x31f19c: 0xac621a24  sw          $v0, 0x1A24($v1)
    ctx->pc = 0x31f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6692), GPR_U32(ctx, 2));
    // 0x31f1a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f1a4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x31f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x31f1a8: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x31f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x31f1ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f1b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f1b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f1b8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x31f1b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x31f1bc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x31f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31f1c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31f1c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f1c8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x31f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31f1cc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31f1d0: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x31f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
    // 0x31f1d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f1d8: 0xa0400081  sb          $zero, 0x81($v0)
    ctx->pc = 0x31f1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 129), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f1dc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x31f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31f1e0: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x31F1E0u;
    SET_GPR_U32(ctx, 31, 0x31F1E8u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x31F1E0u, 0x31F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F1E8u;
label_31f1e8:
    // 0x31f1e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f1ec: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x31f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31f1f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31f1f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f1f8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x31f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31f1fc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31f200: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x31f200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
    // 0x31f204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f208: 0xa0440080  sb          $a0, 0x80($v0)
    ctx->pc = 0x31f208u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 4));
    // 0x31f20c: 0xc0a128c  jal         func_284A30
    ctx->pc = 0x31F20Cu;
    SET_GPR_U32(ctx, 31, 0x31F214u);
    ctx->pc = 0x284A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284A30u, 0x31F20Cu, 0x31F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F214u;
label_31f214:
    // 0x31f214: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x31F214u;
    {
        const bool branch_taken_0x31f214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f214) {
            ctx->pc = 0x31F2DCu;
            goto label_31f2dc;
        }
    }
    ctx->pc = 0x31F21Cu;
label_31f21c:
    // 0x31f21c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x31f21cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31f220: 0xc062010  jal         func_188040
    ctx->pc = 0x31F220u;
    SET_GPR_U32(ctx, 31, 0x31F228u);
    ctx->pc = 0x188040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188040u, 0x31F220u, 0x31F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F228u;
label_31f228:
    // 0x31f228: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f22c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f230: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x31f230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x31f234: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f238: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f23c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f240: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f244: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f248: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f248u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f24c: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x31f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x31f250: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f254: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f258: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f25c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f25cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f260: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f264: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f264u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f268: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31f268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31f26c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x31f26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x31f270: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f274: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f278: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f278u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f27c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f280: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f280u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f284: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x31f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x31f288: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f28c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f290: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f290u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f294: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f298: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x31f298u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x31f29c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x31f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x31f2a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f2a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f2a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f2ac: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x31f2acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x31f2b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31f2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f2b4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x31f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31f2b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31f2bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f2c0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x31f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31f2c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31f2c8: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x31f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
    // 0x31f2cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f2d0: 0xa0440080  sb          $a0, 0x80($v0)
    ctx->pc = 0x31f2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 4));
    // 0x31f2d4: 0xc0a128c  jal         func_284A30
    ctx->pc = 0x31F2D4u;
    SET_GPR_U32(ctx, 31, 0x31F2DCu);
    ctx->pc = 0x284A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284A30u, 0x31F2D4u, 0x31F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F2DCu;
label_31f2dc:
    // 0x31f2dc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x31f2dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31f2e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31f2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f2e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x31f2e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x31f2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x31F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F2F0u;
}
