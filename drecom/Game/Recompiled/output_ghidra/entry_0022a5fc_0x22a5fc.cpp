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

// Function: entry_0022a5fc
// Address: 0x22a5fc - 0x22a68c
void entry_0022a5fc_0x22a5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a5fc_0x22a5fc");
#endif

    switch (ctx->pc) {
        case 0x22a628u: goto label_22a628;
        case 0x22a644u: goto label_22a644;
        case 0x22a65cu: goto label_22a65c;
        case 0x22a668u: goto label_22a668;
        default: break;
    }

    ctx->pc = 0x22a5fcu;

    // 0x22a5fc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a600: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22a600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a604: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a608: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22a608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22a60c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22a610: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22a614: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22a614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22a618: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22a618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22a61c: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22a61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22a620: 0xc05c848  jal         func_172120
    ctx->pc = 0x22A620u;
    SET_GPR_U32(ctx, 31, 0x22A628u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22A620u, 0x22A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A628u;
label_22a628:
    // 0x22a628: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x22a628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x22a62c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a630: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22a630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a634: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x22a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a638: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22a638u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22a63c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22A63Cu;
    SET_GPR_U32(ctx, 31, 0x22A644u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22A63Cu, 0x22A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A644u;
label_22a644:
    // 0x22a644: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a648: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22a648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22a64c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a650: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22a650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22a654: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22A654u;
    SET_GPR_U32(ctx, 31, 0x22A65Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22A654u, 0x22A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A65Cu;
label_22a65c:
    // 0x22a65c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a660: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22A660u;
    SET_GPR_U32(ctx, 31, 0x22A668u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22A660u, 0x22A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A668u;
label_22a668:
    // 0x22a668: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a66c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22a66cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22a670: 0x106000e2  beqz        $v1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x22A670u;
    {
        const bool branch_taken_0x22a670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a670) {
            ctx->pc = 0x22A9FCu;
            return;
        }
    }
    ctx->pc = 0x22A678u;
    // 0x22a678: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x22a678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22a67c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a680: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22a680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x22a684: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x22A684u;
    {
        const bool branch_taken_0x22a684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a684) {
            ctx->pc = 0x22A9FCu;
            return;
        }
    }
    ctx->pc = 0x22A68Cu;
}
