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

// Function: e2d_id16_type02
// Address: 0x2b1320 - 0x2b13b4
void e2d_id16_type02_0x2b1320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id16_type02_0x2b1320");
#endif

    switch (ctx->pc) {
        case 0x2b133cu: goto label_2b133c;
        case 0x2b1370u: goto label_2b1370;
        default: break;
    }

    ctx->pc = 0x2b1320u;

    // 0x2b1320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b1320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b1324: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b1324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b1328: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b1328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b132c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1330: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2b1330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2b1334: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2B1334u;
    SET_GPR_U32(ctx, 31, 0x2B133Cu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2B1334u, 0x2B133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B133Cu;
label_2b133c:
    // 0x2b133c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b133cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1340: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1344: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b1344u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b1348: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x2b1348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x2b134c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b134cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1350: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1354: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2b1354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2b1358: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2b1358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2b135c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b135cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1360: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1364: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2b1364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2b1368: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B1368u;
    SET_GPR_U32(ctx, 31, 0x2B1370u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B1368u, 0x2B1370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1370u;
label_2b1370:
    // 0x2b1370: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b1370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b1374: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b1374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1378: 0x0  nop
    ctx->pc = 0x2b1378u;
    // NOP
    // 0x2b137c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b137cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b1380: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x2b1380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
    // 0x2b1384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1388: 0x0  nop
    ctx->pc = 0x2b1388u;
    // NOP
    // 0x2b138c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b138cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b1390: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1394: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1398: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b1398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b139c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b13a0: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b13a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b13a4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b13a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b13a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b13a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b13ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B13ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B13ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B13B4u;
}
