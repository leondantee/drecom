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

// Function: entry_001f5428
// Address: 0x1f5428 - 0x1f5574
void entry_001f5428_0x1f5428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5428_0x1f5428");
#endif

    switch (ctx->pc) {
        case 0x1f5464u: goto label_1f5464;
        case 0x1f5530u: goto label_1f5530;
        case 0x1f5538u: goto label_1f5538;
        case 0x1f556cu: goto label_1f556c;
        default: break;
    }

    ctx->pc = 0x1f5428u;

    // 0x1f5428: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f5428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f542c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1f542cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1f5430: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f5430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f5434: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1f5434u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f543c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5440: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f5444: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5448: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f5448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f544c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1f544cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1f5450: 0x2406040e  addiu       $a2, $zero, 0x40E
    ctx->pc = 0x1f5450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
    // 0x1f5454: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f5454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5458: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f5458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f545c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F545Cu;
    SET_GPR_U32(ctx, 31, 0x1F5464u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F545Cu, 0x1F5464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5464u;
label_1f5464:
    // 0x1f5464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5468: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f546c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5470: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f5470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f5474: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f5474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f5478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f547c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5480: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5484: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f5484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f5488: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1f5488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1f548c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f548cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5490: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5494: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5498: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f5498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f549c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1f549cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1f54a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f54a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f54a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f54a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f54ac: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f54acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f54b0: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1f54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1f54b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f54b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f54b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f54b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f54bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f54c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f54c4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f54c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f54c8: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x1f54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x1f54cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f54ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f54d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f54d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f54d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f54d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f54dc: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f54dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f54e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f54e4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1f54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f54e8: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x1f54e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f54ec: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x1f54ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1f54f0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1f54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f54f4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1f54f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1f54f8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1f54f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1f54fc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1f54fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1f5500: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1f5500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f5504: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1f5504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1f5508: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1f5508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1f550c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f550cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f5510: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f5510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f5514: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f5514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f5518: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f551c: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x1f551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x1f5520: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f5520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f5524: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f5524u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f5528: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F5528u;
    SET_GPR_U32(ctx, 31, 0x1F5530u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F5528u, 0x1F5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5530u;
label_1f5530:
    // 0x1f5530: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5530u;
    SET_GPR_U32(ctx, 31, 0x1F5538u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5530u, 0x1F5538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5538u;
label_1f5538:
    // 0x1f5538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f553c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f553cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f5540: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5540u;
    {
        const bool branch_taken_0x1f5540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5540) {
            ctx->pc = 0x1F5574u;
            return;
        }
    }
    ctx->pc = 0x1F5548u;
    // 0x1f5548: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f554c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f554cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f5550: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f5550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f5554: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f5554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f5558: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x1f5558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1f555c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f555cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f5560: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f5560u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f5564: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F5564u;
    SET_GPR_U32(ctx, 31, 0x1F556Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F5564u, 0x1F556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F556Cu;
label_1f556c:
    // 0x1f556c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F556Cu;
    {
        const bool branch_taken_0x1f556c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f556c) {
            ctx->pc = 0x1F5598u;
            return;
        }
    }
    ctx->pc = 0x1F5574u;
}
