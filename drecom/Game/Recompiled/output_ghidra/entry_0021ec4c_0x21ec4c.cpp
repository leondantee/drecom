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

// Function: entry_0021ec4c
// Address: 0x21ec4c - 0x21ec9c
void entry_0021ec4c_0x21ec4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ec4c_0x21ec4c");
#endif

    ctx->pc = 0x21ec4cu;

    // 0x21ec4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ec50: 0x8c640124  lw          $a0, 0x124($v1)
    ctx->pc = 0x21ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x21ec54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21ec58: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x21EC58u;
    {
        const bool branch_taken_0x21ec58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21ec58) {
            ctx->pc = 0x21EC9Cu;
            return;
        }
    }
    ctx->pc = 0x21EC60u;
    // 0x21ec60: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ec64: 0xc481010c  lwc1        $f1, 0x10C($a0)
    ctx->pc = 0x21ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ec68: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x21ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x21ec6c: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x21ec6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x21ec70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ec70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ec74: 0x0  nop
    ctx->pc = 0x21ec74u;
    // NOP
    // 0x21ec78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21ec78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21ec7c: 0xe480010c  swc1        $f0, 0x10C($a0)
    ctx->pc = 0x21ec7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 268), bits); }
    // 0x21ec80: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ec84: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x21ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x21ec88: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x21ec88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x21ec8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ec8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ec90: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x21ec90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ec94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21ec94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21ec98: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x21ec98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    ctx->pc = 0x21ec9cu;
}
