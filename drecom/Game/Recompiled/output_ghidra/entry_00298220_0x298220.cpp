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

// Function: entry_00298220
// Address: 0x298220 - 0x298270
void entry_00298220_0x298220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298220_0x298220");
#endif

    ctx->pc = 0x298220u;

    // 0x298220: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x298224: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x298224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x298228: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x298228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x29822c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29822cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298230: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x298234: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x298234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x298238: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x298238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29823c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298240: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x298240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x298244: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x298244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x298248: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29824c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x29824cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x298250: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x298250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x298254: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x298254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298258: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29825c: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x29825cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x298260: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x298260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298264: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x298264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298268: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x298268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29826c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x29826cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    ctx->pc = 0x298270u;
}
