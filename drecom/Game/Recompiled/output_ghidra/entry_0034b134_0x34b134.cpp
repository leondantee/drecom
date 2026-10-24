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

// Function: entry_0034b134
// Address: 0x34b134 - 0x34b18c
void entry_0034b134_0x34b134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034b134_0x34b134");
#endif

    switch (ctx->pc) {
        case 0x34b184u: goto label_34b184;
        default: break;
    }

    ctx->pc = 0x34b134u;

    // 0x34b134: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b138: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34b138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b13c: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x34b13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b140: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b144: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x34b144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b148: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34b148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b14c: 0x0  nop
    ctx->pc = 0x34b14cu;
    // NOP
    // 0x34b150: 0x4501007e  bc1t        . + 4 + (0x7E << 2)
    ctx->pc = 0x34B150u;
    {
        const bool branch_taken_0x34b150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b150) {
            ctx->pc = 0x34B34Cu;
            return;
        }
    }
    ctx->pc = 0x34B158u;
    // 0x34b158: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x34b158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34b15c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b160: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34b160u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b164: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b168: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b16c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34b16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34b170: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x34b170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x34b174: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b178: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b17c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B17Cu;
    SET_GPR_U32(ctx, 31, 0x34B184u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B17Cu, 0x34B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B184u;
label_34b184:
    // 0x34b184: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x34B184u;
    {
        const bool branch_taken_0x34b184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b184) {
            ctx->pc = 0x34B34Cu;
            return;
        }
    }
    ctx->pc = 0x34B18Cu;
}
