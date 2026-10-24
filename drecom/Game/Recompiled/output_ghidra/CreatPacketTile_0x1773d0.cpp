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

// Function: CreatPacketTile
// Address: 0x1773d0 - 0x1774e0
void CreatPacketTile_0x1773d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketTile_0x1773d0");
#endif

    ctx->pc = 0x1773d0u;

    // 0x1773d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1773d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1773d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1773d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1773d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1773d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1773dc: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1773dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x1773e0: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x1773e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1773e4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1773e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1773e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1773e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1773ec: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1773ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1773f0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1773f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1773f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1773f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1773f8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1773f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1773fc: 0x24034410  addiu       $v1, $zero, 0x4410
    ctx->pc = 0x1773fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17424));
    // 0x177400: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177404: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x177404u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x177408: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17740c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177410: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177414: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177418: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x177418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x17741c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17741cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177420: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x177420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x177424: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177428: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177428u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17742c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x17742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x177430: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177434: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177438: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17743c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17743cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177444: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177448: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x177448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x17744c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177450: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177454: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177458: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x177458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17745c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x17745cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x177460: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x177460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x177464: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x177464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x177468: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x177468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17746c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17746cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x177470: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x177470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x177474: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177478: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x177478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17747c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17747cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177480: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177484: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177488: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177488u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17748c: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x17748cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x177490: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x177490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x177494: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x177494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x177498: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x177498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17749c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17749cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1774a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1774a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1774a4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1774a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1774a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1774a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1774ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1774acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1774b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1774b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1774b4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1774b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1774b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1774b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1774bc: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1774bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1774c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1774c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1774c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1774c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1774c8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1774c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1774cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1774ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1774d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1774d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1774d4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1774d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1774d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1774D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1774D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1774E0u;
}
