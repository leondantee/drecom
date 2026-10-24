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

// Function: entry_002d4504
// Address: 0x2d4504 - 0x2d4570
void entry_002d4504_0x2d4504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4504_0x2d4504");
#endif

    switch (ctx->pc) {
        case 0x2d4524u: goto label_2d4524;
        case 0x2d4568u: goto label_2d4568;
        default: break;
    }

    ctx->pc = 0x2d4504u;

    // 0x2d4504: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4508: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d450c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d4510: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d4510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d4514: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d4514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d4518: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d4518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d451c: 0xc05cc90  jal         func_173240
    ctx->pc = 0x2D451Cu;
    SET_GPR_U32(ctx, 31, 0x2D4524u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x2D451Cu, 0x2D4524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4524u;
label_2d4524:
    // 0x2d4524: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d4524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d4528: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d4528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d452c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d452cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d4530: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4534: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d4534u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d4538: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d453c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d453cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d4540: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D4540u;
    {
        const bool branch_taken_0x2d4540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4540) {
            ctx->pc = 0x2D4570u;
            return;
        }
    }
    ctx->pc = 0x2D4548u;
    // 0x2d4548: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d454c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4550: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d4554: 0x24061408  addiu       $a2, $zero, 0x1408
    ctx->pc = 0x2d4554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5128));
    // 0x2d4558: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d455c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d455cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4560: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D4560u;
    SET_GPR_U32(ctx, 31, 0x2D4568u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4560u, 0x2D4568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4568u;
label_2d4568:
    // 0x2d4568: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D4568u;
    {
        const bool branch_taken_0x2d4568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4568) {
            ctx->pc = 0x2D4590u;
            return;
        }
    }
    ctx->pc = 0x2D4570u;
}
