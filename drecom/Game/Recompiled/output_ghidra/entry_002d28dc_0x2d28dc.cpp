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

// Function: entry_002d28dc
// Address: 0x2d28dc - 0x2d2930
void entry_002d28dc_0x2d28dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d28dc_0x2d28dc");
#endif

    ctx->pc = 0x2d28dcu;

    // 0x2d28dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d28dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d28e0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d28e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d28e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d28e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d28e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d28e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d28ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D28ECu;
    {
        const bool branch_taken_0x2d28ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d28ec) {
            ctx->pc = 0x2D2930u;
            return;
        }
    }
    ctx->pc = 0x2D28F4u;
    // 0x2d28f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d28f8: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d28f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d28fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2900: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2d2900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2904: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d2908: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d2908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2d290c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2910: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2d2910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2914: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2918: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2d2918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d291c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d291cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2920: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d2920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2d2924: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2928: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D2928u;
    SET_GPR_U32(ctx, 31, 0x2D2930u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D2928u, 0x2D2930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2930u;
}
