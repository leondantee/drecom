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

// Function: entry_001f02d8
// Address: 0x1f02d8 - 0x1f0328
void entry_001f02d8_0x1f02d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f02d8_0x1f02d8");
#endif

    switch (ctx->pc) {
        case 0x1f031cu: goto label_1f031c;
        default: break;
    }

    ctx->pc = 0x1f02d8u;

    // 0x1f02d8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f02d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f02dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f02dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f02e0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f02e4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f02e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f02e8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F02E8u;
    {
        const bool branch_taken_0x1f02e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f02e8) {
            ctx->pc = 0x1F0328u;
            return;
        }
    }
    ctx->pc = 0x1F02F0u;
    // 0x1f02f0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f02f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f02f4: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f02f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f02f8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f02fc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0300: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f0300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f0304: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f0304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f0308: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f0308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f030c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f030cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f0310: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f0310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f0314: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F0314u;
    SET_GPR_U32(ctx, 31, 0x1F031Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F0314u, 0x1F031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F031Cu;
label_1f031c:
    // 0x1f031c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f031cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1f0320: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F0320u;
    {
        const bool branch_taken_0x1f0320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0320) {
            ctx->pc = 0x1F036Cu;
            return;
        }
    }
    ctx->pc = 0x1F0328u;
}
