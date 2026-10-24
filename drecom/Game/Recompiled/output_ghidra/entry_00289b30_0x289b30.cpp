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

// Function: entry_00289b30
// Address: 0x289b30 - 0x289b90
void entry_00289b30_0x289b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289b30_0x289b30");
#endif

    switch (ctx->pc) {
        case 0x289b7cu: goto label_289b7c;
        default: break;
    }

    ctx->pc = 0x289b30u;

    // 0x289b30: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x289b30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
    // 0x289b34: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x289b34u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289b38: 0xc6415e00  lwc1        $f1, 0x5E00($s2)
    ctx->pc = 0x289b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289b3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x289b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x289b40: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x289b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x289b44: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x289b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289b48: 0x0  nop
    ctx->pc = 0x289b48u;
    // NOP
    // 0x289b4c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x289b4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x289b50: 0x163880  sll         $a3, $s6, 2
    ctx->pc = 0x289b50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x289b54: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x289b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x289b58: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x289b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x289b5c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x289b5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289b60: 0x8c4600d0  lw          $a2, 0xD0($v0)
    ctx->pc = 0x289b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x289b64: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x289b64u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289b68: 0x0  nop
    ctx->pc = 0x289b68u;
    // NOP
    // 0x289b6c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x289b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x289b70: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x289b70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x289b74: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x289B74u;
    SET_GPR_U32(ctx, 31, 0x289B7Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x289B74u, 0x289B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B7Cu;
label_289b7c:
    // 0x289b7c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x289b7cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289b80: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x289b80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289b84: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x289b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
    // 0x289b88: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x289b88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x289b8c: 0x0  nop
    ctx->pc = 0x289b8cu;
    // NOP
    ctx->pc = 0x289b90u;
}
