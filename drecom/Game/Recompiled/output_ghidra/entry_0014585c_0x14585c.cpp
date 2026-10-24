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

// Function: entry_0014585c
// Address: 0x14585c - 0x1458b4
void entry_0014585c_0x14585c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014585c_0x14585c");
#endif

    switch (ctx->pc) {
        case 0x1458a4u: goto label_1458a4;
        default: break;
    }

    ctx->pc = 0x14585cu;

    // 0x14585c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x14585cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145860: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x145860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x145864: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x145864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x145868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x145868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14586c: 0x0  nop
    ctx->pc = 0x14586cu;
    // NOP
    // 0x145870: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145874: 0x0  nop
    ctx->pc = 0x145874u;
    // NOP
    // 0x145878: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x145878u;
    {
        const bool branch_taken_0x145878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145878) {
            ctx->pc = 0x1458B4u;
            return;
        }
    }
    ctx->pc = 0x145880u;
    // 0x145880: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x145880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x145884: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x145884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x145888: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x145888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14588c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145890: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145894: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x145894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145898: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x145898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14589c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x14589Cu;
    SET_GPR_U32(ctx, 31, 0x1458A4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14589Cu, 0x1458A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1458A4u;
label_1458a4:
    // 0x1458a4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1458a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1458a8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1458a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1458ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1458ACu;
    {
        const bool branch_taken_0x1458ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1458ac) {
            ctx->pc = 0x1458E0u;
            return;
        }
    }
    ctx->pc = 0x1458B4u;
}
