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

// Function: e2d_id00_type19
// Address: 0x2aa730 - 0x2aa7ec
void e2d_id00_type19_0x2aa730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type19_0x2aa730");
#endif

    ctx->pc = 0x2aa730u;

    // 0x2aa730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa734: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2aa734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2aa738: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2aa738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2aa73c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa73cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa740: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa744: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2aa744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2aa748: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2aa748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2aa74c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa74cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa750: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa754: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2aa754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2aa758: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2aa758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2aa75c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa75cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa760: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa764: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2aa764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2aa768: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2aa768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2aa76c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa76cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa770: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa774: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2aa774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2aa778: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x2aa778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x2aa77c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa780: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa784: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2aa784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2aa788: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2aa788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2aa78c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2aa78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2aa790: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa794: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa798: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2aa798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2aa79c: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2aa79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2aa7a0: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2aa7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2aa7a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa7a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa7a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa7ac: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x2aa7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x2aa7b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2aa7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa7b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa7b8: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2aa7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa7bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2aa7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa7c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa7c4: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x2aa7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa7c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2aa7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa7cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa7d0: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2aa7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa7d4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2aa7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2aa7d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2aa7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aa7dc: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2aa7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2aa7e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2aa7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aa7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA7ECu;
}
