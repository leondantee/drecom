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

// Function: Set_effect_em02_uji_eki_hagare
// Address: 0x312520 - 0x312614
void Set_effect_em02_uji_eki_hagare_0x312520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em02_uji_eki_hagare_0x312520");
#endif

    switch (ctx->pc) {
        case 0x31254cu: goto label_31254c;
        case 0x312598u: goto label_312598;
        case 0x3125f4u: goto label_3125f4;
        default: break;
    }

    ctx->pc = 0x312520u;

    // 0x312520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x312520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x312524: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x312524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x312528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31252c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31252cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x312530: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x312530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x312534: 0x24043900  addiu       $a0, $zero, 0x3900
    ctx->pc = 0x312534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14592));
    // 0x312538: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x312538u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31253c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x31253cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x312540: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x312540u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x312544: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x312544u;
    SET_GPR_U32(ctx, 31, 0x31254Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x312544u, 0x31254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31254Cu;
label_31254c:
    // 0x31254c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x31254cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x312550: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312558: 0x0  nop
    ctx->pc = 0x312558u;
    // NOP
    // 0x31255c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x31255cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x312560: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312568: 0x0  nop
    ctx->pc = 0x312568u;
    // NOP
    // 0x31256c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x31256cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x312570: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312578: 0x0  nop
    ctx->pc = 0x312578u;
    // NOP
    // 0x31257c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x31257cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x312580: 0x3c0242ec  lui         $v0, 0x42EC
    ctx->pc = 0x312580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17132 << 16));
    // 0x312584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312588: 0x0  nop
    ctx->pc = 0x312588u;
    // NOP
    // 0x31258c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x31258cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x312590: 0xc067648  jal         func_19D920
    ctx->pc = 0x312590u;
    SET_GPR_U32(ctx, 31, 0x312598u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x312590u, 0x312598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312598u;
label_312598:
    // 0x312598: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x312598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x31259c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31259cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3125a0: 0x0  nop
    ctx->pc = 0x3125a0u;
    // NOP
    // 0x3125a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3125a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3125a8: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x3125a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x3125ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3125acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3125b0: 0x0  nop
    ctx->pc = 0x3125b0u;
    // NOP
    // 0x3125b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3125b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3125b8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3125b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3125bc: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x3125bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x3125c0: 0x3c02bcf5  lui         $v0, 0xBCF5
    ctx->pc = 0x3125c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48373 << 16));
    // 0x3125c4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x3125c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x3125c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3125c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3125cc: 0x0  nop
    ctx->pc = 0x3125ccu;
    // NOP
    // 0x3125d0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x3125d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x3125d4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x3125d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x3125d8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3125d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3125dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3125dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3125e0: 0x0  nop
    ctx->pc = 0x3125e0u;
    // NOP
    // 0x3125e4: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x3125e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x3125e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3125e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3125ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3125ECu;
    SET_GPR_U32(ctx, 31, 0x3125F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3125ECu, 0x3125F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125F4u;
label_3125f4:
    // 0x3125f4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3125f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3125f8: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x3125f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3125fc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3125fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x312604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312608: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x312608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31260c: 0x3e00008  jr          $ra
    ctx->pc = 0x31260Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31260Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312614u;
}
