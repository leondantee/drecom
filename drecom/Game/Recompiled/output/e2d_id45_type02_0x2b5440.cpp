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

// Function: e2d_id45_type02
// Address: 0x2b5440 - 0x2b5508
void e2d_id45_type02_0x2b5440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id45_type02_0x2b5440");
#endif

    ctx->pc = 0x2b5440u;

    // 0x2b5440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5444: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b5444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b5448: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b5448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b544c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b544cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5450: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5454: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b5454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b5458: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b5458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b545c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b545cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5460: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5464: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b5464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b5468: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b5468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b546c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b546cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5470: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5474: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b5474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b5478: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b5478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b547c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b547cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5480: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5484: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b5484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b5488: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2b5488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2b548c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2b548cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2b5490: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5494: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5498: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b5498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b549c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b549cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b54a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b54a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b54a4: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b54a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b54a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b54a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b54ac: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x2b54acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b54b0: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x2b54b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2b54b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b54b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b54b8: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b54bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b54bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b54c0: 0xa0600138  sb          $zero, 0x138($v1)
    ctx->pc = 0x2b54c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b54c4: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2b54c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2b54c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b54c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b54cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b54d0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b54d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b54d4: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2b54d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2b54d8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b54d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b54dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b54dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b54e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b54e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b54e4: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b54e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b54e8: 0x3c03ba83  lui         $v1, 0xBA83
    ctx->pc = 0x2b54e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47747 << 16));
    // 0x2b54ec: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2b54ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2b54f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b54f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b54f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b54f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b54f8: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b54f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b54fc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b54fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5500: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5508u;
}
