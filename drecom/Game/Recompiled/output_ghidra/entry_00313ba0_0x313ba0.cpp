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

// Function: entry_00313ba0
// Address: 0x313ba0 - 0x313be0
void entry_00313ba0_0x313ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313ba0_0x313ba0");
#endif

    ctx->pc = 0x313ba0u;

    // 0x313ba0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x313ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x313ba4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x313ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x313ba8: 0x24421c00  addiu       $v0, $v0, 0x1C00
    ctx->pc = 0x313ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7168));
    // 0x313bac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313bb0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x313bb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x313bb4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x313bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x313bb8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x313bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x313bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313bc0: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x313BC0u;
    {
        const bool branch_taken_0x313bc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x313bc0) {
            ctx->pc = 0x313BE0u;
            return;
        }
    }
    ctx->pc = 0x313BC8u;
    // 0x313bc8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x313bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x313bcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313bd0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x313bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313bd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x313bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x313bd8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x313bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x313bdc: 0x0  nop
    ctx->pc = 0x313bdcu;
    // NOP
    ctx->pc = 0x313be0u;
}
