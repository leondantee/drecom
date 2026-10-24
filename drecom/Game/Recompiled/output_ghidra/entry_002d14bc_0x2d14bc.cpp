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

// Function: entry_002d14bc
// Address: 0x2d14bc - 0x2d1538
void entry_002d14bc_0x2d14bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d14bc_0x2d14bc");
#endif

    switch (ctx->pc) {
        case 0x2d14ecu: goto label_2d14ec;
        default: break;
    }

    ctx->pc = 0x2d14bcu;

    // 0x2d14bc: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x2d14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x2d14c0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2d14c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2d14c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d14c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d14c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d14cc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2d14ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d14d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d14d4: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x2d14d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2d14d8: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d14d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d14dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d14e0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d14e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d14e4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D14E4u;
    SET_GPR_U32(ctx, 31, 0x2D14ECu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D14E4u, 0x2D14ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14ECu;
label_2d14ec:
    // 0x2d14ec: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D14ECu;
    {
        const bool branch_taken_0x2d14ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d14ec) {
            ctx->pc = 0x2D1538u;
            return;
        }
    }
    ctx->pc = 0x2D14F4u;
    // 0x2d14f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d14f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d14f8: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d14f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d14fc: 0x2402ff85  addiu       $v0, $zero, -0x7B
    ctx->pc = 0x2d14fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1500: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d1500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d1504: 0xac821334  sw          $v0, 0x1334($a0)
    ctx->pc = 0x2d1504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 2));
    // 0x2d1508: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d1508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d150c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1510: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d1510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1514: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d1514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d1518: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d151c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d151cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1520: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1524: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d1524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1528: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d152c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d152cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1530: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1534: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d1534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d1538u;
}
