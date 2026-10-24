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

// Function: e2d_id69_type05
// Address: 0x2bacb0 - 0x2bad80
void e2d_id69_type05_0x2bacb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id69_type05_0x2bacb0");
#endif

    switch (ctx->pc) {
        case 0x2bad3cu: goto label_2bad3c;
        default: break;
    }

    ctx->pc = 0x2bacb0u;

    // 0x2bacb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bacb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bacb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bacb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bacb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bacb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bacbc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bacbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bacc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bacc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bacc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bacc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bacc8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bacc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2baccc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bacccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bacd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bacd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bacd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bacd8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bacd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bacdc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bacdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bace0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bace0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bace4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bace8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bace8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bacec: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bacecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bacf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bacf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bacf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bacf8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bacf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bacfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bacfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bad00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bad04: 0xa043013f  sb          $v1, 0x13F($v0)
    ctx->pc = 0x2bad04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bad08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bad0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bad10: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bad10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bad14: 0x3c023ed7  lui         $v0, 0x3ED7
    ctx->pc = 0x2bad14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16087 << 16));
    // 0x2bad18: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x2bad18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x2bad1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bad1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bad20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bad24: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bad24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bad28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bad2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bad30: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2bad30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bad34: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BAD34u;
    SET_GPR_U32(ctx, 31, 0x2BAD3Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BAD34u, 0x2BAD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD3Cu;
label_2bad3c:
    // 0x2bad3c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2bad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2bad40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bad40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bad44: 0x0  nop
    ctx->pc = 0x2bad44u;
    // NOP
    // 0x2bad48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bad48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bad4c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2bad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2bad50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bad50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bad54: 0x0  nop
    ctx->pc = 0x2bad54u;
    // NOP
    // 0x2bad58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bad58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bad5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bad60: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bad60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bad64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2bad64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bad68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bad68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bad6c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2bad6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bad70: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bad70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bad74: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bad74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bad78: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAD80u;
}
