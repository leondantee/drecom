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

// Function: entry_00318080
// Address: 0x318080 - 0x318138
void entry_00318080_0x318080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318080_0x318080");
#endif

    switch (ctx->pc) {
        case 0x318090u: goto label_318090;
        case 0x318134u: goto label_318134;
        default: break;
    }

    ctx->pc = 0x318080u;

    // 0x318080: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318084: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x318084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x318088: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x318088u;
    SET_GPR_U32(ctx, 31, 0x318090u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x318088u, 0x318090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318090u;
label_318090:
    // 0x318090: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x318090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318094: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x318094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x318098: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x318098u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31809c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31809cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3180a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3180a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3180a4: 0x24470030  addiu       $a3, $v0, 0x30
    ctx->pc = 0x3180a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3180a8: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x3180a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x3180ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3180acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3180b0: 0x0  nop
    ctx->pc = 0x3180b0u;
    // NOP
    // 0x3180b4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3180b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3180b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3180b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3180bc: 0x0  nop
    ctx->pc = 0x3180bcu;
    // NOP
    // 0x3180c0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3180c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3180c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3180c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3180c8: 0x0  nop
    ctx->pc = 0x3180c8u;
    // NOP
    // 0x3180cc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3180ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3180d0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3180d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3180d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3180d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3180d8: 0x0  nop
    ctx->pc = 0x3180d8u;
    // NOP
    // 0x3180dc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3180dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3180e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3180e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3180e4: 0x8c26013c  lw          $a2, 0x13C($at)
    ctx->pc = 0x3180e4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x3180e8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3180e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3180ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3180ECu;
    {
        const bool branch_taken_0x3180ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3180ec) {
            ctx->pc = 0x318138u;
            return;
        }
    }
    ctx->pc = 0x3180F4u;
    // 0x3180f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3180f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3180f8: 0x3c084300  lui         $t0, 0x4300
    ctx->pc = 0x3180f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17152 << 16));
    // 0x3180fc: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x3180fcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x318100: 0x3c063f7d  lui         $a2, 0x3F7D
    ctx->pc = 0x318100u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16253 << 16));
    // 0x318104: 0x34c470a4  ori         $a0, $a2, 0x70A4
    ctx->pc = 0x318104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)28836);
    // 0x318108: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x318108u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31810c: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x31810cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
    // 0x318110: 0x34878000  ori         $a3, $a0, 0x8000
    ctx->pc = 0x318110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x318114: 0x44877000  mtc1        $a3, $f14
    ctx->pc = 0x318114u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x318118: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x318118u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31811c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31811cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x318120: 0x24480120  addiu       $t0, $v0, 0x120
    ctx->pc = 0x318120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x318124: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x318124u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x318128: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x318128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31812c: 0xc086488  jal         func_219220
    ctx->pc = 0x31812Cu;
    SET_GPR_U32(ctx, 31, 0x318134u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x31812Cu, 0x318134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318134u;
label_318134:
    // 0x318134: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x318134u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x318138u;
}
