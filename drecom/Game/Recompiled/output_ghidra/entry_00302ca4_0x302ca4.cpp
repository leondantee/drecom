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

// Function: entry_00302ca4
// Address: 0x302ca4 - 0x302cec
void entry_00302ca4_0x302ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302ca4_0x302ca4");
#endif

    switch (ctx->pc) {
        case 0x302cd0u: goto label_302cd0;
        case 0x302ce4u: goto label_302ce4;
        default: break;
    }

    ctx->pc = 0x302ca4u;

    // 0x302ca4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ca8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x302ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302cac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302cb0: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x302cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x302cb4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x302cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x302cb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302cbc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x302cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x302cc0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x302cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302cc4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x302cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x302cc8: 0xc05c848  jal         func_172120
    ctx->pc = 0x302CC8u;
    SET_GPR_U32(ctx, 31, 0x302CD0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x302CC8u, 0x302CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CD0u;
label_302cd0:
    // 0x302cd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302cd4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x302cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302cd8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x302cd8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x302cdc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x302CDCu;
    SET_GPR_U32(ctx, 31, 0x302CE4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x302CDCu, 0x302CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CE4u;
label_302ce4:
    // 0x302ce4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ce8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x302ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x302cecu;
}
