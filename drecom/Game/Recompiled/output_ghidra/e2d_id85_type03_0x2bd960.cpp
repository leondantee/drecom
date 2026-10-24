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

// Function: e2d_id85_type03
// Address: 0x2bd960 - 0x2bda64
void e2d_id85_type03_0x2bd960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id85_type03_0x2bd960");
#endif

    switch (ctx->pc) {
        case 0x2bda00u: goto label_2bda00;
        default: break;
    }

    ctx->pc = 0x2bd960u;

    // 0x2bd960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bd964: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bd964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bd968: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bd968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bd96c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2bd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2bd970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd974: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd978: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bd978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bd97c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2bd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2bd980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd984: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd988: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bd988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bd98c: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2bd98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2bd990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd994: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd998: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bd998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bd99c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2bd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2bd9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd9a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd9a8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bd9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bd9ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2bd9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd9b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd9b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd9b8: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2bd9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2bd9bc: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2bd9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2bd9c0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2bd9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2bd9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd9c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd9cc: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2bd9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2bd9d0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2bd9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2bd9d4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2bd9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2bd9d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd9dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd9e0: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2bd9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2bd9e4: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x2bd9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x2bd9e8: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x2bd9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x2bd9ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd9f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd9f4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2bd9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2bd9f8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BD9F8u;
    SET_GPR_U32(ctx, 31, 0x2BDA00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BD9F8u, 0x2BDA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA00u;
label_2bda00:
    // 0x2bda00: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bda00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2bda04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bda04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bda08: 0x0  nop
    ctx->pc = 0x2bda08u;
    // NOP
    // 0x2bda0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bda0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bda10: 0x3c0343be  lui         $v1, 0x43BE
    ctx->pc = 0x2bda10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17342 << 16));
    // 0x2bda14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bda14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bda18: 0x0  nop
    ctx->pc = 0x2bda18u;
    // NOP
    // 0x2bda1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bda1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bda20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bda20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bda24: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bda24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bda28: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bda28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bda2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bda30: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2bda30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2bda34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2bda34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bda38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bda38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bda3c: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2bda3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bda40: 0x3c03bd75  lui         $v1, 0xBD75
    ctx->pc = 0x2bda40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
    // 0x2bda44: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2bda44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2bda48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bda48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bda4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bda4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bda50: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bda50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bda54: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bda54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bda58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bda58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bda5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDA64u;
}
