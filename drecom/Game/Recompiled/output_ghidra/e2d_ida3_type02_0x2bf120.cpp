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

// Function: e2d_ida3_type02
// Address: 0x2bf120 - 0x2bf20c
void e2d_ida3_type02_0x2bf120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_ida3_type02_0x2bf120");
#endif

    switch (ctx->pc) {
        case 0x2bf1b4u: goto label_2bf1b4;
        default: break;
    }

    ctx->pc = 0x2bf120u;

    // 0x2bf120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf124: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bf124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bf128: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bf128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bf12c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bf12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bf130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf134: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf138: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bf138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bf13c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bf13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bf140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf144: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf148: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bf148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bf14c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bf14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bf150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf154: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf158: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bf158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bf15c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2bf15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2bf160: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2bf160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2bf164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf168: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf16c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2bf16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2bf170: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2bf170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bf174: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf178: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2bf178u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf17c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bf17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bf180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf184: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf188: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2bf188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2bf18c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bf18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bf190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf194: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf198: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2bf198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2bf19c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bf19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bf1a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf1a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf1a8: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2bf1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2bf1ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BF1ACu;
    SET_GPR_U32(ctx, 31, 0x2BF1B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BF1ACu, 0x2BF1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF1B4u;
label_2bf1b4:
    // 0x2bf1b4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2bf1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2bf1b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bf1b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf1bc: 0x0  nop
    ctx->pc = 0x2bf1bcu;
    // NOP
    // 0x2bf1c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bf1c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bf1c4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2bf1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2bf1c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf1cc: 0x0  nop
    ctx->pc = 0x2bf1ccu;
    // NOP
    // 0x2bf1d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bf1d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bf1d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf1d8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bf1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bf1dc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2bf1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2bf1e0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bf1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bf1e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf1e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf1ec: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bf1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bf1f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2bf1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bf1f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf1f8: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2bf1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bf1fc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bf1fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf200: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bf200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bf204: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF20Cu;
}
