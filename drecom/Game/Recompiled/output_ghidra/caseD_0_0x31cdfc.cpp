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

// Function: caseD_0
// Address: 0x31cdfc - 0x31ceac
void caseD_0_0x31cdfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x31cdfc");
#endif

    switch (ctx->pc) {
        case 0x31ce60u: goto label_31ce60;
        default: break;
    }

    ctx->pc = 0x31cdfcu;

    // 0x31cdfc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ce00: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x31ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
    // 0x31ce04: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ce08: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31ce0c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31ce0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ce10: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x31ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31ce14: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31ce14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x31ce18: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ce1c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31ce20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31ce20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ce24: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31ce28: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31ce28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31ce2c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31ce2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ce30: 0x3c024743  lui         $v0, 0x4743
    ctx->pc = 0x31ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18243 << 16));
    // 0x31ce34: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x31ce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x31ce38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ce38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ce3c: 0x0  nop
    ctx->pc = 0x31ce3cu;
    // NOP
    // 0x31ce40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31ce40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31ce44: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31ce44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31ce48: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x31ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31ce4c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x31ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31ce50: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31ce50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31ce54: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31ce54u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ce58: 0xc059e1c  jal         func_167870
    ctx->pc = 0x31CE58u;
    SET_GPR_U32(ctx, 31, 0x31CE60u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x31CE58u, 0x31CE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE60u;
label_31ce60:
    // 0x31ce60: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x31ce60u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31ce64: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x31CE64u;
    {
        const bool branch_taken_0x31ce64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ce64) {
            ctx->pc = 0x31CEACu;
            return;
        }
    }
    ctx->pc = 0x31CE6Cu;
    // 0x31ce6c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x31ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31ce70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31ce70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ce74: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ce78: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x31ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x31ce7c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31ce7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31ce80: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ce84: 0xc4611304  lwc1        $f1, 0x1304($v1)
    ctx->pc = 0x31ce84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ce88: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x31ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x31ce8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ce8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ce90: 0x0  nop
    ctx->pc = 0x31ce90u;
    // NOP
    // 0x31ce94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31ce94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31ce98: 0xe4601304  swc1        $f0, 0x1304($v1)
    ctx->pc = 0x31ce98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4868), bits); }
    // 0x31ce9c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31ce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cea0: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x31cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x31cea4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x31cea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x31cea8: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x31cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    ctx->pc = 0x31ceacu;
}
