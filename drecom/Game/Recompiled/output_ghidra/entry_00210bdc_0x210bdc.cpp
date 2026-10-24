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

// Function: entry_00210bdc
// Address: 0x210bdc - 0x210cd0
void entry_00210bdc_0x210bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210bdc_0x210bdc");
#endif

    switch (ctx->pc) {
        case 0x210c28u: goto label_210c28;
        case 0x210c4cu: goto label_210c4c;
        case 0x210c70u: goto label_210c70;
        default: break;
    }

    ctx->pc = 0x210bdcu;

    // 0x210bdc: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210be0: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x210be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x210be4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x210be4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x210be8: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x210be8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x210bec: 0x252a9260  addiu       $t2, $t1, -0x6DA0
    ctx->pc = 0x210becu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294939232));
    // 0x210bf0: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x210bf0u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x619260u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x619260u, _value); } while (0);
    // 0x210bf4: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210bf8: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x210bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x210bfc: 0x24a30070  addiu       $v1, $a1, 0x70
    ctx->pc = 0x210bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x210c00: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x210c00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210c04: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x210c04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x210c08: 0x24c79250  addiu       $a3, $a2, -0x6DB0
    ctx->pc = 0x210c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939216));
    // 0x210c0c: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x210c0cu;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x619250u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x619250u, _value); } while (0);
    // 0x210c10: 0x27a903c0  addiu       $t1, $sp, 0x3C0
    ctx->pc = 0x210c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x210c14: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x210c14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x210c18: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x210c1c: 0xc42c9260  lwc1        $f12, -0x6DA0($at)
    ctx->pc = 0x210c1cu;
    { uint32_t bits = FAST_READ32(0x619260u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210c20: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x210C20u;
    SET_GPR_U32(ctx, 31, 0x210C28u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x210C20u, 0x210C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C28u;
label_210c28:
    // 0x210c28: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x210c28u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210c2c: 0x27ab03c0  addiu       $t3, $sp, 0x3C0
    ctx->pc = 0x210c2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x210c30: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x210c30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x210c34: 0x27aa03c0  addiu       $t2, $sp, 0x3C0
    ctx->pc = 0x210c34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x210c38: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x210c38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x210c3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x210c40: 0xc42c9264  lwc1        $f12, -0x6D9C($at)
    ctx->pc = 0x210c40u;
    { uint32_t bits = FAST_READ32(0x619264u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210c44: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x210C44u;
    SET_GPR_U32(ctx, 31, 0x210C4Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x210C4Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210C4Cu) { return; }
    ctx->pc = 0x210C4Cu;
label_210c4c:
    // 0x210c4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210c4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210c50: 0x27a903c0  addiu       $t1, $sp, 0x3C0
    ctx->pc = 0x210c50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x210c54: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x210c54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x210c58: 0x27aa03c0  addiu       $t2, $sp, 0x3C0
    ctx->pc = 0x210c58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x210c5c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x210c5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x210c60: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x210c64: 0xc42c9268  lwc1        $f12, -0x6D98($at)
    ctx->pc = 0x210c64u;
    { uint32_t bits = FAST_READ32(0x619268u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210c68: 0xc040ce4  jal         func_103390
    ctx->pc = 0x210C68u;
    SET_GPR_U32(ctx, 31, 0x210C70u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x210C70u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210C70u) { return; }
    ctx->pc = 0x210C70u;
label_210c70:
    // 0x210c70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210c70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210c74: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x210c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210c78: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x210c78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x210c7c: 0x35c3c  dsll32      $t3, $v1, 16
    ctx->pc = 0x210c7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 16));
    // 0x210c80: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x210c80u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x210c84: 0x29610190  slti        $at, $t3, 0x190
    ctx->pc = 0x210c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x210c88: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x210C88u;
    {
        const bool branch_taken_0x210c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210c88) {
            ctx->pc = 0x210CD0u;
            return;
        }
    }
    ctx->pc = 0x210C90u;
    // 0x210c90: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210c94: 0x84691278  lh          $t1, 0x1278($v1)
    ctx->pc = 0x210c94u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x210c98: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x210c98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
    // 0x210c9c: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x210c9cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x210ca0: 0x2548fed4  addiu       $t0, $t2, -0x12C
    ctx->pc = 0x210ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966996));
    // 0x210ca4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x210ca4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210ca8: 0x0  nop
    ctx->pc = 0x210ca8u;
    // NOP
    // 0x210cac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x210cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x210cb0: 0x3c0a3d4c  lui         $t2, 0x3D4C
    ctx->pc = 0x210cb0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15692 << 16));
    // 0x210cb4: 0x3549cccd  ori         $t1, $t2, 0xCCCD
    ctx->pc = 0x210cb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)52429);
    // 0x210cb8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x210cb8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210cbc: 0x0  nop
    ctx->pc = 0x210cbcu;
    // NOP
    // 0x210cc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x210cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x210cc4: 0xe7a00514  swc1        $f0, 0x514($sp)
    ctx->pc = 0x210cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1300), bits); }
    // 0x210cc8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x210CC8u;
    {
        const bool branch_taken_0x210cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210cc8) {
            ctx->pc = 0x210D3Cu;
            return;
        }
    }
    ctx->pc = 0x210CD0u;
}
