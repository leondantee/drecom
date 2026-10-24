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

// Function: entry_0031ee8c
// Address: 0x31ee8c - 0x31eee4
void entry_0031ee8c_0x31ee8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ee8c_0x31ee8c");
#endif

    ctx->pc = 0x31ee8cu;

    // 0x31ee8c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ee8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ee90: 0x8c22af6c  lw          $v0, -0x5094($at)
    ctx->pc = 0x31ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF6Cu));
    // 0x31ee94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31ee98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ee9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x31eea0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x31eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x31eea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31eea8: 0x8c501390  lw          $s0, 0x1390($v0)
    ctx->pc = 0x31eea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x31eeac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x31eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31eeb0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31eeb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31eeb4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x31eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31eeb8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31eeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31eebc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31eec0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31eec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31eec4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31EEC4u;
    {
        const bool branch_taken_0x31eec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31eec4) {
            ctx->pc = 0x31EEE4u;
            return;
        }
    }
    ctx->pc = 0x31EECCu;
    // 0x31eecc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x31eeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31eed0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x31eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x31eed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31eed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31eed8: 0x0  nop
    ctx->pc = 0x31eed8u;
    // NOP
    // 0x31eedc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31eedcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31eee0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x31eee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x31eee4u;
}
