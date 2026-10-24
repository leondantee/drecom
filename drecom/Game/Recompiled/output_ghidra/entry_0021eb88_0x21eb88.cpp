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

// Function: entry_0021eb88
// Address: 0x21eb88 - 0x21ebec
void entry_0021eb88_0x21eb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021eb88_0x21eb88");
#endif

    switch (ctx->pc) {
        case 0x21ebacu: goto label_21ebac;
        default: break;
    }

    ctx->pc = 0x21eb88u;

    // 0x21eb88: 0x8e23012c  lw          $v1, 0x12C($s1)
    ctx->pc = 0x21eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x21eb8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21eb90: 0x14640022  bne         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x21EB90u;
    {
        const bool branch_taken_0x21eb90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x21eb90) {
            ctx->pc = 0x21EC1Cu;
            return;
        }
    }
    ctx->pc = 0x21EB98u;
    // 0x21eb98: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21eb9c: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x21eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x21eba0: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x21eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x21eba4: 0xc067594  jal         func_19D650
    ctx->pc = 0x21EBA4u;
    SET_GPR_U32(ctx, 31, 0x21EBACu);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x21EBA4u, 0x21EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBACu;
label_21ebac:
    // 0x21ebac: 0x3c0343b9  lui         $v1, 0x43B9
    ctx->pc = 0x21ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17337 << 16));
    // 0x21ebb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ebb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ebb4: 0x0  nop
    ctx->pc = 0x21ebb4u;
    // NOP
    // 0x21ebb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21ebb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ebbc: 0x0  nop
    ctx->pc = 0x21ebbcu;
    // NOP
    // 0x21ebc0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x21EBC0u;
    {
        const bool branch_taken_0x21ebc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ebc0) {
            ctx->pc = 0x21EC1Cu;
            return;
        }
    }
    ctx->pc = 0x21EBC8u;
    // 0x21ebc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x21ebc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x21ebcc: 0x8424f1ac  lh          $a0, -0xE54($at)
    ctx->pc = 0x21ebccu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x21ebd0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x21ebd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x21ebd4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x21ebd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x21ebd8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x21EBD8u;
    {
        const bool branch_taken_0x21ebd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ebd8) {
            ctx->pc = 0x21EC1Cu;
            return;
        }
    }
    ctx->pc = 0x21EBE0u;
    // 0x21ebe0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x21ebe0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ebe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21EBE4u;
    {
        const bool branch_taken_0x21ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ebe4) {
            ctx->pc = 0x21EC00u;
            return;
        }
    }
    ctx->pc = 0x21EBECu;
}
