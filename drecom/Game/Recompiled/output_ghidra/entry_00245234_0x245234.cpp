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

// Function: entry_00245234
// Address: 0x245234 - 0x245284
void entry_00245234_0x245234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245234_0x245234");
#endif

    switch (ctx->pc) {
        case 0x245260u: goto label_245260;
        case 0x24527cu: goto label_24527c;
        default: break;
    }

    ctx->pc = 0x245234u;

    // 0x245234: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x245234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245238: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x245238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24523c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245240: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x245240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245244: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x245244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x245248: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x245248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24524c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x245250: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x245250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x245254: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x245254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x245258: 0xc05c848  jal         func_172120
    ctx->pc = 0x245258u;
    SET_GPR_U32(ctx, 31, 0x245260u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x245258u, 0x245260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245260u;
label_245260:
    // 0x245260: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x245260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x245264: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245268: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x245268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24526c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x24526cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245270: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x245270u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x245274: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x245274u;
    SET_GPR_U32(ctx, 31, 0x24527Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x245274u, 0x24527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24527Cu;
label_24527c:
    // 0x24527c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24527cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245280: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x245280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    ctx->pc = 0x245284u;
}
