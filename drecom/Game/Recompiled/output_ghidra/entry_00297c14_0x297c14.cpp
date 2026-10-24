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

// Function: entry_00297c14
// Address: 0x297c14 - 0x297ca0
void entry_00297c14_0x297c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297c14_0x297c14");
#endif

    switch (ctx->pc) {
        case 0x297c5cu: goto label_297c5c;
        default: break;
    }

    ctx->pc = 0x297c14u;

    // 0x297c14: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x297c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x297c18: 0x244268a0  addiu       $v0, $v0, 0x68A0
    ctx->pc = 0x297c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26784));
    // 0x297c1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x297c20: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x297c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297c24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x297c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297c28: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x297c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x297c2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297c30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x297c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x297c34: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x297c34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x297c38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x297c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297c3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x297c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297c40: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x297c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x297c44: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x297c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x297c48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297c50: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x297c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297c54: 0xc067654  jal         func_19D950
    ctx->pc = 0x297C54u;
    SET_GPR_U32(ctx, 31, 0x297C5Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x297C54u, 0x297C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C5Cu;
label_297c5c:
    // 0x297c5c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x297c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x297c60: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x297c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x297c64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x297c64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297c68: 0x0  nop
    ctx->pc = 0x297c68u;
    // NOP
    // 0x297c6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x297c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297c70: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x297c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x297c74: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x297c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x297c78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297c7c: 0x0  nop
    ctx->pc = 0x297c7cu;
    // NOP
    // 0x297c80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x297c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x297c84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x297c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297c88: 0x24631340  addiu       $v1, $v1, 0x1340
    ctx->pc = 0x297c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4928));
    // 0x297c8c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x297c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x297c90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x297c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297c94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x297c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x297c98: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x297c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x297c9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x297c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x297ca0u;
}
