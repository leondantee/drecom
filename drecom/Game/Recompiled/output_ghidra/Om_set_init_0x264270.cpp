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

// Function: Om_set_init
// Address: 0x264270 - 0x264338
void Om_set_init_0x264270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_set_init_0x264270");
#endif

    switch (ctx->pc) {
        case 0x2642c0u: goto label_2642c0;
        case 0x2642d0u: goto label_2642d0;
        default: break;
    }

    ctx->pc = 0x264270u;

    // 0x264270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x264274: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x264274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x264278: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x264278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x26427c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x26427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264280: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x264280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x264284: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264288: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x264288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26428c: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x26428cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x264290: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264294: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x264294u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x264298: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x264298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x26429c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x26429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2642a0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2642a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2642a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2642a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2642a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2642a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2642ac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2642acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2642b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2642b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2642b4: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x2642b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2642b8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2642B8u;
    SET_GPR_U32(ctx, 31, 0x2642C0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2642B8u, 0x2642C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2642C0u;
label_2642c0:
    // 0x2642c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2642c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2642c4: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x2642c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2642c8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2642C8u;
    SET_GPR_U32(ctx, 31, 0x2642D0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2642C8u, 0x2642D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2642D0u;
label_2642d0:
    // 0x2642d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2642d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2642d4: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x2642d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x2642d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2642d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2642dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2642dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2642e0: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2642e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2642e4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2642e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2642e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2642e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2642ec: 0xa0640012  sb          $a0, 0x12($v1)
    ctx->pc = 0x2642ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 4));
    // 0x2642f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2642f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2642f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2642f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2642f8: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x2642f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x2642fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2642fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264300: 0xa06010a9  sb          $zero, 0x10A9($v1)
    ctx->pc = 0x264300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4265), (uint8_t)GPR_U32(ctx, 0));
    // 0x264304: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x264304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264308: 0xa0601219  sb          $zero, 0x1219($v1)
    ctx->pc = 0x264308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 0));
    // 0x26430c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x26430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264310: 0xac60121c  sw          $zero, 0x121C($v1)
    ctx->pc = 0x264310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 0));
    // 0x264314: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x264314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264318: 0xa06011ed  sb          $zero, 0x11ED($v1)
    ctx->pc = 0x264318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4589), (uint8_t)GPR_U32(ctx, 0));
    // 0x26431c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x26431cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x264320: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x264320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264324: 0xa06411ec  sb          $a0, 0x11EC($v1)
    ctx->pc = 0x264324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 4));
    // 0x264328: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x264328u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26432c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26432cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x264330: 0x3e00008  jr          $ra
    ctx->pc = 0x264330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264338u;
}
