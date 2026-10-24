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

// Function: e2d_id67_type02
// Address: 0x2ba720 - 0x2ba838
void e2d_id67_type02_0x2ba720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id67_type02_0x2ba720");
#endif

    switch (ctx->pc) {
        case 0x2ba774u: goto label_2ba774;
        default: break;
    }

    ctx->pc = 0x2ba720u;

    // 0x2ba720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba724: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ba724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ba728: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ba728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ba72c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ba72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba734: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba738: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ba738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ba73c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ba73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba744: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba748: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ba748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ba74c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ba74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba754: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba758: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ba758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ba75c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ba75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba764: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba768: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ba768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ba76c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BA76Cu;
    SET_GPR_U32(ctx, 31, 0x2BA774u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BA76Cu, 0x2BA774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA774u;
label_2ba774:
    // 0x2ba774: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2ba774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2ba778: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ba778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba77c: 0x0  nop
    ctx->pc = 0x2ba77cu;
    // NOP
    // 0x2ba780: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ba780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ba784: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x2ba784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x2ba788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba78c: 0x0  nop
    ctx->pc = 0x2ba78cu;
    // NOP
    // 0x2ba790: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ba790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ba794: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba798: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ba798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ba79c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ba79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ba7a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba7a4: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2ba7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2ba7a8: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x2ba7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x2ba7ac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ba7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ba7b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba7b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba7b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba7b8: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ba7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ba7bc: 0x3c033f45  lui         $v1, 0x3F45
    ctx->pc = 0x2ba7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16197 << 16));
    // 0x2ba7c0: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x2ba7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7864);
    // 0x2ba7c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba7c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba7c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba7cc: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2ba7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2ba7d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba7d4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ba7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba7d8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ba7d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ba7dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ba7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ba7e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ba7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ba7e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ba7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ba7e8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ba7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ba7ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba7f0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ba7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba7f4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ba7f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ba7f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ba7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ba7fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ba7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ba800: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ba800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ba804: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ba804u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ba808: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ba808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ba80c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba810: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ba810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ba814: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ba814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ba818: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2ba818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2ba81c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ba81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ba820: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba824: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2ba824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ba828: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ba828u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba82c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ba82cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba830: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA838u;
}
