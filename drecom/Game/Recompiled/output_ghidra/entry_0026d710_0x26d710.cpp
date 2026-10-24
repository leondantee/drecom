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

// Function: entry_0026d710
// Address: 0x26d710 - 0x26d828
void entry_0026d710_0x26d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d710_0x26d710");
#endif

    switch (ctx->pc) {
        case 0x26d74cu: goto label_26d74c;
        case 0x26d7d4u: goto label_26d7d4;
        default: break;
    }

    ctx->pc = 0x26d710u;

    // 0x26d710: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x26d710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26d714: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d718: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x26d718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x26d71c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d720: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x26d720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d724: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d728: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26d728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x26d72c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d730: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d734: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26d734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26d738: 0x24061e6c  addiu       $a2, $zero, 0x1E6C
    ctx->pc = 0x26d738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7788));
    // 0x26d73c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26d73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d740: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26d740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26d744: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26D744u;
    SET_GPR_U32(ctx, 31, 0x26D74Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26D744u, 0x26D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D74Cu;
label_26d74c:
    // 0x26d74c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26d750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d754: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d758: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x26d758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x26d75c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x26d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x26d760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d764: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d768: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26d768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x26d76c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d770: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26d774: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x26d774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x26d778: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26d778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26d77c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x26d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x26d780: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d784: 0xa44013c0  sh          $zero, 0x13C0($v0)
    ctx->pc = 0x26d784u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5056), (uint16_t)GPR_U32(ctx, 0));
    // 0x26d788: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x26d788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26d78c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d790: 0xa44313c2  sh          $v1, 0x13C2($v0)
    ctx->pc = 0x26d790u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5058), (uint16_t)GPR_U32(ctx, 3));
    // 0x26d794: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d798: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x26d798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26d79c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26d79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26d7a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x26d7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26d7a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26d7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26d7a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26d7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26d7ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26d7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26d7b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26d7b4: 0x34440112  ori         $a0, $v0, 0x112
    ctx->pc = 0x26d7b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)274);
    // 0x26d7b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d7bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26d7bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d7c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x26d7c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d7c4: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x26d7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26d7c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26d7c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d7cc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x26D7CCu;
    SET_GPR_U32(ctx, 31, 0x26D7D4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x26D7CCu, 0x26D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D7D4u;
label_26d7d4:
    // 0x26d7d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d7d8: 0x844213ac  lh          $v0, 0x13AC($v0)
    ctx->pc = 0x26d7d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5036)));
    // 0x26d7dc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x26d7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26d7e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26d7e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x26d7e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d7e8: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x26d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x26d7ec: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x26d7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x26d7f0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x26d7f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x26d7f4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x26d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x26d7f8: 0x0  nop
    ctx->pc = 0x26d7f8u;
    // NOP
    // 0x26d7fc: 0x1010  mfhi        $v0
    ctx->pc = 0x26d7fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x26d800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26d800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26d804: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26d804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26d808: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x26d808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26d80c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26d80cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x26d810: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d814: 0xa44313a8  sh          $v1, 0x13A8($v0)
    ctx->pc = 0x26d814u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5032), (uint16_t)GPR_U32(ctx, 3));
    // 0x26d818: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d81c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26d81cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26d820: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26d820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d824: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26d824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x26d828u;
}
