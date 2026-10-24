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

// Function: entry_001f6744
// Address: 0x1f6744 - 0x1f67f0
void entry_001f6744_0x1f6744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6744_0x1f6744");
#endif

    ctx->pc = 0x1f6744u;

    // 0x1f6744: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6748: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f674c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6754: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f6754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6758: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x1f6758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f675c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f675cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6760: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1f6760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1f6764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6768: 0x0  nop
    ctx->pc = 0x1f6768u;
    // NOP
    // 0x1f676c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f676cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6770: 0x0  nop
    ctx->pc = 0x1f6770u;
    // NOP
    // 0x1f6774: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1F6774u;
    {
        const bool branch_taken_0x1f6774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6774) {
            ctx->pc = 0x1F67F0u;
            return;
        }
    }
    ctx->pc = 0x1F677Cu;
    // 0x1f677c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6780: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6784: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6788: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f678c: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x1f678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6790: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x1f6790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6794: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f6794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6798: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1f6798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1f679c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f679cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f67a0: 0x0  nop
    ctx->pc = 0x1f67a0u;
    // NOP
    // 0x1f67a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f67a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f67a8: 0x0  nop
    ctx->pc = 0x1f67a8u;
    // NOP
    // 0x1f67ac: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1F67ACu;
    {
        const bool branch_taken_0x1f67ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f67ac) {
            ctx->pc = 0x1F67F0u;
            return;
        }
    }
    ctx->pc = 0x1F67B4u;
    // 0x1f67b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f67b8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f67b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f67bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F67BCu;
    {
        const bool branch_taken_0x1f67bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f67bc) {
            ctx->pc = 0x1F67F0u;
            return;
        }
    }
    ctx->pc = 0x1F67C4u;
    // 0x1f67c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f67c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f67cc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1f67ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f67d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f67d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f67d8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f67d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f67dc: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x1f67dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1f67e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f67e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f67e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f67e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f67e8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F67E8u;
    SET_GPR_U32(ctx, 31, 0x1F67F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F67E8u, 0x1F67F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67F0u;
}
