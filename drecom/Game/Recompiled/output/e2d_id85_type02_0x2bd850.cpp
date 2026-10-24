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

// Function: e2d_id85_type02
// Address: 0x2bd850 - 0x2bd954
void e2d_id85_type02_0x2bd850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id85_type02_0x2bd850");
#endif

    switch (ctx->pc) {
        case 0x2bd8f0u: goto label_2bd8f0;
        default: break;
    }

    ctx->pc = 0x2bd850u;

    // 0x2bd850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bd854: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bd854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bd858: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bd858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bd85c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2bd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2bd860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd864: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd868: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bd868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bd86c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2bd86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2bd870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd874: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd878: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bd878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bd87c: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2bd87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2bd880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd884: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd888: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bd888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bd88c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2bd88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2bd890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd894: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd898: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bd898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bd89c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2bd89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd8a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd8a8: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2bd8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2bd8ac: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2bd8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2bd8b0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2bd8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2bd8b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd8b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd8bc: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2bd8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2bd8c0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2bd8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2bd8c4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2bd8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2bd8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd8cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd8d0: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2bd8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2bd8d4: 0x3c023f68  lui         $v0, 0x3F68
    ctx->pc = 0x2bd8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16232 << 16));
    // 0x2bd8d8: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x2bd8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x2bd8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd8e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd8e4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2bd8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2bd8e8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BD8E8u;
    SET_GPR_U32(ctx, 31, 0x2BD8F0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BD8E8u, 0x2BD8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD8F0u;
label_2bd8f0:
    // 0x2bd8f0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bd8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2bd8f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd8f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd8f8: 0x0  nop
    ctx->pc = 0x2bd8f8u;
    // NOP
    // 0x2bd8fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd8fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd900: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2bd900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2bd904: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd908: 0x0  nop
    ctx->pc = 0x2bd908u;
    // NOP
    // 0x2bd90c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd90cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd910: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd914: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bd914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bd918: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bd918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bd91c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd920: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2bd920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2bd924: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2bd924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bd928: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd92c: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2bd92cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bd930: 0x3c03bd75  lui         $v1, 0xBD75
    ctx->pc = 0x2bd930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
    // 0x2bd934: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2bd934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2bd938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd93c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd940: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bd940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bd944: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bd944u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd948: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bd948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bd94c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD954u;
}
