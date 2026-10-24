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

// Function: e2d_id00_type01
// Address: 0x2a94e0 - 0x2a9598
void e2d_id00_type01_0x2a94e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type01_0x2a94e0");
#endif

    switch (ctx->pc) {
        case 0x2a9550u: goto label_2a9550;
        default: break;
    }

    ctx->pc = 0x2a94e0u;

    // 0x2a94e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a94e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a94e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a94e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a94e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a94e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2a94ec: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a94ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2a94f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a94f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a94f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a94f8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2a94f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2a94fc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2a9500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9504: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9508: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2a9508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2a950c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a950cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a9510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9514: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9518: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2a9518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2a951c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x2a951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x2a9520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9524: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9528: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2a9528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2a952c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a952cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a9530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9534: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9538: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2a9538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2a953c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a953cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a9540: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9544: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2a9544u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a9548: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A9548u;
    SET_GPR_U32(ctx, 31, 0x2A9550u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A9548u, 0x2A9550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9550u;
label_2a9550:
    // 0x2a9550: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2a9550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2a9554: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2a9554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a9558: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a9558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a955c: 0x0  nop
    ctx->pc = 0x2a955cu;
    // NOP
    // 0x2a9560: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a9560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9564: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a9564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a956c: 0x0  nop
    ctx->pc = 0x2a956cu;
    // NOP
    // 0x2a9570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9574: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9578: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2a9578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2a957c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9580: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9584: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x2a9584u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9588: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a9588u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a958c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a958cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a9590: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9598u;
}
