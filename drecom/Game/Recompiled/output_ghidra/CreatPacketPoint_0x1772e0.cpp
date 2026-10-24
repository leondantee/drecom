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

// Function: CreatPacketPoint
// Address: 0x1772e0 - 0x1773c4
void CreatPacketPoint_0x1772e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketPoint_0x1772e0");
#endif

    ctx->pc = 0x1772e0u;

    // 0x1772e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1772e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1772e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1772e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1772e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1772e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1772ec: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1772ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x1772f0: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x1772f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1772f4: 0x3c023400  lui         $v0, 0x3400
    ctx->pc = 0x1772f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13312 << 16));
    // 0x1772f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1772f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1772fc: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1772fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x177300: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177304: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177308: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177308u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17730c: 0x24030410  addiu       $v1, $zero, 0x410
    ctx->pc = 0x17730cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x177310: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177314: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x177314u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x177318: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17731c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177320: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177324: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177328: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x177328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x17732c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17732cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177330: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x177330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x177334: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177338: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177338u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17733c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x17733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x177340: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177344: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177348: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17734c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17734cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177354: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177358: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x177358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x17735c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17735cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177360: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177364: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177368: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x177368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17736c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x17736cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x177370: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x177370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x177374: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x177374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x177378: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x177378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17737c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17737cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x177380: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x177380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x177384: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177388: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x177388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17738c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17738cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177390: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177394: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177398: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177398u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17739c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1773a0: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1773a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1773a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1773a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1773a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1773a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1773ac: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1773acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1773b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1773b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1773b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1773b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1773b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1773b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1773bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1773BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1773BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1773C4u;
}
