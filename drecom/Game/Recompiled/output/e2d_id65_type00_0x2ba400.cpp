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

// Function: e2d_id65_type00
// Address: 0x2ba400 - 0x2ba524
void e2d_id65_type00_0x2ba400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id65_type00_0x2ba400");
#endif

    switch (ctx->pc) {
        case 0x2ba41cu: goto label_2ba41c;
        case 0x2ba43cu: goto label_2ba43c;
        default: break;
    }

    ctx->pc = 0x2ba400u;

    // 0x2ba400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba404: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ba404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ba408: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ba408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ba40c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba410: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2ba410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2ba414: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2BA414u;
    SET_GPR_U32(ctx, 31, 0x2BA41Cu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2BA414u, 0x2BA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA41Cu;
label_2ba41c:
    // 0x2ba41c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ba41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba420: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba424: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x2ba424u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ba428: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ba428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ba42c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ba42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba430: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ba430u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ba434: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BA434u;
    SET_GPR_U32(ctx, 31, 0x2BA43Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BA434u, 0x2BA43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA43Cu;
label_2ba43c:
    // 0x2ba43c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2ba43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2ba440: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ba440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba444: 0x0  nop
    ctx->pc = 0x2ba444u;
    // NOP
    // 0x2ba448: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ba448u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ba44c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2ba44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2ba450: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba454: 0x0  nop
    ctx->pc = 0x2ba454u;
    // NOP
    // 0x2ba458: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ba458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ba45c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba460: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ba460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ba464: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ba464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ba468: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba46c: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2ba46cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ba470: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x2ba470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x2ba474: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2ba474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2ba478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba47c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba480: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ba480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ba484: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba488: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ba488u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba48c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ba48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ba490: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ba490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ba494: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ba494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ba498: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ba498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ba49c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ba49cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ba4a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba4a4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ba4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ba4a8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ba4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ba4ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ba4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ba4b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ba4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ba4b4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ba4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ba4b8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ba4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ba4bc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ba4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ba4c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ba4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ba4c4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ba4c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ba4c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ba4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ba4cc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2ba4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2ba4d0: 0x2464001e  addiu       $a0, $v1, 0x1E
    ctx->pc = 0x2ba4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x2ba4d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba4d8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2ba4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2ba4dc: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2ba4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2ba4e0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ba4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ba4e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba4e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba4ec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2ba4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2ba4f0: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x2ba4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
    // 0x2ba4f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba4f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba4f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba4fc: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2ba4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2ba500: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2ba500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2ba504: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2ba504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2ba508: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba50c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ba50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba510: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x2ba510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x2ba514: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ba514u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba518: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ba518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba51c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA524u;
}
