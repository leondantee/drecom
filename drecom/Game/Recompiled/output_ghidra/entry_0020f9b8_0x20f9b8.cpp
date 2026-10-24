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

// Function: entry_0020f9b8
// Address: 0x20f9b8 - 0x20fa38
void entry_0020f9b8_0x20f9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f9b8_0x20f9b8");
#endif

    switch (ctx->pc) {
        case 0x20fa34u: goto label_20fa34;
        default: break;
    }

    ctx->pc = 0x20f9b8u;

    // 0x20f9b8: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20f9b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f9bc: 0x854a1278  lh          $t2, 0x1278($t2)
    ctx->pc = 0x20f9bcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
    // 0x20f9c0: 0xa3c3c  dsll32      $a3, $t2, 16
    ctx->pc = 0x20f9c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) << (32 + 16));
    // 0x20f9c4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x20f9c4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x20f9c8: 0x28e10281  slti        $at, $a3, 0x281
    ctx->pc = 0x20f9c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x20f9cc: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x20F9CCu;
    {
        const bool branch_taken_0x20f9cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f9cc) {
            ctx->pc = 0x20FA38u;
            return;
        }
    }
    ctx->pc = 0x20F9D4u;
    // 0x20f9d4: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x20f9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f9d8: 0x85031278  lh          $v1, 0x1278($t0)
    ctx->pc = 0x20f9d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4728)));
    // 0x20f9dc: 0x34c3c  dsll32      $t1, $v1, 16
    ctx->pc = 0x20f9dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20f9e0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x20f9e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x20f9e4: 0x292102c0  slti        $at, $t1, 0x2C0
    ctx->pc = 0x20f9e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)704) ? 1 : 0);
    // 0x20f9e8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x20F9E8u;
    {
        const bool branch_taken_0x20f9e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f9e8) {
            ctx->pc = 0x20FA38u;
            return;
        }
    }
    ctx->pc = 0x20F9F0u;
    // 0x20f9f0: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f9f4: 0x846a1278  lh          $t2, 0x1278($v1)
    ctx->pc = 0x20f9f4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20f9f8: 0xa1c3c  dsll32      $v1, $t2, 16
    ctx->pc = 0x20f9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 16));
    // 0x20f9fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20f9fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20fa00: 0x2464fd80  addiu       $a0, $v1, -0x280
    ctx->pc = 0x20fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966656));
    // 0x20fa04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20fa04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fa08: 0x0  nop
    ctx->pc = 0x20fa08u;
    // NOP
    // 0x20fa0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20fa0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20fa10: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x20fa10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x20fa14: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20fa14u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fa18: 0x0  nop
    ctx->pc = 0x20fa18u;
    // NOP
    // 0x20fa1c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x20fa1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20fa20: 0x0  nop
    ctx->pc = 0x20fa20u;
    // NOP
    // 0x20fa24: 0x0  nop
    ctx->pc = 0x20fa24u;
    // NOP
    // 0x20fa28: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fa2c: 0xc0962bc  jal         func_258AF0
    ctx->pc = 0x20FA2Cu;
    SET_GPR_U32(ctx, 31, 0x20FA34u);
    ctx->pc = 0x258AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AF0u, 0x20FA2Cu, 0x20FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA34u;
label_20fa34:
    // 0x20fa34: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20fa34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20fa38u;
}
