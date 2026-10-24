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

// Function: entry_001b53d8
// Address: 0x1b53d8 - 0x1b5438
void entry_001b53d8_0x1b53d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b53d8_0x1b53d8");
#endif

    switch (ctx->pc) {
        case 0x1b53f8u: goto label_1b53f8;
        default: break;
    }

    ctx->pc = 0x1b53d8u;

    // 0x1b53d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1b53d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b53dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b53dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b53e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b53e4: 0xc48c00d4  lwc1        $f12, 0xD4($a0)
    ctx->pc = 0x1b53e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b53e8: 0xc46d1568  lwc1        $f13, 0x1568($v1)
    ctx->pc = 0x1b53e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b53ec: 0x9044156c  lbu         $a0, 0x156C($v0)
    ctx->pc = 0x1b53ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
    // 0x1b53f0: 0xc058978  jal         func_1625E0
    ctx->pc = 0x1B53F0u;
    SET_GPR_U32(ctx, 31, 0x1B53F8u);
    ctx->pc = 0x1625E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1625E0u, 0x1B53F0u, 0x1B53F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53F8u;
label_1b53f8:
    // 0x1b53f8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1b53f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b53fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5400: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1b5400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5404: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b5404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1b5408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b540c: 0x0  nop
    ctx->pc = 0x1b540cu;
    // NOP
    // 0x1b5410: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5414: 0x0  nop
    ctx->pc = 0x1b5414u;
    // NOP
    // 0x1b5418: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5418u;
    {
        const bool branch_taken_0x1b5418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5418) {
            ctx->pc = 0x1B5438u;
            return;
        }
    }
    ctx->pc = 0x1B5420u;
    // 0x1b5420: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5424: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b5424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b5428: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x1b5428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x1b542c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b542cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b5430: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5430u;
    {
        const bool branch_taken_0x1b5430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5430) {
            ctx->pc = 0x1B543Cu;
            return;
        }
    }
    ctx->pc = 0x1B5438u;
}
