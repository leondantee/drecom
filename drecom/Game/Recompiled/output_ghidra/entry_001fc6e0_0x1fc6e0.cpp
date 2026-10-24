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

// Function: entry_001fc6e0
// Address: 0x1fc6e0 - 0x1fc73c
void entry_001fc6e0_0x1fc6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc6e0_0x1fc6e0");
#endif

    switch (ctx->pc) {
        case 0x1fc710u: goto label_1fc710;
        case 0x1fc72cu: goto label_1fc72c;
        default: break;
    }

    ctx->pc = 0x1fc6e0u;

    // 0x1fc6e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6e4: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fc6e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fc6e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc6ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc6f0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FC6F0u;
    {
        const bool branch_taken_0x1fc6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc6f0) {
            ctx->pc = 0x1FC73Cu;
            return;
        }
    }
    ctx->pc = 0x1FC6F8u;
    // 0x1fc6f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc700: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x1fc700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fc704: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x1fc704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1fc708: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FC708u;
    SET_GPR_U32(ctx, 31, 0x1FC710u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FC710u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC710u) { return; }
    ctx->pc = 0x1FC710u;
label_1fc710:
    // 0x1fc710: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc714: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc718: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fc718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc71c: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x1fc71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fc720: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x1fc720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x1fc724: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FC724u;
    SET_GPR_U32(ctx, 31, 0x1FC72Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FC72Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC72Cu) { return; }
    ctx->pc = 0x1FC72Cu;
label_1fc72c:
    // 0x1fc72c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc734: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc738: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1fc738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->pc = 0x1fc73cu;
}
