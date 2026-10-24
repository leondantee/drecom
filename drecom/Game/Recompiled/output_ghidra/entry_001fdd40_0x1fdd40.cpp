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

// Function: entry_001fdd40
// Address: 0x1fdd40 - 0x1fdd88
void entry_001fdd40_0x1fdd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdd40_0x1fdd40");
#endif

    ctx->pc = 0x1fdd40u;

    // 0x1fdd40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fdd40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fdd44: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fdd44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fdd48: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1fdd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1fdd4c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdd50: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fdd50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fdd54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fdd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdd58: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fdd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fdd5c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fdd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fdd60: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdd64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fdd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdd68: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fdd68u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fdd6c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fdd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdd70: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdd74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fdd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdd78: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fdd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fdd7c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fdd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fdd80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fdd80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fdd84: 0x0  nop
    ctx->pc = 0x1fdd84u;
    // NOP
    ctx->pc = 0x1fdd88u;
}
