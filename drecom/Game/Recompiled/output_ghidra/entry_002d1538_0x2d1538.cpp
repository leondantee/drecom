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

// Function: entry_002d1538
// Address: 0x2d1538 - 0x2d15dc
void entry_002d1538_0x2d1538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1538_0x2d1538");
#endif

    switch (ctx->pc) {
        case 0x2d1560u: goto label_2d1560;
        default: break;
    }

    ctx->pc = 0x2d1538u;

    // 0x2d1538: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x2d1538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x2d153c: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x2d153cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x2d1540: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1544: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1548: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d154c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d154cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d1550: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d1550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1554: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d1558: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1558u;
    SET_GPR_U32(ctx, 31, 0x2D1560u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1558u, 0x2D1560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1560u;
label_2d1560:
    // 0x2d1560: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D1560u;
    {
        const bool branch_taken_0x2d1560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1560) {
            ctx->pc = 0x2D15DCu;
            return;
        }
    }
    ctx->pc = 0x2D1568u;
    // 0x2d1568: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d156c: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d156cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1570: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2d1570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2d1574: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D1574u;
    {
        const bool branch_taken_0x2d1574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1574) {
            ctx->pc = 0x2D15DCu;
            return;
        }
    }
    ctx->pc = 0x2D157Cu;
    // 0x2d157c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d157cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1580: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d1584: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d1584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1588: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d158c: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d158cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1590: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1594: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d1598: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2d1598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2d159c: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d159cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d15a0: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x2d15a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d15a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15a8: 0xac641338  sw          $a0, 0x1338($v1)
    ctx->pc = 0x2d15a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 4));
    // 0x2d15ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d15acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d15b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d15b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d15b8: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x2d15b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2d15bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d15c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d15c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d15c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d15cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d15d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d15d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d15dcu;
}
