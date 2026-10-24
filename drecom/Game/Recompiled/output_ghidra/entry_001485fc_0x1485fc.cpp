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

// Function: entry_001485fc
// Address: 0x1485fc - 0x148650
void entry_001485fc_0x1485fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001485fc_0x1485fc");
#endif

    switch (ctx->pc) {
        case 0x148620u: goto label_148620;
        default: break;
    }

    ctx->pc = 0x1485fcu;

    // 0x1485fc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1485fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x148600: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148604: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x148604u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x148608: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14860c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148610: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x148610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x148614: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x148614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x148618: 0xc058f20  jal         func_163C80
    ctx->pc = 0x148618u;
    SET_GPR_U32(ctx, 31, 0x148620u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x148618u, 0x148620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148620u;
label_148620:
    // 0x148620: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148624: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x148624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x148628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x148628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14862c: 0x0  nop
    ctx->pc = 0x14862cu;
    // NOP
    // 0x148630: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x148630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x148634: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x148634u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x148638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14863c: 0xe4401578  swc1        $f0, 0x1578($v0)
    ctx->pc = 0x14863cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5496), bits); }
    // 0x148640: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148644: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x148648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14864c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14864cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x148650u;
}
