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

// Function: e2d_id05_type0b
// Address: 0x2af680 - 0x2af7e4
void e2d_id05_type0b_0x2af680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type0b_0x2af680");
#endif

    switch (ctx->pc) {
        case 0x2af6e8u: goto label_2af6e8;
        default: break;
    }

    ctx->pc = 0x2af680u;

    // 0x2af680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af684: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2af684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2af688: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2af688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2af68c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2af68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2af690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af694: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af698: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2af698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2af69c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2af69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2af6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af6a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af6a8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2af6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2af6ac: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2af6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2af6b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af6b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af6b8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2af6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2af6bc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2af6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2af6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af6c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af6c8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2af6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2af6cc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2af6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2af6d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2af6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2af6d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af6d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af6d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af6dc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2af6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2af6e0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AF6E0u;
    SET_GPR_U32(ctx, 31, 0x2AF6E8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AF6E0u, 0x2AF6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF6E8u;
label_2af6e8:
    // 0x2af6e8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2af6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2af6ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2af6ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af6f0: 0x0  nop
    ctx->pc = 0x2af6f0u;
    // NOP
    // 0x2af6f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2af6f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2af6f8: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2af6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2af6fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af6fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af700: 0x0  nop
    ctx->pc = 0x2af700u;
    // NOP
    // 0x2af704: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2af704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2af708: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af70c: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2af70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2af710: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2af710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2af714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af718: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af71c: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2af71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2af720: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2af720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2af724: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af728: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af72c: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2af72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2af730: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2af730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2af734: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af738: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af73c: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2af73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2af740: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2af740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2af744: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af748: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af74c: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2af74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2af750: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2af750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2af754: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2af754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2af758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af75c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af760: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2af760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2af764: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2af764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2af768: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af76c: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2af76cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af770: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2af770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af774: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af778: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2af778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af77c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2af77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2af780: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2af780u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2af784: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2af784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2af788: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2af788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af78c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2af78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2af790: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2af790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2af794: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2af794u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2af798: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2af798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2af79c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2af79cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2af7a0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2af7a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2af7a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2af7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af7a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2af7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2af7ac: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2af7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2af7b0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2af7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2af7b4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2af7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2af7b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2af7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2af7bc: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2af7bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2af7c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2af7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2af7c4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2af7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2af7c8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2af7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2af7cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af7d0: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2af7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af7d4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2af7d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af7d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2af7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2af7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF7E4u;
}
