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

// Function: caseD_1
// Address: 0x2d2890 - 0x2d28dc
void caseD_1_0x2d2890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2d2890");
#endif

    ctx->pc = 0x2d2890u;

    // 0x2d2890: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2894: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d2894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d2898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d2898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d289c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2d289cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2d28a0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D28A0u;
    {
        const bool branch_taken_0x2d28a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d28a0) {
            ctx->pc = 0x2D28DCu;
            return;
        }
    }
    ctx->pc = 0x2D28A8u;
    // 0x2d28a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d28a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d28ac: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2d28acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d28b0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2d28b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2d28b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d28b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d28b8: 0x0  nop
    ctx->pc = 0x2d28b8u;
    // NOP
    // 0x2d28bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d28bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d28c0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2d28c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2d28c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d28c8: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d28c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d28cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d28d0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2d28d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d28d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d28d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d28d8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d28d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x2d28dcu;
}
