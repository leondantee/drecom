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

// Function: entry_00369668
// Address: 0x369668 - 0x369720
void entry_00369668_0x369668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369668_0x369668");
#endif

    switch (ctx->pc) {
        case 0x369678u: goto label_369678;
        case 0x3696e8u: goto label_3696e8;
        case 0x369704u: goto label_369704;
        default: break;
    }

    ctx->pc = 0x369668u;

    // 0x369668: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36966c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x36966cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369670: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369670u;
    SET_GPR_U32(ctx, 31, 0x369678u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369678u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369678u) { return; }
    ctx->pc = 0x369678u;
label_369678:
    // 0x369678: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x369678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36967c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x36967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369680: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x369680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369684: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369688: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x369688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x36968c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x36968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369690: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x369690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369694: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x369694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369698: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x369698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36969c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x36969cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x3696a0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3696a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3696a4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3696a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3696a8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x3696a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3696ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3696acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3696b0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3696b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3696b4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3696b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3696b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3696b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3696bc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3696bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3696c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3696c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3696c4: 0x0  nop
    ctx->pc = 0x3696c4u;
    // NOP
    // 0x3696c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3696c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3696cc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3696ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3696d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3696d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3696d4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3696d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3696d8: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x3696d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3696dc: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x3696dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x3696e0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x3696E0u;
    SET_GPR_U32(ctx, 31, 0x3696E8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x3696E0u, 0x3696E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3696E8u;
label_3696e8:
    // 0x3696e8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x3696e8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3696ec: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x3696ECu;
    {
        const bool branch_taken_0x3696ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3696ec) {
            ctx->pc = 0x369720u;
            return;
        }
    }
    ctx->pc = 0x3696F4u;
    // 0x3696f4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3696f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3696f8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3696f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3696fc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3696FCu;
    SET_GPR_U32(ctx, 31, 0x369704u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369704u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369704u) { return; }
    ctx->pc = 0x369704u;
label_369704:
    // 0x369704: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x369704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x369708: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x369708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36970c: 0xa0640011  sb          $a0, 0x11($v1)
    ctx->pc = 0x36970cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x369710: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x369710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369714: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x369714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x369718: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x369718u;
    {
        const bool branch_taken_0x369718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369718) {
            ctx->pc = 0x36975Cu;
            return;
        }
    }
    ctx->pc = 0x369720u;
}
