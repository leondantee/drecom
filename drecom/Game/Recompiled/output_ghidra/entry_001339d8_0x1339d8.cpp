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

// Function: entry_001339d8
// Address: 0x1339d8 - 0x133aa8
void entry_001339d8_0x1339d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001339d8_0x1339d8");
#endif

    switch (ctx->pc) {
        case 0x133a08u: goto label_133a08;
        case 0x133a70u: goto label_133a70;
        case 0x133a7cu: goto label_133a7c;
        default: break;
    }

    ctx->pc = 0x1339d8u;

    // 0x1339d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1339d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1339dc: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x1339dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1339e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1339e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1339e4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1339e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1339e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1339e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1339ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1339ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1339f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1339f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1339f4: 0x2406051c  addiu       $a2, $zero, 0x51C
    ctx->pc = 0x1339f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1308));
    // 0x1339f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1339f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1339fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1339fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x133a00: 0xc0965d0  jal         func_259740
    ctx->pc = 0x133A00u;
    SET_GPR_U32(ctx, 31, 0x133A08u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x133A00u, 0x133A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A08u;
label_133a08:
    // 0x133a08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133a0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a10: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x133a10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x133a14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133a1c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x133a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x133a20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x133a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133a24: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x133a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x133a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133a2c: 0xa202009b  sb          $v0, 0x9B($s0)
    ctx->pc = 0x133a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 155), (uint8_t)GPR_U32(ctx, 2));
    // 0x133a30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a34: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x133a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x133a38: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x133a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x133a3c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x133a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x133a40: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x133a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133a44: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x133a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x133a48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a4c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x133a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x133a50: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x133a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x133a54: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x133a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x133a58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x133a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133a5c: 0x2404050a  addiu       $a0, $zero, 0x50A
    ctx->pc = 0x133a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x133a60: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x133a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x133a64: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x133a64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133a68: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x133A68u;
    SET_GPR_U32(ctx, 31, 0x133A70u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x133A68u, 0x133A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A70u;
label_133a70:
    // 0x133a70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a74: 0xc04da3c  jal         func_1368F0
    ctx->pc = 0x133A74u;
    SET_GPR_U32(ctx, 31, 0x133A7Cu);
    ctx->pc = 0x1368F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368F0u, 0x133A74u, 0x133A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A7Cu;
label_133a7c:
    // 0x133a7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133a80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a84: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x133a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x133a88: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x133a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x133a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133a90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a94: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x133a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x133a98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a9c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133aa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133aa4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x133aa8u;
}
