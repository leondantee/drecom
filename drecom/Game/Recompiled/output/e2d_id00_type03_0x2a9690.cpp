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

// Function: e2d_id00_type03
// Address: 0x2a9690 - 0x2a9748
void e2d_id00_type03_0x2a9690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type03_0x2a9690");
#endif

    switch (ctx->pc) {
        case 0x2a9700u: goto label_2a9700;
        default: break;
    }

    ctx->pc = 0x2a9690u;

    // 0x2a9690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9694: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a9694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a9698: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a9698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2a969c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a969cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2a96a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a96a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a96a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a96a8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2a96a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2a96ac: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2a96acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2a96b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a96b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a96b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a96b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a96b8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2a96b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2a96bc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2a96c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a96c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a96c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a96c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a96c8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2a96c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2a96cc: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x2a96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x2a96d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a96d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a96d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a96d8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2a96d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2a96dc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a96dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a96e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a96e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a96e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a96e8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2a96e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2a96ec: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a96f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a96f4: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2a96f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a96f8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A96F8u;
    SET_GPR_U32(ctx, 31, 0x2A9700u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A96F8u, 0x2A9700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9700u;
label_2a9700:
    // 0x2a9700: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2a9700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2a9704: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2a9704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a9708: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a9708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a970c: 0x0  nop
    ctx->pc = 0x2a970cu;
    // NOP
    // 0x2a9710: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a9710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9714: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a9714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a971c: 0x0  nop
    ctx->pc = 0x2a971cu;
    // NOP
    // 0x2a9720: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9724: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9728: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2a9728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2a972c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a972cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9730: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9734: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x2a9734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9738: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a9738u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a973c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a973cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a9740: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9748u;
}
