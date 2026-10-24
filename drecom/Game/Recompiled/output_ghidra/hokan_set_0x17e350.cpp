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

// Function: hokan_set
// Address: 0x17e350 - 0x17e3e0
void hokan_set_0x17e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hokan_set_0x17e350");
#endif

    ctx->pc = 0x17e350u;

    // 0x17e350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e354: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17e354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17e358: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x17e358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x17e35c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x17e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x17e360: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x17e360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x17e364: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x17e364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e368: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e36c: 0xac640088  sw          $a0, 0x88($v1)
    ctx->pc = 0x17e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 4));
    // 0x17e370: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e374: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x17e374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x17e378: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e37c: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x17e37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
    // 0x17e380: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17e380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e384: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e388: 0xac640094  sw          $a0, 0x94($v1)
    ctx->pc = 0x17e388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 4));
    // 0x17e38c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e390: 0xac600090  sw          $zero, 0x90($v1)
    ctx->pc = 0x17e390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
    // 0x17e394: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e398: 0xac600098  sw          $zero, 0x98($v1)
    ctx->pc = 0x17e398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 0));
    // 0x17e39c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x17e39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e3a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e3a4: 0xac6400b8  sw          $a0, 0xB8($v1)
    ctx->pc = 0x17e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 4));
    // 0x17e3a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e3ac: 0xac6000b4  sw          $zero, 0xB4($v1)
    ctx->pc = 0x17e3acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 0));
    // 0x17e3b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e3b4: 0xac6000bc  sw          $zero, 0xBC($v1)
    ctx->pc = 0x17e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 0));
    // 0x17e3b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e3bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e3c0: 0xac6400c4  sw          $a0, 0xC4($v1)
    ctx->pc = 0x17e3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 4));
    // 0x17e3c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e3c8: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x17e3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e3cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e3d0: 0xe460007c  swc1        $f0, 0x7C($v1)
    ctx->pc = 0x17e3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
    // 0x17e3d4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17e3d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17e3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x17E3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E3E0u;
}
