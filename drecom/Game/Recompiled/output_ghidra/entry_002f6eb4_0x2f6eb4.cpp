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

// Function: entry_002f6eb4
// Address: 0x2f6eb4 - 0x2f6f3c
void entry_002f6eb4_0x2f6eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6eb4_0x2f6eb4");
#endif

    switch (ctx->pc) {
        case 0x2f6ebcu: goto label_2f6ebc;
        case 0x2f6f1cu: goto label_2f6f1c;
        default: break;
    }

    ctx->pc = 0x2f6eb4u;

    // 0x2f6eb4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6EB4u;
    SET_GPR_U32(ctx, 31, 0x2F6EBCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6EB4u, 0x2F6EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6EBCu;
label_2f6ebc:
    // 0x2f6ebc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6ec0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f6ec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6ec4: 0x0  nop
    ctx->pc = 0x2f6ec4u;
    // NOP
    // 0x2f6ec8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6ec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6ecc: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f6ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6ed4: 0x0  nop
    ctx->pc = 0x2f6ed4u;
    // NOP
    // 0x2f6ed8: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6ed8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6edc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6ee0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6ee4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6ee8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6eec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6ef0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f6ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6ef4: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f6ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f6ef8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f6ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f6efc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f6efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6f00: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f6f00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f6f04: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2f6f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f6f08: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6f08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6f0c: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6f0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6f10: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6f10u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6f14: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6F14u;
    SET_GPR_U32(ctx, 31, 0x2F6F1Cu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6F14u, 0x2F6F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F1Cu;
label_2f6f1c:
    // 0x2f6f1c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2f6f1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6f20: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6f24: 0xa06a0100  sb          $t2, 0x100($v1)
    ctx->pc = 0x2f6f24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f6f28: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f6f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6f2c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6f30: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f6f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6f34: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2F6F34u;
    {
        const bool branch_taken_0x2f6f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6f34) {
            ctx->pc = 0x2F706Cu;
            return;
        }
    }
    ctx->pc = 0x2F6F3Cu;
}
