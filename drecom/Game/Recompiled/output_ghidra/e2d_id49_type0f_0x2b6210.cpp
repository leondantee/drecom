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

// Function: e2d_id49_type0f
// Address: 0x2b6210 - 0x2b62a8
void e2d_id49_type0f_0x2b6210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id49_type0f_0x2b6210");
#endif

    ctx->pc = 0x2b6210u;

    // 0x2b6210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6214: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b6214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b6218: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b621c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b621cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6220: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6224: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b6224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b6228: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b6228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b622c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b622cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6230: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6234: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b6234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b6238: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b6238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b623c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b623cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6240: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6244: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b6244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b6248: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b624c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b624cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6250: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6254: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b6254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b6258: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b6258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b625c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b625cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6260: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6264: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6268: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b626c: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x2b626cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6270: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b6270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6274: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6278: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b6278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b627c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b627cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6280: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6284: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b6284u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6288: 0x3c03bca3  lui         $v1, 0xBCA3
    ctx->pc = 0x2b6288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48291 << 16));
    // 0x2b628c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b628cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b6290: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6294: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6298: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2b6298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2b629c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b629cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b62a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B62A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B62A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B62A8u;
}
