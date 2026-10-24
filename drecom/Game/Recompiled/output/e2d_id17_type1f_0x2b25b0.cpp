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

// Function: e2d_id17_type1f
// Address: 0x2b25b0 - 0x2b26c4
void e2d_id17_type1f_0x2b25b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type1f_0x2b25b0");
#endif

    switch (ctx->pc) {
        case 0x2b2618u: goto label_2b2618;
        default: break;
    }

    ctx->pc = 0x2b25b0u;

    // 0x2b25b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b25b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b25b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b25b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b25b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b25b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b25bc: 0x3c024364  lui         $v0, 0x4364
    ctx->pc = 0x2b25bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17252 << 16));
    // 0x2b25c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b25c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b25c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b25c8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b25c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b25cc: 0x3c024364  lui         $v0, 0x4364
    ctx->pc = 0x2b25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17252 << 16));
    // 0x2b25d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b25d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b25d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b25d8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b25d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b25dc: 0x3c024364  lui         $v0, 0x4364
    ctx->pc = 0x2b25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17252 << 16));
    // 0x2b25e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b25e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b25e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b25e8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b25e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b25ec: 0x3c024364  lui         $v0, 0x4364
    ctx->pc = 0x2b25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17252 << 16));
    // 0x2b25f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b25f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b25f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b25f8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b25f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b25fc: 0x3c023f63  lui         $v0, 0x3F63
    ctx->pc = 0x2b25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16227 << 16));
    // 0x2b2600: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2b2600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2b2604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2608: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b260c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b260cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b2610: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B2610u;
    SET_GPR_U32(ctx, 31, 0x2B2618u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B2610u, 0x2B2618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2618u;
label_2b2618:
    // 0x2b2618: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x2b2618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x2b261c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b261cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b2620: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b2620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2624: 0x0  nop
    ctx->pc = 0x2b2624u;
    // NOP
    // 0x2b2628: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b2628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b262c: 0x3c033f05  lui         $v1, 0x3F05
    ctx->pc = 0x2b262cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16133 << 16));
    // 0x2b2630: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x2b2630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7864);
    // 0x2b2634: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2638: 0x0  nop
    ctx->pc = 0x2b2638u;
    // NOP
    // 0x2b263c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b263cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b2640: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2644: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b2644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b2648: 0x3c0342d2  lui         $v1, 0x42D2
    ctx->pc = 0x2b2648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17106 << 16));
    // 0x2b264c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b264cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2650: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2654: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b2654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b2658: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b265c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b265cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2660: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b2660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2664: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2668: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b266c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b266cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b2670: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b2670u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b2674: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2678: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b2678u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b267c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b267cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2680: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2688: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b2688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b268c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b268cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b2690: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b2690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b2694: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2698: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b2698u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b269c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b269cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b26a0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2b26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b26a4: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x2b26a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2b26a8: 0x2464001e  addiu       $a0, $v1, 0x1E
    ctx->pc = 0x2b26a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x2b26ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b26acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b26b0: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b26b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b26b4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b26b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b26b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b26b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b26bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B26BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B26BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B26C4u;
}
