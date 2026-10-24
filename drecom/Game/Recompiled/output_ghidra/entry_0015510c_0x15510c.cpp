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

// Function: entry_0015510c
// Address: 0x15510c - 0x155174
void entry_0015510c_0x15510c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015510c_0x15510c");
#endif

    ctx->pc = 0x15510cu;

    // 0x15510c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x15510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155110: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x155110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x155114: 0xc48101c0  lwc1        $f1, 0x1C0($a0)
    ctx->pc = 0x155114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155118: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x155118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x15511c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15511cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155120: 0x0  nop
    ctx->pc = 0x155120u;
    // NOP
    // 0x155124: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x155124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x155128: 0xe48001c0  swc1        $f0, 0x1C0($a0)
    ctx->pc = 0x155128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 448), bits); }
    // 0x15512c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x15512cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155130: 0x84831250  lh          $v1, 0x1250($a0)
    ctx->pc = 0x155130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4688)));
    // 0x155134: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x155134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x155138: 0xa4831250  sh          $v1, 0x1250($a0)
    ctx->pc = 0x155138u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4688), (uint16_t)GPR_U32(ctx, 3));
    // 0x15513c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x15513cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155140: 0x84631250  lh          $v1, 0x1250($v1)
    ctx->pc = 0x155140u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4688)));
    // 0x155144: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x155144u;
    {
        const bool branch_taken_0x155144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155144) {
            ctx->pc = 0x155204u;
            return;
        }
    }
    ctx->pc = 0x15514Cu;
    // 0x15514c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x15514cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155150: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155154: 0xa4641250  sh          $a0, 0x1250($v1)
    ctx->pc = 0x155154u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4688), (uint16_t)GPR_U32(ctx, 4));
    // 0x155158: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15515c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15515cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155160: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x155160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155164: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155168: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x155168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x15516c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x15516Cu;
    {
        const bool branch_taken_0x15516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15516c) {
            ctx->pc = 0x155204u;
            return;
        }
    }
    ctx->pc = 0x155174u;
}
