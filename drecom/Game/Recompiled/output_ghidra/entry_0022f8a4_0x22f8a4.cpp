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

// Function: entry_0022f8a4
// Address: 0x22f8a4 - 0x22f9c4
void entry_0022f8a4_0x22f8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f8a4_0x22f8a4");
#endif

    switch (ctx->pc) {
        case 0x22f8ecu: goto label_22f8ec;
        case 0x22f980u: goto label_22f980;
        case 0x22f988u: goto label_22f988;
        case 0x22f9bcu: goto label_22f9bc;
        default: break;
    }

    ctx->pc = 0x22f8a4u;

    // 0x22f8a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f8a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x22f8a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22f8ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f8b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x22f8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x22f8b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f8b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f8b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f8bc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x22f8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x22f8c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f8c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f8c4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f8c8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22f8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22f8cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f8d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f8d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22f8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22f8d8: 0x24060f0c  addiu       $a2, $zero, 0xF0C
    ctx->pc = 0x22f8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3852));
    // 0x22f8dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22f8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f8e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22f8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f8e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22F8E4u;
    SET_GPR_U32(ctx, 31, 0x22F8ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22F8E4u, 0x22F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F8ECu;
label_22f8ec:
    // 0x22f8ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f8ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f8f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f8f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f8f8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22f8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22f8fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f8fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f900: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f904: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f908: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22f908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22f90c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f90cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f910: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f914: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22f914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f918: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22f918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22f91c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22f920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f924: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f928: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22f928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f92c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22f92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22f930: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f934: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x22f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x22f938: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x22f938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22f93c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x22f93cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x22f940: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x22f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x22f944: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x22f944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x22f948: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x22f948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x22f94c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x22f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x22f950: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x22f950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x22f954: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x22f954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x22f958: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x22f958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x22f95c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22f960: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22f960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22f964: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f968: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f96c: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x22f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x22f970: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22f970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22f974: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f974u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f978: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22F978u;
    SET_GPR_U32(ctx, 31, 0x22F980u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22F978u, 0x22F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F980u;
label_22f980:
    // 0x22f980: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F980u;
    SET_GPR_U32(ctx, 31, 0x22F988u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F980u, 0x22F988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F988u;
label_22f988:
    // 0x22f988: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22f988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f98c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f990: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22F990u;
    {
        const bool branch_taken_0x22f990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f990) {
            ctx->pc = 0x22F9C4u;
            return;
        }
    }
    ctx->pc = 0x22F998u;
    // 0x22f998: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22f998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22f99c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22f99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22f9a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f9a4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f9a8: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x22f9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x22f9ac: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22f9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22f9b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f9b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f9b4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22F9B4u;
    SET_GPR_U32(ctx, 31, 0x22F9BCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22F9B4u, 0x22F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9BCu;
label_22f9bc:
    // 0x22f9bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22F9BCu;
    {
        const bool branch_taken_0x22f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f9bc) {
            ctx->pc = 0x22F9E8u;
            return;
        }
    }
    ctx->pc = 0x22F9C4u;
}
