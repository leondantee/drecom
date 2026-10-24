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

// Function: entry_002d1410
// Address: 0x2d1410 - 0x2d14bc
void entry_002d1410_0x2d1410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1410_0x2d1410");
#endif

    switch (ctx->pc) {
        case 0x2d1438u: goto label_2d1438;
        default: break;
    }

    ctx->pc = 0x2d1410u;

    // 0x2d1410: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1414: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1418: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x2d1418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x2d141c: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x2d141cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x2d1420: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1424: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d1424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d1428: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d142c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d142cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d1430: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1430u;
    SET_GPR_U32(ctx, 31, 0x2D1438u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1430u, 0x2D1438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1438u;
label_2d1438:
    // 0x2d1438: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2D1438u;
    {
        const bool branch_taken_0x2d1438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1438) {
            ctx->pc = 0x2D15DCu;
            return;
        }
    }
    ctx->pc = 0x2D1440u;
    // 0x2d1440: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1444: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1448: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2d1448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2d144c: 0x14600063  bnez        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2D144Cu;
    {
        const bool branch_taken_0x2d144c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d144c) {
            ctx->pc = 0x2D15DCu;
            return;
        }
    }
    ctx->pc = 0x2D1454u;
    // 0x2d1454: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1458: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d145c: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d145cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1460: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1464: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1468: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d146c: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d1470: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2d1470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2d1474: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d1478: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x2d1478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d147c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d147cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1480: 0xac641338  sw          $a0, 0x1338($v1)
    ctx->pc = 0x2d1480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 4));
    // 0x2d1484: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1488: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d148c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d148cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1490: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2d1490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d1494: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1498: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d149c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d14a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d14a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d14a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d14a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d14a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d14a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d14ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d14acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d14b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d14b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d14b4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2D14B4u;
    {
        const bool branch_taken_0x2d14b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d14b4) {
            ctx->pc = 0x2D15DCu;
            return;
        }
    }
    ctx->pc = 0x2D14BCu;
}
