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

// Function: entry_00297ec0
// Address: 0x297ec0 - 0x297f54
void entry_00297ec0_0x297ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297ec0_0x297ec0");
#endif

    switch (ctx->pc) {
        case 0x297f4cu: goto label_297f4c;
        default: break;
    }

    ctx->pc = 0x297ec0u;

    // 0x297ec0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297ec4: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x297ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x297ec8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297ecc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x297ed0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x297ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297ed4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x297ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297edc: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x297EDCu;
    {
        const bool branch_taken_0x297edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x297edc) {
            ctx->pc = 0x297F54u;
            return;
        }
    }
    ctx->pc = 0x297EE4u;
    // 0x297ee4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x297ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x297ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297eec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297ef0: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x297ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x297ef4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x297ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x297ef8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297efc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297f00: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x297f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297f04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297f08: 0x24421340  addiu       $v0, $v0, 0x1340
    ctx->pc = 0x297f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4928));
    // 0x297f0c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x297f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x297f10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297f14: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x297f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297f18: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x297f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x297f1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x297f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x297f20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297f24: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x297f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297f28: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x297f28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297f2c: 0x2602000e  addiu       $v0, $s0, 0xE
    ctx->pc = 0x297f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x297f30: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x297f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297f34: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x297f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297f38: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x297f38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x297f3c: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x297f3cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x297f40: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x297f40u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x297f44: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x297F44u;
    SET_GPR_U32(ctx, 31, 0x297F4Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x297F44u, 0x297F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F4Cu;
label_297f4c:
    // 0x297f4c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x297F4Cu;
    {
        const bool branch_taken_0x297f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297f4c) {
            ctx->pc = 0x297FA0u;
            return;
        }
    }
    ctx->pc = 0x297F54u;
}
