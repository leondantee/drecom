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

// Function: entry_002285e4
// Address: 0x2285e4 - 0x228630
void entry_002285e4_0x2285e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002285e4_0x2285e4");
#endif

    switch (ctx->pc) {
        case 0x2285f4u: goto label_2285f4;
        default: break;
    }

    ctx->pc = 0x2285e4u;

    // 0x2285e4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2285e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2285e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2285e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2285ec: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2285ECu;
    SET_GPR_U32(ctx, 31, 0x2285F4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2285ECu, 0x2285F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285F4u;
label_2285f4:
    // 0x2285f4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2285f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2285f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2285f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2285fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2285FCu;
    {
        const bool branch_taken_0x2285fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2285fc) {
            ctx->pc = 0x228630u;
            return;
        }
    }
    ctx->pc = 0x228604u;
    // 0x228604: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x228604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228608: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22860c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x22860cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x228610: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228614: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228618: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x228618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22861c: 0x24060420  addiu       $a2, $zero, 0x420
    ctx->pc = 0x22861cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x228620: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228624: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x228624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x228628: 0xc0965d0  jal         func_259740
    ctx->pc = 0x228628u;
    SET_GPR_U32(ctx, 31, 0x228630u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x228628u, 0x228630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228630u;
}
