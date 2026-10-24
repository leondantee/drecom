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

// Function: CreatPacketLineG2
// Address: 0x177870 - 0x1779b0
void CreatPacketLineG2_0x177870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketLineG2_0x177870");
#endif

    ctx->pc = 0x177870u;

    // 0x177870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177874: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x177878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17787c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x17787cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x177880: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x177880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177884: 0x3c025400  lui         $v0, 0x5400
    ctx->pc = 0x177884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21504 << 16));
    // 0x177888: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17788c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x17788cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x177890: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177894: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177898: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177898u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17789c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x17789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1778a0: 0x34431410  ori         $v1, $v0, 0x1410
    ctx->pc = 0x1778a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5136);
    // 0x1778a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1778a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1778a8: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1778a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1778ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1778acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1778b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1778b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1778b4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1778b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1778b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1778b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1778bc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1778bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1778c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1778c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1778c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1778c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1778c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1778c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1778cc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1778ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1778d0: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1778d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1778d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1778d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1778d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1778d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1778dc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1778dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1778e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1778e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1778e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1778e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1778e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1778e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1778ec: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1778ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1778f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1778f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1778f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1778f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1778f8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1778f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1778fc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1778fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x177900: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x177900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x177904: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x177904u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x177908: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x177908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17790c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17790cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x177910: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x177910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x177914: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x177914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x177918: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17791c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x177920: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177924: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177928: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17792c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x17792cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177930: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x177930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x177934: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177938: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17793c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x17793cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177940: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177948: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17794c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x17794cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x177950: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177954: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177958: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17795c: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x17795cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x177960: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x177960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x177964: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x177964u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x177968: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x177968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17796c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17796cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x177970: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x177970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x177974: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x177974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x177978: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17797c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17797cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x177980: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177984: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177988: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17798c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x17798cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177990: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177994: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177998: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17799c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1779a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1779a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1779a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1779a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1779a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1779A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1779A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1779B0u;
}
