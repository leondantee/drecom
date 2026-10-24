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

// Function: e2d_id48_type01
// Address: 0x2b55a0 - 0x2b5654
void e2d_id48_type01_0x2b55a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id48_type01_0x2b55a0");
#endif

    ctx->pc = 0x2b55a0u;

    // 0x2b55a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b55a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b55a4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b55a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b55a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b55a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b55ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b55acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b55b0: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b55b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b55b4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b55b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b55b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b55b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b55bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b55c0: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b55c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b55c4: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2b55c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2b55c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b55c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b55cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b55d0: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b55d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b55d4: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x2b55d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
    // 0x2b55d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b55d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b55dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b55e0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b55e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b55e4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2b55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2b55e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b55e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b55ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b55ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b55f0: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b55f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b55f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b55f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b55f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b55f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b55fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b55fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5600: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x2b5600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x2b5604: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b5604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b560c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b560cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5610: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2b5610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2b5614: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b5614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b561c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5620: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x2b5620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x2b5624: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2b5624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2b5628: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2b5628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2b562c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b562cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5630: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5634: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b5634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b5638: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x2b5638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x2b563c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b563cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5640: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5644: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b5644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b5648: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b5648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b564c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B564Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B564Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5654u;
}
