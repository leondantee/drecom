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

// Function: entry_001fdf40
// Address: 0x1fdf40 - 0x1fdf98
void entry_001fdf40_0x1fdf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdf40_0x1fdf40");
#endif

    switch (ctx->pc) {
        case 0x1fdf64u: goto label_1fdf64;
        default: break;
    }

    ctx->pc = 0x1fdf40u;

    // 0x1fdf40: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fdf40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdf44: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fdf44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdf48: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x1fdf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fdf4c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1fdf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fdf50: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x1fdf50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fdf54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fdf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdf58: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1fdf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fdf5c: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x1FDF5Cu;
    SET_GPR_U32(ctx, 31, 0x1FDF64u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x1FDF64u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FDF64u) { return; }
    ctx->pc = 0x1FDF64u;
label_1fdf64:
    // 0x1fdf64: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fdf64u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fdf68: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdf6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fdf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdf70: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fdf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdf74: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1fdf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fdf78: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1fdf78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1fdf7c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1fdf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1fdf80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fdf80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdf84: 0x0  nop
    ctx->pc = 0x1fdf84u;
    // NOP
    // 0x1fdf88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fdf88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fdf8c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1fdf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1fdf90: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fdf90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fdf94: 0x0  nop
    ctx->pc = 0x1fdf94u;
    // NOP
    ctx->pc = 0x1fdf98u;
}
