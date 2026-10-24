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

// Function: entry_001ed7f4
// Address: 0x1ed7f4 - 0x1ed874
void entry_001ed7f4_0x1ed7f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed7f4_0x1ed7f4");
#endif

    switch (ctx->pc) {
        case 0x1ed80cu: goto label_1ed80c;
        case 0x1ed824u: goto label_1ed824;
        case 0x1ed830u: goto label_1ed830;
        case 0x1ed860u: goto label_1ed860;
        default: break;
    }

    ctx->pc = 0x1ed7f4u;

    // 0x1ed7f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed7f8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ed7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed7fc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ed7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed800: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ed800u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ed804: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1ED804u;
    SET_GPR_U32(ctx, 31, 0x1ED80Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1ED804u, 0x1ED80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED80Cu;
label_1ed80c:
    // 0x1ed80c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed810: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ed810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ed814: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed818: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ed818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed81c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1ED81Cu;
    SET_GPR_U32(ctx, 31, 0x1ED824u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1ED81Cu, 0x1ED824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED824u;
label_1ed824:
    // 0x1ed824: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed828: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1ED828u;
    SET_GPR_U32(ctx, 31, 0x1ED830u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1ED828u, 0x1ED830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED830u;
label_1ed830:
    // 0x1ed830: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed834: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ed834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ed838: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1ED838u;
    {
        const bool branch_taken_0x1ed838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed838) {
            ctx->pc = 0x1ED944u;
            return;
        }
    }
    ctx->pc = 0x1ED840u;
    // 0x1ed840: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed844: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed848: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ed848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ed84c: 0x24067805  addiu       $a2, $zero, 0x7805
    ctx->pc = 0x1ed84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30725));
    // 0x1ed850: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ed850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed854: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ed854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ed858: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1ED858u;
    SET_GPR_U32(ctx, 31, 0x1ED860u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1ED858u, 0x1ED860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED860u;
label_1ed860:
    // 0x1ed860: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ed860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ed864: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed868: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ed868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed86c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1ED86Cu;
    {
        const bool branch_taken_0x1ed86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed86c) {
            ctx->pc = 0x1ED944u;
            return;
        }
    }
    ctx->pc = 0x1ED874u;
}
