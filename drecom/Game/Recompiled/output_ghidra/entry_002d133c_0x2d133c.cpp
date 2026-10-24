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

// Function: entry_002d133c
// Address: 0x2d133c - 0x2d1410
void entry_002d133c_0x2d133c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d133c_0x2d133c");
#endif

    switch (ctx->pc) {
        case 0x2d1364u: goto label_2d1364;
        case 0x2d1394u: goto label_2d1394;
        default: break;
    }

    ctx->pc = 0x2d133cu;

    // 0x2d133c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1340: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1344: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x2d1344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x2d1348: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x2d1348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x2d134c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d134cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1350: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d1350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d1354: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1358: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d135c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D135Cu;
    SET_GPR_U32(ctx, 31, 0x2D1364u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D135Cu, 0x2D1364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1364u;
label_2d1364:
    // 0x2d1364: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D1364u;
    {
        const bool branch_taken_0x2d1364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1364) {
            ctx->pc = 0x2D1410u;
            return;
        }
    }
    ctx->pc = 0x2D136Cu;
    // 0x2d136c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d136cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1370: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1374: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2d1374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2d1378: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2d1378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2d137c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d137cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1380: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d1380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d1384: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1388: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d138c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D138Cu;
    SET_GPR_U32(ctx, 31, 0x2D1394u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D138Cu, 0x2D1394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1394u;
label_2d1394:
    // 0x2d1394: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D1394u;
    {
        const bool branch_taken_0x2d1394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1394) {
            ctx->pc = 0x2D1410u;
            return;
        }
    }
    ctx->pc = 0x2D139Cu;
    // 0x2d139c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13a0: 0x8c421334  lw          $v0, 0x1334($v0)
    ctx->pc = 0x2d13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4916)));
    // 0x2d13a4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2d13a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2d13a8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D13A8u;
    {
        const bool branch_taken_0x2d13a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d13a8) {
            ctx->pc = 0x2D1410u;
            return;
        }
    }
    ctx->pc = 0x2D13B0u;
    // 0x2d13b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13b4: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d13b8: 0x2402ff85  addiu       $v0, $zero, -0x7B
    ctx->pc = 0x2d13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d13bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d13bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d13c0: 0xac821334  sw          $v0, 0x1334($a0)
    ctx->pc = 0x2d13c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 2));
    // 0x2d13c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13c8: 0x8c621334  lw          $v0, 0x1334($v1)
    ctx->pc = 0x2d13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d13cc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2d13ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2d13d0: 0xac621334  sw          $v0, 0x1334($v1)
    ctx->pc = 0x2d13d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4916), GPR_U32(ctx, 2));
    // 0x2d13d4: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2d13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d13d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13dc: 0xac431338  sw          $v1, 0x1338($v0)
    ctx->pc = 0x2d13dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4920), GPR_U32(ctx, 3));
    // 0x2d13e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d13e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13e8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d13e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d13ec: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2d13ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2d13f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13f4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d13f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d13f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13fc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d13fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1400: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1404: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d1404u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1408: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d140c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d140cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d1410u;
}
